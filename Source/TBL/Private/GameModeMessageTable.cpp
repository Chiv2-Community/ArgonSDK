#include "GameModeMessageTable.h"

FGameModeMessageTable::FGameModeMessageTable() {
    this->DisplayGroup = EFaction::Agatha;
    this->CosmeticFaction = EFaction::Agatha;
    this->Sound = NULL;
    this->Delay = 0.00f;
    this->Duration = 0.00f;
    this->MessagePriority = EMessagePriority::LowPriority;
    this->MessageDisplayType = EGameModeMessageDisplayType::GameModeMessage;
    this->StagePersistentMessage = false;
    this->KillFeedIcon = NULL;
    this->CommanderEvent = false;
}

