#include "CustomizationRulesLibrary.h"

void UCustomizationRulesLibrary::SortCustomizationEntries(TArray<FCustomizationEntry>& RefCustomizationEntries, bool bSortByLevel, bool bSortByAlignment, bool bSortByRarity) {
}

TArray<FCustomizationEntry> UCustomizationRulesLibrary::OnlyCustomizationEntriesCompatibleWithOwnerPreset(ATBLPlayerController* PlayerController, const TArray<FCustomizationEntry>& CustomizationEntries, TEnumAsByte<EAudioClassType::Type> ClassType, EFaction Faction) {
    return TArray<FCustomizationEntry>();
}

TArray<FPrimaryAssetId> UCustomizationRulesLibrary::OnlyCustomizationAssetsCompatibleWithOwnerPreset(ATBLPlayerController* PlayerController, const TArray<FPrimaryAssetId>& CustomizationAssets, TEnumAsByte<EAudioClassType::Type> ClassType, EFaction Faction) {
    return TArray<FPrimaryAssetId>();
}

void UCustomizationRulesLibrary::GroupCustomizationEntries(ATBLPlayerController* PlayerController, const TArray<FCustomizationEntry>& CustomizationEntries, TArray<FCustomizationEntriesGroup>& CustomizationGroups, ECustomizationGroupSearchResult& SearchResult) {
}

FPrimaryAssetId UCustomizationRulesLibrary::FindReplacementAsset(const FPrimaryAssetId& AssetToReplace, TEnumAsByte<EAudioClassType::Type> ClassType, EFaction Faction, const FCustomizationConstraintsQuery& ConstraintsQuery, const FCustomizationCompatibilityQuery& CompatibilityQuery, const FCustomizationConstraintsQuery& OptionalConstraintsQuery, const FCustomizationCompatibilityQuery& OptionalCompatibilityQuery, int32 Alignment, const TArray<FPrimaryAssetId>& DefaultAssets) {
    return FPrimaryAssetId{};
}

TArray<FCustomizationEntry> UCustomizationRulesLibrary::FilterCustomizationEntries(const TArray<FCustomizationEntry>& CustomizationEntries, const FCustomizationConstraintsQuery& ConstraintsQuery) {
    return TArray<FCustomizationEntry>();
}

TArray<FPrimaryAssetId> UCustomizationRulesLibrary::FilterCustomizationAssets(const TArray<FPrimaryAssetId>& CustomizationAssets, const FCustomizationConstraintsQuery& ConstraintsQuery) {
    return TArray<FPrimaryAssetId>();
}

UCustomizationRulesLibrary::UCustomizationRulesLibrary() {
}

