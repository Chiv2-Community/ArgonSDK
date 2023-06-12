#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AudioBlueprintLibrary.generated.h"

class UAkAudioEvent;
class UObject;

UCLASS(Blueprintable, MinimalAPI)
class UAudioBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAudioBlueprintLibrary();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void StopMusic(UObject* WorldContextObject, int32 TransitionDurationMs);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ResumeMusic(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void PostMusicEvent(UObject* WorldContextObject, UAkAudioEvent* Event, int32 TransitionDurationMs);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void PauseMusic(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsPlayingMusic(UObject* WorldContextObject);
    
};

