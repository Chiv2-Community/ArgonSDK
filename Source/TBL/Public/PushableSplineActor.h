#pragma once
#include "CoreMinimal.h"
#include "PushableEndPoint.h"
#include "TBLActor.h"
#include "PushableSplineActor.generated.h"

class USceneComponent;
class USplineComponent;

UCLASS(Blueprintable)
class TBL_API APushableSplineActor : public ATBLActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* SplineComponentGenerated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* SplineComponentOutline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* DefaultSceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPushableEndPoint> PushableEndPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartingDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool AllSubLevelsLoaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AllowConstructionScriptToRun;
    
    APushableSplineActor();
    UFUNCTION(BlueprintCallable)
    void OnLevelLoaded();
    
};

