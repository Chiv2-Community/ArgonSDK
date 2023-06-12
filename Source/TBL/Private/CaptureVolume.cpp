#include "CaptureVolume.h"
#include "Components/BoxComponent.h"
#include "Components/CapsuleComponent.h"
#include "Net/UnrealNetwork.h"

void ACaptureVolume::RemovePlayerFromCapturePoint(ATBLCharacter* Player) {
}

void ACaptureVolume::RefreshActorsInCaptureZone() {
}

bool ACaptureVolume::PlayerSatisfiesCaptureRequirments_Implementation(ATBLCharacter* Player) {
    return false;
}

void ACaptureVolume::OnTrackedCharacterKilled(const FDeathDamageTakenEvent& DamageEvent) {
}

void ACaptureVolume::OnTrackedCharacterDestroyed(AActor* DestroyedActor) {
}

void ACaptureVolume::OnRep_CaptureState() {
}






ATBLTeam* ACaptureVolume::GetControllingTeam(bool& IsTie) {
    return NULL;
}

void ACaptureVolume::EndOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}

void ACaptureVolume::ClientEndOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}

void ACaptureVolume::ClientBeginOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}

void ACaptureVolume::BeginOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}

void ACaptureVolume::AddPlayerToCapturePoint(ATBLCharacter* Player) {
}

void ACaptureVolume::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ACaptureVolume, CurrentCaptureState);
}

ACaptureVolume::ACaptureVolume() {
    this->CaptureBox = CreateDefaultSubobject<UBoxComponent>(TEXT("CaptureBox"));
    this->CaptureCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CaptureCapsule"));
    this->bUseCaptureBoxComponent = false;
    this->bUseCaptureCapsuleComponent = true;
    this->CapturePointRule = ECaptureVolumeControlType::TeamWithGreatestNumbers;
    this->CurrentCaptureState = ECapturePointState::Invalid;
    this->PreviousCaptureState = ECapturePointState::Neutral;
}

