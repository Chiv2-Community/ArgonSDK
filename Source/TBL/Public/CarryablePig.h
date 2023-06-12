#pragma once
#include "CoreMinimal.h"
#include "TBLAnimal.h"
#include "CarryablePig.generated.h"

class UCarryablePlayerComponent;
class UInteractableComponent;

UCLASS(Blueprintable)
class ACarryablePig : public ATBLAnimal {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCarryablePlayerComponent* CarryablePlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractableComponent* Interactable;
    
    ACarryablePig();
};

