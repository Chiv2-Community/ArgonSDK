#include "ClientPerformanceSnapshot.h"

FClientPerformanceSnapshot::FClientPerformanceSnapshot() {
    this->PhysicalMemUsed = 0.00f;
    this->VirtualMemUsed = 0.00f;
    this->bIsProConsole = false;
    this->FrameTime = 0.00f;
}

