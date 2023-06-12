#include "NativeAnimationSet_BaseMount.h"

UNativeAnimationSet_BaseMount::UNativeAnimationSet_BaseMount() {
    this->Walk = NULL;
    this->Trot = NULL;
    this->Canter = NULL;
    this->Gallop = NULL;
    this->LeanBody = NULL;
    this->TurnStart = NULL;
    this->LeanBody_Gallop = NULL;
    this->Rider_AimOffset = NULL;
    this->Idle_Turn = NULL;
    this->Rider_AimOffset_Combat = NULL;
    this->Idle = NULL;
    this->HitDamage_Heavy_1 = NULL;
    this->HitDamage_Heavy_2 = NULL;
    this->Brake = NULL;
}

