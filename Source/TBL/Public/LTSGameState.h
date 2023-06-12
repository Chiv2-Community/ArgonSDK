#pragma once
#include "CoreMinimal.h"
#include "ArenaGameState.h"
#include "EFaction.h"
#include "Templates/SubclassOf.h"
#include "LTSGameState.generated.h"

class UHudMarkerDisplayComponent;

UCLASS(Blueprintable)
class ALTSGameState : public AArenaGameState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 HudMarkerThreshold;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_LTSHudMarkerComponentClass, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHudMarkerDisplayComponent> LTSHudMarkerComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<EFaction> PendingHudMarkersForFaction;
    
public:
    ALTSGameState();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_LTSHudMarkerComponentClass();
    
};

