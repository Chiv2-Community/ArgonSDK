#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameServerQuery.generated.h"

class UGameServerQueryHandler;

UCLASS(Blueprintable)
class GAMESERVERQUERYPLUGIN_API AGameServerQuery : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    FString QueryIpAddress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    int32 QueryPort;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    int32 PingPort;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    int32 QueryThreadWaitTimeMilliseconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UGameServerQueryHandler*> QueryHandlers;
    
public:
    AGameServerQuery();
};

