#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TracerShape.h"
#include "TracerSocketInfo.h"
#include "LineTracers.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ULineTracers : public UTracerShape {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EndSocket;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsValid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTracerSocketInfo EndSocketInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumFrames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTransform> WeaponTransforms;
    
public:
    ULineTracers();
};

