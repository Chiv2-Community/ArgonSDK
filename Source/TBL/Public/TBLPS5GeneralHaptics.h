#pragma once
#include "CoreMinimal.h"
#include "EStat.h"
#include "StatEntry.h"
#include "TBLPS5HapticsContainer.h"
#include "TBLPS5GeneralHaptics.generated.h"

class AActor;
class USoundWave;

UCLASS(Blueprintable)
class UTBLPS5GeneralHaptics : public UTBLPS5HapticsContainer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundWave* StartingSprintEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundWave* MaximumSprintEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundWave* LowHealthEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealthPercentToPlay;
    
public:
    UTBLPS5GeneralHaptics();
    UFUNCTION(BlueprintCallable)
    void PlayLowHealthEffect(AActor* Actor, EStat StatType, const FStatEntry& Stat, float DeltaValue);
    
};

