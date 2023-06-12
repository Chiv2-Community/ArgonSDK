#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CTBase.h"
#include "EWeaponTag.h"
#include "CTWeapon.generated.h"

class UMaterialInterface;
class USkeletalMesh;
class UStaticMesh;

UCLASS(Blueprintable)
class TBL_API UCTWeapon : public UCTBase {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftClassPath Asset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* StaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* SkeletalMesh;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWeaponTag WeaponTag;
    
    UCTWeapon();
    UFUNCTION(BlueprintCallable)
    UClass* ResolveAssetClass();
    
};

