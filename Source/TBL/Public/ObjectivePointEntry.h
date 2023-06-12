#pragma once
#include "CoreMinimal.h"
#include "EFaction.h"
#include "EObjectivePointCategory.h"
#include "ObjectivePointEntry.generated.h"

USTRUCT(BlueprintType)
struct FObjectivePointEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFaction Faction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Points;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EObjectivePointCategory::Type> PointCategory;
    
    TBL_API FObjectivePointEntry();
};

