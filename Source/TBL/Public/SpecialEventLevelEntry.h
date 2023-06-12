#pragma once
#include "CoreMinimal.h"
#include "SpecialEventLevelEntry.generated.h"

USTRUCT(BlueprintType)
struct FSpecialEventLevelEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SpecialEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StreamingLevel;
    
    TBL_API FSpecialEventLevelEntry();
};

