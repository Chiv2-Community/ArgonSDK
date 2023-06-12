#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Campaign.h"
#include "CampaignLevel.h"
#include "EQuestDifficulty.h"
#include "OnCampaignLevelChangedDelegate.h"
#include "OnCampaignXpChangedDelegate.h"
#include "OnQuestCompleteChangedDelegate.h"
#include "OnQuestProgressChangedDelegate.h"
#include "OnTimedQuestStatusChangedDelegate.h"
#include "Quest.h"
#include "QuestDisplayable.h"
#include "QuestReward.h"
#include "CampaignStub.generated.h"

class UTexture2D;

UCLASS(Blueprintable, Config=Game)
class UCampaignStub : public UObject, public ICampaign, public IQuest, public IQuestDisplayable {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ShortDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText GoalText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> BannerImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> TitleImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQuestDifficulty Difficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Xp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCampaignLevel> Levels;
    
public:
    UCampaignStub();
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    void UnbindOnXpChanged(const FOnCampaignXpChanged& Delegate) override PURE_VIRTUAL(UnbindOnXpChanged,);
    
    UFUNCTION(BlueprintCallable)
    void UnbindOnLevelChanged(const FOnCampaignLevelChanged& Delegate) override PURE_VIRTUAL(UnbindOnLevelChanged,);
    
    UFUNCTION(BlueprintCallable)
    bool HasPremiumRewards() const override PURE_VIRTUAL(HasPremiumRewards, return false;);
    
    UFUNCTION(BlueprintCallable)
    int32 GetTotalXp() const override PURE_VIRTUAL(GetTotalXp, return 0;);
    
    UFUNCTION(BlueprintCallable)
    int32 GetTotalMaxXp() const override PURE_VIRTUAL(GetTotalMaxXp, return 0;);
    
    UFUNCTION(BlueprintCallable)
    int32 GetNumLevels() const override PURE_VIRTUAL(GetNumLevels, return 0;);
    
    UFUNCTION(BlueprintCallable)
    int32 GetLevelFromItemId(const FPrimaryAssetId& ItemId) override PURE_VIRTUAL(GetLevelFromItemId, return 0;);
    
    UFUNCTION(BlueprintCallable)
    FCampaignLevel GetLevelDetails() const override PURE_VIRTUAL(GetLevelDetails, return FCampaignLevel{};);
    
    UFUNCTION(BlueprintCallable)
    int32 GetLevel() const override PURE_VIRTUAL(GetLevel, return 0;);
    
    UFUNCTION(BlueprintCallable)
    int32 GetGatedMaxLevel() const override PURE_VIRTUAL(GetGatedMaxLevel, return 0;);
    
    UFUNCTION(BlueprintCallable)
    FString GetFriendlyName() const override PURE_VIRTUAL(GetFriendlyName, return TEXT(""););
    
    UFUNCTION(BlueprintCallable)
    int32 GetCurrentLevelXp() const override PURE_VIRTUAL(GetCurrentLevelXp, return 0;);
    
    UFUNCTION(BlueprintCallable)
    int32 GetCurrentLevelMaxXp() const override PURE_VIRTUAL(GetCurrentLevelMaxXp, return 0;);
    
    UFUNCTION(BlueprintCallable)
    TArray<FCampaignLevel> GetAllLevelDetails() const override PURE_VIRTUAL(GetAllLevelDetails, return TArray<FCampaignLevel>(););
    
    UFUNCTION(BlueprintCallable)
    TScriptInterface<IQuest> GetActiveQuest() const override PURE_VIRTUAL(GetActiveQuest, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    void BindOnXpChanged(const FOnCampaignXpChanged& Delegate) override PURE_VIRTUAL(BindOnXpChanged,);
    
    UFUNCTION(BlueprintCallable)
    void BindOnLevelChanged(const FOnCampaignLevelChanged& Delegate) override PURE_VIRTUAL(BindOnLevelChanged,);
    
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

