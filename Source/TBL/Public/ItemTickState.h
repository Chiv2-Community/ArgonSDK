#pragma once
#include "CoreMinimal.h"
#include "ItemTickState.generated.h"

USTRUCT(BlueprintType)
struct FItemTickState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAnimating;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsProjectile;
    
    TBL_API FItemTickState();
};

