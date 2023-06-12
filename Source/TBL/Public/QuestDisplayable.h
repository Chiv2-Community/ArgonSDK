#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EQuestDifficulty.h"
#include "QuestDisplayable.generated.h"

class UTexture2D;

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class UQuestDisplayable : public UInterface {
    GENERATED_BODY()
};

class IQuestDisplayable : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual TSoftObjectPtr<UTexture2D> GetTitleImage() const PURE_VIRTUAL(GetTitleImage, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    virtual FText GetTitle() const PURE_VIRTUAL(GetTitle, return FText::GetEmpty(););
    
    UFUNCTION(BlueprintCallable)
    virtual FText GetShortDescription() const PURE_VIRTUAL(GetShortDescription, return FText::GetEmpty(););
    
    UFUNCTION(BlueprintCallable)
    virtual FText GetScoreText() const PURE_VIRTUAL(GetScoreText, return FText::GetEmpty(););
    
    UFUNCTION(BlueprintCallable)
    virtual FText GetMaxScoreText() const PURE_VIRTUAL(GetMaxScoreText, return FText::GetEmpty(););
    
    UFUNCTION(BlueprintCallable)
    virtual TSoftObjectPtr<UTexture2D> GetIcon() const PURE_VIRTUAL(GetIcon, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    virtual FText GetGoalText() const PURE_VIRTUAL(GetGoalText, return FText::GetEmpty(););
    
    UFUNCTION(BlueprintCallable)
    virtual EQuestDifficulty GetDifficulty() const PURE_VIRTUAL(GetDifficulty, return EQuestDifficulty::Easy;);
    
    UFUNCTION(BlueprintCallable)
    virtual FText GetDescription() const PURE_VIRTUAL(GetDescription, return FText::GetEmpty(););
    
    UFUNCTION(BlueprintCallable)
    virtual TSoftObjectPtr<UTexture2D> GetBannerImage() const PURE_VIRTUAL(GetBannerImage, return NULL;);
    
};

