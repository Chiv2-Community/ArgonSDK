#pragma once
#include "CoreMinimal.h"
#include "Framework/Views/ITypedTableView.h"
#include "Styling/SlateTypes.h"
#include "Types/SlateEnums.h"
#include "Components/ListViewBase.h"
#include "BlueprintOnlineUser.h"
#include "EFriendsListType.h"
#include "OnGetEntryWidgetClassForItemDelegate.h"
#include "OnListEntryGeneratedDynamicWithSelfDelegate.h"
#include "OnListEntryRefreshedDelegate.h"
#include "Templates/SubclassOf.h"
#include "FriendsAndPartyList.generated.h"

class UTBLScrollBarStyleDataAsset;
class UUserWidget;

UCLASS(Blueprintable)
class UFriendsAndPartyList : public UListViewBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFriendsListType ListType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTBLScrollBarStyleDataAsset* ScrollBarStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGetEntryWidgetClassForItem OnGetEntryWidgetClassForItemEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnListEntryGeneratedDynamicWithSelf BP_OnEntryGeneratedWithSelf;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnListEntryRefreshed BP_OnListEntryRefreshed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EFriendsListType, int32> SortingWeights;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EOrientation> Orientation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ESelectionMode::Type> SelectionMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EConsumeMouseWheel ConsumeMouseWheel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClearSelectionOnClick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFocusable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EntrySpacing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReturnFocusToSelection;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 NumberOfDummyItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 NumberOfDummyGroups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 NumberOfMaxItemsDisplayed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> SeparatorEntryWidgetClass;
    
public:
    UFriendsAndPartyList();
    UFUNCTION(BlueprintCallable)
    void SetPartyInviteSettings(bool bAllowInvites, bool bJoinViaPresence, bool bJoinViaPresenceFriendsOnly);
    
    UFUNCTION(BlueprintCallable)
    void RefreshItemsList();
    
    UFUNCTION(BlueprintCallable)
    void RefreshFriendsList(bool ShouldRead);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnUsersChanged(const TSet<FString>& ChangedUsers);
    
public:
    UFUNCTION(BlueprintCallable)
    void BP_NavigateToItem(const FBlueprintOnlineUser& Item);
    
};

