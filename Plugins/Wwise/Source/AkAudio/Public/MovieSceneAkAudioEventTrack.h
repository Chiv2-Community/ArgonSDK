#pragma once
#include "CoreMinimal.h"
#include "MovieSceneAkTrack.h"
#include "MovieSceneAkAudioEventTrack.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneAkAudioEventTrack : public UMovieSceneAkTrack {
    GENERATED_BODY()
public:
    UMovieSceneAkAudioEventTrack();
};

