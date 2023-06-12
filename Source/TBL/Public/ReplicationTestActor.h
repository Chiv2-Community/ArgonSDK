#pragma once
#include "CoreMinimal.h"
#include "TBLActor.h"
#include "ReplicationTestActor.generated.h"

class UReplicationTestActorComponent;

UCLASS(Blueprintable)
class TBL_API AReplicationTestActor : public ATBLActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UReplicationTestActorComponent* ReplicationTestActorComponent;
    
    AReplicationTestActor();
};

