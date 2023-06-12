#pragma once
#include "CoreMinimal.h"
#include "ControllerArray.generated.h"

class ATBLAIController;

USTRUCT(BlueprintType)
struct FControllerArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<ATBLAIController*> Controllers;
    
    TBL_API FControllerArray();
};

