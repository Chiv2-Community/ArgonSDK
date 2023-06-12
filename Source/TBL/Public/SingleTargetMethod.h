#pragma once
#include "CoreMinimal.h"
#include "AbilityTargetMethod.h"
#include "SingleTargetMethod.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USingleTargetMethod : public UAbilityTargetMethod {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Version;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTargetSelf;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayFinishTime;
    
    USingleTargetMethod();
    UFUNCTION(BlueprintCallable)
    void DelayFinish();
    
};

