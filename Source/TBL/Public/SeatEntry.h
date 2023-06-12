#pragma once
#include "CoreMinimal.h"
#include "SeatEntry.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FSeatEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* SeatActor;
    
    TBL_API FSeatEntry();
};

