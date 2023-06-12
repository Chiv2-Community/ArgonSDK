#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SwatchSelectionsByClass.h"
#include "CharacterCustomizationSettings.generated.h"

UCLASS(Blueprintable, Config=Game)
class UCharacterCustomizationSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSwatchSelectionsByClass> CustomizationSwatches;
    
    UCharacterCustomizationSettings();
};

