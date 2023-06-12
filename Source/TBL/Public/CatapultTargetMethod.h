#pragma once
#include "CoreMinimal.h"
#include "ProjectileTargetMethod.h"
#include "CatapultTargetMethod.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCatapultTargetMethod : public UProjectileTargetMethod {
    GENERATED_BODY()
public:
    UCatapultTargetMethod();
};

