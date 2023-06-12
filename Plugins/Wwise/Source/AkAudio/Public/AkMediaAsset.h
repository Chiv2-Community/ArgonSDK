#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AkMediaAsset.generated.h"

class UAkMediaAssetData;

UCLASS(Blueprintable)
class AKAUDIO_API UAkMediaAsset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> UserData;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkMediaAssetData* CurrentMediaAssetData;
    
public:
    UAkMediaAsset();
};

