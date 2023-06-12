#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "OnReplicationtestVisibleDelegate.h"
#include "ReplicatedSubobjectInterface.h"
#include "Replicated_Bool.h"
#include "ReplicationTestActorComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UReplicationTestActorComponent : public UActorComponent, public IReplicatedSubobjectInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool StartTestVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBroadcastSetVariableOnlyOnAuthority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TestVisible, meta=(AllowPrivateAccess=true))
    FReplicated_Bool TestVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TestVisibleEngine, meta=(AllowPrivateAccess=true))
    bool TestVisibleEngine;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReplicationtestVisible OnReplicationtestVisible;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReplicationtestVisible OnReplicationEngineTestVisible;
    
    UReplicationTestActorComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetVisible(bool Vis);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TestVisibleEngine();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TestVisible();
    
    
    // Fix for true pure virtual functions not being implemented
};

