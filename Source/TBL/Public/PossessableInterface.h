#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PossessableInterface.generated.h"

class APawn;

UINTERFACE(Blueprintable)
class UPossessableInterface : public UInterface {
    GENERATED_BODY()
};

class IPossessableInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventEndPossess(APawn* Pawn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventBeginPossess(APawn* Pawn);
    
};

