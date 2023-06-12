#pragma once
#include "CoreMinimal.h"
#include "Replicated_ATBLTeamPtr.generated.h"

class ATBLTeam;

USTRUCT(BlueprintType)
struct FReplicated_ATBLTeamPtr {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATBLTeam* Value;
    
public:
    TBL_API FReplicated_ATBLTeamPtr();
};

