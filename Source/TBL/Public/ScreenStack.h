#pragma once
#include "CoreMinimal.h"
#include "ScreenStack.generated.h"

class UOverlay;
class UTBLScreenWidget;

USTRUCT(BlueprintType)
struct FScreenStack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* MenuOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UTBLScreenWidget*> Screens;
    
    TBL_API FScreenStack();
};

