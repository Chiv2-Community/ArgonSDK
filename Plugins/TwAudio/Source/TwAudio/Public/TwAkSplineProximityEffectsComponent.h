#pragma once
#include "CoreMinimal.h"
#include "AkLateReverbComponent.h"
#include "TwAkSplineProximityEffectsComponent.generated.h"

class AActor;
class UAkAudioEvent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWAUDIO_API UTwAkSplineProximityEffectsComponent : public UAkLateReverbComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StateGroupName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StateName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActivationDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* EventOnEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* EventOnExit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* PlayEventOn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CollideWithPlayerCapsules;
    
    UTwAkSplineProximityEffectsComponent();
private:
    UFUNCTION(BlueprintCallable)
    void EndOverlap(AActor* A1, AActor* A2);
    
    UFUNCTION(BlueprintCallable)
    void BeginOverlap(AActor* A1, AActor* A2);
    
};

