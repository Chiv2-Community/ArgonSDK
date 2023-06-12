#include "SavedSpatializationZone.h"

FSavedSpatializationZone::FSavedSpatializationZone() {
    this->MinDotProduct = 0.00f;
    this->MinDistPct = 0.00f;
    this->MaxDistPct = 0.00f;
    this->MinDistHz = 0.00f;
    this->MaxDistHz = 0.00f;
    this->FastPath_MinDistHz = 0.00f;
    this->FastPath_MaxDistHz = 0.00f;
}

