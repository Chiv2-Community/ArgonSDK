#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TutorialLookAtParams.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FTutorialLookAtParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* TargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TargetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsActive: 1;
    
    TBL_API FTutorialLookAtParams();
};

