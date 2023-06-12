#include "Ladder.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "NavLinkCustomComponent.h"
#include "InteractableComponent.h"
#include "Net/UnrealNetwork.h"

bool ALadder::WantsDismountOnThisEnd(bool bTop) const {
    return false;
}

void ALadder::UsePressed(APawn* Pawn, UInteractableComponent* InteractableComponent) {
}

void ALadder::OnUseSyncFailed(APawn* Pawn, UInteractableComponent* InteractableComponent) {
}

void ALadder::OnRep_LadderEnabled() {
}

void ALadder::OnMovementChangedInJumpCollider(FName MovementState) {
}

void ALadder::MountLadder(APawn* Pawn, bool bIsJumping) {
}

bool ALadder::IsLadderEnabled() const {
    return false;
}


void ALadder::EndJumpOverlap(UPrimitiveComponent* OverlappedComponent, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ALadder::EnableLadder() {
}

void ALadder::DisableLadder() {
}

bool ALadder::CanMountLadder(APawn* Pawn) {
    return false;
}

void ALadder::BeginJumpOverlap(UPrimitiveComponent* OverlappedComponent, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& OverlapInfo) {
}

void ALadder::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ALadder, bLadderEnabled);
}

ALadder::ALadder() {
    this->bStartEnabled = true;
    this->LadderMontage = NULL;
    this->LadderHeight = 0.00f;
    this->MoveDownAngle = -30.00f;
    this->TurnLimit = 20.00f;
    this->MaxMountAngle = 25.00f;
    this->MaxMountDist = 120.00f;
    this->bCanDismountOffTop = true;
    this->bCanDismountOffBottom = true;
    this->SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->Interactable = CreateDefaultSubobject<UInteractableComponent>(TEXT("Interactable"));
    this->JumpCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("JumpBox"));
    this->PawnToIgnoreJump = NULL;
    this->SmartLinkComp = CreateDefaultSubobject<UNavLinkCustomComponent>(TEXT("SmartLinkComp"));
    this->bSmartLinkIsRelevant = false;
    this->SmartLinkTop = CreateDefaultSubobject<USceneComponent>(TEXT("SmartLinkTop"));
    this->SmartLinkBottom = CreateDefaultSubobject<USceneComponent>(TEXT("SmartLinkBottom"));
    this->SmartLinkDirection = ENavLinkDirection::BothWays;
}

