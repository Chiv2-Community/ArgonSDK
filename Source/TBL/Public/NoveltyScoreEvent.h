#pragma once
#include "CoreMinimal.h"
#include "NoveltyScoreEvent.generated.h"

USTRUCT(BlueprintType)
struct FNoveltyScoreEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText NoveltyScoreText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NoveltyScoreAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RowIndex;
    
    TBL_API FNoveltyScoreEvent();
};

