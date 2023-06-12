#include "BrawlAlwaysOnMusicManager.h"
#include "AkComponent.h"
#include "Net/UnrealNetwork.h"

void ABrawlAlwaysOnMusicManager::SetCurrentMusicState(EBrawlAlwaysOnMusicState NewState) {
}

void ABrawlAlwaysOnMusicManager::OnRep_BrawlAlwaysOnMusicState() {
}

EBrawlAlwaysOnMusicState ABrawlAlwaysOnMusicManager::GetCurrentMusicState() {
    return EBrawlAlwaysOnMusicState::None;
}

void ABrawlAlwaysOnMusicManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABrawlAlwaysOnMusicManager, BrawlAlwaysOnMusicState);
}

ABrawlAlwaysOnMusicManager::ABrawlAlwaysOnMusicManager() {
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AudioComponent"));
    this->BrawlAlwaysOnMusicState = EBrawlAlwaysOnMusicState::None;
    this->PreviousBrawlAlwaysOnMusicState = EBrawlAlwaysOnMusicState::None;
    this->IsMusicPlaying = false;
}

