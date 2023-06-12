#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EOSUserInterface_EnterDevicePinCode_Context.generated.h"

UCLASS(Blueprintable)
class UEOSUserInterface_EnterDevicePinCode_Context : public UObject {
    GENERATED_BODY()
public:
    UEOSUserInterface_EnterDevicePinCode_Context();
    UFUNCTION(BlueprintCallable)
    void CancelLogin();
    
};

