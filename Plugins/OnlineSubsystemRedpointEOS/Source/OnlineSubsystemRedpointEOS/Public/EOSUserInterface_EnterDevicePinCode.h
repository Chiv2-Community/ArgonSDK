#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EOSUserInterface_EnterDevicePinCode.generated.h"

class UEOSUserInterface_EnterDevicePinCode_Context;

UINTERFACE(Blueprintable, MinimalAPI)
class UEOSUserInterface_EnterDevicePinCode : public UInterface {
    GENERATED_BODY()
};

class IEOSUserInterface_EnterDevicePinCode : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupUserInterface(UEOSUserInterface_EnterDevicePinCode_Context* Context, const FString& VerificationUrl, const FString& PinCode);
    
};

