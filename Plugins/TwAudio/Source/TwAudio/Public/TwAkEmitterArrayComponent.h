#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TwAkEmitterArrayComponent.generated.h"

class ATwAkEmitterArrayActor;
class UAkAudioEvent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWAUDIO_API UTwAkEmitterArrayComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString VoiceGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfVoices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActiveVoiceCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpdateRateSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* EventOnStartup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IsMovingTolerance;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ATwAkEmitterArrayActor*> VoiceEmitterActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool VoiceEnabled;
    
public:
    UTwAkEmitterArrayComponent();
    UFUNCTION(BlueprintCallable)
    void PostEvent(UAkAudioEvent* Event);
    
    UFUNCTION(BlueprintCallable)
    void EnableVoice();
    
    UFUNCTION(BlueprintCallable)
    void DisableVoice();
    
};

