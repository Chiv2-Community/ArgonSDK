#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "ProjectileCollision.generated.h"

class AActor;
class UPrimitiveComponent;
class UShapeComponent;
class UTBLProjectileMovementComponent;

UCLASS(Blueprintable)
class UProjectileCollision : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UShapeComponent> ShapeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCosmeticCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTBLProjectileMovementComponent* ProjectileMovement;
    
    UProjectileCollision();
    UFUNCTION(BlueprintCallable)
    void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& OverlapInfo);
    
    UFUNCTION(BlueprintCallable)
    bool IgnoreCharactersBehind(FHitResult Hit) const;
    
    UFUNCTION(BlueprintCallable)
    void HandleDelayedHits();
    
};

