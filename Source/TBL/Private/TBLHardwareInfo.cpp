#include "TBLHardwareInfo.h"

FTBLHardwareInfo::FTBLHardwareInfo() {
    this->TotalPhysicalGBRam = 0;
    this->NumberOfCoresPhysical = 0;
    this->NumberOfCoresLogical = 0;
    this->RHIVendorId = 0;
    this->DedicatedVideoMemory = 0;
    this->DedicatedSystemMemory = 0;
    this->SharedSystemMemory = 0;
    this->CPUInfo = 0;
}

