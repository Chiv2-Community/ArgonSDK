#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "AIActorsByTag.h"
#include "AITags.h"
#include "BehaviorSetOverride.h"
#include "DeathDamageTakenEvent.h"
#include "TagBehaviorSetRow.h"
#include "AITagSystem.generated.h"

class AActor;
class AInventoryItem;
class ASiegeEngine;
class UDataTable;

UCLASS(Blueprintable, Config=Game)
class UAITagSystem : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<AActor*, FAITags> Tags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FAIActorsByTag> ActorsByTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<AInventoryItem>, FBehaviorSetOverride> InventoryItemBehaviorSets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<ASiegeEngine>, FBehaviorSetOverride> SiegeEngineBehaviorSets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FBehaviorSetOverride> ActiveAgathaBehaviorSets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FBehaviorSetOverride> ActiveMasonBehaviorSets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FBehaviorSetOverride> ActiveTenosiaBehaviorSets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FTagBehaviorSetRow> TagBehaviorSets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    FSoftObjectPath TagBehaviorTablePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* TagBehaviorTable;
    
public:
    UAITagSystem();
private:
    UFUNCTION(BlueprintCallable)
    void OnActorKilled(const FDeathDamageTakenEvent& DamageEvent);
    
    UFUNCTION(BlueprintCallable)
    void OnActorDestroyed(AActor* DestroyedActor);
    
};

