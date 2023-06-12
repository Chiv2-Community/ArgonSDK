#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "VideoPlayerWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TBL_API UVideoPlayerWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UVideoPlayerWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void OnUserLoginDowngraded();
    
};

