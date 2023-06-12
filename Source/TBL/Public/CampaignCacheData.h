#pragma once
#include "CoreMinimal.h"
#include "QuestCacheData.h"
#include "CampaignCacheData.generated.h"

USTRUCT(BlueprintType)
struct FCampaignCacheData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CampaignId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CachedExp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CachedLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestCacheData CachedQuest;
    
    TBL_API FCampaignCacheData();
};

