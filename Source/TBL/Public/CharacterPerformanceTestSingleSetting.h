#pragma once
#include "CoreMinimal.h"
#include "CharacterPerformanceTestSingleSetting.generated.h"

class ACameraActor;
class AHollowNavBlocker;
class ASpawner;

USTRUCT(BlueprintType)
struct FCharacterPerformanceTestSingleSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ACameraActor> CameraLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ASpawner> AgathaSpawner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ASpawner> MasonSpawner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AHollowNavBlocker> NavBlocker;
    
    TBL_API FCharacterPerformanceTestSingleSetting();
};

