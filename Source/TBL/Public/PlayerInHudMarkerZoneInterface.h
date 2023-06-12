#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PlayerInHudMarkerZoneInterface.generated.h"

UINTERFACE()
class UPlayerInHudMarkerZoneInterface : public UInterface {
    GENERATED_BODY()
};

class IPlayerInHudMarkerZoneInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION()
    virtual bool IsLocalPlayerInHudMarkerZone() PURE_VIRTUAL(IsLocalPlayerInHudMarkerZone, return false;);
    
};

