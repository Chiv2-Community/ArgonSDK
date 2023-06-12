#include "AlwaysOnMusicManager.h"
#include "AkComponent.h"
#include "Net/UnrealNetwork.h"

void AAlwaysOnMusicManager::SetCurrentMusicState(EAlwaysOnMusicState NewState) {
}

void AAlwaysOnMusicManager::OnRep_SongIndex() {
}

void AAlwaysOnMusicManager::OnRep_AlwaysOnMusicState() {
}

EAlwaysOnMusicState AAlwaysOnMusicManager::GetCurrentMusicState() {
    return EAlwaysOnMusicState::None;
}

void AAlwaysOnMusicManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AAlwaysOnMusicManager, AlwaysOnMusicState);
    DOREPLIFETIME(AAlwaysOnMusicManager, SongIndex);
}

AAlwaysOnMusicManager::AAlwaysOnMusicManager() {
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AudioComponent"));
    this->AlwaysOnMusicState = EAlwaysOnMusicState::None;
    this->SongIndex = -1;
    this->PreviousAlwaysOnMusicState = EAlwaysOnMusicState::None;
    this->IsMusicPlaying = false;
}

