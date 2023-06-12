#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "AnimDamageParams.h"
#include "AnimDeathParams.h"
#include "AnimNotifyStepEventDelegate.h"
#include "AnimNotifyWeaponAttachDelegate.h"
#include "AnimationSetDataTable.h"
#include "AttackInfo.h"
#include "AttackMontage.h"
#include "CombatStateMontage.h"
#include "ComboMontageRule.h"
#include "CrowdControlParams.h"
#include "CustomizationContext.h"
#include "DamageTakenEvent.h"
#include "DeathDamageTakenEvent.h"
#include "EAnimGraphBranch01.h"
#include "ECharacterSignificanceLevel.h"
#include "EConditionType.h"
#include "ECrowdControlVariant.h"
#include "EDismountType.h"
#include "EarlyHitResult.h"
#include "FootStepSounds.h"
#include "OnLadderAnimationEndedDelegate.h"
#include "ParryEventState.h"
#include "PeasantMontage.h"
#include "PostDamageEventInfo.h"
#include "TBLAnimInstance.h"
#include "Templates/SubclassOf.h"
#include "TBLCharacterAnimInstance.generated.h"

class AActor;
class AHorse;
class AInventoryItem;
class ATBLCharacter;
class AVaultMarker;
class UAnimMontage;
class UAnimationSet;
class UAttackType;
class UCombatState;
class UCurveFloat;
class UDamageSource;
class UDataTable;
class USceneComponent;
class USiegeMountPoint;
class UTBLBatteringRamAnimInstance;
class UTBLCharacterMovement;
class UTBLHorseAnimInstance;

UCLASS(Blueprintable, NonTransient)
class UTBLCharacterAnimInstance : public UTBLAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterSignificanceLevel SignificanceLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool WasRecentlyRendered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index_LOD;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimNotifyWeaponAttach OnAnimNotifyWeaponAttach;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimNotifyWeaponAttach OnAnimNotifyWeaponDetach;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimNotifyWeaponAttach OnAnimNotifyUseItem;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLadderAnimationEnded OnLadderAnimationEnded;
    
    UPROPERTY(BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimNotifyStepEvent OnAnimNotifyStepEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* LastSpawnMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LastSpawnSectionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnAnimStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ComboBlendTimeDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ThwackPlayRateCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FComboMontageRule, FName> ComboMontageRules;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FComboMontageRule, FName> ThwackComboMontageRules;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FComboMontageRule, FName> RiposteMontageRules;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> ThwackComboMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> FeintMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, float> DelayBackToIdle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimationSet> AnimationSetMount_Class_Default;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimationSet> AnimationSetSiege_Class_Default;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimationSet> AnimationSetOffhand1P_Class_Default;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimationSet> AnimationSetOffhand3P_Class_Default;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimationSet> AnimationSetPeasant_Class_Default;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimationSet> AnimationSetDeath1P_Default;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimationSet> AnimationSetDeath3P_Default;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Socket_LeftStirrup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Socket_RightStirrup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFootStepSounds FootStepSounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttackMontage CurrentAttackMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> AttackStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> SectionToCombatState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> AltCombatStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> HeavyAttacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName JabDeflectSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> DeflectSections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> AltDeflectSections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> ParryStartSections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> AltParryStartSections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> FeintToParrySections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> AltFeintToParrySections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> ParrySuccessSections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> AltParrySuccessSections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> KnockdownSections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> KnockdownGroundSections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> GetUpSections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> FallingSections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> FallingGetUpSections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> DownedKnockdownSections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> DownedStaggerSections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> DownedPickupSections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> MountUpSections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> MountDownSections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> MountCombatStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EConditionType, FName> MissingLimbNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> MountStaggerMontages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FPeasantMontage> PeasantStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ServerIdlePoseCombatStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ServerIdlePoseMovementStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> HideServerBones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATBLCharacter* TBLCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTBLCharacterMovement* movement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPostInitialized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Is3p;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CombatState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCombatState* CombatStateBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CombatStatePercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AbilityName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ComboState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAttackType* AttackType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator AimRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsDead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsRagdoll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsShieldEquipped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsCrouch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsDowned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsAttackQueued;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector InputDir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Velocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PreviousVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PreviousMeshLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VelocityInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentSpeed2d;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MovementDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MovementDirectionIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MovementDirectionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OnStrafeStopNeedsEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSpeedInCurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MovementStateWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MovementStateInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CharMoveWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MovementState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PreviousMovementState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DashDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator SprintTurnDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SprintTurnAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SprintTurnWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsLunge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LungeStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsOnHorse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTBLHorseAnimInstance* HorseAnimBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsOnSiege;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsAltPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SiegeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTBLAnimInstance* SiegeAnimBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTBLBatteringRamAnimInstance* BatteringRamAnimBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AnimationSetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AnimationSetName_OffHand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurrentEmoteName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurrentEmoteMontageName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPlayingSequencerAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LastMissingLimb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsItemEquipped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsLeftFootTap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsRightFootTap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttackWindupWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnimGraphBranch01 AnimGraphBranch01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsOffHandAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PreviousIsOnHorse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIdlePoseCombatState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIdlePoseMovementState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IdlePoseStateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialMoveTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimDamageParams PreviousDamageParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationSet* AnimationSetBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationSet* AnimationSetBase1P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationSet* AnimationSetBase3P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationSet* AnimationSetBaseMount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationSet* AnimationSetBaseSiege;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationSet* AnimationSetBaseDeath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationSet* PreviousAnimationSetBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHorse* Horse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Siege;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* ParryMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* ParryEventMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* ParryRiposteShieldMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* ParrySuccessMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATBLCharacter* CarryableParentCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* KnockdownMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName KnockdownDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* FallingMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* InteractMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* ReloadMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* PeasantMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCombatStateMontage CurrentCombatStateMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCarryablePickup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InventoryAnimationLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SprintTurnEndTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsCustomizationAnimInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LipSyncVOMeter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UAnimMontage*, UAnimMontage*> NoBlend1PMontages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationSet* CharAnimationSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationSet* CharAnimationSet1P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationSet* CharAnimationSet3P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationSet* CharAnimationSetMount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationSet* CharAnimationSetSiege;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationSet* CharAnimationSetDeath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationSet* CharAnimationSetOffHand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationSet* CharAnimationSetOffHand1P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationSet* CharAnimationSetOffHand3P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationSet* CharAnimationSetPeasant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationSet* CharPreviousAnimationSet;
    
    UTBLCharacterAnimInstance();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateFootStepSounds(float DeltaSeconds, bool bHidden);
    
    UFUNCTION(BlueprintCallable)
    void TriggerRagdoll();
    
    UFUNCTION(BlueprintCallable)
    void StopCurrentCombatStateMontage(FName NewCombatState, float BlendTime);
    
    UFUNCTION(BlueprintCallable)
    void StartPeasantAnimation(FName InCombatState);
    
    UFUNCTION(BlueprintCallable)
    void StartParryAttack(UAnimationSet* AnimSet);
    
    UFUNCTION(BlueprintCallable)
    void StartAttack(bool bIsHeavy);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldStopAnimGraph();
    
    UFUNCTION(BlueprintCallable)
    void SetOnHorse(bool bIsOnHorse);
    
    UFUNCTION()
    void SetDeathAnimationParameters(const FDamageTakenEvent& Event, uint32 RandomSeed);
    
    UFUNCTION(BlueprintCallable)
    void ReverseLadderAnimation();
    
    UFUNCTION(BlueprintCallable)
    void PlaySpawnAnimation(FName AnimationName);
    
    UFUNCTION(BlueprintCallable)
    void PlayLadderAnimation(FName SectionName);
    
    UFUNCTION(BlueprintCallable)
    float PlayInventoryItemUse(AInventoryItem* Item, bool bPickup);
    
    UFUNCTION(BlueprintCallable)
    float PlayInventoryItemUnequipped(AInventoryItem* Item);
    
    UFUNCTION(BlueprintCallable)
    float PlayInventoryItemEquipped(AInventoryItem* Item);
    
    UFUNCTION(BlueprintCallable)
    void PlayInventoryAnimation(FName Animation, AInventoryItem* Item);
    
    UFUNCTION(BlueprintCallable)
    void PlayHorseMountAnimation(FName AnimationName);
    
    UFUNCTION(BlueprintCallable)
    void PlayHorseLandedAnimation();
    
    UFUNCTION(BlueprintCallable)
    void PlayHorseDismountAnimation(FName AnimationName);
    
    UFUNCTION(BlueprintCallable)
    void PlayDeathAnimation();
    
    UFUNCTION(BlueprintCallable)
    void PlayCombatStateMontage(FName InCombatState, FName MontageName, FName SectionName, UAnimationSet* AnimSet);
    
    UFUNCTION(BlueprintCallable)
    void OnWasHitEarly(const FEarlyHitResult& EarlyHit);
    
    UFUNCTION(BlueprintCallable)
    void OnVault(AVaultMarker* VaultMarker);
    
    UFUNCTION(BlueprintCallable)
    void OnUnfreezeRagdollPhysics();
    
    UFUNCTION(BlueprintCallable)
    void OnSwitchAttack();
    
    UFUNCTION(BlueprintCallable)
    void OnStartAttack();
    
    UFUNCTION(BlueprintCallable)
    void OnSprintTurn();
    
    UFUNCTION(BlueprintCallable)
    void OnSpawnAnimationComplete(UAnimMontage* Montage, bool bInterrupted);
    
    UFUNCTION(BlueprintCallable)
    void OnSignificanceChanged(ECharacterSignificanceLevel InSignificance);
    
    UFUNCTION(BlueprintCallable)
    void OnSetRagdollPhysics();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnResetForAnimInstancePool();
    
    UFUNCTION(BlueprintCallable)
    void OnRecentlyRendered(bool bInRecentlyRendered);
    
    UFUNCTION(BlueprintCallable)
    void OnRagdollHitFxEvent(AActor* HitTaker, AActor* HitCauser, AInventoryItem* Weapon, const FHitResult& HitResult, const FVector& HitDirection, float Damage, UDamageSource* DamageSource, AActor* Projectile, FName AttackName);
    
    UFUNCTION(BlueprintCallable)
    void OnPostDamage(const FDamageTakenEvent& DamageEvent, const FPostDamageEventInfo& PostDamageInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnParrySuccess(ATBLCharacter* ThisCharacter, ATBLCharacter* OtherCharacter, FParryEventState ParryEventState);
    
    UFUNCTION(BlueprintCallable)
    void OnParryInEnded(UAnimMontage* Montage, bool bInterrupted);
    
    UFUNCTION(BlueprintCallable)
    void OnMovementStateUpdate(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void OnMovementStateChanged(FName NewMovementState);
    
    UFUNCTION(BlueprintCallable)
    void OnMovementActionStarted(FName MovementName, FRotator Direction);
    
    UFUNCTION(BlueprintCallable)
    void OnMovementActionFinished(FName MovementName);
    
    UFUNCTION(BlueprintCallable)
    void OnMount(AActor* AttachParent, USiegeMountPoint* MountPoint);
    
    UFUNCTION(BlueprintCallable)
    void OnMeleeSuccess(ATBLCharacter* DamagedCharacter);
    
    UFUNCTION(BlueprintCallable)
    void OnKilled(const FDeathDamageTakenEvent& Event);
    
    UFUNCTION(BlueprintCallable)
    void OnGetUp(FName Direction);
    
    UFUNCTION(BlueprintCallable)
    void OnFreezeRagdollPhysics();
    
    UFUNCTION(BlueprintCallable)
    void OnEquippedItemsChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnDismount(AActor* AttachParent, EDismountType DismountType);
    
    UFUNCTION(BlueprintCallable)
    void OnCustomizationApplied(const FCustomizationContext& Context);
    
    UFUNCTION(BlueprintCallable)
    void OnCrowdControlNoDamage(AActor* OwningActor, FName InCombatState, FCrowdControlParams CrowdControlParams);
    
    UFUNCTION(BlueprintCallable)
    void OnCrowdControl(FName InCombatState, const FAnimDamageParams& DamageEvent, ECrowdControlVariant CrowdControlVariant);
    
    UFUNCTION(BlueprintCallable)
    void OnConditionAdded(AActor* Actor, EConditionType Condition);
    
    UFUNCTION(BlueprintCallable)
    void OnCombatStateEvent(AActor* Actor, FName EventName, const FAttackInfo& EventAttackInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnCombatStateChanged(AActor* Actor, FName PreviousState, FName NewState, const FAttackInfo& EventAttackInfo, UCombatState* InCombatState);
    
    UFUNCTION(BlueprintCallable)
    void OnCombatStateBegin(AActor* Actor, FName State, const FAttackInfo& EventAttackInfo, UCombatState* InCombatState);
    
    UFUNCTION(BlueprintCallable)
    void OnChildAttachedToMesh(USceneComponent* Child);
    
    UFUNCTION(BlueprintCallable)
    void OnCarryableParent_CombatStateBegin(AActor* Actor, FName InCombatStateName, const FAttackInfo& EventAttackInfo, UCombatState* InCombatState);
    
    UFUNCTION(BlueprintCallable)
    void OnCarryableCharacterEvent(FName EventName, ATBLCharacter* ParentCharacter);
    
    UFUNCTION(BlueprintCallable)
    void OnBackToIdleTimer();
    
    UFUNCTION(BlueprintCallable)
    void OnAnimationSetChanged(FName AnimSetName, FAnimationSetDataTable AnimInfo, AInventoryItem* InventoryItem);
    
    UFUNCTION(BlueprintCallable)
    void OnAnimationComplete();
    
    UFUNCTION(BlueprintCallable)
    void NotifyCompleteDeathAnimation();
    
    UFUNCTION(BlueprintCallable)
    void LadderSectionChanged(UAnimMontage* Montage, int32 NextSection);
    
    UFUNCTION(BlueprintCallable)
    void LadderMontageEnded(UAnimMontage* Montage, bool bInterrupted);
    
    UFUNCTION(BlueprintCallable)
    void HideUnusedBonesOnServer();
    
    UFUNCTION(BlueprintCallable)
    void HideBones(TArray<FName> BoneList, TArray<FName> VisibleBones);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStopAnimGraphValue();
    
    UFUNCTION(BlueprintCallable)
    void GetSpawnMontage(FName AnimationName, UAnimMontage*& Montage, FName& MontageName, FName& SectionName);
    
    UFUNCTION(BlueprintCallable)
    float GetPhysicsSpawnTime(FName AnimationName);
    
    UFUNCTION(BlueprintCallable)
    float GetPeasantAnimationLength(FName InCombatState);
    
    UFUNCTION(BlueprintCallable)
    float GetMountAnimationLength(bool MountUp, FName Direction);
    
    UFUNCTION(BlueprintCallable)
    FVector GetLadderMountOffset(bool MountUp, bool bFromTop);
    
    UFUNCTION(BlueprintCallable)
    float GetInventoryAnimationLength();
    
    UFUNCTION(BlueprintCallable)
    FVector GetHorseDismountOffset(FName AnimationName);
    
    UFUNCTION(BlueprintCallable)
    void GetCurrentSpawnRootMotion(FVector& OutTranslation, FRotator& OutRotation, FName AnimationName, float Position);
    
    UFUNCTION(BlueprintCallable)
    float GetCurrentSpawnAnimationTime();
    
    UFUNCTION(BlueprintCallable)
    void GetCurrentRootMotion(FVector& OutTranslation, FRotator& OutRotation, UAnimMontage* Montage, FName SectionName, bool bEndAnimation, float Position);
    
    UFUNCTION(BlueprintCallable)
    void GetCurrentLadderRootMotion(FVector& OutTranslation, FRotator& OutRotation, FName SectionName, bool bEndAnimation);
    
    UFUNCTION(BlueprintCallable)
    UAnimationSet* GetAnimationSetFromData(FAnimationSetDataTable AnimInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventVOPlaying(bool IsPlaying);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventUnfreezeRagdollPhysics();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventSpawnMontageStart(const FName& AnimationName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventSpawnMontageComplete(const FName& AnimationName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventOnWantsToGallop(bool bWantsToGallop);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventOnStrafeStop();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventOnStartAttack(FName InAbilityName, FName InCombatState, FName InComboState, UAttackType* InAttackType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventOnSprintStop(bool bIsHoldingMoveKey);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventOnSprintState(FName SprintState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventOnSprintStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventOnSignificanceChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventOnSiegeMounted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventOnSiegeDismounted(EDismountType DismountType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventOnMovementStateChanged(FName InMovementState, FName InPreviousMovementState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventOnMovementDirectionChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventOnMovementActionStarted(FName MovementName, FRotator Direction);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventOnMissingLimb(FName Condition);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventOnMeleeHitSuccess(FName AttackName, FName AttackComboState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventOnLanded();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventOnKilled(const FAnimDeathParams& Params);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventOnJump();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventOnInterrupt(const FAnimDamageParams& DamageEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventOnHorseStartMount(FName Direction);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventOnHorseStartDismount(FName Direction);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventOnHorseMounted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventOnHorseDismounted(EDismountType DismountType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventOnHitAfterDeath(const FAnimDeathParams& Params);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventOnGetUp(FName Direction);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventOnDisarm();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventOnDashCooldownFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventOnDash(float InDashDirection);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventOnCrowdControl(FName InCombatState, const FAnimDamageParams& DamageEvent, ECrowdControlVariant CrowdControlVariant);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventOnCombatStateEnd(AActor* Actor, FName State, const FAttackInfo& EventAttackInfo, UCombatState* InCombatState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventOnCombatStateChanged(AActor* Actor, FName PreviousState, FName NewState, const FAttackInfo& EventAttackInfo, UCombatState* InCombatState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventOnCombatStateBegin(AActor* Actor, FName State, const FAttackInfo& EventAttackInfo, UCombatState* InCombatState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventOnCameraOffsetEnd(float AngleOffset);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventOnCameraOffsetBegin();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventHiddenPositionUpdate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventFreezeRagdollPhysics();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventDamageNoInterrupt(const FAnimDamageParams& DamageEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventCarryableCharacter(FName EventName, ATBLCharacter* ParentCharacter);
    
    UFUNCTION(BlueprintCallable)
    bool DoesAttackHaveActivateAbilityNotify(FName AttackName);
    
    UFUNCTION(BlueprintCallable)
    void DisableSpawnRootMotion(FName AnimationName);
    
    UFUNCTION(BlueprintCallable)
    void DisableAttackRootMotion();
    
    UFUNCTION(BlueprintCallable)
    void CustomizationWeaponToStand(UAnimMontage* Montage, bool bInterrupted);
    
    UFUNCTION(BlueprintCallable)
    void CustomizationStandToWeapon(UAnimMontage* Montage, bool bInterrupted);
    
    UFUNCTION(BlueprintCallable)
    void CarryableSectionChanged(UAnimMontage* Montage, int32 NextSection);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BlueprintOnAnimationSetChanged();
    
    UFUNCTION(BlueprintCallable)
    void AnimNotify_WeaponDetach();
    
    UFUNCTION(BlueprintCallable)
    void AnimNotify_WeaponAttach();
    
    UFUNCTION(BlueprintCallable)
    void AnimNotify_UseItem();
    
    UFUNCTION(BlueprintCallable)
    void AnimNotify_ShieldDetach();
    
    UFUNCTION(BlueprintCallable)
    void AnimNotify_ShieldAttach();
    
    UFUNCTION(BlueprintCallable)
    void AnimNotify_Revive();
    
    UFUNCTION(BlueprintCallable)
    void AnimNotify_DropWeapon();
    
};

