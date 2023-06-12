#pragma once
#include "CoreMinimal.h"
#include "PushableComponentProperties.h"
#include "Replicated_FPushableComponentProperties.generated.h"

USTRUCT(BlueprintType)
struct FReplicated_FPushableComponentProperties {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPushableComponentProperties Value;
    
public:
    TBL_API FReplicated_FPushableComponentProperties();
};

