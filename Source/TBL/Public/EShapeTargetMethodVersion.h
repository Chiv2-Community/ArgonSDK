#pragma once
#include "CoreMinimal.h"
#include "EShapeTargetMethodVersion.generated.h"

UENUM(BlueprintType)
namespace EShapeTargetMethodVersion {
    enum Type {
        QueryObjectTypes,
        SaveVersionAsInt,
        Latest,
    };
}

