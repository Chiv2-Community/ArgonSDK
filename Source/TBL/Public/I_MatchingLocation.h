#pragma once
#include "CoreMinimal.h"
#include "EUtilityAI_EnemyOrFriendly.h"
#include "UtilityAI_InputAxis.h"
#include "I_MatchingLocation.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TBL_API UI_MatchingLocation : public UUtilityAI_InputAxis {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUtilityAI_EnemyOrFriendly EnemyOrFriendly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRangeAsPercent;
    
    UI_MatchingLocation();
};

