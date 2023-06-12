#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ProfaneWordData.generated.h"

USTRUCT(BlueprintType)
struct FProfaneWordData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Word;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExactMatch;
    
    TBL_API FProfaneWordData();
};

