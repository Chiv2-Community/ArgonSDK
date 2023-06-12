#pragma once
#include "CoreMinimal.h"
#include "HitActorWithItemInfo.generated.h"

class AActor;
class AInventoryItem;

USTRUCT(BlueprintType)
struct FHitActorWithItemInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* HitActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AInventoryItem* AttackingItem;
    
    TBL_API FHitActorWithItemInfo();
};

