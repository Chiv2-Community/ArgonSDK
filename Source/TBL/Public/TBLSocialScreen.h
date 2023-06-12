#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "TBLScreenWidget.h"
#include "TBLSocialScreen.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UTBLSocialScreen : public UTBLScreenWidget {
    GENERATED_BODY()
public:
    UTBLSocialScreen();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAttemptedNavigationFailed(EUINavigation NavigationType);
    
};

