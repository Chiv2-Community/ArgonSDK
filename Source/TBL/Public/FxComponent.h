#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MaterialOverrideState.h"
#include "Templates/SubclassOf.h"
#include "FxComponent.generated.h"

class AActor;
class UBlueprint;
class UFxComponent;
class UFxInstance;
class UMaterialInterface;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFxComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UBlueprint*> PersistentFXs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UBlueprint*> PersistentFXsForOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UFxInstance>> PersistentFXComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UFxInstance>> PersistentFXComponentsForOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFxInstance*> PersistentFXInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMaterialOverrideState MaterialOverrideState;
    
    UFxComponent();
    UFUNCTION(BlueprintCallable)
    void PushMaterialOverride(UMaterialInterface* Material);
    
    UFUNCTION(BlueprintCallable)
    void PopMaterialOverride();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UFxInstance* GetFXInstanceFromActor(AActor* Actor, UClass* Blueprint, bool bCreateIfNeeded);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UFxComponent* GetFXComponent(AActor* Actor);
    
};

