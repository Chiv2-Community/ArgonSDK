#pragma once
#include "CoreMinimal.h"
#include "EGameSparksDataType.h"
#include "GameSparksMapping.generated.h"

USTRUCT(BlueprintType)
struct FGameSparksMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGameSparksDataType DataType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ShortCode;
    
    TBL_API FGameSparksMapping();
};

