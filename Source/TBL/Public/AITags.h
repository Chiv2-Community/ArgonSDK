#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AITags.generated.h"

USTRUCT(BlueprintType)
struct FAITags {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AgathaTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer MasonTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TenosiaTags;
    
    TBL_API FAITags();
};

