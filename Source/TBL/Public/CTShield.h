#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CTBase.h"
#include "EWeaponTag.h"
#include "CTShield.generated.h"

class UMaterialInterface;
class UStaticMesh;

UCLASS(Blueprintable)
class TBL_API UCTShield : public UCTBase {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftClassPath Asset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* StaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* DamagedStaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* DestroyedStaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* Material;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWeaponTag WeaponTag;
    
    UCTShield();
    UFUNCTION(BlueprintCallable)
    UClass* ResolveAssetClass();
    
};

