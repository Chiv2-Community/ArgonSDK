#include "TBLGameUpdatesLibrary.h"

bool UTBLGameUpdatesLibrary::ShouldShowGameUpdate(const FGameUpdateData& GameUpdateData) {
    return false;
}

void UTBLGameUpdatesLibrary::SetIsGameUpdateSeen(const FString& UpdateVersion, UObject* WorldContextObject, bool IsSeen) {
}

int32 UTBLGameUpdatesLibrary::GetUnseenGameUpdatesCount(UObject* WorldContextObject) {
    return 0;
}

bool UTBLGameUpdatesLibrary::GetNewestGameUpdate(FGameUpdateData& OutGameUpdateData, UObject* WorldContextObject, bool ShouldCheckIfSeen) {
    return false;
}

bool UTBLGameUpdatesLibrary::GetIsGameUpdateSeen(const FString& UpdateVersion, UObject* WorldContextObject) {
    return false;
}

bool UTBLGameUpdatesLibrary::GetIsGameUpdateNewest(const FGameUpdateData& GameUpdateData, UObject* WorldContextObject, bool ShouldCheckIfSeen) {
    return false;
}

bool UTBLGameUpdatesLibrary::GetIsGameUpdateActive(const FGameUpdateData& GameUpdateData) {
    return false;
}

bool UTBLGameUpdatesLibrary::GetHasUnseenGameUpdates(UObject* WorldContextObject) {
    return false;
}

void UTBLGameUpdatesLibrary::GetGameUpdates(TArray<FGameUpdateData>& OutGameUpdates, UObject* WorldContextObject, uint8 Count) {
}

bool UTBLGameUpdatesLibrary::GetGameUpdateData(FName UpdateVersion, FGameUpdateData& OutGameUpdateData, UObject* WorldContextObject) {
    return false;
}

UTBLGameUpdatesLibrary::UTBLGameUpdatesLibrary() {
}

