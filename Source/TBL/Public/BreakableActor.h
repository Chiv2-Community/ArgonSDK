#pragma once
#include "CoreMinimal.h"
#include "TBLActor.h"
#include "BreakableActor.generated.h"

class UBreakableComponent;
class USceneComponent;
class UStatsComponent;

UCLASS(Abstract, Blueprintable)
class ABreakableActor : public ATBLActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBreakableComponent* BreakableComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStatsComponent* StatsComponent;
    
    ABreakableActor();
};

