#pragma once
#include "CoreMinimal.h"
#include "EUtilityAI_EnemyOrFriendly.h"
#include "UtilityAI_InputAxis.h"
#include "I_NumBotsTargettingActor.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UI_NumBotsTargettingActor : public UUtilityAI_InputAxis {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUtilityAI_EnemyOrFriendly EnemyOrFriendly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExcludeSelf;
    
    UI_NumBotsTargettingActor();
};

