#include "TBLPS5HapticsContainer.h"

UTBLPS5HapticsContainer::UTBLPS5HapticsContainer() {
    this->PadRumbleWAV = NULL;
    this->TriggerMode = ETBLPS5TriggerMode::Off;
    this->TriggerToEffect = ETBLPS5TriggerMask::Left_Trigger;
    this->TriggerStartPosition = 2;
    this->TriggerEndPosition = 3;
    this->TriggerStrength = 0;
    this->TriggerVibrationActivationPosition = 0;
    this->TriggerVibrationFrequency = 0;
    this->TriggerVibrationAmplitude = 0;
    this->TriggerResistancePosition = 0;
    this->TriggerResistanceStrength = 0;
}

