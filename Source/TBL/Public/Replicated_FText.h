#pragma once
#include "CoreMinimal.h"
#include "Replicated_FText.generated.h"

USTRUCT(BlueprintType)
struct FReplicated_FText {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Value;
    
public:
    TBL_API FReplicated_FText();
};

