#pragma once
#include "CoreMinimal.h"
#include "ActorArray.h"
#include "InventoryItemPool.h"
#include "OutOfCombatZoneVolumeTickFunction.h"
#include "RagdollTickFunction.h"
#include "TBLGameSingletonPerWorld.generated.h"

class UCustomizationConfig;
class UTextureAtlasManager;
class UWorld;

USTRUCT(BlueprintType)
struct FTBLGameSingletonPerWorld {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWorld* World;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FActorArray> ActorsByTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCustomizationConfig*> CustomizationConfigs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureAtlasManager* TextureAtlasManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInventoryItemPool InventoryItemPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FName> LoadedCinematicSublevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRagdollTickFunction RagdollTickFunction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOutOfCombatZoneVolumeTickFunction OutOfCombatZoneTickFunction;
    
    TBL_API FTBLGameSingletonPerWorld();
};

