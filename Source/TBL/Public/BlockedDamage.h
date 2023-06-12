#pragma once
#include "CoreMinimal.h"
#include "Action.h"
#include "BlockedDamage.generated.h"

class UDamageSource;

UCLASS(Blueprintable, EditInlineNew)
class UBlockedDamage : public UAction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float BaseDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDamageSource* DamageType;
    
public:
    UBlockedDamage();
};

