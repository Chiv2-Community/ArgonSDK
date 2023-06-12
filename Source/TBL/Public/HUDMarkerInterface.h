#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "HUDMarkerInterface.generated.h"

class APlayerController;

UINTERFACE(Blueprintable)
class UHUDMarkerInterface : public UInterface {
    GENERATED_BODY()
};

class IHUDMarkerInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetHUDMarkerProgress(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetHUDMarkerLocation(APlayerController* PlayerController);
    
};

