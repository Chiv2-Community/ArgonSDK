#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OutOfCombatZoneVolume.h"
#include "OutOfCombatZoneVolume_Ellipse.generated.h"

class ATBLCharacter;

UCLASS(Blueprintable)
class AOutOfCombatZoneVolume_Ellipse : public AOutOfCombatZoneVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_EllipseParams, meta=(AllowPrivateAccess=true))
    FVector2D EllipseParams;
    
    AOutOfCombatZoneVolume_Ellipse();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void RecheckCollisions();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_EllipseParams();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEllipseParamsUpdated();
    
    UFUNCTION(BlueprintCallable)
    void GetOverlappingCharacters(TArray<ATBLCharacter*>& OutChars);
    
};

