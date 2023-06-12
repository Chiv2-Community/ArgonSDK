#pragma once
#include "CoreMinimal.h"
#include "Ability.generated.h"

class AAbilityInvocation;
class AInventoryItem;
class UAbilitiesComponent;
class UAbilityActivationMethod;
class UAbilitySpec;
class UAbilityTargetMethod;

USTRUCT(BlueprintType)
struct FAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NotReplicated, meta=(AllowPrivateAccess=true))
    UAbilitiesComponent* Owner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAbilitySpec* Spec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    TArray<AAbilityInvocation*> PendingInvocations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    TArray<AAbilityInvocation*> ClientInvocations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    AInventoryItem* InitiatingInventoryItem;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    UAbilityActivationMethod* SharedActivationMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NotReplicated, meta=(AllowPrivateAccess=true))
    UAbilityTargetMethod* SharedTargetMethod;
    
public:
    TBL_API FAbility();
};

