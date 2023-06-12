#include "GoreFXLibrary.h"

USkeletalMeshComponent* UGoreFXLibrary::KnockoffHelmet(ATBLCharacter* Char) {
    return NULL;
}

bool UGoreFXLibrary::GetGoreActionFromAttack(const AInventoryItem* InIventoryItem, FName InAttackName, FWeaponGoreSlot& GoreAction) {
    return false;
}

FName UGoreFXLibrary::FindClosestBoneFromGiven(const USkinnedMeshComponent* InSkinnedMesh, const UBoneList* InBreakableBones, const FVector& InTestLocation, FVector& OutBoneLocation, float& OutClosestDistance) {
    return NAME_None;
}

void UGoreFXLibrary::FillUpComponentSpaceTransformsRefPose(const USkeletalMeshComponent* SKM, TArray<FTransform>& ComponentSpaceTransforms) {
}

bool UGoreFXLibrary::BreakAtBone(ACharacter* Char, FName BoneName, const FVector& Impulse, const FVector& HitLocation, bool bSpawnedItem) {
    return false;
}

UGoreFXLibrary::UGoreFXLibrary() {
}

