#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ReplicatedSubobjectInterface.h"
#include "Replicated_FInvocationInfo.h"
#include "InvocationActorComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UInvocationActorComponent : public UActorComponent, public IReplicatedSubobjectInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Info, meta=(AllowPrivateAccess=true))
    FReplicated_FInvocationInfo Info;
    
    UInvocationActorComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Info();
    
    
    // Fix for true pure virtual functions not being implemented
};

