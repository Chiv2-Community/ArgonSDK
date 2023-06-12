#pragma once
#include "CoreMinimal.h"
#include "OnIsPartOfRoundChangedDelegate.h"
#include "OnLivesLeftChangedDelegate.h"
#include "OnbIsDeadAndOutOfLivesChangedDelegate.h"
#include "TBLPlayerState.h"
#include "ArenaPlayerState.generated.h"

UCLASS(Blueprintable)
class AArenaPlayerState : public ATBLPlayerState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLivesLeftChanged OnLivesLeftChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnbIsDeadAndOutOfLivesChanged OnbIsDeadAndOutOfLivesChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnIsPartOfRoundChanged OnIsPartOfRoundChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_LivesLeft, meta=(AllowPrivateAccess=true))
    int32 LivesLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsPartOfRound, meta=(AllowPrivateAccess=true))
    uint8 bIsPartOfRound: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsDeadAndOutOfLives, meta=(AllowPrivateAccess=true))
    uint8 bIsDeadAndOutOfLives: 1;
    
public:
    AArenaPlayerState();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_LivesLeft();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsPartOfRound();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsDeadAndOutOfLives();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLivesLeft();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsPartOfRound();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsDeadAndOutOfLives();
    
};

