#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "Components/SlateWrapperTypes.h"
#include "EWeaponAbilitySlotKey.h"
#include "TBLUserWidget.h"
#include "TBLScreenWidget.generated.h"

class UTBLScreenManager;
class UTBLScreenWidget;
class UUMGSequencePlayer;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class TBL_API UTBLScreenWidget : public UTBLUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTBLScreenManager* ParentScreenManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StackName;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UUMGSequencePlayer> OutroPlayer;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTopmostScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsScreenClosed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWantsInputFocusOnTopmost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInputUIAndGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerInputIdAtInputModeChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMouseLockMode MouseLockMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHideCursorDuringCapture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bModifyVisibilityOnPushAndPop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility TopmostVisibilty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility NonTopmostVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPopWhenEscapePressed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EWeaponAbilitySlotKey> BlockedWeaponAbilitySlotKeys;
    
public:
    UTBLScreenWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateNotifications();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldShowMouseCursorOnInputCapture() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldOverrideIsFocusable() const;
    
    UFUNCTION(BlueprintCallable)
    void RequestPlayerInput(bool WantsInput);
    
    UFUNCTION(BlueprintCallable)
    void PushScreenToParentStack(UTBLScreenWidget* NextScreen);
    
    UFUNCTION(BlueprintCallable)
    void PopOffParentStack();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void PlayOutroAnimation(UWidgetAnimation* InAnimation, float StartAtTime, int32 NumLoopsToPlay, bool bReverseExisting);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void PlayIntroAnimation(UWidgetAnimation* InAnimation, float StartAtTime, int32 NumLoopsToPlay, bool bReverseExisting);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnResumedScreen();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPausedScreen();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOutroAnimationDone(bool bWasScreenClosed);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnOpenedScreen();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnClosedScreen();
    
    UFUNCTION(BlueprintCallable)
    void FireUpdateNotifications();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FireDefaultButtonAction(int32 ButtonIndex);
    
    UFUNCTION(BlueprintCallable)
    void FireButtonAction(FName ButtonID);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BP_OnBlockKeyPress(const EWeaponAbilitySlotKey WeaponAbilitySlotKey) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BlockKeyPress(const EWeaponAbilitySlotKey WeaponAbilitySlotKey) const;
    
    UFUNCTION(BlueprintCallable)
    void AddButtonAction(FName ButtonID, int32 ButtonIndex);
    
};

