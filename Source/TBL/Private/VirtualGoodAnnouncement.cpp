#include "VirtualGoodAnnouncement.h"

UVirtualGoodAnnouncement::UVirtualGoodAnnouncement() {
    this->AnnouncementType = EAnnouncementType::Hotfix;
    this->RequiredCL = 0;
    this->bTakeoverInMainMenu = false;
    this->DaysToRemainActive = 0;
    this->DaysToRemainPrimary = 0;
}

