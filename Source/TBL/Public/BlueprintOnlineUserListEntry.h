#pragma once
#include "CoreMinimal.h"
#include "Blueprint/IUserListEntry.h"
#include "BlueprintOnlineUser.h"
#include "BlueprintOnlineUserListEntry.generated.h"

UINTERFACE()
class UBlueprintOnlineUserListEntry : public UUserListEntry {
    GENERATED_BODY()
};

class IBlueprintOnlineUserListEntry : public IUserListEntry {
    GENERATED_BODY()
public:
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnListItemSet(const FBlueprintOnlineUser& ListItemObject);
    
};

