#pragma once
#include "CoreMinimal.h"
#include "CTBase.h"
#include "CTHead.generated.h"

class UMaterialInterface;
class USkeletalMesh;

UCLASS(Blueprintable)
class TBL_API UCTHead : public UCTBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MorphTarget;
    
    UCTHead();
};

