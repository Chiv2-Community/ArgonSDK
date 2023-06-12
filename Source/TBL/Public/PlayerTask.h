#pragma once
#include "CoreMinimal.h"
#include "GameplayTask.h"
#include "PlayerTask.generated.h"

class ATBLPlayerController;

UCLASS(Abstract, Blueprintable)
class UPlayerTask : public UGameplayTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATBLPlayerController* PlayerController;
    
    UPlayerTask();
};

