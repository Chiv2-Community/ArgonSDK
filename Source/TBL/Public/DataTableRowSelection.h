#pragma once
#include "CoreMinimal.h"
#include "DataTableRowSelection.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct FDataTableRowSelection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RowName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAddNoneOption;
    
    TBL_API FDataTableRowSelection();
};

