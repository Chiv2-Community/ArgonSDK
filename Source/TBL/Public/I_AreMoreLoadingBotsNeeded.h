#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "UtilityAI_InputAxis.h"
#include "I_AreMoreLoadingBotsNeeded.generated.h"

class UUtilityAI_Behavior;

UCLASS(Blueprintable, EditInlineNew)
class TBL_API UI_AreMoreLoadingBotsNeeded : public UUtilityAI_InputAxis {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UUtilityAI_Behavior>> LoadingBehaviourClasses;
    
public:
    UI_AreMoreLoadingBotsNeeded();
};

