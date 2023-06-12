#pragma once
#include "CoreMinimal.h"
#include "AnimDebugMontageInfo.h"
#include "AnimDebugMontage.generated.h"

USTRUCT(BlueprintType)
struct FAnimDebugMontage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimDebugMontageInfo CurrentSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAnimDebugMontageInfo> PreviousSections;
    
    TBL_API FAnimDebugMontage();
};

