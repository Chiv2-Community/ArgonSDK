#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TBLBPCheatManager.generated.h"

class ATBLCharacter;
class ATBLPlayerController;

UCLASS(Abstract, Blueprintable)
class UTBLBPCheatManager : public UObject {
    GENERATED_BODY()
public:
    UTBLBPCheatManager();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATBLPlayerController* GetOwnerPlayerController();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATBLCharacter* GetOwnerCharacter();
    
};

