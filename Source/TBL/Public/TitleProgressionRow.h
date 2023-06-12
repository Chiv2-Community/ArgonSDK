#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ERankTitleFormat.h"
#include "TitleProgressionRow.generated.h"

USTRUCT(BlueprintType)
struct FTitleProgressionRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERankTitleFormat RankFormat;
    
    TBL_API FTitleProgressionRow();
};

