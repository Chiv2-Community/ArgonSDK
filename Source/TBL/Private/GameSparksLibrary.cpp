#include "GameSparksLibrary.h"

int32 UGameSparksLibrary::GetXp(ATBLPlayerState* InPlayerState) {
    return 0;
}

UOnlineConfig* UGameSparksLibrary::GetOnlineConfig() {
    return NULL;
}

FLevelStats UGameSparksLibrary::GetLevelStats(ATBLPlayerState* InPlayerState, int32 Level) {
    return FLevelStats{};
}

float UGameSparksLibrary::GetDaysSinceLive(ATBLPlayerState* InPlayerState, UVirtualGoodAnnouncement* InAnnouncement) {
    return 0.0f;
}

FText UGameSparksLibrary::ConvertIntToRomanNumeral(int32 InNumber) {
    return FText::GetEmpty();
}

UGameSparksLibrary::UGameSparksLibrary() {
}

