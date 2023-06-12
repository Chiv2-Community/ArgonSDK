#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "AIDismountData.h"
#include "UtilityAI_Action.h"
#include "A_DismountSiegeEngine.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TBL_API UA_DismountSiegeEngine : public UUtilityAI_Action {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DismountDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D DismountDelayVariance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle DismountTimerHandle;
    
public:
    UA_DismountSiegeEngine();
protected:
    UFUNCTION(BlueprintCallable)
    void Dismount(FAIDismountData AIDismountData);
    
};

