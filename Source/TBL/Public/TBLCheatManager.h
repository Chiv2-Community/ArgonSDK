#pragma once
#include "CoreMinimal.h"
#include "GameFramework/CheatManager.h"
#include "Engine/EngineBaseTypes.h"
#include "EStat.h"
#include "TBLCheatManager.generated.h"

class ATBLAIController;
class ATBLCharacter;
class UCombatStateComponent;
class UObject;
class UTBLBPCheatManager;

UCLASS(Blueprintable, Config=Game)
class UTBLCheatManager : public UCheatManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UTBLBPCheatManager> BPCheatManagerClass;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AutoAttackName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoAttackLoopTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoAttackChargeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AutoAttackHoldName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGodMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvulnerable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableStaminaDrain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUnlimitedAmmo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRandomAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMoveToCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRunAway;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAutoAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsHeldParry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRandomizeLoadout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFOVUncapped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayerRVOEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerRVOConsiderationRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoClimbDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> RandomAttacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ParryAbilities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATBLAIController* ClientAIController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> ExecFileCommands;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExecFileDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTBLBPCheatManager* BPCheatManager;
    
public:
    UTBLCheatManager();
    UFUNCTION(BlueprintCallable, Exec)
    void UpdateVirtualGood();
    
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateRunAway(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void UpdateMoveToCharacter(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void UpdateExecFileCommands(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void UpdateAutoAttackHold();
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void UnpauseCharacter();
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnpauseAI();
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlimitedAmmo();
    
    UFUNCTION(BlueprintCallable, Exec)
    void UncapFOV();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleShowBothMeshes();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleCameraAnimsAndShakes();
    
    UFUNCTION(BlueprintCallable)
    void Tick(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TestRPCDesync();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TestDrawTime();
    
    UFUNCTION(BlueprintCallable, Exec)
    void StopHeldParry();
    
    UFUNCTION(BlueprintCallable, Exec)
    void StopExecFile();
    
    UFUNCTION(BlueprintCallable, Exec)
    void StopDumpingReplication();
    
    UFUNCTION(BlueprintCallable, Exec)
    void StopAllSounds();
    
    UFUNCTION(BlueprintCallable, Exec)
    void StartHeldParry();
    
    UFUNCTION(BlueprintCallable, Exec)
    void StartDumpingReplication();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SpawnAsPeasant();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SpamRPC(int32 NumCalls, int32 NumBytesPerCall);
    
    UFUNCTION(BlueprintCallable)
    void SkipPushableToEndPoint(UObject* PushableActor);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SimulateLostServerConnection();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowThirdPersonMesh();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowServerFollowMesh();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowFirstPersonMesh();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowBothMeshes();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetWatchedCharacter();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetStatBase(EStat Stat, float Value);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetPawnRVO(ATBLCharacter* Character, bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetPauseCharacter(bool bPaused);
    
    UFUNCTION(BlueprintCallable)
    void SetPauseAI(bool bPaused);
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void SetHealth(float Value);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetCulture(const FString& Culture);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetAmmo(int32 Ammo);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SendToTrace(const FString& Command);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SendToAll(const FString& Command);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SendCheatToServerObj(FName CheatComand, UObject* Obj);
    
    UFUNCTION(BlueprintCallable)
    void SendCheatToServer(FName CheatComand, FName Param);
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void SaveAll(const FString& ClassName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Revive();
    
    UFUNCTION(BlueprintCallable, Exec)
    void RespawnLoadout();
    
    UFUNCTION(BlueprintCallable, Exec)
    void RespawnImmediately();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ResetHeldParry();
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void RemoveStamina();
    
    UFUNCTION(BlueprintCallable, Exec)
    void RechargeSpecialItem();
    
    UFUNCTION(BlueprintCallable)
    void ReceivedCheatFromClientObj(FName CheatCommand, UObject* Param);
    
    UFUNCTION(BlueprintCallable)
    void ReceivedCheatFromClient(FName CheatCommand, FName Param);
    
    UFUNCTION(BlueprintCallable, Exec)
    void RandomizeLoadout(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PushLogs(const FString& SourcePath, const FString& DestPath);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PushCmdToTrace(const FString& Cmd);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PushCmd(const FString& Cmd);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PromptForRemoteDebugging();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ProfileGpuTopMaterials();
    
    UFUNCTION(BlueprintCallable, Exec)
    void PrintStats();
    
    UFUNCTION(BlueprintCallable, Exec)
    void PlayFromHere();
    
    UFUNCTION(BlueprintCallable, Exec)
    void PlayerRVOEnable(float AvoidanceRadius);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PlayerRVODisable();
    
    UFUNCTION(BlueprintCallable, Exec)
    void PingServer(const FString& ServerAddress);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PauseCharacter();
    
    UFUNCTION(BlueprintCallable, Exec)
    void PauseAI();
    
    UFUNCTION(BlueprintCallable)
    void OnPossess();
    
    UFUNCTION(BlueprintCallable)
    void OnKilled();
    
    UFUNCTION(BlueprintCallable, Exec)
    void NextLatentCommand();
    
    UFUNCTION(BlueprintCallable, Exec)
    void MergeMeshes();
    
    UFUNCTION(BlueprintCallable, Exec)
    void MergeMaterials();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ManualInterrupt();
    
    UFUNCTION(BlueprintCallable, Exec)
    void LoseHelmet();
    
    UFUNCTION(BlueprintCallable, Exec)
    void LoadCatapult();
    
    UFUNCTION(BlueprintCallable, Exec)
    void LoadAllCustomizationAssets();
    
    UFUNCTION(BlueprintCallable, Exec)
    void KillHorse();
    
    UFUNCTION(BlueprintCallable)
    bool IsFOVUncapped() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsAutoAttacking() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void Invulnerable();
    
protected:
    UFUNCTION(BlueprintCallable)
    void InputAction(FName AttackName, TEnumAsByte<EInputEvent> Event);
    
    UFUNCTION(BlueprintCallable, Exec)
    void IgnoreAI();
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void HorseGotoState(FName CombatState, FName HitDirection, int32 Variant);
    
    UFUNCTION(BlueprintCallable, Exec)
    void HorseAutorun(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void HideDebugActor();
    
    UFUNCTION(BlueprintCallable, Exec)
    void HideBothMeshes();
    
protected:
    UFUNCTION(BlueprintCallable)
    void HeldParryLoop();
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void GoToStatePlaying();
    
protected:
    UFUNCTION(BlueprintCallable)
    void GotoStateOnComponent(UCombatStateComponent* Component, FName CombatState, FName HitDirection, int32 Variant);
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void GotoState(FName CombatState, FName HitDirection, int32 Variant);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GiveHorse();
    
    UFUNCTION(BlueprintCallable, Exec)
    void GiveArmoredHorse();
    
protected:
    UFUNCTION(BlueprintCallable)
    ATBLCharacter* GetAnotherCharacter();
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void ForceGC();
    
    UFUNCTION(BlueprintCallable, Exec)
    void FakeGameIntent(const FString& ActivityId);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Exi(const FString& Cmd);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ExecFileDelay(float Time, float Variation);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ExecFile(const FString& Filename);
    
    UFUNCTION(BlueprintCallable, Exec)
    void EnableHUDPostProcess();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DumpReplicationCounts();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DumpPlayers();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DumpCharacters();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DumpCharacterReplicationCounts();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DrawUnits(float Distance);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DisableStaminaDrain();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DisableHUDPostProcess();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DestroyClientBot();
    
    UFUNCTION(BlueprintCallable)
    void DestroyAllForcedMoveForTeam(int32 Team);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugShowLoadingScreen(const FString& MapName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugHideLoadingScreen();
    
    UFUNCTION(BlueprintCallable, Exec)
    void CloseBlueprintDebugMenu();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ClientForceGC();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ClientBot();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ClearReplicationCounts();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ClearCharacterRuntimeAssetCache();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ClearAllForceMoveToPlayer(int32 Team);
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheckLightingBuilt();
    
    UFUNCTION(BlueprintCallable)
    bool BpCheat(const FString& Cmd);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BotsBecomeGods();
    
    UFUNCTION(BlueprintCallable, Exec)
    void BotNearestForceMoveToPlayer(int32 Team);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BotGodsBecomeMortal();
    
    UFUNCTION(BlueprintCallable, Exec)
    void BotForceMoveToPlayer(int32 Team, int32 bClearOtherForcedMoves);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BlueprintDebugMenu();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AutoRunAway(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AutoMoveToCharacter(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AutoClimbLadder(float Direction);
    
protected:
    UFUNCTION(BlueprintCallable)
    void AutoAttackStart(FName AttackName, float ChargeTime, float LoopTime);
    
    UFUNCTION(BlueprintCallable)
    void AutoAttackLoop();
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void AutoAttackHold(FName AttackName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AutoAttackEx(FName AttackName, float ChargeTime, float LoopTime);
    
protected:
    UFUNCTION(BlueprintCallable)
    void AutoAttackEndCharge();
    
    UFUNCTION(BlueprintCallable)
    void AutoAttackClearInternal();
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void AutoAttackClear();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AutoAttack(FName AttackName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ApplyStatBonus(EStat Stat, float Value);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ApplyDamage(float Damage, FName DamageType);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ApplyCondition(FName Condition);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AKStopProfilerCapture();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AKStartProfilerCapture(const FString& Filename);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AIObjectiveHere();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddAchievementProgress();
    
};

