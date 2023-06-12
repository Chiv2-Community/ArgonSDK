#pragma once
#include "CoreMinimal.h"
#include "FollowerPushableComponentProperties.h"
#include "Replicated_FFollowerPushableComponentProperties.generated.h"

USTRUCT(BlueprintType)
struct FReplicated_FFollowerPushableComponentProperties {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFollowerPushableComponentProperties Value;
    
public:
    TBL_API FReplicated_FFollowerPushableComponentProperties();
};

