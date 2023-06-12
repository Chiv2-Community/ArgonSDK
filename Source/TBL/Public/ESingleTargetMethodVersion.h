#pragma once
#include "CoreMinimal.h"
#include "ESingleTargetMethodVersion.generated.h"

UENUM(BlueprintType)
namespace ESingleTargetMethodVersion {
    enum Type {
        MultipleTraces,
        SaveVersionAsInt,
        TargetObjectTypes,
        Latest,
    };
}

