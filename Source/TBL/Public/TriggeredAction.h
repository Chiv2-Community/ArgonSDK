#pragma once
#include "CoreMinimal.h"
#include "Action.h"
#include "TriggeredAction.generated.h"

class AAbilityInvocation;
class AActor;
class UAbilitySpec;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UTriggeredAction : public UAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAction*> Actions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bTriggerOnce: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bTriggerMustOccur: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIgnoreTerminate: 1;
    
protected:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> TargetActor;
    
public:
    UTriggeredAction();
    UFUNCTION(BlueprintCallable)
    void OnInvocationComplete(AAbilityInvocation* Invocation, UAbilitySpec* AbilitySpec);
    
};

