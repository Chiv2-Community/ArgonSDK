#pragma once
#include "CoreMinimal.h"
#include "UtilityAI_TargetGenerator.h"
#include "TG_ActorsWithTag.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UTG_ActorsWithTag : public UUtilityAI_TargetGenerator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Tag;
    
    UTG_ActorsWithTag();
};

