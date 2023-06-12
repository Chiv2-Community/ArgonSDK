#pragma once
#include "CoreMinimal.h"
#include "Components/Widget.h"
#include "OnMouseWheelScrolledDelegate.h"
#include "ScrollWheelCapture.generated.h"

UCLASS(Blueprintable)
class TBL_API UScrollWheelCapture : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMouseWheelScrolled OnMouseWheelScrolledEvent;
    
    UScrollWheelCapture();
};

