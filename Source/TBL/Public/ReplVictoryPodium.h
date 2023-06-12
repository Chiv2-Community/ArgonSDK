#pragma once
#include "CoreMinimal.h"
#include "ReplVictoryPodium.generated.h"

class ALevelSequenceActor;
class APodiumLocation;

USTRUCT(BlueprintType)
struct FReplVictoryPodium {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALevelSequenceActor* LevelSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APodiumLocation* PodiumLocation;
    
    TBL_API FReplVictoryPodium();
};

