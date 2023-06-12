#pragma once
#include "CoreMinimal.h"
#include "EFrameThrottleBranch.h"
#include "HUDMarkerContainerSubWidget.h"
#include "HUDMarkerContainerPlayerWidget.generated.h"

class ATBLCharacter;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class UHUDMarkerContainerPlayerWidget : public UHUDMarkerContainerSubWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* ContainerWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATBLCharacter* Pawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsHovering;
    
    UHUDMarkerContainerPlayerWidget();
    UFUNCTION(BlueprintCallable)
    void AttemptThrottledCombatStateChangeCall(EFrameThrottleBranch& Branches);
    
};

