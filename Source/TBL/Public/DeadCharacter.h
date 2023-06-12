#pragma once
#include "CoreMinimal.h"
#include "DeadCharacter.generated.h"

class ATBLCharacter;

USTRUCT(BlueprintType)
struct FDeadCharacter {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ATBLCharacter> Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KilledTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpawnedGoreHead;
    
    TBL_API FDeadCharacter();
};

