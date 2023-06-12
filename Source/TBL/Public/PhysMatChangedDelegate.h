#pragma once
#include "CoreMinimal.h"
#include "PhysMatChangedDelegate.generated.h"

class UPhysicalMaterial;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPhysMatChanged, UPhysicalMaterial*, PrevMaterial, UPhysicalMaterial*, NewMaterial);

