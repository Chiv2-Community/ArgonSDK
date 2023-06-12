#pragma once
#include "CoreMinimal.h"
#include "AchievementProgress.h"
#include "ERewardPolicy.h"
#include "GameSparksAsset.h"
#include "VirtualGoodReward.h"
#include "Achievement.generated.h"

class APlayerState;

UCLASS(Blueprintable)
class TBL_API UAchievement : public UGameSparksAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRepeatable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Group;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERewardPolicy RewardPolicy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVirtualGoodReward> VirtualGoodRewards;
    
    UAchievement();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetTrackedObjectName(APlayerState* InPlayerState, const FAchievementProgress& InAchievement);
    
};

