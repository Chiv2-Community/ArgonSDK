#pragma once
#include "CoreMinimal.h"
#include "CinematicAnimationRemapSet.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct FCinematicAnimationRemapSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AutomapString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, UAnimSequenceBase*> WeaponMapping;
    
    TBL_API FCinematicAnimationRemapSet();
};

