#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EEOSUserInterface_SwitchToCrossPlatformAccount_Choice.h"
#include "EOSUserInterface_SwitchToCrossPlatformAccount_Context.generated.h"

UCLASS(Blueprintable)
class UEOSUserInterface_SwitchToCrossPlatformAccount_Context : public UObject {
    GENERATED_BODY()
public:
    UEOSUserInterface_SwitchToCrossPlatformAccount_Context();
    UFUNCTION(BlueprintCallable)
    void SelectChoice(EEOSUserInterface_SwitchToCrossPlatformAccount_Choice SelectedChoice);
    
};

