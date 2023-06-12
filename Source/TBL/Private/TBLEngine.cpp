#include "TBLEngine.h"

float UTBLEngine::GetStatMS() {
    return 0.0f;
}

float UTBLEngine::GetStatFPS() {
    return 0.0f;
}

float UTBLEngine::GetAvailableCPU() {
    return 0.0f;
}

UTBLEngine::UTBLEngine() {
    this->HorseClass = NULL;
    this->WeaponFistClass = NULL;
    this->CharacterCombatStatesClass = NULL;
    this->ServerWorld = NULL;
    this->LastFrameTimestamp = 0;
    this->PingFrameNumber = 0;
    this->NetSaturatedCount = 0;
    this->NetOutBytes = 0;
    this->NetOutTime = 0.00f;
    this->NetConnections = 0;
    this->NetSampleCount = 0;
    this->LastFrameTime = 0.00f;
    this->LastNetFlushTime = 0.00f;
    this->LastOutBytes = 0;
    this->TotalPingSamples = 0;
    this->TotalPingSamplesPerMinute = 0;
    this->TotalRetryReliableCount = 0;
    this->TotalRetryReliableBytes = 0;
    this->TotalRetryUnreliableCount = 0;
    this->TotalRetryUnreliableBytes = 0;
    this->TotalSendFailBytes = 0;
    this->AveragePingTime = 0.00f;
    this->AverageFrameTime = 0.00f;
    this->AveragePingTimePerMinute = 0.00f;
    this->AverageFrameTimePerMinute = 0.00f;
    this->TotalFrames = 0;
    this->TotalFramesPerMinute = 0;
    this->PerMinuteTimer = 0.00f;
    this->AvailableCpuTimer = 0.00f;
    this->AvailableCpuRatio = 0.00f;
    this->NetInPackets = 0;
    this->NetInPacketsLost = 0;
    this->NetInOutOfOrderPackets = 0;
    this->NetOutPackets = 0;
    this->NetOutPacketsLost = 0;
    this->NetOutOutOfOrderPackets = 0;
    this->LastInPackets = 0;
    this->LastInPacketsLost = 0;
    this->LastInOutOfOrderPackets = 0;
    this->LastOutPackets = 0;
    this->LastOutPacketsLost = 0;
    this->LastOutOutOfOrderPackets = 0;
    this->NetAutonomousMovementCorrections = 0;
    this->NetAutonomousMovementCorrectionBunches = 0;
    this->NetSimulatedMovementCorrections = 0;
    this->LastAutonomousMovementCorrectionTime = 0.00f;
    this->CPUPerfIndex = 0.00f;
    this->GPUPerfIndex = 0.00f;
    this->SkippedServerMoves = 0;
    this->SkippedServerMoveFrames = 0;
    this->LastSkippedServerMoveFrame = 0;
}

