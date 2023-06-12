#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "InputReplayValues.h"
#include "InputReplay.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UInputReplay : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DebugString;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInputReplayValues> FrameData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Version;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FInputReplayValues NullFrame;
    
public:
    UInputReplay();
};

