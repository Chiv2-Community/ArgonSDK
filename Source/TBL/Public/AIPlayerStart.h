#pragma once
#include "CoreMinimal.h"
#include "TBLPlayerStart.h"
#include "AIPlayerStart.generated.h"

UCLASS(Blueprintable)
class AAIPlayerStart : public ATBLPlayerStart {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanSpawn;
    
    AAIPlayerStart();
};

