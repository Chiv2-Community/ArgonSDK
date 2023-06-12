#pragma once
#include "CoreMinimal.h"
#include "ReplPodiumCharacterInfo.generated.h"

class ATBLCharacter;
class ATBLPlayerState;

USTRUCT(BlueprintType)
struct FReplPodiumCharacterInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATBLCharacter* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATBLPlayerState* PlayerState;
    
    TBL_API FReplPodiumCharacterInfo();
};

