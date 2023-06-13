#pragma once
#include "CoreMinimal.h"
#include "CombatState.h"
#include "BaseCombatState.generated.h"

class UUserWidget;

UCLASS(Blueprintable, MinimalAPI)
class UBaseCombatState : public UCombatState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 CanReloadInState: 1;
    
protected:
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UUserWidget> InputHintsWidget;
    
public:
    UBaseCombatState();
    UFUNCTION(BlueprintCallable)
    void ToggleReloadHint(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void RemoveReloadHint();
    
    UFUNCTION(BlueprintCallable)
    void Reload();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool NeedToReload() const;
    
    /*UFUNCTION(BlueprintCallable)
    void ManualReload();*/
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStaminaPercent() const;
    
    UFUNCTION(BlueprintCallable)
    void DropHeavyObject();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DidHitInRelease() const;
    
    UFUNCTION(BlueprintCallable)
    void AddReloadHint();
    
};

