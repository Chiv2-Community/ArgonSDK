#pragma once
#include "CoreMinimal.h"
#include "TBLActor.h"
#include "ReplicatedCollisionActor.generated.h"

UCLASS(Abstract, Blueprintable)
class AReplicatedCollisionActor : public ATBLActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ReplicatedCollision, meta=(AllowPrivateAccess=true))
    bool bReplicatedCollision;
    
public:
    AReplicatedCollisionActor();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetReplicatedCollision(bool bEnabled);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedCollision();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCollisionChanged(bool bEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetReplicatedCollision();
    
};

