#pragma once
#include "CoreMinimal.h"
#include "ChargingActivationMethod.h"
#include "CatapultActivationMethod.generated.h"

class UTBLCatapultAnimInstance;

UCLASS(Blueprintable, EditInlineNew)
class UCatapultActivationMethod : public UChargingActivationMethod {
    GENERATED_BODY()
public:
    UCatapultActivationMethod();
    UFUNCTION(BlueprintCallable)
    void OnAnimNotifyCatapultFire(UTBLCatapultAnimInstance* AnimInstance);
    
};

