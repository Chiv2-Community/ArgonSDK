#include "ServerPerformanceHistory.h"

FServerPerformanceHistory::FServerPerformanceHistory() {
    this->PingTotalSamples = 0;
    this->TotalRetryReliableCount = 0;
    this->TotalRetryReliableBytes = 0;
    this->TotalRetryUnreliableCount = 0;
    this->TotalRetryUnreliableBytes = 0;
    this->SendFailTotalBytes = 0;
    this->AverageNumClients = 0.00f;
    this->AverageServerFrameTime = 0.00f;
    this->AverageClientFrameTime = 0.00f;
    this->AveragePingTime = 0.00f;
    this->AverageRTT = 0.00f;
    this->TotalAnalyticsErrors = 0;
    this->TotalAnalyticsTasks = 0;
    this->SkippedServerMoves = 0;
    this->SkippedServerMoveFrames = 0;
}

