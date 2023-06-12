#pragma once
#include "CoreMinimal.h"
#include "ECharacterClass.h"
#include "ClassLimitStruct.generated.h"

USTRUCT(BlueprintType)
struct FClassLimitStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterClass Class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClassLimitPercent;
    
    TBL_API FClassLimitStruct();
};

