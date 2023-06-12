#pragma once
#include "CoreMinimal.h"
#include "Action.h"
#include "ETargetMethodParameters.h"
#include "ApplyTargetMethod.generated.h"

class AAbilityInvocation;
class UAbilityTargetMethod;

UCLASS(Blueprintable, EditInlineNew)
class UApplyTargetMethod : public UAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETargetMethodParameters::Type> TargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAbilityTargetMethod* TargetMethod;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAbilityTargetMethod* TargetMethodInstance;
    
public:
    UApplyTargetMethod();
private:
    UFUNCTION(BlueprintCallable)
    void OnFinished(AAbilityInvocation* InInvocation, UAbilityTargetMethod* InTargetMethod);
    
};

