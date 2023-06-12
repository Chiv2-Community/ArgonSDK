#pragma once
#include "CoreMinimal.h"
#include "CTBase.h"
#include "CTLeg.generated.h"

class UMaterialInterface;
class USkeletalMesh;

UCLASS(Blueprintable)
class TBL_API UCTLeg : public UCTBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* Material;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasKneePadLeft;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasKneePadRight;
    
    UCTLeg();
};

