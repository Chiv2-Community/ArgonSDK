#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "OnQuestCompleteChangedDelegate.h"
#include "OnQuestProgressChangedDelegate.h"
#include "OnTimedQuestStatusChangedDelegate.h"
#include "QuestReward.h"
#include "Quest.generated.h"

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class UQuest : public UInterface {
    GENERATED_BODY()
};

class IQuest : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual void UnbindOnTimedQuestStatusChanged(const FOnTimedQuestStatusChanged& Delegate) PURE_VIRTUAL(UnbindOnTimedQuestStatusChanged,);
    
    UFUNCTION(BlueprintCallable)
    virtual void UnbindOnProgressChanged(const FOnQuestProgressChanged& Delegate) PURE_VIRTUAL(UnbindOnProgressChanged,);
    
    UFUNCTION(BlueprintCallable)
    virtual void UnbindOnCompleted(const FOnQuestCompleteChanged& Delegate) PURE_VIRTUAL(UnbindOnCompleted,);
    
    UFUNCTION(BlueprintCallable)
    virtual bool IsUpcoming() const PURE_VIRTUAL(IsUpcoming, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool IsTimed() const PURE_VIRTUAL(IsTimed, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool IsTimeAvailable() const PURE_VIRTUAL(IsTimeAvailable, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool IsExpired() const PURE_VIRTUAL(IsExpired, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool IsComplete() const PURE_VIRTUAL(IsComplete, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool IsClientAuthoritative() const PURE_VIRTUAL(IsClientAuthoritative, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual FTimespan GetTimeRemaining() const PURE_VIRTUAL(GetTimeRemaining, return FTimespan{};);
    
    UFUNCTION(BlueprintCallable)
    virtual TArray<FQuestReward> GetRewards() const PURE_VIRTUAL(GetRewards, return TArray<FQuestReward>(););
    
    UFUNCTION(BlueprintCallable)
    virtual float GetProgress() const PURE_VIRTUAL(GetProgress, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    virtual void BindOnTimedQuestStatusChanged(const FOnTimedQuestStatusChanged& Delegate) PURE_VIRTUAL(BindOnTimedQuestStatusChanged,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BindOnProgressChanged(const FOnQuestProgressChanged& Delegate) PURE_VIRTUAL(BindOnProgressChanged,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BindOnCompleted(const FOnQuestCompleteChanged& Delegate) PURE_VIRTUAL(BindOnCompleted,);
    
};

