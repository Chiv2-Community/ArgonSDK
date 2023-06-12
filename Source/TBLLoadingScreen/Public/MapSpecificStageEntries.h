#pragma once
#include "CoreMinimal.h"
#include "MapSpecificStageEntries.generated.h"

USTRUCT(BlueprintType)
struct FMapSpecificStageEntries {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText StageName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText StageDescription;
    
    TBLLOADINGSCREEN_API FMapSpecificStageEntries();
};

