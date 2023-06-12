#pragma once
#include "CoreMinimal.h"
#include "EFaction.h"
#include "EFactionRuleOperator.h"
#include "EFactionRuleType.h"
#include "PersonalityEmoteOverrideRule.generated.h"

USTRUCT(BlueprintType)
struct FPersonalityEmoteOverrideRule {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFactionRuleType RuleType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFactionRuleOperator Operator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFaction Faction;
    
public:
    TBL_API FPersonalityEmoteOverrideRule();
};

