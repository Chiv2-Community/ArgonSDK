#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ETitleScreenMode.h"
#include "TBLScreenWidget.h"
#include "TBLTitleScreen.generated.h"

UCLASS(Blueprintable, EditInlineNew, Config=Game)
class UTBLTitleScreen : public UTBLScreenWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    bool bSavedHasAgreedToTOS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETitleScreenMode State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ErrorMessageTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ErrorMessageBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    FString EGSDevAuth_Address;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    FString EGSDevAuth_Client;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime MaintenanceCurrentTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime MaintenanceEndTime;
    
public:
    UTBLTitleScreen();
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldUsePCStyleWelcomeScreen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldShowEgsDevLoginCredentials() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void RetryMaintenance();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnUserPressedStart(int32 ControllerIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnUserPressedOfflineMode(int32 ControllerIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnUserPressedLogin(int32 ControllerIndex, const FString& InEGSDevAuth_Address, const FString& InEGSDevAuth_Client);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnUserLoginDowngraded();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnTOSDeclined();
    
    UFUNCTION(BlueprintCallable)
    void OnTOSAgreed();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayTutorialDeclined();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayTutorialAccepted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMaintenanceDataLoaded();
    
public:
    UFUNCTION(BlueprintCallable)
    void Logout();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnStateChanged(ETitleScreenMode NewState);
    
};

