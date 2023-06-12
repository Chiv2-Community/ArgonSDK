#pragma once
#include "CoreMinimal.h"
#include "CustomizationLoadingJob.h"
#include "CharacterCustomizationLoadingJob.generated.h"

UCLASS(Blueprintable)
class UCharacterCustomizationLoadingJob : public UCustomizationLoadingJob {
    GENERATED_BODY()
public:
    UCharacterCustomizationLoadingJob();
};

