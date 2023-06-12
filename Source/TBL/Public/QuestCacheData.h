#pragma once
#include "CoreMinimal.h"
#include "QuestCacheData.generated.h"

class IQuest;
class UQuest;

USTRUCT(BlueprintType)
struct FQuestCacheData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IQuest> Quest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CachedProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CachedScoreText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CachedIsComplete;
    
    TBL_API FQuestCacheData();
};

