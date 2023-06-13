#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AssemblyInstance -FallbackName=AssemblyInstance
#include "Engine_misc.h"
#include "Engine/EngineTypes.h"
#include "MovementActionInitiationParams.h"
#include "MovementInstanceDelegateDelegate.h"
#include "MovementInstance.generated.h"

class AActor;
class ATBLCharacter;
class ATBLCharacterBase;
class UMovementAction;
class UMovementSequence;
class UTBLObject;

UCLASS(Blueprintable, MinimalAPI)
class UMovementInstance : public UAssemblyInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovementInstanceDelegate OnStartMovement;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovementInstanceDelegate OnFinishMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMovementSequence* Sequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* TargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovementActionInitiationParams InitParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScalingFactor;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMovementAction* CurrentMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FinishTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTBLObject*> InstancedObjects;
    
public:
    UMovementInstance();
    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable)
    void StartMovement(UMovementSequence* MovementSeq);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnWallHit(AActor* Owner, AActor* HitActor, float HitAngle);
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterHit(AActor* Owner, ATBLCharacter* HitCharacter);
    
    UFUNCTION(BlueprintCallable)
    void OnActorHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
    
public:
    UFUNCTION(BlueprintCallable)
    ATBLCharacterBase* GetCharacterOwner() const;
    
};

