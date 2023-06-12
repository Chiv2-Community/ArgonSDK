#include "PacketLossData.h"

FPacketLossData::FPacketLossData() {
    this->NetInPackets = 0;
    this->NetInPacketsLost = 0;
    this->NetInOutOfOrderPackets = 0;
    this->NetOutPackets = 0;
    this->NetOutPacketsLost = 0;
    this->NetOutOutOfOrderPackets = 0;
}

