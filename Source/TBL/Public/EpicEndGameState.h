#pragma once
#include "CoreMinimal.h"
#include "EEpicEndGameState.h"
#include "EpicEndGameState.generated.h"

USTRUCT(BlueprintType)
struct FEpicEndGameState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EEpicEndGameState::Type> State;
    
    TBL_API FEpicEndGameState();
};

