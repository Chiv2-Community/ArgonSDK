#include "TBLPS5HapticsManager.h"

void UTBLPS5HapticsManager::SetVolumeSetting(EHapticsVolumeSettings NewSetting) {
}

void UTBLPS5HapticsManager::SetIsUsingAdaptiveTriggers(bool UsingAdaptiveTrigger, ATBLPlayerController* PlayerController) {
}

bool UTBLPS5HapticsManager::IsUsingAdaptiveTriggers() {
    return false;
}

EHapticsVolumeSettings UTBLPS5HapticsManager::GetVolumeSetting() {
    return EHapticsVolumeSettings::HIGH_VOLUME;
}

UTBLPS5HapticsManager::UTBLPS5HapticsManager() {
    this->PS5HapticsLibrary = NULL;
}

