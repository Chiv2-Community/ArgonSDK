#pragma once
#include "CoreMinimal.h"
#include "EStat.h"
#include "StatEntry.h"
#include "TBLPS5HapticsContainer.h"
#include "TBLPS5BlockingHaptics.generated.h"

class AActor;
class UCurveFloat;
class UDamageSource;
class USoundWave;

UCLASS(Blueprintable)
class UTBLPS5BlockingHaptics : public UTBLPS5HapticsContainer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* BlockingStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 MaxTriggerResistanceStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDamageSource*> SharpDamageTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDamageSource*> BluntDamageTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundWave* ShieldLightHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundWave* ShieldHeavyHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundWave* SharpWeaponLightHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundWave* SharpWeaponHeavyHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundWave* BluntWeaponLightHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundWave* BluntWeaponHeavyHit;
    
public:
    UTBLPS5BlockingHaptics();
    UFUNCTION(BlueprintCallable)
    void UpdateResistanceBasedOnStamina(AActor* Actor, EStat StatType, const FStatEntry& Stat, float DeltaValue);
    
};

