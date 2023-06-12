#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "NavBlockingVolume.generated.h"

class UTBLNavModifierComponent;

UCLASS(Blueprintable)
class ANavBlockingVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTBLNavModifierComponent* NavModifier;
    
    ANavBlockingVolume();
};

