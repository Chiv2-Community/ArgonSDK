#pragma once
#include "CoreMinimal.h"
#include "Components/ScrollBox.h"
#include "TBLScrollBox.generated.h"

class UTBLScrollBarStyleDataAsset;

UCLASS(Blueprintable)
class UTBLScrollBox : public UScrollBox {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTBLScrollBarStyleDataAsset* ScrollBarStyle;
    
public:
    UTBLScrollBox();
};

