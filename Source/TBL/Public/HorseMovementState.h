#pragma once
#include "CoreMinimal.h"
#include "CombatState.h"
#include "EHorseMovementInput.h"
#include "EHorseTurnInput.h"
#include "EMovementDirection.h"
#include "HorseMovementState.generated.h"

class UHorseMovement;

UCLASS(Blueprintable, MinimalAPI)
class UHorseMovementState : public UCombatState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorseMovement* movement;
    
    UHorseMovementState();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateMovement();
    
    UFUNCTION(BlueprintCallable)
    void TurnTowardsCamera(float TurnRate, float TurnRateWithInput);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StrafeGearUp();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StrafeGearDown();
    
    UFUNCTION(BlueprintCallable)
    void ModifyTurnRateScale(float Target, float InterpSpeed);
    
    UFUNCTION(BlueprintCallable)
    void ModifyTargetSpeed(float Target);
    
    UFUNCTION(BlueprintCallable)
    void ModifyAccelerationScale(float Target, float InterpSpeed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetTurnInputScale(EHorseTurnInput TurnInput, float OrientationOffset);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetTargetOrientationOffset(float& Min, float& Max, TEnumAsByte<EMovementDirection> Direction);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSpeed(FName State, float Percent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSettleSpeed(FName State);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetOrbitTurnScale(float LookAtDistance, float StrafeSpeed, float TurnRate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMinSpeed(FName State);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxSpeed(FName State);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetInvertedBackwardStrafe();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetInputTurn(float& InputTurn, float& HeldTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetInputStrafe(float& InputStrafe, float& HeldTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetInputForward(float& InputForwardOut, float& HeldTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetInputDirection(EHorseMovementInput& Direction, float& HeldTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHorseMovement* GetHorseMovement();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentForwardSpeed();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCrusingSpeed();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetControlMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetBoostMode();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GearUp();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GearDown();
    
};

