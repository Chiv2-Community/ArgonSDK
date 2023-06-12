#pragma once
#include "CoreMinimal.h"
#include "AchievementInstance.h"
#include "EInventoryType.h"
#include "Templates/SubclassOf.h"
#include "AchievementWeaponKillInstance.generated.h"

class AInventoryItem;

UCLASS(Blueprintable)
class TBL_API UAchievementWeaponKillInstance : public UAchievementInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AInventoryItem> WeaponClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInventoryType ItemClassType;
    
    UAchievementWeaponKillInstance();
};

