#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "TwAkReverbVolume.generated.h"

class UAkLateReverbComponent;

UCLASS(Blueprintable)
class TWAUDIO_API ATwAkReverbVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkLateReverbComponent* LateReverbComponent;
    
    ATwAkReverbVolume();
};

