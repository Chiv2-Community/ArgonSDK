#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "PhysicsDebugShape.generated.h"

USTRUCT(BlueprintType)
struct FPhysicsDebugShape {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize Rotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize Size;
    
    TBL_API FPhysicsDebugShape();
};

