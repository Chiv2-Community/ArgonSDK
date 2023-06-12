#pragma once
#include "CoreMinimal.h"
#include "KillWithWeaponWorker.h"
#include "WeaponVsWeaponWorker.generated.h"

UCLASS(Blueprintable)
class UWeaponVsWeaponWorker : public UKillWithWeaponWorker {
    GENERATED_BODY()
public:
    UWeaponVsWeaponWorker();
};

