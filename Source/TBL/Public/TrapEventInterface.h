#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ETrapEventResult.h"
#include "TrapEventInterface.generated.h"

class ATBLCharacterBase;

UINTERFACE(Blueprintable)
class UTrapEventInterface : public UInterface {
    GENERATED_BODY()
};

class ITrapEventInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool HandleTrapEvent(ETrapEventResult Result, ATBLCharacterBase* TargetCharacter);
    
};

