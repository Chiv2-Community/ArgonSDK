#include "TBLUtilityLibrary.h"

void UTBLUtilityLibrary::SetEnabledRenderMainScene(UObject* WorldContextObject, bool bShouldRenderMainScene) {
}

void UTBLUtilityLibrary::SetAudioEnemyRTPC(UAkComponent* AkComponent, AActor* Initiator) {
}

void UTBLUtilityLibrary::SaveCustomizationSettings() {
}

void UTBLUtilityLibrary::RecursiveSetVisibility(UPrimitiveComponent* Root, bool bOwnerNoSee, bool bOnlyOwnerSee) {
}

int32 UTBLUtilityLibrary::RandomWeightedIntegerFromStream(const TArray<float>& Weights, const FRandomStream& InStream) {
    return 0;
}

void UTBLUtilityLibrary::LogWithCallstacks(const FString& Message) {
}

void UTBLUtilityLibrary::LoadCinematicSublevel(const UObject* WorldContextObject, FName LevelName, bool bMakeVisibleAfterLoad, bool bShouldBlockOnLoad, FLatentActionInfo LatentInfo) {
}

TEnumAsByte<ESonyAppType> UTBLUtilityLibrary::GetSonyPlatformRegion() {
    return ESony_Unknown;
}

TArray<FSwatchSelectionsByClass> UTBLUtilityLibrary::GetSavedCustomizationSettings() {
    return TArray<FSwatchSelectionsByClass>();
}

TEnumAsByte<EPlatformType> UTBLUtilityLibrary::GetPlatformType() {
    return EPlatform_PC;
}

void UTBLUtilityLibrary::GetMatchingChildComponentsByName(const USceneComponent* RootComponent, const FString& MatchName, TArray<USceneComponent*>& OutMatches) {
}

float UTBLUtilityLibrary::GetClosestPointOnCollision(const AActor* Actor, const FVector& Point, TEnumAsByte<ECollisionChannel> CollisionChannel, FVector& ClosestPointOnCollision) {
    return 0.0f;
}

float UTBLUtilityLibrary::GetAzimuth(const FVector& Direction, const FVector& Forward) {
    return 0.0f;
}

FName UTBLUtilityLibrary::FindClosestSocket(USceneComponent* Component, FVector Location, const FString& SocketSubstring) {
    return NAME_None;
}

void UTBLUtilityLibrary::CopyToClipboard(const FString& TextToCopy) {
}

UTBLUtilityLibrary::UTBLUtilityLibrary() {
}

