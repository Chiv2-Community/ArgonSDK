#include "CharacterDisplayInfo.h"

FCharacterDisplayInfo::FCharacterDisplayInfo() {
    this->Icon = NULL;
    this->CharacterImageLarge = NULL;
    this->TeamRedCharacterImageSmall = NULL;
    this->TeamBlueCharacterImageSmall = NULL;
    this->ClassHealth = 0;
    this->ClassSpeed = 0;
    this->ClassSpecial = 0;
    this->bIsDisabledInGame = false;
    this->bIsOpenLoadoutSubclass = false;
    this->CharacterStat = EOnlineStat::Invalid;
}

