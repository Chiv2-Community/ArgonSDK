#pragma once
#include "CoreMinimal.h"
#include "TG_PointsOnGrid.h"
#include "TG_PointsAroundMe.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UTG_PointsAroundMe : public UTG_PointsOnGrid {
    GENERATED_BODY()
public:
    UTG_PointsAroundMe();
};

