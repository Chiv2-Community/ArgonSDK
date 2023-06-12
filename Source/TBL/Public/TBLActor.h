#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "ReplicatedSubobjectInterface.h"
#include "ReplicationPredictionState.h"
#include "TBLActor.generated.h"

class APawn;

UCLASS(Blueprintable)
class ATBLActor : public AActor, public IReplicatedSubobjectInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReplicationPredictionState PredictionState;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToWakeUpNetDormancyWhenSubobjectChanges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<AActor>> AIHintLocationList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> CachedAIHintLocationList;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle WakeUpTimerHandle;
    
public:
    ATBLActor();
    UFUNCTION(BlueprintCallable)
    void WakeUpNetDormancyForSeconds(float Seconds);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AActor*> GetAIHintLocations() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void FallBackToSleep();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanBeBaseForCharacterTBL(APawn* Pawn) const;
    
    
    // Fix for true pure virtual functions not being implemented
};

