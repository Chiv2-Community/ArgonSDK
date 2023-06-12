#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "HideShowCursorDelegate.h"
#include "OnShowInGameMenuDelegate.h"
#include "TBLDemoPlayerController.generated.h"

UCLASS(Blueprintable)
class ATBLDemoPlayerController : public APlayerController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FHideShowCursor OnHideShowCursor;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FOnShowInGameMenu OnShowInGameMenu;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFirstPerson;
    
public:
    ATBLDemoPlayerController();
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleHud();
    
    UFUNCTION(BlueprintCallable)
    void ToggleDebugHud();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleCamera();
    
    UFUNCTION(BlueprintCallable)
    void ShowIngameMenu();
    
    UFUNCTION(BlueprintCallable)
    void OnPausePlayback();
    
    UFUNCTION(BlueprintCallable)
    void OnIncreasePlaybackSpeed();
    
    UFUNCTION(BlueprintCallable)
    void OnDecreasePlaybackSpeed();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPaused();
    
    UFUNCTION(BlueprintCallable)
    bool IsFirstPerson() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPlaybackSpeed();
    
};

