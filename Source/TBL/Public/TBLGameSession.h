#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameSession.h"
#include "EServerListType.h"
#include "IsMatchmakingChangedDelegate.h"
#include "MatchmakingCancelledDelegate.h"
#include "MatchmakingCompletedDelegate.h"
#include "MatchmakingQueue.h"
#include "ServerFilterSetting.h"
#include "TBLGameSession.generated.h"

UCLASS(Blueprintable)
class TBL_API ATBLGameSession : public AGameSession {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCancellingMatchmaking;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIsMatchmakingChanged OnIsMatchmakingChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMatchmakingCompleted OnMatchmakingCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMatchmakingCancelled OnMatchmakingCancelled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    FString ServerPassword;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    int32 MaxNumExtraAdmins;
    
    ATBLGameSession();
    UFUNCTION(BlueprintCallable)
    bool StartServerListQuickMatch(const FServerFilterSetting& Filters);
    
    UFUNCTION(BlueprintCallable)
    bool StartMatchmaking(const TArray<FMatchmakingQueue>& Queues);
    
    UFUNCTION(BlueprintCallable)
    void OnServerListRefreshComplete(bool bSuccess, EServerListType SearchType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMatchmaking();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBusy() const;
    
    UFUNCTION(BlueprintCallable)
    void HandleMatchmakingComplete(FName MatchmadeSessionName, bool bSuccess);
    
    UFUNCTION(BlueprintCallable)
    void HandleMatchmakingCancelled(FName MatchmadeSessionName, bool bSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanStartMatchmaking(bool bIsBackfill) const;
    
    UFUNCTION(BlueprintCallable)
    bool CancelMatchmaking();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanCancelMatchMaking() const;
    
};

