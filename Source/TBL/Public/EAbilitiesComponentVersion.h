#pragma once
#include "CoreMinimal.h"
#include "EAbilitiesComponentVersion.generated.h"

UENUM(BlueprintType)
namespace EAbilitiesComponentVersion {
    enum Type {
        MigrateAbilityGrants,
        SaveVersionAsInt,
        Latest,
    };
}

