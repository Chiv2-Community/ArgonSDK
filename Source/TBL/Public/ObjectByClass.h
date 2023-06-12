#pragma once
#include "CoreMinimal.h"
#include "ObjectByClass.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FObjectByClass {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UObject> Object;
    
    TBL_API FObjectByClass();
};

