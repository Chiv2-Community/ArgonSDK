#include "ClientPostMatchInfo.h"

FClientPostMatchInfo::FClientPostMatchInfo() {
    this->LoadIntoMainMenuTime = 0.00f;
    this->TotalPingSamples = 0;
    this->TotalFrames = 0;
    this->TotalReliableRetryCount = 0;
    this->TotalReliableRetryBytes = 0;
    this->TotalUnreliableRetryCount = 0;
    this->TotalUnrealiableRetryBytes = 0;
    this->SendFailTotalBytes = 0;
    this->AverageFrameTime = 0.00f;
    this->AveragePingTime = 0.00f;
    this->CPUPerfIndex = 0.00f;
    this->GPUPerfIndex = 0.00f;
}

