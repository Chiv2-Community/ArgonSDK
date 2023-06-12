#pragma once
#include "CoreMinimal.h"
#include "Engine/Canvas.h"
#include "DisplayDebugFileWriter.generated.h"

UCLASS(Blueprintable, NonTransient)
class UDisplayDebugFileWriter : public UCanvas {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastY;
    
public:
    UDisplayDebugFileWriter();
};

