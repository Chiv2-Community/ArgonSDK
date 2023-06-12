#pragma once
#include "CoreMinimal.h"
#include "AbilityInitiationParams.h"
#include "Action.h"
#include "ConditionalActions.generated.h"

class UCondition;

UCLASS(Blueprintable, EditInlineNew)
class UConditionalActions : public UAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UCondition*> Conditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAction*> Actions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAction*> FalseActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlwaysOnDeadPawn;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAbilityInitiationParams LastInitiationParams;
    
public:
    UConditionalActions();
};

