#pragma once
#include "CoreMinimal.h"
#include "Ability.h"
#include "AbilityArray.generated.h"

class UAbilitiesComponent;

USTRUCT(BlueprintType)
struct FAbilityArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAbility> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NotReplicated, meta=(AllowPrivateAccess=true))
    UAbilitiesComponent* Owner;
    
    TBL_API FAbilityArray();
};

