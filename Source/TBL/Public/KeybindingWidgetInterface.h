#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "InputCoreTypes.h"
#include "KeybindingWidgetInterface.generated.h"

UINTERFACE(Blueprintable)
class UKeybindingWidgetInterface : public UInterface {
    GENERATED_BODY()
};

class IKeybindingWidgetInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetKeybinding(const FKey& Key, float Height, FVector2D IconSize);
    
};

