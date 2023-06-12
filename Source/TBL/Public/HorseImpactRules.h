#pragma once
#include "CoreMinimal.h"
#include "HorseToHorseRules.h"
#include "HorseToObjectRules.h"
#include "HorseImpactRules.generated.h"

USTRUCT(BlueprintType)
struct FHorseImpactRules {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHorseToObjectRules HorseToWorldRules;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHorseToObjectRules HorseToTeamCharacterRules;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHorseToObjectRules HorseToEnemyCharacterRules;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHorseToHorseRules HorseToTeamHorseRules;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHorseToHorseRules HorseToEnemyHorseRules;
    
    TBL_API FHorseImpactRules();
};

