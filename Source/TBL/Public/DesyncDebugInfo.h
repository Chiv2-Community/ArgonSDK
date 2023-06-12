#pragma once
#include "CoreMinimal.h"
#include "MovementDebugFrame.h"
#include "RPCDebugInfo.h"
#include "DesyncDebugInfo.generated.h"

USTRUCT(BlueprintType)
struct FDesyncDebugInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> CombatStateDebugInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> InventoryDebugInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovementDebugFrame MovementDebugFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRPCDebugInfo RPCDebugInfo;
    
    TBL_API FDesyncDebugInfo();
};

