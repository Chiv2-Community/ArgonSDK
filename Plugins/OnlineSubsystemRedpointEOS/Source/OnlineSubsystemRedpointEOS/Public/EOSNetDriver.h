#pragma once
#include "CoreMinimal.h"
#include "IpNetDriver.h"
#include "EOSNetDriver.generated.h"

UCLASS(Blueprintable, NonTransient, Config=OnlineSubsystemRedpointEOS)
class ONLINESUBSYSTEMREDPOINTEOS_API UEOSNetDriver : public UIpNetDriver {
    GENERATED_BODY()
public:
    UEOSNetDriver();
};

