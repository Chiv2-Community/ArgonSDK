#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ButtonCallout.h"
#include "EGamepadNavigationMode.h"
#include "EWidgetDisableType.h"
#include "OnHighlightEventDelegate.h"
#include "OnNavigationPathEventDelegate.h"
#include "TBLUserWidget.generated.h"

class UCurveFloat;
class UTBLScreenManager;
class UTBLUMGSequencePlayer;
class UTBLUserWidget;
class UUMGSequencePlayer;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class TBL_API UTBLUserWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UTBLUMGSequencePlayer*> ActiveTBLSequencePlayers;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, TWeakObjectPtr<UUMGSequencePlayer>> InterruptableSequencePlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInFocusPath;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNavigationPathEvent EventAddedToFocusPath;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNavigationPathEvent EventRemovedFromFocusPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsHighlighted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHighlightEvent OnHighlight;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHighlightEvent OnUnhighlight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FButtonCallout> ButtonCallouts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsWidgetDisabledInDemoMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsWidgetDisabledInShippingWIP;
    
    UTBLUserWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SetSelfAsRadioGroupSelection(FName Group);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void PlayInterruptableAnimation(UWidgetAnimation* InAnimation, float StartAtTime, int32 NumLoopsToPlay, FName InterruptGroup, bool bPlayInReverse, bool bReverseExisting);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void PlayAdvancedAnimation(const UWidgetAnimation* InAnimation, const UCurveFloat* InterpolationCurve, float StartAtTime, float LoopBackToTime, float EndAtTime, bool bIsNormalizedCurve, float AnimationSpeed, int32 NumLoopsToPlay, bool bResumeFromLastTime, float Duration, float MaxDuration);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void NativeUnhighlight();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void NativeHighlight();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_Unhighlight();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnFocusChanging();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_Highlight();
    
    UFUNCTION(BlueprintCallable)
    void IsWidgetEnabled(EWidgetDisableType& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWidgetDisabled() const;
    
    UFUNCTION(BlueprintCallable)
    void HandleGamepadNavigationModeChanged(EGamepadNavigationMode Mode);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    UTBLScreenManager* GetScreenManager() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    UTBLUserWidget* GetRadioGroupSelection(FName Group);
    
};

