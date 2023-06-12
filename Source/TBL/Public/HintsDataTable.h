#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EHintInputType.h"
#include "EHintType.h"
#include "HintsDataTable.generated.h"

USTRUCT(BlueprintType)
struct FHintsDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EHintType::Type>> HintTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EHintInputType::Type>> InputType;
    
    TBL_API FHintsDataTable();
};

