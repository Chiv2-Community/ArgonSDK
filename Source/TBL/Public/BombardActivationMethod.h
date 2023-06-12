#pragma once
#include "CoreMinimal.h"
#include "ChargingActivationMethod.h"
#include "BombardActivationMethod.generated.h"

class UTBLBombardAnimInstance;

UCLASS(Blueprintable, EditInlineNew)
class UBombardActivationMethod : public UChargingActivationMethod {
    GENERATED_BODY()
public:
    UBombardActivationMethod();
    UFUNCTION(BlueprintCallable)
    void OnAnimNotifyBombardFire(UTBLBombardAnimInstance* AnimInstance);
    
};

