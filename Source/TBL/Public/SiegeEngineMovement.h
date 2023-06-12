#pragma once
#include "CoreMinimal.h"
#include "EDismountType.h"
#include "TBLCharacterMovementBaseComponent.h"
#include "SiegeEngineMovement.generated.h"

class ATBLCharacter;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USiegeEngineMovement : public UTBLCharacterMovementBaseComponent {
    GENERATED_BODY()
public:
    USiegeEngineMovement();
    UFUNCTION(BlueprintCallable)
    void OnDriverMount(ATBLCharacter* Driver);
    
    UFUNCTION(BlueprintCallable)
    void OnDriverDismount(ATBLCharacter* Driver, EDismountType DismountType);
    
};

