#pragma once
#include "CoreMinimal.h"
#include "DisplayComponentControls.h"
#include "ObjectiveStatusDisplayComponentStruct.generated.h"

class UHudMarkerDisplayComponent;

USTRUCT(BlueprintType)
struct FObjectiveStatusDisplayComponentStruct {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UHudMarkerDisplayComponent> DisplayComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDisplayComponentControls DisplayComponentControls;
    
public:
    TBL_API FObjectiveStatusDisplayComponentStruct();
};

