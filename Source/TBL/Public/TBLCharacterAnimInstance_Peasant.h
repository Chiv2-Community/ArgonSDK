#pragma once
#include "CoreMinimal.h"
#include "TBLCharacterAnimInstance.h"
#include "TBLCharacterAnimInstance_Peasant.generated.h"

class UNPCReplicatedDataComponent;

UCLASS(Blueprintable, NonTransient)
class UTBLCharacterAnimInstance_Peasant : public UTBLCharacterAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNPCReplicatedDataComponent* NPCReplicatedDataComponent;
    
    UTBLCharacterAnimInstance_Peasant();
};

