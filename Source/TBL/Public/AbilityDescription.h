#pragma once
#include "CoreMinimal.h"
#include "DataTableRowSelection.h"
#include "AbilityDescription.generated.h"

USTRUCT(BlueprintType)
struct FAbilityDescription {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowSelection AbilityDescriptionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowSelection> DescriptorTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    TArray<FText> AbilityDescriptionTexts;
    
    TBL_API FAbilityDescription();
};

