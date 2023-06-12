#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "RichTextEmbedInfo.h"
#include "RichTextEmbeddedWidgetInterface.generated.h"

UINTERFACE(Blueprintable)
class URichTextEmbeddedWidgetInterface : public UInterface {
    GENERATED_BODY()
};

class IRichTextEmbeddedWidgetInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReceivedEmbedInfo(const FRichTextEmbedInfo& Info);
    
};

