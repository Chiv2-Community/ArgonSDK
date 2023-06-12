#pragma once
#include "CoreMinimal.h"
#include "KeymapSimpleSignatureDelegate.h"
#include "TBLScreenWidget.h"
#include "TBLKeymapWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TBL_API UTBLKeymapWidget : public UTBLScreenWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKeymapSimpleSignature OnClosedDelegate;
    
    UTBLKeymapWidget();
};

