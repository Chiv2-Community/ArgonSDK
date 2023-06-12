#pragma once
#include "CoreMinimal.h"
#include "EUtilityAI_EnemyOrFriendly.h"
#include "UtilityAI_InputAxis.h"
#include "I_DistanceRankAmongBotsTargettingActor.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UI_DistanceRankAmongBotsTargettingActor : public UUtilityAI_InputAxis {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUtilityAI_EnemyOrFriendly EnemyOrFriendly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSameBehaviorOnly;
    
    UI_DistanceRankAmongBotsTargettingActor();
};

