#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "TG_PointsOnGrid.h"
#include "TG_PointsBesideActorsWithAITag.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TBL_API UTG_PointsBesideActorsWithAITag : public UTG_PointsOnGrid {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActorRadiusBoost;
    
    UTG_PointsBesideActorsWithAITag();
};

