#pragma once
#include "CoreMinimal.h"
#include "EWeaponAbilitySlotKey.h"
#include "InputRequest.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FInputRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWeaponAbilitySlotKey Action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<TWeakObjectPtr<UObject>> Requesters;
    
    TBL_API FInputRequest();
};

