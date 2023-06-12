#include "TBLQuestsCachedData.h"

void UTBLQuestsCachedData::InitFromActiveQuests(UQuestPool* InQuestPool) {
}

bool UTBLQuestsCachedData::HasSameData(FQuestCacheData CachedData, TScriptInterface<IQuest> Quest) {
    return false;
}

bool UTBLQuestsCachedData::GetCachedData(TScriptInterface<IQuest> InQuest, FQuestCacheData& OutData) const {
    return false;
}

UTBLQuestsCachedData::UTBLQuestsCachedData() {
}

