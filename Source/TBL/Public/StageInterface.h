#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EFaction.h"
#include "StageInterface.generated.h"

class AActor;
class IStageInterface;
class UStageInterface;

UINTERFACE(Blueprintable)
class UStageInterface : public UInterface {
    GENERATED_BODY()
};

class IStageInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartStage();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsStageReadyToComplete() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetTimeRemainingPercent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetTimeRemaining() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetStageIdNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    AActor* GetStageCommander(EFaction Faction) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TScriptInterface<IStageInterface> CompleteStage();
    
};

