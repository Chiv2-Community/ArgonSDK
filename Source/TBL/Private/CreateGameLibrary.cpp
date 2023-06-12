#include "CreateGameLibrary.h"

UMapOptionsObject* UCreateGameLibrary::MakeMapOption(UObject* WorldContextObject, FMapOption MapOptions) {
    return NULL;
}

void UCreateGameLibrary::GetTOOptions(UObject* WorldContextObject, int32& ThereAreNoOptionsAtTheMoment) {
}

void UCreateGameLibrary::GetTDMOptions(UObject* WorldContextObject, int32& TicketCountOverride, int32& TimeLimitOverride) {
}

int32 UCreateGameLibrary::GetGlobalTimeLimitOverride() {
    return 0;
}

bool UCreateGameLibrary::GetGenericModifiers(TArray<UMapModifierProperty*>& Modifiers) {
    return false;
}

void UCreateGameLibrary::GetFFAOptions(UObject* WorldContextObject, int32& ScoreLimitOverride, int32& TimeLimitOverride) {
}

bool UCreateGameLibrary::GetDefaultModifiersForGameMode(TEnumAsByte<EGameModeType::Type> GameMode, TArray<UMapModifierProperty*>& Modifiers) {
    return false;
}

UCreateGameLibrary::UCreateGameLibrary() {
    this->GlobalTimeLimitOverride = -1;
}

