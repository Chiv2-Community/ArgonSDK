#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerInput.h"
#include "GameFramework/PlayerInput.h"
#include "GameFramework/PlayerInput.h"
#include "InputCoreTypes.h"
#include "EInputActionMode.h"
#include "TBLCompoundInputAction.h"
#include "TBLPlayerInput.generated.h"

class UDataTable;

UCLASS(Blueprintable, NonTransient)
class UTBLPlayerInput : public UPlayerInput {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FKeybindsReset);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FIsKeyInUseDialogClosed);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInputActionMode InputActionMode;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKeybindsReset KeybindsResetDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKeybindsReset OnIsKeyInUseDialogYesClicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKeybindsReset OnIsKeyInUseDialogNoClicked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* KeybindDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* KeybindAxisDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInputActionKeyMapping> DefaultActionMappings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInputAxisKeyMapping> DefaultAxisMappings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTBLCompoundInputAction> CompoundInputActions;
    
    UTBLPlayerInput();
    UFUNCTION(BlueprintCallable, Exec)
    void SetGamepadRYSens(const float Sensitivity);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetGamepadRXSens(const float Sensitivity);
    
    UFUNCTION(BlueprintCallable)
    void SetConsoleKey(FKey Key);
    
    UFUNCTION(BlueprintCallable)
    void SetAxisBinding(FName AxisName, FKey Key, float Scale, bool bBypassDialog);
    
    UFUNCTION(BlueprintCallable)
    void SetActionBinding(FName ActionName, FKey Key, bool bIsShiftPressed, bool bIsCtrlPressed, bool bIsAltPressed, bool bBypassDialog);
    
    UFUNCTION(BlueprintCallable)
    void ResetConsoleKey();
    
    UFUNCTION(BlueprintCallable)
    void ResetCompoundInputActions();
    
    UFUNCTION(BlueprintCallable)
    void ResetAxisBinding(FName AxisName);
    
    UFUNCTION(BlueprintCallable)
    void ResetAllBindings();
    
    UFUNCTION(BlueprintCallable)
    void ResetActionBinding(FName ActionName);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnIsKeyInUse_Yes();
    
    UFUNCTION(BlueprintCallable)
    void OnIsKeyInUse_No();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsShiftPressed();
    
    UFUNCTION(BlueprintCallable)
    bool IsKeybindingDefault(FName KeybindingName, bool ActionBinding, bool AxisBinding);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCtrlPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAltPressed();
    
    UFUNCTION(BlueprintCallable, Exec)
    void InvertGamepad();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetKeysForConsole(TArray<FKey>& ConsoleKeys);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetKeysForAxis(FName AxisName, TArray<FInputAxisKeyMapping>& Bindings);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetKeysForAction(FName ActionName, TArray<FInputActionKeyMapping>& Bindings);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetDefaultKeysForAxis(FName AxisName, TArray<FInputAxisKeyMapping>& Bindings);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetDefaultKeysForAction(FName ActionName, TArray<FInputActionKeyMapping>& Bindings);
    
    UFUNCTION(BlueprintCallable)
    TArray<FName> GetAllAxisKeyNames();
    
    UFUNCTION(BlueprintCallable)
    TArray<FInputAxisKeyMapping> GetAllAxisKeyMappings();
    
    UFUNCTION(BlueprintCallable)
    TArray<FName> GetAllActionKeyNames();
    
    UFUNCTION(BlueprintCallable)
    TArray<FInputActionKeyMapping> GetAllActionKeyMappings();
    
    UFUNCTION(BlueprintCallable)
    void ClearConsoleKey();
    
    UFUNCTION(BlueprintCallable)
    void ClearAxisBinding(FName AxisName, bool ClearMouseKeyboardBinding, bool ClearGamepadBinding);
    
    UFUNCTION(BlueprintCallable)
    void ClearActionBinding(FName ActionName, bool ClearMouseKeyboardBinding, bool ClearGamepadBinding);
    
    UFUNCTION(BlueprintCallable)
    void AddCompoundInputAction(FTBLCompoundInputAction NewAction);
    
};

