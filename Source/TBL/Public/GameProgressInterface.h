#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GameProgressInterface.generated.h"

class ATBLTeam;

UINTERFACE(Blueprintable)
class UGameProgressInterface : public UInterface {
    GENERATED_BODY()
};

class IGameProgressInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BroadcastTeamUpdated(ATBLTeam* Team);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BroadcastSetActive(bool Active);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BroadcastProgressUpdated(float Progress, ATBLTeam* Team);
    
};

