#include "InterpTrackAkAudioRTPC.h"

UInterpTrackAkAudioRTPC::UInterpTrackAkAudioRTPC() {
    this->bPlayOnReverse = false;
    this->bContinueRTPCOnMatineeEnd = false;
}

const FString UInterpTrackAkAudioRTPC::GetEdHelperClassName() const
{
	return FString(TEXT("UnrealEd.InterpTrackAnimControlHelper"));
}

const FString UInterpTrackAkAudioRTPC::GetSlateHelperClassName() const
{
	return FString(TEXT("Matinee.MatineeTrackAnimControlHelper"));
}

#if WITH_EDITORONLY_DATA
UTexture2D* UInterpTrackAkAudioRTPC::GetTrackIcon() const
{
	return TrackIcon;
}
#endif // WITH_EDITORONLY_DATA
