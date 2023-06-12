#include "PersonalityEmoteTableRow.h"

FPersonalityEmoteTableRow::FPersonalityEmoteTableRow() {
    this->EmoteType = EEmoteType::VO;
    this->AudioEmoteType = EAudioVOType::None;
    this->EmoteAnimationSource = EEmoteAnimationSource::None;
    this->ShowInRadialMenu = false;
    this->CanBeCancelled = false;
    this->ApplySpamLimiter = false;
    this->EmoteIcon = NULL;
    this->IsValid = false;
}

