#pragma once
#include "CoreMinimal.h"
#include "EUtilityAI_EnemyOrFriendly.h"
#include "Templates/SubclassOf.h"
#include "UtilityAI_InputAxis.h"
#include "I_MatchingBehaviour.generated.h"

class UUtilityAI_Behavior;

UCLASS(Blueprintable, EditInlineNew)
class TBL_API UI_MatchingBehaviour : public UUtilityAI_InputAxis {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUtilityAI_EnemyOrFriendly EnemyOrFriendly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUtilityAI_Behavior> BehaviourClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UUtilityAI_Behavior>> OtherBehaviourClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRangeAsPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreSelf;
    
    UI_MatchingBehaviour();
};

