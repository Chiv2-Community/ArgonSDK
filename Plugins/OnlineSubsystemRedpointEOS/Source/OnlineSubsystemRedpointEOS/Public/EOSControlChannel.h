#pragma once
#include "CoreMinimal.h"
#include "Engine/ControlChannel.h"
#include "EOSControlChannel.generated.h"

UCLASS(Blueprintable, NonTransient)
class ONLINESUBSYSTEMREDPOINTEOS_API UEOSControlChannel : public UControlChannel {
    GENERATED_BODY()
public:
    UEOSControlChannel();
};

