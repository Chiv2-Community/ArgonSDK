#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "ETargetMethodEvent.h"
#include "Result.h"
#include "AbilityInvocationRegistryComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UAbilityInvocationRegistryComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UAbilityInvocationRegistryComponent();
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void ClientTargetMethodEvent(int32 InvocationId, FName TargetMethodName, ETargetMethodEvent::Type Event, FVector Location, const TArray<AActor*>& HitTargets);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientAbilityError(int32 InvocationId, FResult Error);
    
};

