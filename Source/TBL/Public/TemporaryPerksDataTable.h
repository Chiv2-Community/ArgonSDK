#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ETemporaryPerkType.h"
#include "TemporaryPerksDataTable.generated.h"

USTRUCT(BlueprintType)
struct FTemporaryPerksDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETemporaryPerkType TemporaryPerkType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    TBL_API FTemporaryPerksDataTable();
};

