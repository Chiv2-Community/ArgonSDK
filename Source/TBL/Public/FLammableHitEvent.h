#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FLammableHitEvent.generated.h"

class AActor;
class AInventoryItem;
class UFlammableStaticMeshComponent;

USTRUCT(BlueprintType)
struct FFLammableHitEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFlammableStaticMeshComponent* HitFlammableComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RelativeHitLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* DamageCauser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AInventoryItem* InventoryItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Projectile;
    
    TBL_API FFLammableHitEvent();
};

