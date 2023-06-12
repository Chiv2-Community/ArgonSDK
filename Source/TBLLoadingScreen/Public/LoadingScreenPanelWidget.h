#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Blueprint/UserWidget.h"
#include "MapSpecificStageEntries.h"
#include "OnContinueButtonClickedDelegate.h"
#include "OnContinueButtonClickedMCDelegate.h"
#include "LoadingScreenPanelWidget.generated.h"

class UTexture2D;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class TBLLOADINGSCREEN_API ULoadingScreenPanelWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnContinueButtonClickedMC ContinueButtonClickedMC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnContinueButtonClicked ContinueButtonClickedEvent;
    
    ULoadingScreenPanelWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopFadeAnimations();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetStageEntries(const TArray<FMapSpecificStageEntries>& TextEntries);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMapTexture(UTexture2D* Texture);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMapNameText(const FText& Text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMapDescriptionText(const FText& Text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetContinueButtonVisibility(bool Visible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetBackGroundImageColorAndOpacity(const FLinearColor& ColorOpacity);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeOutMapTexture();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeInMapTexture();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnabledScreenInputBlocking(bool Enable);
    
};

