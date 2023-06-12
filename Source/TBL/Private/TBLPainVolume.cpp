#include "TBLPainVolume.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"

void ATBLPainVolume::EndOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}

void ATBLPainVolume::BeginOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}

ATBLPainVolume::ATBLPainVolume() {
    this->DefaultSceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
    this->CaptureBox = CreateDefaultSubobject<UBoxComponent>(TEXT("CaptureBox"));
    this->DamagePerSecondToApplyOnTimeExpire = 0.00f;
}

