#pragma once
#include "CoreMinimal.h"
#include "EFaction.h"
#include "EMatchVictoryType.h"
#include "EMatchWinType.h"
#include "TBLAchievementTaskCountable.h"
#include "MatchWinTask.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UMatchWinTask : public UTBLAchievementTaskCountable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFaction Team;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MapName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMatchVictoryType MatchResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMatchWinType MatchWinType;
    
    UMatchWinTask();
};

