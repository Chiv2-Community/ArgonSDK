#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HUDContainerWidget.h"
#include "HUDMarkerContainerWidget.generated.h"

class UActorComponent;
class UCanvasPanelSlot;
class UHUDContainerSubWidget;
class UHudMarkerDisplayComponent;
class UInteractableComponent;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class UHUDMarkerContainerWidget : public UHUDContainerWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<UWidget*, UCanvasPanelSlot*> OverridePanelSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClampMarkersToCircle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D PinLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PinInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UnpinInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LimitFadeSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UHUDContainerSubWidget*, float> PinnedWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<UActorComponent*, UHudMarkerDisplayComponent*> HudMarkerComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractableComponent* LastFocusedInteractable;
    
    UHUDMarkerContainerWidget();
};

