#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "MultiActorHudMarkerActor.h"
#include "MultiActorHudMarkerArray.generated.h"

class AMultiActorHUDMarkerBase;

USTRUCT(BlueprintType)
struct FMultiActorHudMarkerArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMultiActorHudMarkerActor> Actors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    AMultiActorHUDMarkerBase* ParentActor;
    
public:
    TBL_API FMultiActorHudMarkerArray();
};

