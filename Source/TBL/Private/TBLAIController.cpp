#include "TBLAIController.h"
#include "AIControlHandler.h"
#include "InputReplayComponent.h"
#include "UtilityAI_DecisionMaker.h"

void ATBLAIController::UseInteractable(UInteractableComponent* Interactable, bool bHold) {
}

void ATBLAIController::Suicide() {
}

void ATBLAIController::StopUsingInteractable() {
}

void ATBLAIController::StopReturnToNavMesh() {
}

void ATBLAIController::SetTargetMaxDistance(float MaxDistance) {
}

void ATBLAIController::SetNullBot(bool bNull) {
}

void ATBLAIController::SetDummyBot(bool bDummy) {
}

void ATBLAIController::SetBackfillBot(bool bBackfill) {
}

void ATBLAIController::ReturnToNavMeshExpired() {
}

void ATBLAIController::ResetError(FName ErrorType) {
}

bool ATBLAIController::MoveToTargetLocation(FVector Target) {
    return false;
}

bool ATBLAIController::MoveToNavMesh(FVector PathGoal, AActor* PathGoalActor) {
    return false;
}

void ATBLAIController::MoveInput(FVector2D InputDir, float Time, bool bAllowPathing) {
}

void ATBLAIController::LogEvent(FName EventName, AActor* Target, const FString& DebugStr) {
}

void ATBLAIController::LogError(FName ErrorType, const FString& Message, bool bError) {
}

void ATBLAIController::Jump() {
}

bool ATBLAIController::IsOnNavMesh() const {
    return false;
}

bool ATBLAIController::IsLevelSpawnedBot() {
    return false;
}

bool ATBLAIController::IsDummyBot() const {
    return false;
}

bool ATBLAIController::IsBackfillBot() {
    return false;
}

void ATBLAIController::GiveWeapon(FName Weapon) {
}

float ATBLAIController::GetTargetMaxDistance() {
    return 0.0f;
}

AActor* ATBLAIController::GetTarget() {
    return NULL;
}

void ATBLAIController::Dismount() {
}

void ATBLAIController::DestroyControllerAndPawn(AController* Controller, APawn* TargetPawn) {
}

void ATBLAIController::DestroyController(AController* Controller) {
}

bool ATBLAIController::CanPathFollow() const {
    return false;
}

void ATBLAIController::AttemptReturnToNavMesh() {
}

ATBLAIController::ATBLAIController() {
    this->InputReplayComponent = CreateDefaultSubobject<UInputReplayComponent>(TEXT("InputReplayComponent"));
    this->ControlHandler = CreateDefaultSubobject<UAIControlHandler>(TEXT("AIControlHandler"));
    this->GeneralDecisionMakerComponent = CreateDefaultSubobject<UUtilityAI_DecisionMaker>(TEXT("GeneralDecisionMaker"));
    this->DefaultBehaviorTree = NULL;
    this->bUseCrowdManager = true;
    this->bOverrideRotation = false;
    this->bCreatePlayerState = false;
    this->IdleTime = 0.00f;
    this->OverridePlayerController = NULL;
    this->CurrentlyUsedInteractable = NULL;
    this->IsInteractableUseBeingHeld = false;
    this->SpawnPoint = NULL;
    this->BotId = 0;
    this->bIsLevelSpawnedBot = false;
    this->bIsPlayerCustomizedBot = false;
    this->PersonalityTable = NULL;
    this->bOverridePersonalityRow = false;
    this->MoveInputTime = 0.00f;
    this->NavMeshReturnAttemptCount = 0;
    this->bAllowPathingWithMoveInput = false;
    this->bDummyBot = false;
    this->bNullBot = false;
    this->bBackfillBot = false;
    this->TargetMaxDistance = 1000.00f;
}

