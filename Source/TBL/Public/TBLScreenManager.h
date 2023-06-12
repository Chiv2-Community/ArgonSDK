#pragma once
#include "CoreMinimal.h"
#include "EGamepadInputMode.h"
#include "EGamepadNavigationMode.h"
#include "OnButtonCalloutsChangedDelegate.h"
#include "OnGamepadInputModeSwitchEventDelegate.h"
#include "OnGamepadNavigationModeSwitchEventDelegate.h"
#include "OnKeyBindChangedDelegateDelegate.h"
#include "OnPreviewMouseButtonDownEventDelegateDelegate.h"
#include "ScreenStack.h"
#include "TBLKeymapWidgetInterface.h"
#include "TBLUserWidget.h"
#include "TBLScreenManager.generated.h"

class UBlueprintDebugMenuComponent;
class UObject;
class UOverlay;
class UTBLScreenWidget;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class TBL_API UTBLScreenManager : public UTBLUserWidget, public ITBLKeymapWidgetInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGamepadNavigationModeSwitchEvent OnGamepadNavigationModeChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGamepadInputModeSwitchEvent OnGamepadInputModeChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnButtonCalloutsChanged OnButtonCalloutsChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnKeyBindChangedDelegate OnKeyBindChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPreviewMouseButtonDownEventDelegate OnPreviewMouseButtonDownEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<FName, UTBLUserWidget*> RadioGroups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FScreenStack> ScreenStacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidget* ActiveCrosshair;
    
public:
    UTBLScreenManager();
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SwapNamedScreenToFront(FName ScreenName, UOverlay* Overlay);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SetWidgetAsRadioGroupSelection(FName Group, UTBLUserWidget* InSelection);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintNativeEvent)
    void SetHudVisibility(bool bVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SetActiveCrosshair(UWidget* Crosshair);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    bool RemoveScreenFromStack(UTBLScreenWidget* Screen, UOverlay* Overlay, bool bPopOnly, bool bDontTellScreen);
    
    UFUNCTION(BlueprintCallable)
    static void PushShowMouseCursorStack(UObject* Object);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void PushScreenToStack(UTBLScreenWidget* Screen, UOverlay* Overlay);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void PushNamedScreenToStack(UTBLScreenWidget* Screen, UOverlay* Overlay, FName ScreenName);
    
    UFUNCTION(BlueprintCallable)
    static void PopShowMouseCursorStack(UObject* Object);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void PopScreenStack(UOverlay* Overlay);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OpenDebugMenu(UBlueprintDebugMenuComponent* DebugMenuComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    void GetTopScreen(UOverlay* Overlay, FName& OutScreenName, UTBLScreenWidget*& OutScreen);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EGamepadNavigationMode GetGamepadNavigationMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EGamepadInputMode GetGamepadInputMove();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    UWidget* GetActiveCrosshair();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void ClearScreenStack(UOverlay* Overlay);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_FadeOut(const float PlaybackSpeed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_FadeIn(const float PlaybackSpeed);
    
    
    // Fix for true pure virtual functions not being implemented
};

