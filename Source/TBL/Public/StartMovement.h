#pragma once
#include "CoreMinimal.h"
#include "Action.h"
#include "EAbilitiesMovementSequence.h"
#include "StartMovement.generated.h"

class UCondition;
class UMovementInstance;
class UMovementSequence;

UCLASS(Blueprintable, EditInlineNew)
class UStartMovement : public UAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAbilitiesMovementSequence MovementSequenceName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StrengthScaling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyToInitiator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExecuteClientFirst;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UCondition*> Conditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAction*> StartActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAction*> FinishActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMovementSequence* MovementSequence;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMovementInstance* MovementInstance;
    
public:
    UStartMovement();
protected:
    UFUNCTION(BlueprintCallable)
    void OnStartMovement();
    
    UFUNCTION(BlueprintCallable)
    void OnFinishMovement();
    
};

