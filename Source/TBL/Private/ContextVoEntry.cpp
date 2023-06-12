#include "ContextVoEntry.h"

FContextVoEntry::FContextVoEntry() {
    this->Faction = EFaction::Agatha;
    this->ContextVO = EAudioAutoVOType::None;
    this->ContextVoType = EContextVoType::Repeated;
    this->bOverrideFrequencyPerMinute = false;
    this->FrequencyPerMinute = 0.00f;
    this->bOverrideNumberOfPlayers = false;
    this->NumberOfPlayers = 0;
}

