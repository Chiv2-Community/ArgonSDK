#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ReplicatedSubobject.generated.h"

UCLASS(Abstract, Blueprintable)
class TBL_API UReplicatedSubobject : public UObject {
    GENERATED_BODY()
public:
    UReplicatedSubobject();
};

