#include "VirtualGood.h"

UVirtualGood::UVirtualGood() {
    this->ID = 0;
    this->MaxQuantity = 1;
    this->Type = TEXT("VirtualGood");
    this->CategoryText = FText::FromString(TEXT("W\x00C4HRUNG"));
    this->bTransient = false;
}

