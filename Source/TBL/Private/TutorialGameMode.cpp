#include "TutorialGameMode.h"
#include "Templates/SubclassOf.h"

void ATutorialGameMode::SetPlayerStart(AActor* Actor) {
}

void ATutorialGameMode::SetLoadout(TSubclassOf<ULoadoutSelection> Loadout) {
}

ATutorialGameMode::ATutorialGameMode() {
    this->OverridePlayerStart = NULL;
    this->OverrideLoadout = NULL;
}

