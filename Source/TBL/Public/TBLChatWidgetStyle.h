#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateWidgetStyleContainerBase.h"
#include "TBLChatStyle.h"
#include "TBLChatWidgetStyle.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UTBLChatWidgetStyle : public USlateWidgetStyleContainerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTBLChatStyle ChatStyle;
    
    UTBLChatWidgetStyle();
};

