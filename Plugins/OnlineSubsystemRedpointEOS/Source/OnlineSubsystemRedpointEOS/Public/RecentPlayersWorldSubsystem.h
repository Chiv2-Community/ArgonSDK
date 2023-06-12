#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "RecentPlayersWorldSubsystem.generated.h"

UCLASS(Blueprintable)
class ONLINESUBSYSTEMREDPOINTEOS_API URecentPlayersWorldSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    URecentPlayersWorldSubsystem();
};

