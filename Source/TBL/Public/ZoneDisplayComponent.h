#pragma once
#include "CoreMinimal.h"
#include "DisplayComponent.h"
#include "PlayerInHudMarkerZoneInterface.h"
#include "ZoneDisplayComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UZoneDisplayComponent : public UDisplayComponent, public IPlayerInHudMarkerZoneInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLocalPlayerInsideZone;
    
    UZoneDisplayComponent();
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    bool IsLocalPlayerInHudMarkerZone() override PURE_VIRTUAL(IsLocalPlayerInHudMarkerZone, return false;);
    
};

