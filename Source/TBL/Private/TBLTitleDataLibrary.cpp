#include "TBLTitleDataLibrary.h"

bool UTBLTitleDataLibrary::IsTrialModeEnabled() {
    return false;
}

bool UTBLTitleDataLibrary::IsTrialModeClient() {
    return false;
}

bool UTBLTitleDataLibrary::IsStoreFeaturedTabEnabled() {
    return false;
}

bool UTBLTitleDataLibrary::IsStoreEnabled() {
    return false;
}

bool UTBLTitleDataLibrary::IsStoreAddonsTabEnabled() {
    return false;
}

bool UTBLTitleDataLibrary::IsServerBrowserEnabled() {
    return false;
}

bool UTBLTitleDataLibrary::IsQuickMatchEnabled() {
    return false;
}

bool UTBLTitleDataLibrary::IsMatchmakingEnabled() {
    return false;
}

bool UTBLTitleDataLibrary::IsGameEnabled() {
    return false;
}

bool UTBLTitleDataLibrary::HasTitleNews() {
    return false;
}

bool UTBLTitleDataLibrary::HasTitleData() {
    return false;
}

bool UTBLTitleDataLibrary::HasMotd() {
    return false;
}

TArray<FTitleNews> UTBLTitleDataLibrary::GetTitleNews() {
    return TArray<FTitleNews>();
}

TMap<FString, FString> UTBLTitleDataLibrary::GetTitleData() {
    return TMap<FString, FString>();
}

FName UTBLTitleDataLibrary::GetSpecialEventName() {
    return NAME_None;
}

FString UTBLTitleDataLibrary::GetQuickplayQueueName() {
    return TEXT("");
}

FMotd UTBLTitleDataLibrary::GetMotd() {
    return FMotd{};
}

bool UTBLTitleDataLibrary::GetMatchmakingQueue(FName ID, FMatchmakingQueue& Queue) {
    return false;
}

bool UTBLTitleDataLibrary::GetHostedMatchmakingQueue(FMatchmakingQueue& OutQueue) {
    return false;
}

void UTBLTitleDataLibrary::GetAllMatchmakingQueues(TArray<FMatchmakingQueue>& Queues) {
}

UTBLTitleDataLibrary::UTBLTitleDataLibrary() {
}

