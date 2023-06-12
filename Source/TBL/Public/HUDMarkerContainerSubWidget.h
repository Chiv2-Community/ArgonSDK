#pragma once
#include "CoreMinimal.h"
#include "HUDContainerSubWidget.h"
#include "HUDMarkerContainerSubWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UHUDMarkerContainerSubWidget : public UHUDContainerSubWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPinned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HoverPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsHovered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsClamped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisablePinned;
    
    UHUDMarkerContainerSubWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnUnPinned();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnUnHovered();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnUnClamped();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnPinned();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnHovered();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnClamped();
    
};

