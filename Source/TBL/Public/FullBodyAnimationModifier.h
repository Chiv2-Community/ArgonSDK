#pragma once
#include "CoreMinimal.h"
#include "EFullBodyCombatState.h"
#include "FullBodyAnimationModifier.generated.h"

USTRUCT(BlueprintType)
struct FFullBodyAnimationModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CombatState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFullBodyCombatState CombatStateType;
    
    TBL_API FFullBodyAnimationModifier();
};

