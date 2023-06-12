#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UtilityAI_TargetGenerator.h"
#include "TG_ActorsWithAITag.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UTG_ActorsWithAITag : public UUtilityAI_TargetGenerator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    UTG_ActorsWithAITag();
};

