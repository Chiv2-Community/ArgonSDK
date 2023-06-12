#pragma once
#include "CoreMinimal.h"
#include "PlayerStateSnapshot.generated.h"

USTRUCT(BlueprintType)
struct FPlayerStateSnapshot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Xp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NextLevelXp;
    
    TBL_API FPlayerStateSnapshot();
};

