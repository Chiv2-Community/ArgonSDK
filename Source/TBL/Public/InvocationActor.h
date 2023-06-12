#pragma once
#include "CoreMinimal.h"
#include "InvocationActor.generated.h"

class AActor;
class UDelegateWrapper_ActorDestroyed;

USTRUCT(BlueprintType)
struct FInvocationActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActorName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    UDelegateWrapper_ActorDestroyed* ActorDestroyed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    float WorldTimeMarkedForDestroy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    bool bMarkedForTimedDestroy;
    
    TBL_API FInvocationActor();
};

