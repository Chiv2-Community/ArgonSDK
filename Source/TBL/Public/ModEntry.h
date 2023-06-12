#pragma once
#include "CoreMinimal.h"
#include "ModEntry.generated.h"

USTRUCT(BlueprintType)
struct FModEntry {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 Value;
    
public:
    TBL_API FModEntry();
};

