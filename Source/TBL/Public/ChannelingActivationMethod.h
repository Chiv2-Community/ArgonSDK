#pragma once
#include "CoreMinimal.h"
#include "AbilityActivationMethod.h"
#include "ChannelingActivationMethod.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UChannelingActivationMethod : public UAbilityActivationMethod {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasClientMovement;
    
    UChannelingActivationMethod();
};

