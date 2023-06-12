#pragma once
#include "CoreMinimal.h"
#include "AIDismountData.generated.h"

class AAIController;
class ATBLCharacter;

USTRUCT(BlueprintType)
struct FAIDismountData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AAIController> AIController;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ATBLCharacter> Character;
    
    TBL_API FAIDismountData();
};

