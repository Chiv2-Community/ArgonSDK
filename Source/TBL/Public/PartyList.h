#pragma once
#include "CoreMinimal.h"
#include "TBLUserWidget.h"
#include "Templates/SubclassOf.h"
#include "PartyList.generated.h"

class UOverlay;
class UPartyListEntry;
class UVerticalBox;
class UWorld;

UCLASS(Blueprintable, EditInlineNew)
class TBL_API UPartyList : public UTBLUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* InviteButtonOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* PartyWidgetContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* PartyList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPartyListEntry> PartyListEntryClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPartyListEntry* SelfPartyEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPartyListEntry*> EntryWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<FString, UPartyListEntry*> IdToEntryMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 MaxPartySize;
    
public:
    UPartyList();
protected:
    UFUNCTION(BlueprintCallable)
    void OnVOIPTick();
    
    UFUNCTION(BlueprintCallable)
    void OnPostLoadMap(UWorld* LoadedWorld);
    
    UFUNCTION(BlueprintCallable)
    void OnFriendsUpdated(const TSet<FString>& ChangedUsers);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsPlayingMenu();
    
    UFUNCTION(BlueprintCallable)
    void InitPartyWidget();
    
};

