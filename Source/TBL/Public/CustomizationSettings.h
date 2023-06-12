#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "CustomizationGroupData.h"
#include "CustomizationSortingTagDefinitionList.h"
#include "CustomizationTagDefinitionList.h"
#include "EWeaponCategoryTypes.h"
#include "EWeaponTag.h"
#include "CustomizationSettings.generated.h"

UCLASS(Blueprintable, Config=Engine, DefaultConfig, Config=Game)
class UCustomizationSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCustomizationTagDefinitionList Exclusivity;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FCustomizationTagDefinitionList> Categories;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FCustomizationSortingTagDefinitionList> SortingAttributes;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FCustomizationGroupData> Groups;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EWeaponTag, EWeaponCategoryTypes> WeaponTagToCategoryMap;
    
public:
    UCustomizationSettings();
};

