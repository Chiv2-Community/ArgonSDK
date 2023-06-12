#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EObjectivePointCategory.h"
#include "TeamScoringFormatDataTable.generated.h"

USTRUCT(BlueprintType)
struct FTeamScoringFormatDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EObjectivePointCategory::Type> ScoringType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText LocalizedText;
    
    TBL_API FTeamScoringFormatDataTable();
};

