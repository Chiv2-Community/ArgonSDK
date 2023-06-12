#include "PerMinuteBucket.h"

FPerMinuteBucket::FPerMinuteBucket() {
    this->TimeMinutes = 0;
    this->AverageFrameTime = 0.00f;
    this->AveragePingTime = 0.00f;
    this->AvailablePhysicalMemory = 0;
    this->UsedVirtualMemory = 0;
    this->ProcessUptime = 0.00f;
}

