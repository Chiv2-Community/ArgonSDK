#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CustomizationCompatibilityQuery.h"
#include "CustomizationConstraintsQuery.h"
#include "CustomizationEntriesGroup.h"
#include "CustomizationEntry.h"
#include "EAudioClassType.h"
#include "ECustomizationGroupSearchResult.h"
#include "EFaction.h"
#include "CustomizationRulesLibrary.generated.h"

class ATBLPlayerController;

UCLASS(Blueprintable)
class TBL_API UCustomizationRulesLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UCustomizationRulesLibrary();
    UFUNCTION(BlueprintCallable)
    static void SortCustomizationEntries(UPARAM(Ref) TArray<FCustomizationEntry>& RefCustomizationEntries, bool bSortByLevel, bool bSortByAlignment, bool bSortByRarity);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FCustomizationEntry> OnlyCustomizationEntriesCompatibleWithOwnerPreset(ATBLPlayerController* PlayerController, const TArray<FCustomizationEntry>& CustomizationEntries, TEnumAsByte<EAudioClassType::Type> ClassType, EFaction Faction);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FPrimaryAssetId> OnlyCustomizationAssetsCompatibleWithOwnerPreset(ATBLPlayerController* PlayerController, const TArray<FPrimaryAssetId>& CustomizationAssets, TEnumAsByte<EAudioClassType::Type> ClassType, EFaction Faction);
    
    UFUNCTION(BlueprintCallable)
    static void GroupCustomizationEntries(ATBLPlayerController* PlayerController, const TArray<FCustomizationEntry>& CustomizationEntries, TArray<FCustomizationEntriesGroup>& CustomizationGroups, ECustomizationGroupSearchResult& SearchResult);
    
    UFUNCTION(BlueprintCallable)
    static FPrimaryAssetId FindReplacementAsset(const FPrimaryAssetId& AssetToReplace, TEnumAsByte<EAudioClassType::Type> ClassType, EFaction Faction, const FCustomizationConstraintsQuery& ConstraintsQuery, const FCustomizationCompatibilityQuery& CompatibilityQuery, const FCustomizationConstraintsQuery& OptionalConstraintsQuery, const FCustomizationCompatibilityQuery& OptionalCompatibilityQuery, int32 Alignment, const TArray<FPrimaryAssetId>& DefaultAssets);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FCustomizationEntry> FilterCustomizationEntries(const TArray<FCustomizationEntry>& CustomizationEntries, const FCustomizationConstraintsQuery& ConstraintsQuery);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FPrimaryAssetId> FilterCustomizationAssets(const TArray<FPrimaryAssetId>& CustomizationAssets, const FCustomizationConstraintsQuery& ConstraintsQuery);
    
};

