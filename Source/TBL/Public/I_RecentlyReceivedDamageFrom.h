#pragma once
#include "CoreMinimal.h"
#include "UtilityAI_InputAxis.h"
#include "I_RecentlyReceivedDamageFrom.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UI_RecentlyReceivedDamageFrom : public UUtilityAI_InputAxis {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeSecondsToConsiderRecent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOutputIsPercentOfRecentDamage;
    
    UI_RecentlyReceivedDamageFrom();
};

