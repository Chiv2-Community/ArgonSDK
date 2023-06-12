#pragma once
#include "CoreMinimal.h"
#include "UtilityAI_TargetGenerator.h"
#include "TG_OwnCharacter.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UTG_OwnCharacter : public UUtilityAI_TargetGenerator {
    GENERATED_BODY()
public:
    UTG_OwnCharacter();
};

