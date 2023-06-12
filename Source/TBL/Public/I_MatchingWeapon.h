#pragma once
#include "CoreMinimal.h"
#include "EUtilityAI_EnemyOrFriendly.h"
#include "Templates/SubclassOf.h"
#include "UtilityAI_InputAxis.h"
#include "I_MatchingWeapon.generated.h"

class AInventoryItem;

UCLASS(Blueprintable, EditInlineNew)
class TBL_API UI_MatchingWeapon : public UUtilityAI_InputAxis {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUtilityAI_EnemyOrFriendly EnemyOrFriendly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AInventoryItem> WeaponClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRangeAsPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreSelf;
    
    UI_MatchingWeapon();
};

