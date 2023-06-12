#pragma once
#include "CoreMinimal.h"
#include "AISystem.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "ControllerArray.h"
#include "EFaction.h"
#include "Templates/SubclassOf.h"
#include "WeaponClassSet.h"
#include "TBLAISystem.generated.h"

class AActor;
class AController;
class AInventoryItem;
class ATBLAIController;
class ATBLCharacter;
class UAITagSystem;
class UObject;
class UUtilityAI_Behavior;

UCLASS(Blueprintable, Config=Game)
class UTBLAISystem : public UAISystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ATBLAIController*, AActor*> CurrentTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<AActor*, FControllerArray> CurrentTargeters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ATBLAIController*, FWeaponClassSet> ControllerWeaponMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<AInventoryItem>, FControllerArray> WeaponMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ATBLAIController*, TSubclassOf<UUtilityAI_Behavior>> ControllerBehaviourMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UUtilityAI_Behavior>, FControllerArray> BehaviourMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ATBLAIController*, FVector> ControllerLocationMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FVector, FControllerArray> LocationMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FString> BotNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<ATBLAIController*> BotsWithSpecialNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAITagSystem* TagSystem;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle ObjectiveTimeRequestTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastKnownObjectiveTimeRemaining;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastKnownObjectiveTimePercentRemaining;
    
public:
    UTBLAISystem();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RemoveAvoidanceArea(UObject* Instigator);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerPossessed(AController* Controller, ATBLCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    void NotifyControllerTargetLocation(ATBLAIController* Controller, const FVector& NewTargetLocation);
    
    UFUNCTION(BlueprintCallable)
    void NotifyControllerTarget(ATBLAIController* Controller, AActor* NewTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetSpawnCenter(EFaction Faction);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetObjectiveTimeRemaining() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetObjectiveTimePercentRemaining() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumControllersWithWeapon(TSubclassOf<AInventoryItem> Weapon) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumControllersWithBehaviour(TSubclassOf<UUtilityAI_Behavior> Behaviour) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumControllersTargettingLocation(const FVector& TargetLocation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumControllersTargetting(AActor* Target) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumControllersRegistered(EFaction Faction) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSet<ATBLAIController*> GetControllersWithWeapon(TSubclassOf<AInventoryItem> Weapon) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSet<ATBLAIController*> GetControllersWithBehaviour(TSubclassOf<UUtilityAI_Behavior> Behaviour) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSet<ATBLAIController*> GetControllersTargettingLocation(const FVector& TargetLocation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSet<ATBLAIController*> GetControllersTargetting(AActor* Target) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void CreateAvoidanceArea(UObject* Instigator, const FVector& Location, float Radius);
    
};

