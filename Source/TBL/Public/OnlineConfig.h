#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AchievementProgress.h"
#include "EGameModeType.h"
#include "EInventoryType.h"
#include "LevelSet.h"
#include "TitleProgressionRow.h"
#include "OnlineConfig.generated.h"

class UDataTable;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI, Config=Game)
class UOnlineConfig : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EInventoryType> WeaponAchievements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLevelSet> LevelWinAchievements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EGameModeType::Type>> GameModeWinAchievements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* TitleProgressionTable;
    
    UOnlineConfig();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTitleProgressionRow GetTitleProgression(int32 Level);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void EventGetAchievementCategory(const FAchievementProgress& InAchievement, FText& Category, FText& Subcategory, int32& DisplayPriority);
    
};

