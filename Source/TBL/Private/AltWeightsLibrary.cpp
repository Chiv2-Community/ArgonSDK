#include "AltWeightsLibrary.h"

bool UAltWeightsLibrary::UpdateSkinWeightsOverride(USkinnedMeshComponent* InComp, FName InBoneName, FAltWeightsState& InOutState) {
    return false;
}

bool UAltWeightsLibrary::SetSkinWeightsOverride(USkinnedMeshComponent* InComp, const FAltWeightsState& InState) {
    return false;
}

bool UAltWeightsLibrary::InitSkinWeightsState(USkinnedMeshComponent* InComp, FAltWeightsState& InState) {
    return false;
}

void UAltWeightsLibrary::InitPawnAltWeightsState(ACharacter* Char) {
}

void UAltWeightsLibrary::ClearAllSkinWeightsOverride(USkinnedMeshComponent* InComp) {
}

UAltWeightsLibrary::UAltWeightsLibrary() {
}

