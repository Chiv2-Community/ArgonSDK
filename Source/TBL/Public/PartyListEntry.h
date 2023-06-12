#pragma once
#include "CoreMinimal.h"
#include "TBLUserWidget.h"
#include "PartyListEntry.generated.h"

class UImage;
class UTBLTextBlock;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class TBL_API UPartyListEntry : public UTBLUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* IconSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* LeaderIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* TalkingIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* MemberIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTBLTextBlock* PlayerName;
    
public:
    UPartyListEntry();
};

