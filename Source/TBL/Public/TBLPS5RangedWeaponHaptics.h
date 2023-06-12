#pragma once
#include "CoreMinimal.h"
#include "EStat.h"
#include "StatEntry.h"
#include "TBLPS5HapticsContainer.h"
#include "TBLPS5RangedWeaponHaptics.generated.h"

class AActor;
class UCurveFloat;
class USoundWave;

UCLASS(Blueprintable)
class UTBLPS5RangedWeaponHaptics : public UTBLPS5HapticsContainer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* VibrationStrengthFromStamina;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 MaxTriggerAmplitudeStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundWave* BowReleasedEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 BowFireTriggerFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 BowFireTriggerAmplitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundWave* CrossbowFireEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundWave* CrossbowReloadEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrossbowReloadDelay;
    
public:
    UTBLPS5RangedWeaponHaptics();
    UFUNCTION(BlueprintCallable)
    void UpdateVibrationBasedOnStamina(AActor* Actor, EStat StatType, const FStatEntry& Stat, float DeltaValue);
    
};

