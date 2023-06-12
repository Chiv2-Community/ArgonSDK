#include "WaveSpawnQueuer.h"

UWaveSpawnQueuer::UWaveSpawnQueuer() {
    this->MinimumRespawnTime = 0;
    this->WaveDurationSeconds = 0;
    this->RespawnTimeExtension = 0;
    this->WaveTimeExtension = 0;
    this->MaxRespawnTime = 0;
    this->MaxWaveTime = 0;
    this->ExtensionInterval = 0.00f;
}

