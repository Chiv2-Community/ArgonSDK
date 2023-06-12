#pragma once
#include "CoreMinimal.h"
#include "TBLObject.h"
#include "AbilityActivationMethod.generated.h"

class AAbilityInvocation;
class AActor;
class UAbilitySpec;
class UAction;
class UCondition;

UCLASS(Abstract, Blueprintable, EditInlineNew, MinimalAPI)
class UAbilityActivationMethod : public UTBLObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UCondition*> InitiatorPrerequisites;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAction*> InitiatorActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowSimultaneousInitiation: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAbilitySpec* AbilitySpec;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> Initiator;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AAbilityInvocation> Invocation;
    
public:
    UAbilityActivationMethod();
};

