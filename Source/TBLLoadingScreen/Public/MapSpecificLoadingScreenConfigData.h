#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MapSpecificLoadingScreenConfigData.generated.h"

USTRUCT(BlueprintType)
struct FMapSpecificLoadingScreenConfigData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MapName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath Texture;
    
    TBLLOADINGSCREEN_API FMapSpecificLoadingScreenConfigData();
};

