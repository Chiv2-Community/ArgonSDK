#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TwSplineEmitterBase.generated.h"

class ATwAkEmitterArrayActor;
class UAkAudioEvent;

UCLASS(Blueprintable)
class TWAUDIO_API ATwSplineEmitterBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString VoiceGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfVoices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpdateRateSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* EventOnStartup;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ATwAkEmitterArrayActor*> VoiceEmitterActors;
    
public:
    ATwSplineEmitterBase();
};

