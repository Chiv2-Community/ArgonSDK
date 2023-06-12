#include "TBLAILibrary.h"
#include "Templates/SubclassOf.h"

ATBLCharacter* UTBLAILibrary::SpawnTBLAIFromClass(UObject* WorldContextObject, TSubclassOf<ATBLCharacter> CharacterClass, EFaction Faction, TSubclassOf<ATBLAIController> ControllerClass, UBehaviorTree* BehaviorTree, FVector Location, FRotator Rotation, bool bNoCollisionFail) {
    return NULL;
}

ATBLAIController* UTBLAILibrary::SpawnTBLAIControllerFromClass(UObject* WorldContextObject, EFaction Faction, TSubclassOf<ATBLAIController> ControllerClass, TSubclassOf<ATBLCharacter> NextSpawnCharacterClass, UBehaviorTree* BehaviorTree, bool IsPlayerBot) {
    return NULL;
}

void UTBLAILibrary::RemoveAvoidanceArea(UObject* WorldContextObject, UObject* Instigator) {
}

void UTBLAILibrary::PlayEmote(ATBLCharacter* Character, FName EmoteName) {
}

float UTBLAILibrary::InfluenceAtLocation(TSubclassOf<UI_Influence> InfluenceInput, AAIController* Controller, FVector Location) {
    return 0.0f;
}

bool UTBLAILibrary::GetPerceivedLocationOfActor(AAIController* Controller, AActor* Actor, FVector& OutVector) {
    return false;
}

TSet<AActor*> UTBLAILibrary::GetActorsByAITag(UObject* WorldContextObject, FGameplayTag Tag, EFaction Faction) {
    return TSet<AActor*>();
}

FGameplayTagContainer UTBLAILibrary::GetActorAITags(AActor* Actor, EFaction Faction) {
    return FGameplayTagContainer{};
}

void UTBLAILibrary::CreateAvoidanceArea(UObject* WorldContextObject, UObject* Instigator, const FVector& Location, float Radius) {
}

void UTBLAILibrary::ClearAllAITagsForFaction(UObject* WorldContextObject, EFaction Faction) {
}

void UTBLAILibrary::AIUntagManyActors(TArray<AActor*> Actor, FGameplayTagContainer TagsToRemove, EFaction Faction) {
}

void UTBLAILibrary::AIUntagAllActorsForFaction(UObject* WorldContextObject, FGameplayTagContainer TagsToRemove, EFaction Faction) {
}

void UTBLAILibrary::AIUntagActor(AActor* Actor, FGameplayTagContainer TagsToRemove, EFaction Faction) {
}

void UTBLAILibrary::AITagManyActors(TArray<AActor*> Actors, FGameplayTagContainer TagsToAdd, EFaction Faction, bool bUntagWhenActorDies) {
}

void UTBLAILibrary::AITagActor(AActor* Actor, FGameplayTagContainer TagsToAdd, EFaction Faction, bool bUntagWhenActorDies) {
}

UTBLAILibrary::UTBLAILibrary() {
}

