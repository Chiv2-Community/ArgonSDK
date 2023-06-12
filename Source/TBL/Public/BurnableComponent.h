#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DamageTakenEvent.h"
#include "OnDamageAppliedToFlammableComponentDelegate.h"
#include "Templates/SubclassOf.h"
#include "BurnableComponent.generated.h"

class UConditionsComponent;
class UDamageSource;
class UFlammableStaticMeshComponent;
class UStatsComponent;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBurnableComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UStatsComponent> Stats;
    
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UConditionsComponent> ConditionsComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDamageSource* DamageSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFlammableStaticMeshComponent> FlammableStaticMeshComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SphereCollisionRadius;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDamageAppliedToFlammableComponent OnDamageAppliedToFlammableComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PercentHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActorBoundingBoxTweak;
    
    UBurnableComponent();
    UFUNCTION(BlueprintCallable)
    void HandleOwnerDamageTaken(const FDamageTakenEvent& Event);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeUntilBurnedDown() const;
    
};

