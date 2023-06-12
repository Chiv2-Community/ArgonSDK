#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "RagdollHitEventDelegate.generated.h"

class AActor;
class AInventoryItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FRagdollHitEvent, AActor*, HitTaker, AActor*, HitCauser, AInventoryItem*, Weapon, const FHitResult&, HitResult);

