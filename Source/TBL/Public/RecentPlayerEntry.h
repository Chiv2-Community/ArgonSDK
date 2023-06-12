#pragma once
#include "CoreMinimal.h"
#include "RecentPlayerEntry.generated.h"

USTRUCT(BlueprintType)
struct FRecentPlayerEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Age;
    
    TBL_API FRecentPlayerEntry();
};

