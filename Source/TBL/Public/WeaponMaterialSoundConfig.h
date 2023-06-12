#pragma once
#include "CoreMinimal.h"
#include "EWeaponMaterial.h"
#include "WeaponMaterialSoundConfig.generated.h"

USTRUCT(BlueprintType)
struct FWeaponMaterialSoundConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWeaponMaterial DefaultBlockMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWeaponMaterial DefaultAttackMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, EWeaponMaterial> OverrideMaterialByAttack;
    
    TBL_API FWeaponMaterialSoundConfig();
};

