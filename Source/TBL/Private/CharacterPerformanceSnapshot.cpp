#include "CharacterPerformanceSnapshot.h"

FCharacterPerformanceSnapshot::FCharacterPerformanceSnapshot() {
    this->AvailableCpu = 0.00f;
    this->BaseGameTimeInMs = 0.00f;
    this->BaseRenderTimeInMs = 0.00f;
    this->BaseGpuTimeInMs = 0.00f;
    this->LoadedGameTimeInMs = 0.00f;
    this->LoadedRenderTimeInMs = 0.00f;
    this->LoadedGpuTimeInMs = 0.00f;
    this->PerCharacterGameTimeInMs = 0.00f;
    this->PerCharacterRenderTimeInMs = 0.00f;
    this->PerCharacterGpuTimeInMs = 0.00f;
}

