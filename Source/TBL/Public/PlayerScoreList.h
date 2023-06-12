#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "Components/Widget.h"
#include "LevelUpResult.h"
#include "OnGenerateLevelUpRowDelegate.h"
#include "OnGenerateScoreRowDelegate.h"
#include "ScoreEventStruct.h"
#include "PlayerScoreList.generated.h"

class APlayerState;
class ATBLPlayerController;
class ATBLPlayerState;

UCLASS(Blueprintable)
class UPlayerScoreList : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Lifetime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LevelUpLifeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag DefaultTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGenerateScoreRow OnGenerateRowEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGenerateLevelUpRow OnGenerateLevelUpRowEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<ATBLPlayerState*, UWidget*> PlayerKilledWidgetMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* ObjectiveScoreWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* HealingScoreWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool LoadedPlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bSuccessfulPlayerStateReplicated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle CheckForPlayerStateReplication;
    
    UPlayerScoreList();
protected:
    UFUNCTION(BlueprintCallable)
    void PlayerStateReplicated(APlayerState* PlayerState);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnPlayerScoreEvent(FScoreEventStruct ScoreEvent);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerLevelUpEvents(const TArray<FLevelUpResult>& LevelUpEvents);
    
    UFUNCTION(BlueprintCallable)
    void OnInitialized(ATBLPlayerController* PlayerOwner);
    
    UFUNCTION(BlueprintCallable)
    void CheckForPlayerState();
    
};

