#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "TBLKeymapWidgetInterface.generated.h"

class UTBLKeymapWidget;

UINTERFACE(Blueprintable)
class UTBLKeymapWidgetInterface : public UInterface {
    GENERATED_BODY()
};

class ITBLKeymapWidgetInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ToggleKeymap();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UTBLKeymapWidget* GetKeymapWidget() const;
    
};

