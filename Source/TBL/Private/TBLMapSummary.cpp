#include "TBLMapSummary.h"

const FName UTBLMapSummary::FMapSummaryTagNames::NAME_MapDescriptionKey(TEXT("MapDescriptionKey"));
const FName UTBLMapSummary::FMapSummaryTagNames::NAME_MapDescriptionNamespace(TEXT("MapDescriptionNamespace"));
const FName UTBLMapSummary::FMapSummaryTagNames::NAME_MapDescriptionSource(TEXT("MapDescriptionSource"));
const FName UTBLMapSummary::FMapSummaryTagNames::NAME_MapNameKey(TEXT("MapNameKey"));
const FName UTBLMapSummary::FMapSummaryTagNames::NAME_MapNameNamespace(TEXT("MapNameNamespace"));
const FName UTBLMapSummary::FMapSummaryTagNames::NAME_MapNameSource(TEXT("MapNameSource"));

UTBLMapSummary::UTBLMapSummary() {
    this->AttackingFaction = EFaction::Agatha;
    this->GamemodeType = EGameModeType::TeamObjective;
}

