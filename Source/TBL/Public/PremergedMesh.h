#pragma once
#include "CoreMinimal.h"
#include "PremergedMesh.generated.h"

class USkeletalMesh;

USTRUCT(BlueprintType)
struct FPremergedMesh {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* Mesh;
    
    TBL_API FPremergedMesh();
};

