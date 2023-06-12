#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "SingleTargetTrace.generated.h"

USTRUCT(BlueprintType)
struct FSingleTargetTrace {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<ECollisionChannel>> TargetObjectTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreTeammates;
    
    TBL_API FSingleTargetTrace();
};

