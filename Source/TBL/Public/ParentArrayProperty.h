#pragma once
#include "CoreMinimal.h"
#include "ParentArrayProperty.generated.h"

class UFunction;
class UStruct;

USTRUCT(BlueprintType)
struct FParentArrayProperty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStruct* ParentStruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFunction* Function;
    
    TBL_API FParentArrayProperty();
};

