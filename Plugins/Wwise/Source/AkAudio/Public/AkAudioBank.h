#pragma once
#include "CoreMinimal.h"
#include "AkAssetBase.h"
#include "AkAudioBank.generated.h"

class UAkAssetPlatformData;

UCLASS(Blueprintable)
class AKAUDIO_API UAkAudioBank : public UAkAssetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AutoLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, TSoftObjectPtr<UAkAssetPlatformData>> LocalizedPlatformAssetDataMap;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkAssetPlatformData* CurrentLocalizedPlatformAssetData;
    
public:
    UAkAudioBank();
};

