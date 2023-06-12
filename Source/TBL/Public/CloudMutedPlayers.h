#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MutedPlayerEntry.h"
#include "CloudMutedPlayers.generated.h"

UCLASS(Blueprintable, Config=UCloudMutedPlayers)
class UCloudMutedPlayers : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    int32 UserChangelist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FMutedPlayerEntry> Mutes;
    
    UCloudMutedPlayers();
};

