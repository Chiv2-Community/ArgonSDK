#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EEOSUserInterface_SignInOrCreateAccount_Choice.h"
#include "EOSUserInterface_SignInOrCreateAccount_Context.generated.h"

UCLASS(Blueprintable)
class UEOSUserInterface_SignInOrCreateAccount_Context : public UObject {
    GENERATED_BODY()
public:
    UEOSUserInterface_SignInOrCreateAccount_Context();
    UFUNCTION(BlueprintCallable)
    void SelectChoice(EEOSUserInterface_SignInOrCreateAccount_Choice SelectedChoice);
    
};

