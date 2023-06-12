#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SlackMessage.h"
#include "TBLSlackUtility.generated.h"

UCLASS(Blueprintable, Config=Engine, DefaultConfig, MinimalAPI, Config=Game)
class UTBLSlackUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UTBLSlackUtility();
    UFUNCTION(BlueprintCallable)
    static void SendSlackMessage(FSlackMessage Message);
    
};

