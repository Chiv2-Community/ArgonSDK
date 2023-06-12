#include "AINavPoint.h"

UBillboardComponent* AAINavPoint::K2_GetGoodSprite() const {
    return NULL;
}

UBillboardComponent* AAINavPoint::K2_GetBadSprite() const {
    return NULL;
}

void AAINavPoint::Deactivate() {
}

void AAINavPoint::Activate() {
}

AAINavPoint::AAINavPoint() {
    this->Faction = EFaction::All;
    this->bIsActive = false;
}

