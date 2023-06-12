#pragma once
#include "CoreMinimal.h"
#include "DisplayComponent.h"
#include "SimpleDisplayComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USimpleDisplayComponent : public UDisplayComponent {
    GENERATED_BODY()
public:
    USimpleDisplayComponent();
};

