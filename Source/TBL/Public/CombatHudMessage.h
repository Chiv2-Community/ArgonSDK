#pragma once
#include "CoreMinimal.h"
#include "CombatHudMessage.generated.h"

USTRUCT(BlueprintType)
struct FCombatHudMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> Arguments;
    
    TBL_API FCombatHudMessage();
};

