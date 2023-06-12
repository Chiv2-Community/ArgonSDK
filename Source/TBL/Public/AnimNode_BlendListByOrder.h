#pragma once
#include "CoreMinimal.h"
#include "AnimNodes/AnimNode_BlendListBase.h"
#include "AnimNode_BlendListByOrder.generated.h"

USTRUCT(BlueprintType)
struct TBL_API FAnimNode_BlendListByOrder : public FAnimNode_BlendListBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLooping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<bool> NodeActiveState;
    
    FAnimNode_BlendListByOrder();
};

