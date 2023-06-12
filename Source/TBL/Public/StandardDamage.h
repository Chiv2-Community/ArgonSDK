#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Action.h"
#include "EDamageProperty.h"
#include "Templates/SubclassOf.h"
#include "StandardDamage.generated.h"

class AInventoryItem;
class UAttackType;
class UDamageSource;

UCLASS(Blueprintable, EditInlineNew)
class UStandardDamage : public UAction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float BaseDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDamageSource* DamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAttackType* AttackType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<AInventoryItem> ItemClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDamageProperty DamageProperty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle ItemDamageTimerHandle;
    
public:
    UStandardDamage();
};

