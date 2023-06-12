#pragma once
#include "CoreMinimal.h"
#include "ClassDataTableMap.generated.h"

USTRUCT(BlueprintType)
struct FClassDataTableMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DataTableRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AbilityPropertyName;
    
    TBL_API FClassDataTableMap();
};

