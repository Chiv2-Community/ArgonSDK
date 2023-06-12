#pragma once
#include "CoreMinimal.h"
#include "CombatStateActivationMethod.h"
#include "ChargingActivationMethod.generated.h"

class UAction;

UCLASS(Blueprintable, EditInlineNew)
class UChargingActivationMethod : public UCombatStateActivationMethod {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAction*> ActivationActions;
    
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double LastInitiatorActionsTime;
    
public:
    UChargingActivationMethod();
};

