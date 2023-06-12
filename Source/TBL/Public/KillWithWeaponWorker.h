#pragma once
#include "CoreMinimal.h"
#include "BaseKillWorker.h"
#include "KillWithWeaponWorker.generated.h"

UCLASS(Blueprintable)
class UKillWithWeaponWorker : public UBaseKillWorker {
    GENERATED_BODY()
public:
    UKillWithWeaponWorker();
};

