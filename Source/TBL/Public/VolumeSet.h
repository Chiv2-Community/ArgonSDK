#pragma once
#include "CoreMinimal.h"
#include "VolumeSet.generated.h"

class AOutOfCombatZoneVolume;

USTRUCT(BlueprintType)
struct FVolumeSet {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<AOutOfCombatZoneVolume*> VolumeSet;
    
public:
    TBL_API FVolumeSet();
};

