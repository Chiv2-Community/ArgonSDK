#pragma once
#include "CoreMinimal.h"
#include "KillWithWeaponTask.h"
#include "WeaponVsWeaponTask.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UWeaponVsWeaponTask : public UKillWithWeaponTask {
    GENERATED_BODY()
public:
    UWeaponVsWeaponTask();
};

