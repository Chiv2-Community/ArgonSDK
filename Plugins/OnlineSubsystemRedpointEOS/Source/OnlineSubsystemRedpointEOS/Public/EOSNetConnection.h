#pragma once
#include "CoreMinimal.h"
#include "Engine/NetConnection.h"
#include "EOSNetConnection.generated.h"

UCLASS(Blueprintable, NonTransient, Config=OnlineSubsystemRedpointEOS)
class UEOSNetConnection : public UNetConnection {
    GENERATED_BODY()
public:
    UEOSNetConnection();
};

