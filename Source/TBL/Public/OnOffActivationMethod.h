#pragma once
#include "CoreMinimal.h"
#include "AbilityActivationMethod.h"
#include "OnOffActivationMethod.generated.h"

class UAction;

UCLASS(Blueprintable, EditInlineNew)
class UOnOffActivationMethod : public UAbilityActivationMethod {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAction*> InitiatorActionsPerSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAction*> InitiatorActionsOn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAction*> InitiatorActionsOff;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bKeyPressed;
    
public:
    UOnOffActivationMethod();
};

