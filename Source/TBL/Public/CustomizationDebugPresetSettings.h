#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CustomizationPreset.h"
#include "CustomizationDebugPresetSettings.generated.h"

UCLASS(Blueprintable)
class UCustomizationDebugPresetSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCustomizationPreset> Presets;
    
    UCustomizationDebugPresetSettings();
};

