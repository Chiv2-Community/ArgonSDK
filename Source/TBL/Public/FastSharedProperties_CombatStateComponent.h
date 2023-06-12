#pragma once
#include "CoreMinimal.h"
#include "ReplicatedCombatStateInfo.h"
#include "FastSharedProperties_CombatStateComponent.generated.h"

USTRUCT(BlueprintType)
struct FFastSharedProperties_CombatStateComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReplicatedCombatStateInfo ReplicatedCombatState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasValidAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 LoadoutItemIndex;
    
    TBL_API FFastSharedProperties_CombatStateComponent();
};

