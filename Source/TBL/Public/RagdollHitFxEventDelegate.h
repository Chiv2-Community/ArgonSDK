#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "RagdollHitFxEventDelegate.generated.h"

class AActor;
class AInventoryItem;
class UDamageSource;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_NineParams(FRagdollHitFxEvent, AActor*, HitTaker, AActor*, HitCauser, AInventoryItem*, Weapon, const FHitResult&, HitResult, const FVector&, HitDirection, float, Damage, UDamageSource*, DamageSource, AActor*, Projectile, FName, AttackName);

