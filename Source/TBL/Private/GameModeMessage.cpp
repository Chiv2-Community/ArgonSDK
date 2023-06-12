#include "GameModeMessage.h"

FGameModeMessage::FGameModeMessage() {
    this->DisplayGroup = EFaction::Agatha;
    this->CosmeticFaction = EFaction::Agatha;
    this->Duration = 0.00f;
    this->MessagePriority = EMessagePriority::LowPriority;
    this->Sound = NULL;
    this->MessageDisplayType = EGameModeMessageDisplayType::GameModeMessage;
    this->StagePersistentMessage = false;
    this->CommanderEvent = false;
    this->KillFeedIcon = NULL;
}

