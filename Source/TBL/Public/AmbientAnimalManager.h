#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AnimalConfig.h"
#include "EAnimalPopType.h"
#include "FleeData.h"
#include "TBLActor.h"
#include "AmbientAnimalManager.generated.h"

class AActor;
class UAIPerceptionComponent;
class USphereComponent;

UCLASS(Blueprintable)
class TBL_API AAmbientAnimalManager : public ATBLActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAnimalConfig> AmbientAnimalList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GeneratingRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> CachedAmbientAnimalList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_FleeData, meta=(AllowPrivateAccess=true))
    FFleeData FleeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* SphereComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAIPerceptionComponent* PerceptionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> RemainingAmbientAnimalList;
    
public:
    AAmbientAnimalManager();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void ReseedAnimalActors();
    
    UFUNCTION(BlueprintCallable)
    void RegenerateAndReseedAnimalActors();
    
protected:
    UFUNCTION(BlueprintCallable)
    void PopAnimal(EAnimalPopType Type);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_FleeData();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void HideAnimals();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void FleeAnimals(FVector InstigatorLocation);
    
};

