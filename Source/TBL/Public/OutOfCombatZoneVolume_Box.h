#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OutOfCombatZoneVolume.h"
#include "OutOfCombatZoneVolume_Box.generated.h"

class ATBLCharacter;

UCLASS(Blueprintable)
class TBL_API AOutOfCombatZoneVolume_Box : public AOutOfCombatZoneVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BoxParams, meta=(AllowPrivateAccess=true))
    FVector BoxParams;
    
    AOutOfCombatZoneVolume_Box();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_BoxParams();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBoxParamsUpdated();
    
    UFUNCTION(BlueprintCallable)
    void GetOverlappingCharacters(TArray<ATBLCharacter*>& OutChars);
    
};

