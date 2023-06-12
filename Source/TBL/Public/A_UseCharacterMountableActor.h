#pragma once
#include "CoreMinimal.h"
#include "EDismountType.h"
#include "UtilityAI_Action.h"
#include "A_UseCharacterMountableActor.generated.h"

class AAIController;
class ACharacterMountableActor;
class ATBLCharacter;
class USiegeMountPoint;

UCLASS(Blueprintable, EditInlineNew)
class TBL_API UA_UseCharacterMountableActor : public UUtilityAI_Action {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAIController* Controller;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACharacterMountableActor* CharacterMountableActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USiegeMountPoint* SiegeMountPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DesiredChargePercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCharging;
    
public:
    UA_UseCharacterMountableActor();
protected:
    UFUNCTION(BlueprintCallable)
    void StopCharging();
    
    UFUNCTION(BlueprintCallable)
    void StartCharging();
    
    UFUNCTION(BlueprintCallable)
    void OnDismount(ATBLCharacter* Driver, EDismountType DismountType);
    
    UFUNCTION(BlueprintCallable)
    void OnChargeUpdated(ACharacterMountableActor* InCharacterMountableActor, float Charge);
    
};

