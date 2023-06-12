#include "TBLCheatManager.h"

void UTBLCheatManager::UpdateVirtualGood() {
}

void UTBLCheatManager::UpdateRunAway(float DeltaTime) {
}

void UTBLCheatManager::UpdateMoveToCharacter(float DeltaTime) {
}

void UTBLCheatManager::UpdateExecFileCommands(float DeltaTime) {
}

void UTBLCheatManager::UpdateAutoAttackHold() {
}

void UTBLCheatManager::UnpauseCharacter() {
}

void UTBLCheatManager::UnpauseAI() {
}

void UTBLCheatManager::UnlimitedAmmo() {
}

void UTBLCheatManager::UncapFOV() {
}

void UTBLCheatManager::ToggleShowBothMeshes() {
}

void UTBLCheatManager::ToggleCameraAnimsAndShakes() {
}

void UTBLCheatManager::Tick(float DeltaTime) {
}

void UTBLCheatManager::TestRPCDesync() {
}

void UTBLCheatManager::TestDrawTime() {
}

void UTBLCheatManager::StopHeldParry() {
}

void UTBLCheatManager::StopExecFile() {
}

void UTBLCheatManager::StopDumpingReplication() {
}

void UTBLCheatManager::StopAllSounds() {
}

void UTBLCheatManager::StartHeldParry() {
}

void UTBLCheatManager::StartDumpingReplication() {
}

void UTBLCheatManager::SpawnAsPeasant() {
}

void UTBLCheatManager::SpamRPC(int32 NumCalls, int32 NumBytesPerCall) {
}

void UTBLCheatManager::SkipPushableToEndPoint(UObject* PushableActor) {
}

void UTBLCheatManager::SimulateLostServerConnection() {
}

void UTBLCheatManager::ShowThirdPersonMesh() {
}

void UTBLCheatManager::ShowServerFollowMesh() {
}

void UTBLCheatManager::ShowFirstPersonMesh() {
}

void UTBLCheatManager::ShowBothMeshes() {
}

void UTBLCheatManager::SetWatchedCharacter() {
}

void UTBLCheatManager::SetStatBase(EStat Stat, float Value) {
}

void UTBLCheatManager::SetPawnRVO(ATBLCharacter* Character, bool bEnabled) {
}

void UTBLCheatManager::SetPauseCharacter(bool bPaused) {
}

void UTBLCheatManager::SetPauseAI(bool bPaused) {
}

void UTBLCheatManager::SetHealth(float Value) {
}

void UTBLCheatManager::SetCulture(const FString& Culture) {
}

void UTBLCheatManager::SetAmmo(int32 Ammo) {
}

void UTBLCheatManager::SendToTrace(const FString& Command) {
}

void UTBLCheatManager::SendToAll(const FString& Command) {
}

void UTBLCheatManager::SendCheatToServerObj(FName CheatComand, UObject* Obj) {
}

void UTBLCheatManager::SendCheatToServer(FName CheatComand, FName Param) {
}

void UTBLCheatManager::SaveAll(const FString& ClassName) {
}

void UTBLCheatManager::Revive() {
}

void UTBLCheatManager::RespawnLoadout() {
}

void UTBLCheatManager::RespawnImmediately() {
}

void UTBLCheatManager::ResetHeldParry() {
}

void UTBLCheatManager::RemoveStamina() {
}

void UTBLCheatManager::RechargeSpecialItem() {
}

void UTBLCheatManager::ReceivedCheatFromClientObj(FName CheatCommand, UObject* Param) {
}

void UTBLCheatManager::ReceivedCheatFromClient(FName CheatCommand, FName Param) {
}

void UTBLCheatManager::RandomizeLoadout(bool bEnable) {
}

void UTBLCheatManager::PushLogs(const FString& SourcePath, const FString& DestPath) {
}

void UTBLCheatManager::PushCmdToTrace(const FString& Cmd) {
}

void UTBLCheatManager::PushCmd(const FString& Cmd) {
}

void UTBLCheatManager::PromptForRemoteDebugging() {
}

void UTBLCheatManager::ProfileGpuTopMaterials() {
}

void UTBLCheatManager::PrintStats() {
}

void UTBLCheatManager::PlayFromHere() {
}

void UTBLCheatManager::PlayerRVOEnable(float AvoidanceRadius) {
}

void UTBLCheatManager::PlayerRVODisable() {
}

void UTBLCheatManager::PingServer(const FString& ServerAddress) {
}

void UTBLCheatManager::PauseCharacter() {
}

void UTBLCheatManager::PauseAI() {
}

void UTBLCheatManager::OnPossess() {
}

void UTBLCheatManager::OnKilled() {
}

void UTBLCheatManager::NextLatentCommand() {
}

void UTBLCheatManager::MergeMeshes() {
}

void UTBLCheatManager::MergeMaterials() {
}

void UTBLCheatManager::ManualInterrupt() {
}

void UTBLCheatManager::LoseHelmet() {
}

void UTBLCheatManager::LoadCatapult() {
}

void UTBLCheatManager::LoadAllCustomizationAssets() {
}

void UTBLCheatManager::KillHorse() {
}

bool UTBLCheatManager::IsFOVUncapped() const {
    return false;
}

bool UTBLCheatManager::IsAutoAttacking() const {
    return false;
}

void UTBLCheatManager::Invulnerable() {
}

void UTBLCheatManager::InputAction(FName AttackName, TEnumAsByte<EInputEvent> Event) {
}

void UTBLCheatManager::IgnoreAI() {
}

void UTBLCheatManager::HorseGotoState(FName CombatState, FName HitDirection, int32 Variant) {
}

void UTBLCheatManager::HorseAutorun(bool bEnable) {
}

void UTBLCheatManager::HideDebugActor() {
}

void UTBLCheatManager::HideBothMeshes() {
}

void UTBLCheatManager::HeldParryLoop() {
}

void UTBLCheatManager::GoToStatePlaying() {
}

void UTBLCheatManager::GotoStateOnComponent(UCombatStateComponent* Component, FName CombatState, FName HitDirection, int32 Variant) {
}

void UTBLCheatManager::GotoState(FName CombatState, FName HitDirection, int32 Variant) {
}

void UTBLCheatManager::GiveHorse() {
}

void UTBLCheatManager::GiveArmoredHorse() {
}

ATBLCharacter* UTBLCheatManager::GetAnotherCharacter() {
    return NULL;
}

void UTBLCheatManager::ForceGC() {
}

void UTBLCheatManager::FakeGameIntent(const FString& ActivityId) {
}

void UTBLCheatManager::Exi(const FString& Cmd) {
}

void UTBLCheatManager::ExecFileDelay(float Time, float Variation) {
}

void UTBLCheatManager::ExecFile(const FString& Filename) {
}

void UTBLCheatManager::EnableHUDPostProcess() {
}

void UTBLCheatManager::DumpReplicationCounts() {
}

void UTBLCheatManager::DumpPlayers() {
}

void UTBLCheatManager::DumpCharacters() {
}

void UTBLCheatManager::DumpCharacterReplicationCounts() {
}

void UTBLCheatManager::DrawUnits(float Distance) {
}

void UTBLCheatManager::DisableStaminaDrain() {
}

void UTBLCheatManager::DisableHUDPostProcess() {
}

void UTBLCheatManager::DestroyClientBot() {
}

void UTBLCheatManager::DestroyAllForcedMoveForTeam(int32 Team) {
}

void UTBLCheatManager::DebugShowLoadingScreen(const FString& MapName) {
}

void UTBLCheatManager::DebugHideLoadingScreen() {
}

void UTBLCheatManager::CloseBlueprintDebugMenu() {
}

void UTBLCheatManager::ClientForceGC() {
}

void UTBLCheatManager::ClientBot() {
}

void UTBLCheatManager::ClearReplicationCounts() {
}

void UTBLCheatManager::ClearCharacterRuntimeAssetCache() {
}

void UTBLCheatManager::ClearAllForceMoveToPlayer(int32 Team) {
}

void UTBLCheatManager::CheckLightingBuilt() {
}

bool UTBLCheatManager::BpCheat(const FString& Cmd) {
    return false;
}

void UTBLCheatManager::BotsBecomeGods() {
}

void UTBLCheatManager::BotNearestForceMoveToPlayer(int32 Team) {
}

void UTBLCheatManager::BotGodsBecomeMortal() {
}

void UTBLCheatManager::BotForceMoveToPlayer(int32 Team, int32 bClearOtherForcedMoves) {
}

void UTBLCheatManager::BlueprintDebugMenu() {
}

void UTBLCheatManager::AutoRunAway(bool bEnable) {
}

void UTBLCheatManager::AutoMoveToCharacter(bool bEnable) {
}

void UTBLCheatManager::AutoClimbLadder(float Direction) {
}

void UTBLCheatManager::AutoAttackStart(FName AttackName, float ChargeTime, float LoopTime) {
}

void UTBLCheatManager::AutoAttackLoop() {
}

void UTBLCheatManager::AutoAttackHold(FName AttackName) {
}

void UTBLCheatManager::AutoAttackEx(FName AttackName, float ChargeTime, float LoopTime) {
}

void UTBLCheatManager::AutoAttackEndCharge() {
}

void UTBLCheatManager::AutoAttackClearInternal() {
}

void UTBLCheatManager::AutoAttackClear() {
}

void UTBLCheatManager::AutoAttack(FName AttackName) {
}

void UTBLCheatManager::ApplyStatBonus(EStat Stat, float Value) {
}

void UTBLCheatManager::ApplyDamage(float Damage, FName DamageType) {
}

void UTBLCheatManager::ApplyCondition(FName Condition) {
}

void UTBLCheatManager::AKStopProfilerCapture() {
}

void UTBLCheatManager::AKStartProfilerCapture(const FString& Filename) {
}

void UTBLCheatManager::AIObjectiveHere() {
}

void UTBLCheatManager::AddAchievementProgress() {
}

UTBLCheatManager::UTBLCheatManager() {
    this->AutoAttackLoopTime = 0.00f;
    this->AutoAttackChargeTime = 0.00f;
    this->bGodMode = false;
    this->bInvulnerable = false;
    this->bDisableStaminaDrain = false;
    this->bUnlimitedAmmo = false;
    this->bRandomAttack = false;
    this->bMoveToCharacter = false;
    this->bRunAway = false;
    this->bIsAutoAttack = false;
    this->bIsHeldParry = false;
    this->bRandomizeLoadout = false;
    this->bIsFOVUncapped = false;
    this->bPlayerRVOEnabled = false;
    this->PlayerRVOConsiderationRadius = -1.00f;
    this->AutoClimbDirection = 0.00f;
    this->RandomAttacks.AddDefaulted(9);
    this->ParryAbilities.AddDefaulted(2);
    this->ClientAIController = NULL;
    this->ExecFileDelayTime = 0.00f;
    this->BPCheatManager = NULL;
}

