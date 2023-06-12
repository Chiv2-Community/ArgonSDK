#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "CustomFastArraySerializer.generated.h"

USTRUCT(BlueprintType)
struct FCustomFastArraySerializer : public FFastArraySerializer {
    GENERATED_BODY()
public:
    TBL_API FCustomFastArraySerializer();
};

