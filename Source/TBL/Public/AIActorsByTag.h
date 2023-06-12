#pragma once
#include "CoreMinimal.h"
#include "AIActorsByTag.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FAIActorsByTag {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<AActor*> AgathaActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<AActor*> MasonActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<AActor*> TenosiaActors;
    
    TBL_API FAIActorsByTag();
};

