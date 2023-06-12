#pragma once
#include "CoreMinimal.h"
#include "TBLObject.h"
#include "TracerShape.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UTracerShape : public UTBLObject {
    GENERATED_BODY()
public:
    UTracerShape();
};

