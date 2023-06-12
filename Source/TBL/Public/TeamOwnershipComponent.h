#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EFaction.h"
#include "OwnershipSignatureDelegate.h"
#include "ReplicatedSubobjectInterface.h"
#include "Replicated_EFaction.h"
#include "TeamOwnershipComponent.generated.h"

class ATBLTeam;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTeamOwnershipComponent : public UActorComponent, public IReplicatedSubobjectInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_OwnerFaction, meta=(AllowPrivateAccess=true))
    FReplicated_EFaction OwnerFaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFaction DefaultFaction;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FOwnershipSignature OnOwnershipChanged;
    
    UTeamOwnershipComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetOwnerTeam(ATBLTeam* Team);
    
    UFUNCTION(BlueprintCallable)
    void SetOwnerFaction(EFaction Faction);
    
    UFUNCTION(BlueprintCallable)
    void SetFaction(EFaction Faction);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_OwnerFaction();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATBLTeam* GetOwnerTeam();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFaction GetFaction() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

