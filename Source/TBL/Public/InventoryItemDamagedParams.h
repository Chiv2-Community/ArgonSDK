#pragma once
#include "CoreMinimal.h"
#include "InventoryItemDamagedParams.generated.h"

class AActor;
class UDamageSource;

USTRUCT(BlueprintType)
struct FInventoryItemDamagedParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Damage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDamageSource* DamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* DamageCauser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NewHealthValue;
    
    TBL_API FInventoryItemDamagedParams();
};

