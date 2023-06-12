#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AutomationApiBase.generated.h"

class ATBLPlayerController;

UCLASS(Abstract, Blueprintable)
class UAutomationApiBase : public UObject {
    GENERATED_BODY()
public:
    UAutomationApiBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MakeTeamSelection(ATBLPlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MakeSpawnSelection(ATBLPlayerController* PlayerController);
    
};

