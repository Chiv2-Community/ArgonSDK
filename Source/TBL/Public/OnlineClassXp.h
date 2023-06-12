#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OnlineClassXp.generated.h"

class ATBLCharacter;

USTRUCT(BlueprintType)
struct FOnlineClassXp {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATBLCharacter> Class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Xp;
    
    TBL_API FOnlineClassXp();
};

