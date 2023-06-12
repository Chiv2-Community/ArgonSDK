#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UtilityAI_InputAxis.h"
#include "I_HowLongHaveIBeenDoingBehavior.generated.h"

class UUtilityAI_Behavior;

UCLASS(Blueprintable, EditInlineNew)
class UI_HowLongHaveIBeenDoingBehavior : public UUtilityAI_InputAxis {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DecayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CompletedBoostSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<TSubclassOf<UUtilityAI_Behavior>> Behaviors;
    
    UI_HowLongHaveIBeenDoingBehavior();
};

