#pragma once
#include "CoreMinimal.h"
#include "CombatStateInfo.h"
#include "PreviousCombatState.generated.h"

USTRUCT(BlueprintType)
struct FPreviousCombatState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCombatStateInfo StateInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Transition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeInState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimationTimerOvertime;
    
    TBL_API FPreviousCombatState();
};

