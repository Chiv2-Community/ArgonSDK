#pragma once
#include "CoreMinimal.h"
#include "EAudioClassType.h"
#include "EFaction.h"
#include "Replicated_FCustomizationPreset.generated.h"

class ATBLPlayerState;

USTRUCT(BlueprintType)
struct FReplicated_FCustomizationPreset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATBLPlayerState* PlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EAudioClassType::Type> PlayerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFaction PlayerFaction;
    
public:
    TBL_API FReplicated_FCustomizationPreset();
};

