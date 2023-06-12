#pragma once
#include "CoreMinimal.h"
#include "Engine/DebugCameraController.h"
#include "TBLDebugCameraController.generated.h"

UCLASS(Blueprintable)
class ATBLDebugCameraController : public ADebugCameraController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DisplayDebugScrollDir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisplayDebugScrollY;
    
    ATBLDebugCameraController();
    UFUNCTION(BlueprintCallable)
    void DisplayDebugScrollUp();
    
    UFUNCTION(BlueprintCallable)
    void DisplayDebugScrollReleased();
    
    UFUNCTION(BlueprintCallable)
    void DisplayDebugScrollDown();
    
};

