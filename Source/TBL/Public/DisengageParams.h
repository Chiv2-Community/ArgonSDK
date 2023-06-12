#pragma once
#include "CoreMinimal.h"
#include "DisengageParams.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FDisengageParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bImmedateDisengage;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> PendingTarget;
    
    TBL_API FDisengageParams();
};

