#pragma once
#include "CoreMinimal.h"
#include "UtilityAI_TargetGenerator.h"
#include "TG_BlackboardValue.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UTG_BlackboardValue : public UUtilityAI_TargetGenerator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName KeyName;
    
    UTG_BlackboardValue();
};

