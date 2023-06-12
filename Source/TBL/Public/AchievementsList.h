#pragma once
#include "CoreMinimal.h"
#include "Components/Widget.h"
#include "AchievementProgress.h"
#include "AchievementsList.generated.h"

class ATBLPlayerState;
class UAchievementInstance;

UCLASS(Blueprintable)
class UAchievementsList : public UWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_RetVal_TwoParams(bool, FOnSortAchievement, const FAchievementProgress&, A, const FAchievementProgress&, B);
    DECLARE_DYNAMIC_DELEGATE_RetVal_OneParam(UWidget*, FOnGenerateAchievement, const FAchievementProgress&, Achievement);
    DECLARE_DYNAMIC_DELEGATE_RetVal_OneParam(bool, FOnFilterAchievement, const FAchievementProgress&, Achievement);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGenerateAchievement OnGenerateAchievementEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFilterAchievement OnFilterAchievementEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSortAchievement OnSortAchievementEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TableRowStyleName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATBLPlayerState* PlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAchievementInstance*> TrackedObjects;
    
    UAchievementsList();
    UFUNCTION(BlueprintCallable)
    void UpdateProcessedItems();
    
    UFUNCTION(BlueprintCallable)
    void Initialize(ATBLPlayerState* InPlayerState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetProcessedItemsCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FAchievementProgress GetProcessedItemAt(int32 Index);
    
};

