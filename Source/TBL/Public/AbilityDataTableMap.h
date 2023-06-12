#pragma once
#include "CoreMinimal.h"
#include "AbilityDataTableMap.generated.h"

USTRUCT(BlueprintType)
struct FAbilityDataTableMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DataTableColumn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AbilityPropertyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float Value;
    
    TBL_API FAbilityDataTableMap();
};

