#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GateClosedDelegate.h"
#include "GateOpenedDelegate.h"
#include "ReplicatedSubobjectInterface.h"
#include "Replicated_Bool.h"
#include "GateComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UGateComponent : public UActorComponent, public IReplicatedSubobjectInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGateOpened OnGateOpened;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGateClosed OnGateClosed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsGateOpened, meta=(AllowPrivateAccess=true))
    FReplicated_Bool IsGateOpened;
    
    UGateComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetIsGateOpened(bool InGateOpened);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsGateOpened();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsGatedOpened();
    
    
    // Fix for true pure virtual functions not being implemented
};

