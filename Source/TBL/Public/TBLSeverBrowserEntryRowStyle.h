#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateWidgetStyleContainerBase.h"
#include "Styling/SlateTypes.h"
#include "TBLSeverBrowserEntryRowStyle.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UTBLSeverBrowserEntryRowStyle : public USlateWidgetStyleContainerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTableRowStyle RowStyle;
    
    UTBLSeverBrowserEntryRowStyle();
};

