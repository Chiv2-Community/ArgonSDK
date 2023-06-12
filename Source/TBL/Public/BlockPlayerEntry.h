#pragma once
#include "CoreMinimal.h"
#include "BlockPlayerEntry.generated.h"

USTRUCT(BlueprintType)
struct FBlockPlayerEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    TBL_API FBlockPlayerEntry();
};

