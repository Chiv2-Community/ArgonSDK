#pragma once
#include "CoreMinimal.h"
#include "CustomizationMap.h"
#include "SavedLoadout.h"
#include "SavedSubclass.h"
#include "TBLCustomizationSaveSettings.generated.h"

class ATBLCharacter;

USTRUCT(BlueprintType)
struct FTBLCustomizationSaveSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ATBLCharacter> SavedClassChoice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FSavedSubclass> SavedSubclassChoice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FSavedLoadout> LoadoutPerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FCustomizationMap> PlayerSavedCustomization;
    
    TBL_API FTBLCustomizationSaveSettings();
};

