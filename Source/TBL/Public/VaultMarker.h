#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EVaultType.h"
#include "VaultMarker.generated.h"

class APawn;
class UInteractableComponent;

UCLASS(Abstract, Blueprintable)
class AVaultMarker : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractableComponent* Interactable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxVaultAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxVaultDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EVaultType, FName> MontageSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVaultType VaultType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBothDirections;
    
    AVaultMarker();
    UFUNCTION(BlueprintCallable)
    void UsePressed(APawn* Pawn, UInteractableComponent* InteractableComponent);
    
    UFUNCTION(BlueprintCallable)
    bool CanVault(APawn* Pawn);
    
};

