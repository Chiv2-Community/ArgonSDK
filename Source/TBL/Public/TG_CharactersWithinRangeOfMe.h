#pragma once
#include "CoreMinimal.h"
#include "EUtilityAI_EnemyOrFriendly.h"
#include "UtilityAI_TargetGenerator.h"
#include "TG_CharactersWithinRangeOfMe.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UTG_CharactersWithinRangeOfMe : public UUtilityAI_TargetGenerator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUtilityAI_EnemyOrFriendly RelevantFaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisregardDownedPlayers;
    
    UTG_CharactersWithinRangeOfMe();
};

