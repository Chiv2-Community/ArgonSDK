// Map summary -> AssetRegistry tag emission (the cooked-build map metadata).
//
// Torn Banner's writer is not in this source dump: the runtime only ships the
// tag *names* (UTBLMapSummary::FMapSummaryTagNames) and the summary carrier
// (ATBLWorldSettings::PreSave -> UTBLMapSummary). This file restores the
// missing cook-time half so mod-map entries in the asset registry carry the
// same TagsAndValues as official maps (ST_Map_* namespaces, gamemode/faction).
//
// The engine broadcasts FWorldDelegates::GetAssetTags from
// UWorld::GetAssetRegistryTags (editor only), which is exactly where the game
// is expected to append custom tags onto a map package's registry entry. Tags
// written here flow into the cooked TBL/AssetRegistry.bin and therefore into
// the ModAssetRegistry.bin payload the loader merges at startup.
//
// DateModified, PrimaryAssetType/Name and the GeneratedClass/ClassFlags/FiBData
// block are NOT emitted here: they are engine-standard (World.cpp / AssetMgr),
// already present for every map entry.
#if WITH_EDITOR

#include "Engine/World.h"
#include "Internationalization/Text.h"
#include "Internationalization/TextKey.h"
#include "UObject/ObjectMacros.h"
#include "UObject/Package.h"
#include "UObject/UObjectGlobals.h"

#include "TBLMapSummary.h"
#include "TBLWorldSettings.h"

using FAssetRegistryTag = UObject::FAssetRegistryTag;

namespace {
const FName NAME_GamemodeType(TEXT("GamemodeType"));
const FName NAME_AttackingFaction(TEXT("AttackingFaction"));

// The ST_Map_<MapName> namespace fallback for texts with no localization
// metadata (plain FText::FromString values).
FString MapFallbackNamespace(const UWorld* World)
{
    const FString PackageName = World->GetOutermost()->GetName();
    const int32 Base = PackageName.Find(TEXT("/"), ESearchCase::IgnoreCase, ESearchDir::FromEnd);
    return TEXT("ST_Map_") + (Base >= 0 ? PackageName.Mid(Base + 1) : PackageName);
}

// Derive the localization Namespace / Key / Source triple for an FText the way
// the shipped FMapSummaryData stores it: string-table texts use the table id
// (TBL tables are named ST_Map_<MapName>), otherwise fall back to the
// FTextInspector metadata, and finally to the ST_Map_<MapName> convention with
// fixed keys for unlocalized plain text.
void EmitTextTags(TArray<FAssetRegistryTag>& OutTags, const FText& Text,
                  const FName NamespaceTag, const FName KeyTag, const FName SourceTag,
                  const FString& FallbackNamespace, const TCHAR* FallbackKey)
{
    FString Namespace;
    FString Key;

    if (Text.IsFromStringTable())
    {
        FName TableId;
        FString TableKey;
        if (FTextInspector::GetTableIdAndKey(Text, TableId, TableKey))
        {
            Namespace = TableId.ToString();
            Key = MoveTemp(TableKey);
        }
    }
    if (Namespace.IsEmpty())
    {
        TOptional<FString> Inspected = FTextInspector::GetNamespace(Text);
        if (Inspected.IsSet())
        {
            Namespace = MoveTemp(Inspected.GetValue());
        }
    }
    if (Key.IsEmpty())
    {
        TOptional<FString> Inspected = FTextInspector::GetKey(Text);
        if (Inspected.IsSet())
        {
            Key = MoveTemp(Inspected.GetValue());
        }
    }
    if (Namespace.IsEmpty())
    {
        Namespace = FallbackNamespace;
    }

    FString Source;
    if (const FString* SourceString = FTextInspector::GetSourceString(Text))
    {
        Source = *SourceString;
    }
    if (Source.IsEmpty())
    {
        Source = Text.ToString();
    }

    OutTags.Emplace(NamespaceTag, Namespace, FAssetRegistryTag::TT_Alphabetical);
    OutTags.Emplace(KeyTag, Key.IsEmpty() ? FallbackKey : Key, FAssetRegistryTag::TT_Alphabetical);
    OutTags.Emplace(SourceTag, Source, FAssetRegistryTag::TT_Alphabetical);
}
} // namespace

void TBLMapSummaryWorldAssetTags(const UWorld* World, TArray<FAssetRegistryTag>& OutTags)
{
    if (World == nullptr || World->GetWorldSettings() == nullptr)
    {
        return;
    }
    const UPackage* Package = World->GetOutermost();
    if (Package == nullptr || Package->HasAnyPackageFlags(PKG_PlayInEditor) ||
        Package->GetFName() == GetTransientPackage()->GetFName())
    {
        return;
    }
    const ATBLWorldSettings* Settings = Cast<const ATBLWorldSettings>(World->GetWorldSettings());
    if (Settings == nullptr)
    {
        return;
    }

    const FString FallbackNamespace = MapFallbackNamespace(World);

    using FTBLMapSummaryTagNames = UTBLMapSummary::FMapSummaryTagNames;

    EmitTextTags(OutTags, Settings->MapName,
                 FTBLMapSummaryTagNames::NAME_MapNameNamespace,
                 FTBLMapSummaryTagNames::NAME_MapNameKey,
                 FTBLMapSummaryTagNames::NAME_MapNameSource,
                 FallbackNamespace, TEXT("MapName"));
    EmitTextTags(OutTags, Settings->MapDescription,
                 FTBLMapSummaryTagNames::NAME_MapDescriptionNamespace,
                 FTBLMapSummaryTagNames::NAME_MapDescriptionKey,
                 FTBLMapSummaryTagNames::NAME_MapDescriptionSource,
                 FallbackNamespace, TEXT("MapDescription"));

    OutTags.Emplace(NAME_GamemodeType,
                    FString::FromInt(static_cast<int32>(Settings->GamemodeType.GetValue())),
                    FAssetRegistryTag::TT_Numerical);
    OutTags.Emplace(NAME_AttackingFaction,
                    FString::FromInt(static_cast<int32>(Settings->AttackingFaction)),
                    FAssetRegistryTag::TT_Numerical);
}

void RegisterTBLMapSummaryTagEmitter()
{
    FWorldDelegates::GetAssetTags.AddStatic(&TBLMapSummaryWorldAssetTags);
}
#endif // WITH_EDITOR
