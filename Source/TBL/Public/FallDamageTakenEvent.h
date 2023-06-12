#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "FallDamageTakenEvent.generated.h"

class UDamageSource;
class UPhysicalMaterial;

USTRUCT(BlueprintType)
struct FFallDamageTakenEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float Damage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize DamageTakerVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPhysicalMaterial* PhysMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDamageSource* DamageSource;
    
    TBL_API FFallDamageTakenEvent();
};

