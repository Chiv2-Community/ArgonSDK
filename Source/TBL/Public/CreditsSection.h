#pragma once
#include "CoreMinimal.h"
#include "ECreditsSectionType.h"
#include "CreditsSection.generated.h"

USTRUCT(BlueprintType)
struct FCreditsSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> MultiColumnStrings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECreditsSectionType Type;
    
    TBL_API FCreditsSection();
};

