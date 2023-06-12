#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "StagedLevelBlueprintInterface.generated.h"

class IStageInterface;
class UStageInterface;

UINTERFACE(Blueprintable)
class UStagedLevelBlueprintInterface : public UInterface {
    GENERATED_BODY()
};

class IStagedLevelBlueprintInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TScriptInterface<IStageInterface> GetFirstStage();
    
};

