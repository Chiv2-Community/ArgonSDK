#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Info.h"
#include "EChatType.h"
#include "EFaction.h"
#include "RoundResult.h"
#include "TeamDisplayInfo.h"
#include "TeamScoreEvent.h"
#include "Templates/SubclassOf.h"
#include "TBLTeam.generated.h"

class AActor;
class ATBLCharacter;
class ATBLTeam;

UCLASS(Blueprintable, NotPlaceable)
class ATBLTeam : public AInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EFaction Faction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 MaxNumPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTeamDisplayInfo DisplayInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<ATBLCharacter>> PawnClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<ATBLCharacter>> PawnSubclasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsTeamAttacking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsTeamDefending;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float Tickets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float MaxTickets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float TiebreakScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float Kills;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 RoundsWon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FRoundResult> RoundResults;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float Score;
    
public:
    ATBLTeam();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SwapWithTeam(ATBLTeam* Other);
    
    UFUNCTION(BlueprintCallable)
    void SetTiebreakScore(float SecondaryScore);
    
    UFUNCTION(BlueprintCallable)
    void SetTeamTickets(float NewTickets);
    
    UFUNCTION(BlueprintCallable)
    void SetTeamScore(FTeamScoreEvent ScoreEvent);
    
    UFUNCTION(BlueprintCallable)
    void SetTeamMaxTickets(float MaxNumTickets);
    
    UFUNCTION(BlueprintCallable)
    void IncrementKills(int32 Delta);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTeamScore() const;
    
    UFUNCTION(BlueprintCallable)
    void CommitRoundResult(bool bWonRound);
    
    UFUNCTION(BlueprintCallable)
    void BroadcastLocalizedChat(const FText& Msg, TEnumAsByte<EChatType::Type> Type);
    
    UFUNCTION(BlueprintCallable)
    void BroadcastChat(AActor* Sender, const FString& Msg, TEnumAsByte<EChatType::Type> Type);
    
};

