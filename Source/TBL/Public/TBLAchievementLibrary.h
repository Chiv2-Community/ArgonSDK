#pragma once
#include "CoreMinimal.h"
#include "TBLAchievementEntry.h"
#include "TBLAchievementLibrary.generated.h"

USTRUCT(BlueprintType)
struct FTBLAchievementLibrary {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTBLAchievementEntry> Entries;
    
    TBL_API FTBLAchievementLibrary();
};

