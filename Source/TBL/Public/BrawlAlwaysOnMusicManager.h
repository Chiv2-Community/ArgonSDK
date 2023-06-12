#pragma once
#include "CoreMinimal.h"
#include "EBrawlAlwaysOnMusicState.h"
#include "TBLActor.h"
#include "BrawlAlwaysOnMusicManager.generated.h"

class UAkAudioEvent;
class UAkComponent;

UCLASS(Blueprintable, NotPlaceable, Config=Game)
class ABrawlAlwaysOnMusicManager : public ATBLActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AkComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BrawlAlwaysOnMusicState, meta=(AllowPrivateAccess=true))
    EBrawlAlwaysOnMusicState BrawlAlwaysOnMusicState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBrawlAlwaysOnMusicState PreviousBrawlAlwaysOnMusicState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsMusicPlaying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* PlayJukeBoxEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StopJukeBoxEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* RecordScartch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* WaitingToStart;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> RecentSongs;
    
public:
    ABrawlAlwaysOnMusicManager();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentMusicState(EBrawlAlwaysOnMusicState NewState);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BrawlAlwaysOnMusicState();
    
    UFUNCTION(BlueprintCallable)
    EBrawlAlwaysOnMusicState GetCurrentMusicState();
    
};

