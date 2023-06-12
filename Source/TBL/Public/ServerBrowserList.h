#pragma once
#include "CoreMinimal.h"
#include "FindSessionsCallbackProxy.h"
#include "Framework/Views/ITypedTableView.h"
#include "Components/Widget.h"
#include "EServerListType.h"
#include "KeyboardFocusInterface.h"
#include "OnGenerateRowSessionResultDelegate.h"
#include "OnGetServerFilterSettingsDelegate.h"
#include "OnLoadingProgressStatusChangedDelegate.h"
#include "OnRefreshServerCompleteDelegate.h"
#include "OnSelectionChangedDelegate.h"
#include "ServerBrowserList.generated.h"

class UTBLScrollBarStyleDataAsset;

UCLASS(Blueprintable)
class UServerBrowserList : public UWidget, public IKeyboardFocusInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ItemHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ESelectionMode::Type> SelectionMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TableRowStyleName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGenerateRowSessionResult OnGenerateRowEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGetServerFilterSettings OnGetServerFilterSettingsEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLoadingProgressStatusChanged OnLoadingProgressStatusChangedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRefreshServerComplete OnRefreshServerCompleteEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSelectionChanged OnSelectionChangedEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTBLScrollBarStyleDataAsset* ScrollBarStyle;
    
public:
    UServerBrowserList();
    UFUNCTION(BlueprintCallable)
    void UseSavedSort();
    
    UFUNCTION(BlueprintCallable)
    void SortServersByServerType(bool Descending);
    
    UFUNCTION(BlueprintCallable)
    void SortServersByServerName(bool Descending);
    
    UFUNCTION(BlueprintCallable)
    void SortServersByPlayerNumbers(bool Descending);
    
    UFUNCTION(BlueprintCallable)
    void SortServersByPing(bool Descending);
    
    UFUNCTION(BlueprintCallable)
    void SortServersByMapName(bool Descending);
    
    UFUNCTION(BlueprintCallable)
    void SortServersByGameMode(bool Descending);
    
    UFUNCTION(BlueprintCallable)
    void SelectWidget(const FBlueprintSessionResult& Item);
    
    UFUNCTION(BlueprintCallable)
    void SelectFirstWidget();
    
    UFUNCTION(BlueprintCallable)
    void RefreshServerList(EServerListType ListType);
    
    UFUNCTION(BlueprintCallable)
    void RefreshServerEntry(FBlueprintSessionResult SessionResult);
    
    UFUNCTION(BlueprintCallable)
    void OnRefreshCompleted(bool bSuccess, EServerListType ListType);
    
    UFUNCTION(BlueprintCallable)
    void OnQueryCompleted(bool bSuccess, EServerListType ListType);
    
    UFUNCTION(BlueprintCallable)
    void OnPingServerComplete(FBlueprintSessionResult PingedSession);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWidget* GetSelectedWidget();
    
    UFUNCTION(BlueprintCallable)
    void GetSelectedSession(FBlueprintSessionResult& Out);
    
    UFUNCTION(BlueprintCallable)
    int32 GetCurrentFilteredItemsCount();
    
    UFUNCTION(BlueprintCallable)
    void FetchFilteredList();
    
    UFUNCTION(BlueprintCallable)
    void CreateFakeServers(int32 NumberOfServers, TArray<FString> ServerNames, TArray<FString> MapNamesAndGameModes, TArray<int32> ListOfPossibleMaxPlayers);
    
    
    // Fix for true pure virtual functions not being implemented
};

