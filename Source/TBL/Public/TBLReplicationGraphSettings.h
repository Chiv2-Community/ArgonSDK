#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "ClassReplicationGraphSettings.h"
#include "EClassSpatialNodeMapping.h"
#include "TBLReplicationGraphSpatialNodeSettings.h"
#include "TBLReplicationGraphSettings.generated.h"

class AActor;

UCLASS(Blueprintable, Config=Engine, DefaultConfig)
class UTBLReplicationGraphSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TMap<EClassSpatialNodeMapping, FTBLReplicationGraphSpatialNodeSettings> SpatialNodeSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<AActor>, FClassReplicationGraphSettings> ClassReplicationGraphSettings;
    
    UTBLReplicationGraphSettings();
};

