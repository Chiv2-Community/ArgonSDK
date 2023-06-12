#pragma once
#include "CoreMinimal.h"
#include "TBLLocalMessage.h"
#include "TBLLocalMessageGameplayEvent.generated.h"

UCLASS(Blueprintable)
class TBL_API UTBLLocalMessageGameplayEvent : public UTBLLocalMessage {
    GENERATED_BODY()
public:
    UTBLLocalMessageGameplayEvent();
};

