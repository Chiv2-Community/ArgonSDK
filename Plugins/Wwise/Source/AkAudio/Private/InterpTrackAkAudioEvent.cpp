#include "InterpTrackAkAudioEvent.h"

UInterpTrackAkAudioEvent::UInterpTrackAkAudioEvent() {
    this->bContinueEventOnMatineeEnd = false;
}

const FString UInterpTrackAkAudioEvent::GetEdHelperClassName() const
{
	return FString(TEXT("UnrealEd.InterpTrackAnimControlHelper"));
}

const FString UInterpTrackAkAudioEvent::GetSlateHelperClassName() const
{
	return FString(TEXT("Matinee.MatineeTrackAnimControlHelper"));
}

#if WITH_EDITORONLY_DATA
UTexture2D* UInterpTrackAkAudioEvent::GetTrackIcon() const
{
	return TrackIcon;
}
#endif