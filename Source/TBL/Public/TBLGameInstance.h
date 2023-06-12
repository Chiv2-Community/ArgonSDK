#pragma once
#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "AssetLoadedDelegate.h"
#include "AsyncGlobals.h"
#include "Checkpoints.h"
#include "CustomizationContext.h"
#include "DialogHandle.h"
#include "EGamepadInputMode.h"
#include "MatchmakingQueueStatisticsChangedDelegate.h"
#include "MotdUpdatedDelegate.h"
#include "NativeSessionStatusChangedDelegate.h"
#include "PremergedMesh.h"
#include "RefeshProfileDisplayNameDelegate.h"
#include "StateChangedDelegate.h"
#include "Templates/SubclassOf.h"
#include "TitleDataUpdatedDelegate.h"
#include "TitleNewsUpdatedDelegate.h"
#include "WwiseQuery.h"
#include "TBLGameInstance.generated.h"

class ATBLCharacter;
class ATBLGameInstancePerformanceCaptureActor;
class ATBLPlayerState;
class UAbilityConfig;
class UAkAudioEvent;
class UChatWidget;
class UDataTable;
class UNetConnection;
class UObject;
class UTBLDialogManager;
class UTBLLiveConfig;
class UTBLMessageBus;
class UTBLSaveProfileObject;
class UTBLScreenManager;
class UTexture;

UCLASS(Blueprintable, NonTransient)
class UTBLGameInstance : public UGameInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText PendingChatText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* PlayingMusicEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 PlayingMusicEvent_PlayingID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAkAudioEvent*> PendingStoppedMusicEvents;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> FallbackLoadingScreenMusicEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString ReportBugURL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> AsyncLoadedObjects;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChatHistoryTrimThreshold;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChatHistoryTrimToLength;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AbbreviatedChatHistoryTrimThreshold;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AbbreviatedChatHistoryTrimToLength;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AbbreviatedChatMaxMessages[15];
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 ChatBlockedMessages[15];
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 AbbreviatedChatBlockedMessages[15];
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 AllowedClosedCaptionTypes[3];
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClosedCaptionMaxDistanceSq;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAssetLoaded OnCustomizationLoaded;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint64, UTexture*> AvatarImages;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LightSabresLoaded;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 ShowBigNotificationOnCL;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 SavedBigNotificationCL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCheckpoints Checkpoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> WeaponAnimSetsPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAbilityConfig> AbilityConfigPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> AbilitiesDataTablePtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> AbilitiesOverridesDataTablePtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> AbilitiesOverrideAssetDataTablePtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> CustomizationAnimationSetsDataTablePtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> KeyDisplayTablePtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UTexture>> KeyDisplayTextures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> GameUpdatesTablePtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncGlobals AsyncGlobals;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMatchmakingQueueStatisticsChanged OnMatchmakingQueueStatisticsChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTitleDataUpdated OnTitleDataUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTitleNewsUpdated OnTitleNewsUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMotdUpdated OnMotdUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNativeSessionStatusChanged OnNativeSessionStatusChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTBLLiveConfig* LiveConfig;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UNetConnection> PendingLiveConfigConnection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString PendingLiveConfigUrl;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRefeshProfileDisplayName OnRefreshProfileDisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString CachedProfileDisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateChanged StateChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATBLGameInstancePerformanceCaptureActor* PerformanceCaptureTool;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATBLGameInstancePerformanceCaptureActor> PerformanceCaptureToolClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString WelcomeScreenMap;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MainMenuMap;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TutorialMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bStartedLoadingAbilityConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bStartedLoadingCustomization;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPremergedMesh> PreMergedMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurCustPresetIdx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATBLCharacter* PreloadCharacter;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRegisteredWwiseCallback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWwiseQuery> PendingWwiseQueries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWwiseQuery> CompleteWwiseQueries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTBLSaveProfileObject* ProfileSaveInstance;
    
protected:
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UChatWidget>> ChatWidgets;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UTBLScreenManager> TitleScreenManagerClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UTBLScreenManager> MainMenuManagerClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UTBLScreenManager> DemoMainMenuManagerClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UTBLScreenManager> PlayingMenuManagerClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UTBLDialogManager> DialogManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTBLDialogManager* DialogManager;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UTBLScreenManager> DemoManagerClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UTBLScreenManager> DemoModeMainMenuManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTBLScreenManager> PendingActiveScreenManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PendingTravelDestination;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FDialogHandle TravelDialogHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FDialogHandle PairingChangedDialogHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* LoadingScreenConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTBLMessageBus* MessageBus;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FirstLoadCompleted;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowMouseCursor;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UObject>> ShowMouseCursorStack;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UObject>> ShowMouseCursorStackSuppressors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TArray<FName> UnselectedMatchmakingQueueIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGamepadInputMode LastGamepadInputMode;
    
public:
    UTBLGameInstance();
private:
    UFUNCTION(BlueprintCallable)
    void TryLeaveNativeSession();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TriggerNativeSessionSettingChange(const FString& Value);
    
protected:
    UFUNCTION(BlueprintCallable, Exec)
    void TestUserLoginDowngraded();
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void TestNetworkDisconnect();
    
private:
    UFUNCTION(BlueprintCallable, Exec)
    void TestNativeInviteUI();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TestHandleLoginDowngraded();
    
protected:
    UFUNCTION(BlueprintCallable, Exec)
    void TestControllerDialog();
    
public:
    UFUNCTION(BlueprintCallable)
    void ShowPlatformSpecificPlayerDetails(ATBLPlayerState* PlayerState);
    
private:
    UFUNCTION(BlueprintCallable)
    void ShowLoadingScreenDuringPostMatch();
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void ShowFreeWeekendUpsell(int32 LocalUserNum);
    
    UFUNCTION(BlueprintCallable)
    void SetMatchmakingQueueSelected(const FName& QueueId, bool IsSelected);
    
    UFUNCTION(BlueprintCallable)
    void SetFirstLoadCompleted(bool IsComplete);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ResetProfileData();
    
    UFUNCTION(BlueprintCallable)
    void PushShowMouseCursorStackSuppressor(UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    void PushShowMouseCursorStack(UObject* Object);
    
protected:
    UFUNCTION(BlueprintCallable, Exec)
    void PrintMorphTargetReport();
    
public:
    UFUNCTION(BlueprintCallable)
    void PopShowMouseCursorStackSuppressor(UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    void PopShowMouseCursorStack(UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    void PollTitleDataAndNews();
    
private:
    UFUNCTION(BlueprintCallable)
    void OpenNativeInviteUI();
    
    UFUNCTION(BlueprintCallable)
    void OnYesLeaveMatch();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnShowLoadingScreenPostMatch();
    
    UFUNCTION(BlueprintCallable)
    void OnPostMatchEndTimeChanged(float Time);
    
    UFUNCTION(BlueprintCallable)
    void OnPairingChangedYes();
    
    UFUNCTION(BlueprintCallable)
    void OnPairingChangedNo();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnNoLeaveMatch();
    
    UFUNCTION(BlueprintCallable)
    void OnCustomizationApplied(const FCustomizationContext& Context);
    
    UFUNCTION(BlueprintCallable)
    void OnConnectControllerDlgOK();
    
protected:
    UFUNCTION(BlueprintCallable, Exec)
    void ListLoadedStaticMeshWithNegativeScale();
    
public:
    UFUNCTION(BlueprintCallable)
    void LeaveNativeSession();
    
    UFUNCTION(BlueprintCallable)
    bool LastJoinFailed();
    
    UFUNCTION(BlueprintCallable)
    bool IsNativeSessionHost();
    
    UFUNCTION(BlueprintCallable)
    bool IsNativeSessionFull();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMatchmakingQueueSelected(const FName& QueueId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInMainMenuMap() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsFirstLoadCompleted();
    
    UFUNCTION(BlueprintCallable)
    bool IsCrossplayBlockedByOS();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandlePartyMembersUpdated();
    
public:
    UFUNCTION(BlueprintCallable)
    void GrantFlavorEntitlement(const FString& Entitlement);
    
    UFUNCTION(BlueprintCallable)
    void GoToTutorialMap();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetShowMouseCursor() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetNativeSessionMemberCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EGamepadInputMode GetLastGamepadInputMode() const;
    
    UFUNCTION(BlueprintCallable)
    FName GetCurrentState() const;
    
protected:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void Disconnect(UObject* WorldContextObject);
    
private:
    UFUNCTION(BlueprintCallable)
    void ClickedOnMessage();
    
    UFUNCTION(BlueprintCallable)
    void ClickedLeavePartyYes();
    
    UFUNCTION(BlueprintCallable)
    void ClickedLeavePartyNo();
    
    UFUNCTION(BlueprintCallable)
    void ClickedExitGame();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ClickedCancelConnect();
    
public:
    UFUNCTION(BlueprintCallable)
    void ClearShowMouseCursorStackSuppressors(const bool bUpdateMouseCursorImmediately);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanUseMatchmaker() const;
    
    UFUNCTION(BlueprintCallable)
    bool CanLeaveNativeSession();
    
};

