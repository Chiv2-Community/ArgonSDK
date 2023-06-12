#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "FastSharedProperties_CombatStateComponent.h"
#include "FastSharedProperties_HorseMovement.h"
#include "FastSharedProperties_Horse.generated.h"

USTRUCT(BlueprintType)
struct FFastSharedProperties_Horse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRepMovement ReplicatedMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 ServerFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 ReplicatedMovementMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFastSharedProperties_HorseMovement HorseMovementProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFastSharedProperties_CombatStateComponent CombatStateComponentProperties;
    
    TBL_API FFastSharedProperties_Horse();
};

