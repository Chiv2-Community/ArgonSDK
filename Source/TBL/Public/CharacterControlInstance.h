#pragma once
#include "CoreMinimal.h"
#include "CharacterControlInstance.generated.h"

USTRUCT(BlueprintType)
struct FCharacterControlInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> Stats;
    
    TBL_API FCharacterControlInstance();
};

