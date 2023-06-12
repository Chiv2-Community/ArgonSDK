#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EOSUserInterface_SignInOrCreateAccount.generated.h"

class UEOSUserInterface_SignInOrCreateAccount_Context;

UINTERFACE(Blueprintable, MinimalAPI)
class UEOSUserInterface_SignInOrCreateAccount : public UInterface {
    GENERATED_BODY()
};

class IEOSUserInterface_SignInOrCreateAccount : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupUserInterface(UEOSUserInterface_SignInOrCreateAccount_Context* Context);
    
};

