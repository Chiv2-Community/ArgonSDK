#pragma once
#include "CoreMinimal.h"
#include "TBLPS5HapticsContainer.h"
#include "TBLPS5SiegeEngineHaptics.generated.h"

class USoundWave;

UCLASS(Blueprintable)
class UTBLPS5SiegeEngineHaptics : public UTBLPS5HapticsContainer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundWave* BallistaBoltFired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundWave* BallistaBoltReload;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundWave* CatapultReload;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundWave* CatapultFiring;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundWave* BatteringRamCharge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundWave* BatteringRamReleased;
    
public:
    UTBLPS5SiegeEngineHaptics();
};

