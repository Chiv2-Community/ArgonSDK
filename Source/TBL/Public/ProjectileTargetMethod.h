#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "CompositeTargetMethod.h"
#include "ProjectileTargetMethod.generated.h"

class AActor;
class AInventoryItem;
class ATBLCharacter;
class UAbilityTargetMethod;
class UAction;
class UPrimitiveComponent;
class UProjectileCollision;
class USceneComponent;
class UTBLProjectileMovementComponent;

UCLASS(Blueprintable, EditInlineNew)
class UProjectileTargetMethod : public UCompositeTargetMethod {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAction*> ProjectileSpawnedActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ProjectileName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAbilityTargetMethod* HitTargetMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHitDeactivatesInvocation;
    
protected:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AInventoryItem> Projectile;
    
    UPROPERTY(EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UTBLProjectileMovementComponent> ProjectileMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AllowedClientSpawnLocationErrorSq;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWantsToFinish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHitResult> DelayedCharacterHits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHitResult> DelayedNonCharacterHits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHitResult> DelayedCharacterHitsCosmetic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHitResult> DelayedNonCharacterHitsCosmetic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UProjectileCollision*> CollisionHandlers;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AInventoryItem> CosmeticProjectile;
    
    UPROPERTY(EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UTBLProjectileMovementComponent> CosmeticProjectileMovement;
    
    UPROPERTY(EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UTBLProjectileMovementComponent> FakeClientProjectile;
    
    UPROPERTY(EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TMap<TWeakObjectPtr<UTBLProjectileMovementComponent>, TWeakObjectPtr<UTBLProjectileMovementComponent>> FakeClientTargetMap;
    
    UPROPERTY(EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USceneComponent> FakeClientUpdatedComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastFakeClientTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FakeClientTotalTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bSpawnFakeProjectileOnServerRep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector FakeClientInterpOffset;
    
public:
    UProjectileTargetMethod();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateFakeClientProjectile();
    
    UFUNCTION(BlueprintCallable)
    AInventoryItem* SpawnProjectile(FTransform SpawnTransform, bool bFakeClient, AActor* TargetProj, int32 InvocationId);
    
    UFUNCTION(BlueprintCallable)
    void OnStop(const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void OnProjectileMovementFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnProjectileDisabled();
    
    UFUNCTION(BlueprintCallable)
    void OnProjectileDestroyedCosmetic(AActor* DestroyedActor);
    
    UFUNCTION(BlueprintCallable)
    void OnProjectileDestroyed(AActor* DestroyedActor);
    
    UFUNCTION(BlueprintCallable)
    void OnProjectileBeginPlay(AInventoryItem* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnHitCosmetic(AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void OnHit(AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginOverlapCosmetic(AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& HitResult);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginOverlap(AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& OverlapInfo);
    
    UFUNCTION(BlueprintCallable)
    void HandlePassiveShieldHit(AInventoryItem* Shield, ATBLCharacter* HitCharacter, FHitResult Hit);
    
    UFUNCTION(BlueprintCallable)
    bool HandleParries(FHitResult Hit, ATBLCharacter* HitCharacter);
    
    UFUNCTION(BlueprintCallable)
    void HandleDelayedHitsCosmetic();
    
    UFUNCTION(BlueprintCallable)
    void HandleDelayedHits();
    
    UFUNCTION(BlueprintCallable)
    void AddDelayedHit(const FHitResult& Hit);
    
};

