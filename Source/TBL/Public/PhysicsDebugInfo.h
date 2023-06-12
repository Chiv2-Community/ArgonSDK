#pragma once
#include "CoreMinimal.h"
#include "PhysicsDebugShape.h"
#include "PhysicsDebugInfo.generated.h"

USTRUCT(BlueprintType)
struct FPhysicsDebugInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPhysicsDebugShape> Boxes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPhysicsDebugShape> Capsules;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPhysicsDebugShape> Spheres;
    
    TBL_API FPhysicsDebugInfo();
};

