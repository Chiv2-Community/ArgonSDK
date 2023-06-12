#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "DamagerInterface.generated.h"

class AActor;

UINTERFACE(Blueprintable)
class UDamagerInterface : public UInterface {
    GENERATED_BODY()
};

class IDamagerInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldDealTeamDamageAgainst(AActor* TargetTeammate);
    
};

