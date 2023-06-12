#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerStart.h"
#include "TBLPlayerStart.generated.h"

class AController;

UCLASS(Blueprintable)
class ATBLPlayerStart : public APlayerStart {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PrioirtyLevel;
    
    ATBLPlayerStart();
    UFUNCTION(BlueprintCallable)
    bool IsValidSpawnFor(AController* Controller);
    
};

