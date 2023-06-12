#pragma once
#include "CoreMinimal.h"
#include "AbilityInitiationParams.h"
#include "AbilityTargetMethod.h"
#include "CompositeTargetMethod.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCompositeTargetMethod : public UAbilityTargetMethod {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAbilityTargetMethod*> StaticChildren;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAbilityTargetMethod*> Children;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreChildrenInitiateRequirements;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAbilityTargetMethod*> DynamicChildren;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAbilityTargetMethod*> RunningChildren;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPendingFinish;
    
public:
    UCompositeTargetMethod();
    UFUNCTION(BlueprintCallable)
    void TargetUsingMethod(UAbilityTargetMethod* TargetMethod, const FAbilityInitiationParams& InInitiationParams, bool bLocal, int32 InMultiTargetMethodIndex);
    
};

