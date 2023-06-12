#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "UtilityAI_Action.h"
#include "A_ChargeSiegeEngine.generated.h"

class AAIController;
class ASiegeEngine;
class ATBLCharacter;

UCLASS(Blueprintable, EditInlineNew)
class TBL_API UA_ChargeSiegeEngine : public UUtilityAI_Action {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AAIController> Controller;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ATBLCharacter> Character;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ASiegeEngine> CurrentSiegeEngine;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle ChargeTimerHandle;
    
public:
    UA_ChargeSiegeEngine();
protected:
    UFUNCTION(BlueprintCallable)
    void TryCharge();
    
};

