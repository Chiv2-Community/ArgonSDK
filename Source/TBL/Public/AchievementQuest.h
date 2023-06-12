#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "EQuestDifficulty.h"
#include "OnQuestCompleteChangedDelegate.h"
#include "OnQuestProgressChangedDelegate.h"
#include "OnTimedQuestStatusChangedDelegate.h"
#include "Quest.h"
#include "QuestDisplayable.h"
#include "QuestReplicatable.h"
#include "QuestReward.h"
#include "AchievementQuest.generated.h"

class UTBLAchievementTask;
class UTexture2D;

UCLASS(Blueprintable)
class UAchievementQuest : public UObject, public IQuest, public IQuestDisplayable, public IQuestReplicatable {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FString BackendId;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FText Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FText ShortDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> BannerImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> TitleImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EQuestDifficulty Difficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, ReplicatedUsing=OnRepTask, meta=(AllowPrivateAccess=true))
    UTBLAchievementTask* Task;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FQuestReward Reward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDownloadedQuest;
    
public:
    UAchievementQuest();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnTaskProgressUpdated(UTBLAchievementTask* _Task, float Progress);
    
    UFUNCTION(BlueprintCallable)
    void OnRepTask();
    
    
    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION(BlueprintCallable)
    void UnbindOnTimedQuestStatusChanged(const FOnTimedQuestStatusChanged& Delegate) override PURE_VIRTUAL(UnbindOnTimedQuestStatusChanged,);
    
    UFUNCTION(BlueprintCallable)
    void UnbindOnProgressChanged(const FOnQuestProgressChanged& Delegate) override PURE_VIRTUAL(UnbindOnProgressChanged,);
    
    UFUNCTION(BlueprintCallable)
    void UnbindOnCompleted(const FOnQuestCompleteChanged& Delegate) override PURE_VIRTUAL(UnbindOnCompleted,);
    
    UFUNCTION(BlueprintCallable)
    bool IsUpcoming() const override PURE_VIRTUAL(IsUpcoming, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool IsTimed() const override PURE_VIRTUAL(IsTimed, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool IsTimeAvailable() const override PURE_VIRTUAL(IsTimeAvailable, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool IsExpired() const override PURE_VIRTUAL(IsExpired, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool IsComplete() const override PURE_VIRTUAL(IsComplete, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool IsClientAuthoritative() const override PURE_VIRTUAL(IsClientAuthoritative, return false;);
    
    UFUNCTION(BlueprintCallable)
    FTimespan GetTimeRemaining() const override PURE_VIRTUAL(GetTimeRemaining, return FTimespan{};);
    
    UFUNCTION(BlueprintCallable)
    TArray<FQuestReward> GetRewards() const override PURE_VIRTUAL(GetRewards, return TArray<FQuestReward>(););
    
    UFUNCTION(BlueprintCallable)
    float GetProgress() const override PURE_VIRTUAL(GetProgress, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    void BindOnTimedQuestStatusChanged(const FOnTimedQuestStatusChanged& Delegate) override PURE_VIRTUAL(BindOnTimedQuestStatusChanged,);
    
    UFUNCTION(BlueprintCallable)
    void BindOnProgressChanged(const FOnQuestProgressChanged& Delegate) override PURE_VIRTUAL(BindOnProgressChanged,);
    
    UFUNCTION(BlueprintCallable)
    void BindOnCompleted(const FOnQuestCompleteChanged& Delegate) override PURE_VIRTUAL(BindOnCompleted,);
    
    UFUNCTION(BlueprintCallable)
    TSoftObjectPtr<UTexture2D> GetTitleImage() const override PURE_VIRTUAL(GetTitleImage, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    FText GetTitle() const override PURE_VIRTUAL(GetTitle, return FText::GetEmpty(););
    
    UFUNCTION(BlueprintCallable)
    FText GetShortDescription() const override PURE_VIRTUAL(GetShortDescription, return FText::GetEmpty(););
    
    UFUNCTION(BlueprintCallable)
    FText GetScoreText() const override PURE_VIRTUAL(GetScoreText, return FText::GetEmpty(););
    
    UFUNCTION(BlueprintCallable)
    FText GetMaxScoreText() const override PURE_VIRTUAL(GetMaxScoreText, return FText::GetEmpty(););
    
    UFUNCTION(BlueprintCallable)
    TSoftObjectPtr<UTexture2D> GetIcon() const override PURE_VIRTUAL(GetIcon, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    FText GetGoalText() const override PURE_VIRTUAL(GetGoalText, return FText::GetEmpty(););
    
    UFUNCTION(BlueprintCallable)
    EQuestDifficulty GetDifficulty() const override PURE_VIRTUAL(GetDifficulty, return EQuestDifficulty::Easy;);
    
    UFUNCTION(BlueprintCallable)
    FText GetDescription() const override PURE_VIRTUAL(GetDescription, return FText::GetEmpty(););
    
    UFUNCTION(BlueprintCallable)
    TSoftObjectPtr<UTexture2D> GetBannerImage() const override PURE_VIRTUAL(GetBannerImage, return NULL;);
    
};

