#pragma once
#include "CoreMinimal.h"
#include "CompositeTargetMethod.h"
#include "MultiTargetMethod.generated.h"

class UAbilityTargetMethod;

UCLASS(Blueprintable, EditInlineNew)
class UMultiTargetMethod : public UCompositeTargetMethod {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAbilityTargetMethod*> TargetMethods;
    
    UMultiTargetMethod();
};

