#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UtilityAI_TargetGenerator.h"
#include "TG_PointsWithinActorBounds.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TBL_API UTG_PointsWithinActorBounds : public UUtilityAI_TargetGenerator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GenerationDensity;
    
    UTG_PointsWithinActorBounds();
};

