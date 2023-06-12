#pragma once
#include "CoreMinimal.h"
#include "MutedPlayerEntry.generated.h"

USTRUCT(BlueprintType)
struct FMutedPlayerEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    TBL_API FMutedPlayerEntry();
};

