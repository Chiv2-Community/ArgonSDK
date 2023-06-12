#pragma once
#include "CoreMinimal.h"
#include "EAudioPersonalityType.h"
#include "PersonalityPool.generated.h"

USTRUCT(BlueprintType)
struct FPersonalityPool {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EAudioPersonalityType::Type>> AllPersonalities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EAudioPersonalityType::Type>> AvailablePersonalities;
    
    TBL_API FPersonalityPool();
};

