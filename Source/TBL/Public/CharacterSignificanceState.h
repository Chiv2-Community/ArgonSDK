#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ECharacterSignificanceLevel.h"
#include "OnSignificanceChangedDelegate.h"
#include "CharacterSignificanceState.generated.h"

USTRUCT(BlueprintType)
struct FCharacterSignificanceState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterSignificanceLevel Significance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SignificanceScreenCoords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNearFrustum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWantsSignificanceUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VisualizationRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSignificanceChanged OnSignificanceChanged;
    
    TBL_API FCharacterSignificanceState();
};

