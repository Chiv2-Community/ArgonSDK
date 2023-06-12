#pragma once
#include "CoreMinimal.h"
#include "CTBase.h"
#include "CTBeard.generated.h"

class UMaterialInterface;
class USkeletalMesh;
class UTexture;

UCLASS(Blueprintable)
class TBL_API UCTBeard : public UCTBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* Utility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* Normal;
    
    UCTBeard();
};

