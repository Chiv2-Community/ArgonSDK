#pragma once
#include "CoreMinimal.h"
#include "IpConnection.h"
#include "EOSIpNetConnection.generated.h"

UCLASS(Blueprintable, NonTransient, Config=OnlineSubsystemRedpointEOS)
class UEOSIpNetConnection : public UIpConnection {
    GENERATED_BODY()
public:
    UEOSIpNetConnection();
};

