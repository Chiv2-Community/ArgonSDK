#pragma once
#include "CoreMinimal.h"
#include "EFaction.h"
#include "OnNumLivingPlayersChangedDelegate.h"
#include "OnPlayersAtStartOfRoundChangedDelegate.h"
#include "OnRemainingLivesChangedDelegate.h"
#include "OnRoundVictoriesChangedDelegate.h"
#include "OnRoundWonByDelegate.h"
#include "ReplPodiumCharacterInfo.h"
#include "ReplSequenceBinding.h"
#include "ReplVictoryPodium.h"
#include "TBLGameState.h"
#include "ArenaGameState.generated.h"

class AArenaPlayerState;
class ACineCameraActor;

UCLASS(Blueprintable)
class AArenaGameState : public ATBLGameState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 RoundsSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 TeamLivesSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 FinalLivesSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float TimeBetweenRoundsSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float RoundTimeLimitSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float MaxPlayersSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_VictoryPodium, meta=(AllowPrivateAccess=true))
    FReplVictoryPodium ReplicatedVictoryPodium;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_VictoryPodiumBindings, meta=(AllowPrivateAccess=true))
    TArray<FReplSequenceBinding> ReplicatedVictoryPodiumBindings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FReplPodiumCharacterInfo> ReplicatedPodiumVictorInfos;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRoundVictoriesChanged OnRoundVictoriesChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRemainingLivesChanged OnRemainingLivesChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNumLivingPlayersChanged OnNumLivingPlayersChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayersAtStartOfRoundChanged OnAttackingPlayersAtStartOfRoundChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayersAtStartOfRoundChanged OnDefendingPlayersAtStartOfRoundChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRoundWonBy OnRoundWon;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float PreCountdownEndTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RoundVictories, meta=(AllowPrivateAccess=true))
    TArray<int32> RoundVictories;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RemainingLives, meta=(AllowPrivateAccess=true))
    TArray<int32> RemainingLives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_LivingPlayers, meta=(AllowPrivateAccess=true))
    TArray<int32> LivingPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AttackerPlayersAtStartOfRound, meta=(AllowPrivateAccess=true))
    TArray<AArenaPlayerState*> AttackerPlayersAtStartOfRound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DefenderPlayersAtStartOfRound, meta=(AllowPrivateAccess=true))
    TArray<AArenaPlayerState*> DefenderPlayersAtStartOfRound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ACineCameraActor* PodiumCinematicCamera;
    
public:
    AArenaGameState();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetRemainingLives(EFaction Faction, int32 InRemainingLives);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_VictoryPodiumBindings();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_VictoryPodium();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_RoundVictories();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RemainingLives();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_LivingPlayers();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_DefenderPlayersAtStartOfRound();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AttackerPlayersAtStartOfRound();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMatchPointForFaction(EFaction Faction) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRoundVictories(EFaction Faction) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRemainingLives(EFaction Faction);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPreCountdownTimeRemaining() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AArenaPlayerState*> GetPlayersAtStartOfRound(EFaction Faction);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumberOfLivingPlayers(EFaction Faction);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFaction GetMatchPointFaction() const;
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientPlayPodiumSequence();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void BroadcastRoundWonBy(EFaction Winners);
    
};

