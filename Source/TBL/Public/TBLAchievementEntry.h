#pragma once
#include "CoreMinimal.h"
#include "TBLAchievementEntry.generated.h"

USTRUCT(BlueprintType)
struct FTBLAchievementEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Description;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    double Progress;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double IncrementBy;
    
    TBL_API FTBLAchievementEntry();
};

