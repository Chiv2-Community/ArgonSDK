#include "MapOptionsObject.h"

bool UMapOptionsObject::GetMapMofidiersForGameMode(TEnumAsByte<EGameModeType::Type> GamemodeType, TArray<UMapModifierProperty*>& MapModifiers) const {
    return false;
}

FText UMapOptionsObject::GetGameModeMapName(TEnumAsByte<EGameModeType::Type> GamemodeType) {
    return FText::GetEmpty();
}

FString UMapOptionsObject::GenerateMapURL(TArray<UMapModifierProperty*> InMapModifierProperties) {
    return TEXT("");
}

UMapOptionsObject::UMapOptionsObject() {
    this->GamemodeTypesComboboxProperty = NULL;
    this->ServerTypeComboboxProperty = NULL;
}

