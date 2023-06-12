#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OnlineSubsystem -ObjectName=Motd -FallbackName=Motd
//CROSS-MODULE INCLUDE V2: -ModuleName=OnlineSubsystem -ObjectName=TitleNews -FallbackName=TitleNews
#include "MatchmakingQueue.h"
#include "TBLTitleDataLibrary.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UTBLTitleDataLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UTBLTitleDataLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsTrialModeEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsTrialModeClient();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsStoreFeaturedTabEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsStoreEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsStoreAddonsTabEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsServerBrowserEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsQuickMatchEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsMatchmakingEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsGameEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasTitleNews();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasTitleData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasMotd();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FTitleNews> GetTitleNews();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TMap<FString, FString> GetTitleData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetSpecialEventName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetQuickplayQueueName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FMotd GetMotd();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetMatchmakingQueue(FName ID, FMatchmakingQueue& Queue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetHostedMatchmakingQueue(FMatchmakingQueue& OutQueue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetAllMatchmakingQueues(TArray<FMatchmakingQueue>& Queues);
    
};

