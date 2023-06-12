#pragma once
#include "CoreMinimal.h"
#include "HandlerComponentFactory.h"
#include "PlayFabAuthComponentModuleInterface.generated.h"

UCLASS(Blueprintable)
class UPlayFabAuthComponentModuleInterface : public UHandlerComponentFactory {
    GENERATED_BODY()
public:
    UPlayFabAuthComponentModuleInterface();
};

