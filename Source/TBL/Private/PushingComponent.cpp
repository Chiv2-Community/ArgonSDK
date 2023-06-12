#include "PushingComponent.h"
#include "Net/UnrealNetwork.h"

void UPushingComponent::UpdatePushingWhileFalling(float DeltaSeconds) {
}

void UPushingComponent::UpdatePushing(float DeltaSeconds, const FVector& OldLocation) {
}

void UPushingComponent::UpdatePushed(float DeltaTime) {
}

bool UPushingComponent::ShouldPush(AActor* OtherActor) {
    return false;
}

void UPushingComponent::SetPushingDirection(EPushingDirection Direction) {
}

void UPushingComponent::SetPushedVelocity(FVector PushVel) {
}

void UPushingComponent::PushActor(AActor* Actor, FVector PushVel) {
}

void UPushingComponent::OnRep_PushingPriority() {
}

void UPushingComponent::OnRep_DesiredPushedVelocity() {
}

void UPushingComponent::OnCharacterMovementUpdated(float DeltaSeconds, FVector OldLocation, FVector OldVelocity) {
}

bool UPushingComponent::HasEqualPriority(AActor* OtherActor) {
    return false;
}

FVector UPushingComponent::GetPushVelocity(AActor* PushingActor, AActor* OtherActor) {
    return FVector{};
}

float UPushingComponent::GetPushingRadius(AActor* Actor) {
    return 0.0f;
}

FVector UPushingComponent::GetOwnerVelocity() {
    return FVector{};
}

FVector UPushingComponent::GetFallingPushDirection(AActor* PushingActor, AActor* OtherActor, float DeltaSeconds) {
    return FVector{};
}

TArray<UPrimitiveComponent*> UPushingComponent::GetCollisionComponents() {
    return TArray<UPrimitiveComponent*>();
}

bool UPushingComponent::FindOverlappingCharacters(TArray<ATBLCharacterBase*>& OutCharacters, FVector Offset) {
    return false;
}

void UPushingComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPushingComponent, PushingPriority);
    DOREPLIFETIME(UPushingComponent, DesiredPushedVelocity);
}

UPushingComponent::UPushingComponent() {
    this->bCannotBePushed = false;
    this->MinPushSpeed = 0.00f;
    this->MaxPushSpeed = 500.00f;
    this->FallingPushSpeed = 400.00f;
    this->FallingPushBackSpeed = 100.00f;
    this->FallingOverlapOffset = 100.00f;
    this->CollisionProfileName = TEXT("Pawn");
    this->BasePushingPriority = 0;
    this->PushingDirection = EPushingDirection::LeftOrRight;
    this->PushedTime = 0.00f;
    this->bOwnerIsCharacter = false;
    this->PushingInstanceId = 0;
}

