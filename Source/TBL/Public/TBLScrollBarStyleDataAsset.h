#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Styling/SlateTypes.h"
#include "TBLScrollBarStyleDataAsset.generated.h"

UCLASS(Blueprintable)
class UTBLScrollBarStyleDataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScrollBarStyle Style;
    
    UTBLScrollBarStyleDataAsset();
};

