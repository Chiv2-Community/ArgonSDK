#pragma once
#include "CoreMinimal.h"
#include "ProjectileTargetMethod.h"
#include "BombardTargetMethod.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UBombardTargetMethod : public UProjectileTargetMethod {
    GENERATED_BODY()
public:
    UBombardTargetMethod();
};

