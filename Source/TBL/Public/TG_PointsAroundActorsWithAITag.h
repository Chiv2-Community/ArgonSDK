#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "TG_PointsOnGrid.h"
#include "TG_PointsAroundActorsWithAITag.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TBL_API UTG_PointsAroundActorsWithAITag : public UTG_PointsOnGrid {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    UTG_PointsAroundActorsWithAITag();
};

