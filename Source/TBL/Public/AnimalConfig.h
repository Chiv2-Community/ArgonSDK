#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AnimalConfig.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FAnimalConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> AnimalClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AnimalCount;
    
    TBL_API FAnimalConfig();
};

