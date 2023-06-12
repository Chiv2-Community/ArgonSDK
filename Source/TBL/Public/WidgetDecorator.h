#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "WidgetDecorator.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UWidgetDecorator : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReveal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RevealedIndex;
    
    UWidgetDecorator();
};

