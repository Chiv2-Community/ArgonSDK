#pragma once
#include "CoreMinimal.h"
#include "TeamProgressStruct.generated.h"

class ATBLTeam;

USTRUCT(BlueprintType)
struct FTeamProgressStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATBLTeam* Team;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Progress;
    
    TBL_API FTeamProgressStruct();
};

