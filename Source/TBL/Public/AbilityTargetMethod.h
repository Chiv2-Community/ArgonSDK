#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ActionContext.h"
#include "Result.h"
#include "TBLObject.h"
#include "AbilityTargetMethod.generated.h"

class AAbilityInvocation;
class AActor;
class UAbilitySpec;
class UAction;
class UCondition;

UCLASS(Abstract, Blueprintable, DefaultToInstanced, EditInlineNew, MinimalAPI)
class UAbilityTargetMethod : public UTBLObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bFinished: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUndoActionsOnCancel: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UCondition*> TargetPrerequisites;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAction*> TargetActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAction*> TargetBlockedActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TargetMethodName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUnblockable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoParryBoxTrace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Flags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActionContext Context;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStarted;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> Initiator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MultiTargetMethodIndex;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAbilitySpec* AbilitySpec;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AAbilityInvocation> Invocation;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AActor>> AcquiredTargets;
    
public:
    UAbilityTargetMethod();
    UFUNCTION(BlueprintCallable)
    void StartCosmetic();
    
    UFUNCTION(BlueprintCallable)
    void StartAutonomous();
    
    UFUNCTION(BlueprintCallable)
    void Start();
    
    UFUNCTION(BlueprintCallable)
    AAbilityInvocation* GetInvocation() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    FString GetContextString() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void Finish();
    
protected:
    UFUNCTION(BlueprintCallable)
    FVector ClampTargetLocationToGround(AActor* InInitiator, FVector TargetLocation, float MaxRange, bool& bHitGround, bool bTraceComplex, float MaxGroundTraceZAllowance);
    
public:
    UFUNCTION(BlueprintCallable)
    FResult CanInitiate() const;
    
    UFUNCTION(BlueprintCallable)
    void Cancel();
    
};

