#pragma once
#include "CoreMinimal.h"
#include "EFaction.h"
#include "Replicated_EFaction.generated.h"

USTRUCT(BlueprintType)
struct FReplicated_EFaction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFaction Value;
    
public:
    TBL_API FReplicated_EFaction();
};

