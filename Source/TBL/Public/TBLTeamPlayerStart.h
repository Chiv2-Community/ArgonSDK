#pragma once
#include "CoreMinimal.h"
#include "EFaction.h"
#include "ETeamPlayerStartAction.h"
#include "TBLPlayerStart.h"
#include "TBLTeamPlayerStart.generated.h"

UCLASS(Blueprintable)
class ATBLTeamPlayerStart : public ATBLPlayerStart {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<EFaction> Factions;
    
    ATBLTeamPlayerStart();
    UFUNCTION(BlueprintCallable)
    void AddRemoveFaction(EFaction Faction, ETeamPlayerStartAction Action);
    
};

