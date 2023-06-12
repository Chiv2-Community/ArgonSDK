#include "ClassReplicationGraphSettings.h"

FClassReplicationGraphSettings::FClassReplicationGraphSettings() {
    this->StarvationPriorityScale = 0.00f;
    this->DistancePriorityScale = 0.00f;
    this->NetCullDistance = 0.00f;
    this->NetUpdateFrequency = 0.00f;
    this->NodeMapping = EClassRepNodeMapping::Default;
    this->ActorChannelFrameTimeout = 0;
}

