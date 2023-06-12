#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimInstance.h"
#include "Animation/AnimInstance.h"
#include "AnimDebugMontage.h"
#include "AnimDebugMontageInstance.h"
#include "AnimDebugStateMachine.h"
#include "TBLAnimInstance.generated.h"

class UAnimMontage;
class UCombatStateComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable, NonTransient, Config=Game)
class UTBLAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWantsUpdateAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRandomStream RandStream;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastUpdateAnimationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastUpdateAnimationInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCombatStateComponent* CombatStateComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LODLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    float FarFromCameraDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFarFromCamera;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> HideLowLodBones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGatherDebugNodeVisit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDumpAnimationInfoToFile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DebugNodeVisitFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FAnimDebugMontage> MontageDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FAnimDebugStateMachine> StateMachineDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> DebugAnimNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> DefaultDebugCategories;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> StateMachineNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> CrowdControlVariant1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> CrowdControlVariant2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> CrowdControlVariant3;
    
public:
    UTBLAnimInstance();
    UFUNCTION(BlueprintCallable)
    void SetLODLevel(int32 NewLodLevel);
    
    UFUNCTION(BlueprintCallable)
    void SetIsFarFromCamera(bool bIsFar);
    
    UFUNCTION(BlueprintCallable)
    void Montage_StopAll(float InBlendOutTime);
    
    UFUNCTION(BlueprintCallable)
    float Montage_PlaySection(UAnimMontage* MontageToPlay, FName StartingSection, float InPlayRate, float StartSectionPercent, float InBlendTime, EMontagePlayReturnType ReturnValueType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool Montage_IsAnyMontagePlayingOnSlot(const FName SlotNodeName) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    TArray<FString> GetDebugNodeVisit_Blend();
    
    UFUNCTION(BlueprintCallable)
    TArray<FString> GetDebugNodeVisit();
    
public:
    UFUNCTION(BlueprintCallable)
    TArray<FAnimDebugMontageInstance> GetDebugMontageInstances();
    
protected:
    UFUNCTION(BlueprintCallable)
    void GatherDebugNodeVisit();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventOnLODLevelChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventFarFromCameraChanged();
    
protected:
    UFUNCTION(BlueprintCallable)
    void DumpAnimationInfoToFile();
    
public:
    UFUNCTION(BlueprintCallable)
    void AnimNotify_EndWeaponTracers();
    
    UFUNCTION(BlueprintCallable)
    void AnimNotify_ActivateAbility();
    
};

