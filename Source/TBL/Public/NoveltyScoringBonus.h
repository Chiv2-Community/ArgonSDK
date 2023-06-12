#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "NoveltyScoringBonus.generated.h"

USTRUCT(BlueprintType)
struct FNoveltyScoringBonus : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText LocalizedText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BonusScore;
    
    TBL_API FNoveltyScoringBonus();
};

