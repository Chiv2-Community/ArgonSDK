#include "QuestPool.h"
#include "Net/UnrealNetwork.h"

void UQuestPool::SlotQuest(TScriptInterface<IQuest> Quest) {
}

void UQuestPool::OnRep_ActiveQuests() {
}

void UQuestPool::OnQuestProgressChanged(UObject* Quest, float Progress) {
}

TArray<TScriptInterface<IQuest>> UQuestPool::GetWeeklyQuests() {
    return TArray<TScriptInterface<IQuest>>();
}

int32 UQuestPool::GetMaxActiveQuests() {
    return 0;
}

TArray<TScriptInterface<IQuest>> UQuestPool::GetDailyQuests() {
    return TArray<TScriptInterface<IQuest>>();
}

TArray<TScriptInterface<IQuest>> UQuestPool::GetActiveQuests() {
    return TArray<TScriptInterface<IQuest>>();
}

void UQuestPool::AbandonQuest(TScriptInterface<IQuest> Quest) {
}

void UQuestPool::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UQuestPool, ActiveQuests);
}

UQuestPool::UQuestPool() {
}

