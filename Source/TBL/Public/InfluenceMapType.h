#pragma once
#include "CoreMinimal.h"
#include "EInfluenceMapTypeWeaponRestriction.h"
#include "Templates/SubclassOf.h"
#include "UtilityAI_Curve.h"
#include "InfluenceMapType.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FInfluenceMapType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> ActorClassRestriction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActorTagRestriction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInfluenceMapTypeWeaponRestriction WeaponRestriction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUtilityAI_Curve Curve;
    
    TBL_API FInfluenceMapType();
};

