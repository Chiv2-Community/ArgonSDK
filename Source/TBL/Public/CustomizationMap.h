#pragma once
#include "CoreMinimal.h"
#include "EAudioClassType.h"
#include "EFaction.h"
#include "CustomizationMap.generated.h"

class AInventoryItem;
class UCTBase;

USTRUCT(BlueprintType)
struct FCustomizationMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFaction Faction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EAudioClassType::Type> Class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<UCTBase>, TSoftObjectPtr<UCTBase>> CustomizationMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<AInventoryItem>, TSoftObjectPtr<UCTBase>> WeaponsList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UCTBase*> ReplicatedCustomization;
    
    TBL_API FCustomizationMap();
};

