#include "MatchComplete.h"

FMatchComplete::FMatchComplete() {
    this->Duration = 0.00f;
    this->PingTotalSamples = 0;
    this->TotalRetryReliableCount = 0;
    this->TotalRetryReliableBytes = 0;
    this->TotalRetryUnreliableCount = 0;
    this->TotalRetryUnreliableBytes = 0;
    this->SendFailTotalBytes = 0;
    this->AverageServerFrameTime = 0.00f;
    this->AveragePingTime = 0.00f;
    this->AvailablePhysicalMemoryStart = 0;
    this->AvailablePhysicalMemoryEnd = 0;
    this->ProcessUptimeAtStart = 0.00f;
    this->UsedVirtualMemoryStart = 0;
    this->UsedVirtualMemoryEnd = 0;
    this->AverageOutBytesPerClient = 0.00f;
    this->AverageNumClients = 0.00f;
    this->TotalFrames = 0;
    this->NetSaturatedFrames = 0;
    this->WinningTeamId = 0;
    this->MatchEndedInTie = false;
}

