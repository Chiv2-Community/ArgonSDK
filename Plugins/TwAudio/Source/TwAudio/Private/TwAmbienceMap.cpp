#include "TwAmbienceMap.h"

ATwAmbienceMap::ATwAmbienceMap() {
    this->DefaultAudioEvent = NULL;
    this->RedAudioEvent = NULL;
    this->GreenAudioEvent = NULL;
    this->BlueAudioEvent = NULL;
    this->FireDefaultOnceOnEntry = false;
    this->FireRedOnceOnEntry = false;
    this->FireGreenOnceOnEntry = false;
    this->FireBlueOnceOnEntry = false;
    this->UpdateRateSeconds = 0.40f;
    this->SecondsToMoveToNewPosition = 1.50f;
    this->SpiralCheckScales = 4;
    this->DrawHeatmapVisualization = false;
    this->AmbienceHeatmap = NULL;
    this->WorldBoundsTag = TEXT("WorldBounds");
    this->VisualizerMaterial = NULL;
    this->DebugOverlayDecal = NULL;
    this->DebugDecalMID = NULL;
    this->Emitters[0] = NULL;
    this->Emitters[1] = NULL;
    this->Emitters[2] = NULL;
    this->Emitters[3] = NULL;
}

