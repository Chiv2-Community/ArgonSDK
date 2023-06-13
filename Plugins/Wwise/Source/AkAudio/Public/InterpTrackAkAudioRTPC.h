#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrackFloatBase.h"
#include "InterpTrackAkAudioRTPC.generated.h"

UCLASS(Blueprintable, CollapseCategories, MinimalAPI)
class UInterpTrackAkAudioRTPC : public UInterpTrackFloatBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bPlayOnReverse: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bContinueRTPCOnMatineeEnd: 1;
    
	virtual const FString	GetEdHelperClassName() const override;

	virtual const FString   GetSlateHelperClassName() const override;

    #if WITH_EDITORONLY_DATA
        virtual class UTexture2D* GetTrackIcon() const override;
    #endif // WITH_EDITORONLY_DATA
    UInterpTrackAkAudioRTPC();
};

// https://github.com/narknon/Nimbus-Template/blob/eae914f34422b280fedeac5d056399703aeb67c3/Plugins/EnginePlugins/Wwise/Source/AkAudio/Private/InterpTrackAkAudioRTPC.cpp#L10
