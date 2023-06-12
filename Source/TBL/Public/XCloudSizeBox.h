#pragma once
#include "CoreMinimal.h"
#include "Components/SizeBox.h"
#include "EXCloudWidgetBehavior.h"
#include "XCloudSizeBox.generated.h"

UCLASS(Blueprintable)
class UXCloudSizeBox : public USizeBox {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EXCloudWidgetBehavior WidgetBehavior;
    
    UXCloudSizeBox();
};

