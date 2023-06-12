#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "EPushingDirection.h"
#include "PushOverTime.h"
#include "PushingOverlapCharactersDelegate.h"
#include "ReplicatedSubobjectInterface.h"
#include "Replicated_FVector.h"
#include "Replicated_Int32.h"
#include "PushingComponent.generated.h"

class AActor;
class ATBLCharacterBase;
class UPrimitiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPushingComponent : public UActorComponent, public IReplicatedSubobjectInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPushingOverlapCharacters OnOverlapCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCannotBePushed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinPushSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxPushSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FallingPushSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FallingPushBackSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FallingOverlapOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CollisionProfileName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PushedVelocity;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BasePushingPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PushingPriority, meta=(AllowPrivateAccess=true))
    FReplicated_Int32 PushingPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DesiredPushedVelocity, meta=(AllowPrivateAccess=true))
    FReplicated_FVector DesiredPushedVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPushingDirection PushingDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PushedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PreviousLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Velocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOwnerIsCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, int32> PushingInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PushingInstanceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPushOverTime PushOverTimeParams;
    
public:
    UPushingComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void UpdatePushingWhileFalling(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void UpdatePushing(float DeltaSeconds, const FVector& OldLocation);
    
    UFUNCTION(BlueprintCallable)
    void UpdatePushed(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    bool ShouldPush(AActor* OtherActor);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetPushingDirection(EPushingDirection Direction);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetPushedVelocity(FVector PushVel);
    
    UFUNCTION(BlueprintCallable)
    void PushActor(AActor* Actor, FVector PushVel);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PushingPriority();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DesiredPushedVelocity();
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterMovementUpdated(float DeltaSeconds, FVector OldLocation, FVector OldVelocity);
    
    UFUNCTION(BlueprintCallable)
    bool HasEqualPriority(AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    FVector GetPushVelocity(AActor* PushingActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    float GetPushingRadius(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    FVector GetOwnerVelocity();
    
    UFUNCTION(BlueprintCallable)
    FVector GetFallingPushDirection(AActor* PushingActor, AActor* OtherActor, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    TArray<UPrimitiveComponent*> GetCollisionComponents();
    
    UFUNCTION(BlueprintCallable)
    bool FindOverlappingCharacters(TArray<ATBLCharacterBase*>& OutCharacters, FVector Offset);
    
    
    // Fix for true pure virtual functions not being implemented
};

