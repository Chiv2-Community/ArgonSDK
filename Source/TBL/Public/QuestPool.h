#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "OnQuestsChangedDelegate.h"
#include "ReplicatedSubobjectInterface.h"
#include "QuestPool.generated.h"

class IQuest;
class UQuest;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, Config=Game, Within=TBLPlayerController, meta=(BlueprintSpawnableComponent))
class UQuestPool : public UActorComponent, public IReplicatedSubobjectInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnQuestsChanged OnQuestsChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TScriptInterface<IQuest>> DailyQuests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TScriptInterface<IQuest>> WeeklyQuests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ActiveQuests, meta=(AllowPrivateAccess=true))
    TArray<UObject*> ActiveQuests;
    
public:
    UQuestPool();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SlotQuest(TScriptInterface<IQuest> Quest);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_ActiveQuests();
    
    UFUNCTION(BlueprintCallable)
    void OnQuestProgressChanged(UObject* Quest, float Progress);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<TScriptInterface<IQuest>> GetWeeklyQuests();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxActiveQuests();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<TScriptInterface<IQuest>> GetDailyQuests();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<TScriptInterface<IQuest>> GetActiveQuests();
    
    UFUNCTION(BlueprintCallable)
    void AbandonQuest(TScriptInterface<IQuest> Quest);
    
    
    // Fix for true pure virtual functions not being implemented
};

