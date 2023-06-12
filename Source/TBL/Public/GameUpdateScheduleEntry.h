#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameUpdateScheduleEntry.generated.h"

USTRUCT(BlueprintType)
struct FGameUpdateScheduleEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime StartDate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime EndDate;
    
    TBL_API FGameUpdateScheduleEntry();
};

