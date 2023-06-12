#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "TBLOverviewScreen.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UTBLOverviewScreen : public UUserWidget {
    GENERATED_BODY()
public:
    UTBLOverviewScreen();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ShowLoadout(bool bReset);
    
};

