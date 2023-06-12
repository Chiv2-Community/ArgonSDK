#include "AchievementQuest.h"
#include "Net/UnrealNetwork.h"

void UAchievementQuest::OnTaskProgressUpdated(UTBLAchievementTask* _Task, float Progress) {
}

void UAchievementQuest::OnRepTask() {
}

void UAchievementQuest::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UAchievementQuest, BackendId);
    DOREPLIFETIME(UAchievementQuest, Title);
    DOREPLIFETIME(UAchievementQuest, Description);
    DOREPLIFETIME(UAchievementQuest, ShortDescription);
    DOREPLIFETIME(UAchievementQuest, Icon);
    DOREPLIFETIME(UAchievementQuest, BannerImage);
    DOREPLIFETIME(UAchievementQuest, TitleImage);
    DOREPLIFETIME(UAchievementQuest, Difficulty);
    DOREPLIFETIME(UAchievementQuest, Task);
    DOREPLIFETIME(UAchievementQuest, Reward);
}

UAchievementQuest::UAchievementQuest() {
    this->Difficulty = EQuestDifficulty::Normal;
    this->Task = NULL;
    this->bDownloadedQuest = false;
}

