#pragma once
#include "CoreMinimal.h"
#include "TBLObject.h"
#include "Templates/SubclassOf.h"
#include "CombatStateSet.generated.h"

class UCombatState;

UCLASS(Blueprintable, MinimalAPI)
class UCombatStateSet : public UTBLObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UCombatState>> CombatStateBlueprints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoFillFromDirectory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIncludeSubDirectories;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UCombatState>> ExcludeCombatStates;
    
    UCombatStateSet();
};

