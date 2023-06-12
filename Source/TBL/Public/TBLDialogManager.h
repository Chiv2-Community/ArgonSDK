#pragma once
#include "CoreMinimal.h"
#include "DialogButtonDelegateDelegate.h"
#include "DialogHandle.h"
#include "TBLScreenManager.h"
#include "TBLDialogManager.generated.h"

class UTBLDialogWidget;

UCLASS(Blueprintable, EditInlineNew)
class UTBLDialogManager : public UTBLScreenManager {
    GENERATED_BODY()
public:
    UTBLDialogManager();
    UFUNCTION(BlueprintCallable)
    FDialogHandle ShowYesNoDialog(FText Title, FText Body, FDialogButtonDelegate YesDelegate, FDialogButtonDelegate NoDelegate, int32 DialogPriority);
    
    UFUNCTION(BlueprintCallable)
    FDialogHandle ShowOkDialog(FText Title, FText Body, FDialogButtonDelegate OkDelegate, int32 DialogPriority);
    
    UFUNCTION(BlueprintCallable)
    FDialogHandle ShowOkCancelDialog(FText Title, FText Body, FDialogButtonDelegate OkDelegate, FDialogButtonDelegate CancelDelegate, int32 DialogPriority);
    
    UFUNCTION(BlueprintCallable)
    FDialogHandle ShowNoButtonsWorkingDialog(FText Title, FText Body, int32 DialogPriority);
    
    UFUNCTION(BlueprintCallable)
    FDialogHandle ShowNoButtonsDialog(FText Title, FText Body, int32 DialogPriority);
    
    UFUNCTION(BlueprintCallable)
    FDialogHandle ShowExitDialog(FText Title, FText Body, FDialogButtonDelegate ExitDelegate, int32 DialogPriority);
    
    UFUNCTION(BlueprintCallable)
    FDialogHandle ShowCancelWorkingDialog(FText Title, FText Body, FDialogButtonDelegate CancelDelegate, int32 DialogPriority);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PushDialog(UTBLDialogWidget* Dialog, int32 DialogPriority);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UTBLDialogWidget* OnCreateYesNoDialog(const FText& Title, const FText& Body);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UTBLDialogWidget* OnCreateOkDialog(const FText& Title, const FText& Body);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UTBLDialogWidget* OnCreateOkCancelDialog(const FText& Title, const FText& Body);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UTBLDialogWidget* OnCreateNoButtonsWorkingDialog(const FText& Title, const FText& Body);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UTBLDialogWidget* OnCreateNoButtonsDialog(const FText& Title, const FText& Body);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UTBLDialogWidget* OnCreateExitDialog(const FText& Title, const FText& Body);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UTBLDialogWidget* OnCreateCancelWorkingDialog(const FText& Title, const FText& Body);
    
    UFUNCTION(BlueprintCallable)
    bool IsDialogActive(FDialogHandle InDialogHandle);
    
    UFUNCTION(BlueprintCallable)
    FDialogHandle CloseDialog(const FDialogHandle& DialogHandle);
    
    UFUNCTION(BlueprintCallable)
    FDialogHandle ChangeDialogText(const FDialogHandle& DialogHandle, const FText& Title, const FText& Body);
    
};

