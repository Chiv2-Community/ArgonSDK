#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GamepadLookResponseCurves.generated.h"

class UCurveFloat;

UCLASS(Blueprintable)
class UGamepadLookResponseCurves : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCurveFloat*> Curves;
    
    UGamepadLookResponseCurves();
};

