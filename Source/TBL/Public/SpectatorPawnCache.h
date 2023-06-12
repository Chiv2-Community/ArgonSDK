#pragma once
#include "CoreMinimal.h"
#include "SpectatorPawnCache.generated.h"

class ATBLCharacter;

USTRUCT(BlueprintType)
struct FSpectatorPawnCache {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ATBLCharacter> FollowCharacter;
    
    TBL_API FSpectatorPawnCache();
};

