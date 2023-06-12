#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Condition.h"
#include "IsMovementMode.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI)
class UIsMovementMode : public UCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EMovementMode> MovementMode;
    
    UIsMovementMode();
};

