#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UtilityAI_InputAxis.h"
#include "I_TimeSinceLastDidBehavior.generated.h"

class UUtilityAI_Behavior;

UCLASS(Blueprintable, EditInlineNew)
class UI_TimeSinceLastDidBehavior : public UUtilityAI_InputAxis {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseMaxIfActionStillUnderway;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseMaxOnlyIfSameTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<TSubclassOf<UUtilityAI_Behavior>> Behaviors;
    
    UI_TimeSinceLastDidBehavior();
};

