#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ReplicatedSubobjectInterface.h"
#include "NPCReplicatedDataComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNPCReplicatedDataComponent : public UActorComponent, public IReplicatedSubobjectInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsScared;
    
    UNPCReplicatedDataComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetIsScared(bool InIsScared);
    
    
    // Fix for true pure virtual functions not being implemented
};

