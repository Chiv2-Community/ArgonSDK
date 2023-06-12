#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BlendParams.h"
#include "AttachRagdollBlendParams.generated.h"

USTRUCT(BlueprintType)
struct FAttachRagdollBlendParams : public FBlendParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector StartLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TargetLocation;
    
    TBL_API FAttachRagdollBlendParams();
};

