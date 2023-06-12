#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ItemPreVisualizationInterface.generated.h"

UINTERFACE(Blueprintable)
class UItemPreVisualizationInterface : public UInterface {
    GENERATED_BODY()
};

class IItemPreVisualizationInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnablePreVisualization();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DisablePreVisualization();
    
};

