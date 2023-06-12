#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UtilityAI_TargetGenerator.h"
#include "TG_RallyPoints.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TBL_API UTG_RallyPoints : public UUtilityAI_TargetGenerator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
public:
    UTG_RallyPoints();
};

