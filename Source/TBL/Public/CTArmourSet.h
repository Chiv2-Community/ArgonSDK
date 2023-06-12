#pragma once
#include "CoreMinimal.h"
#include "CTBase.h"
#include "CTArmourSet.generated.h"

class UCTLeg;
class UCTTorso;

UCLASS(Blueprintable)
class TBL_API UCTArmourSet : public UCTBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCTTorso* Torso;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCTLeg* Leg;
    
    UCTArmourSet();
};

