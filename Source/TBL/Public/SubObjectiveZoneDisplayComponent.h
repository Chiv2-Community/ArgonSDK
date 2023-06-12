#pragma once
#include "CoreMinimal.h"
#include "HudMarkerDisplayComponent.h"
#include "LocalPlayerInsideZoneChangedDelegate.h"
#include "SubObjectiveZoneDisplayComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USubObjectiveZoneDisplayComponent : public UHudMarkerDisplayComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocalPlayerInsideZoneChanged OnLocalPlayerInsideChanged;
    
    USubObjectiveZoneDisplayComponent();
};

