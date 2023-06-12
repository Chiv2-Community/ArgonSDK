#pragma once
#include "CoreMinimal.h"
#include "EAudioClassType.h"
#include "EAudioPersonalityType.h"
#include "EFaction.h"
#include "EquippedPersonality.generated.h"

USTRUCT(BlueprintType)
struct FEquippedPersonality {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EAudioClassType::Type> ClassType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFaction Faction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EAudioPersonalityType::Type> PersonalityType;
    
    TBL_API FEquippedPersonality();
};

