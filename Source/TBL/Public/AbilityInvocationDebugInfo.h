#pragma once
#include "CoreMinimal.h"
#include "AbilityInvocationDebugInfo.generated.h"

class UAbilitySpec;

USTRUCT(BlueprintType)
struct FAbilityInvocationDebugInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAbilitySpec* AbilitySpec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Annotations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bActivationMethodFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTargetMethodFinished;
    
    TBL_API FAbilityInvocationDebugInfo();
};

