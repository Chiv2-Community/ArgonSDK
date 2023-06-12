#pragma once
#include "CoreMinimal.h"
#include "actionNumbers.generated.h"

USTRUCT(BlueprintType)
struct FactionNumbers {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Players;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Bots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Totals;
    
    TBL_API FactionNumbers();
};

