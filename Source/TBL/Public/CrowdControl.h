#pragma once
#include "CoreMinimal.h"
#include "Action.h"
#include "ECrowdControlCombatState.h"
#include "CrowdControl.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCrowdControl : public UAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECrowdControlCombatState CombatState;
    
    UCrowdControl();
};

