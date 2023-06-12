#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateWidgetStyleContainerBase.h"
#include "TBLMenuItemStyle.h"
#include "TBLMenuItemWidgetStyle.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UTBLMenuItemWidgetStyle : public USlateWidgetStyleContainerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTBLMenuItemStyle MenuItemStyle;
    
    UTBLMenuItemWidgetStyle();
};

