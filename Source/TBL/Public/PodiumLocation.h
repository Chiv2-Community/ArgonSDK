#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PodiumLocationData.h"
#include "PodiumLocation.generated.h"

class UPodiumLocationComponent;
class USceneComponent;

UCLASS(Blueprintable)
class TBL_API APodiumLocation : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPodiumLocationComponent*> LocationComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPodiumLocationComponent*> VictorLocationComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPodiumLocationComponent*> LoserLocationComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPodiumLocationData> VictorLocationsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPodiumLocationData> LoserLocationsData;
    
public:
    APodiumLocation();
};

