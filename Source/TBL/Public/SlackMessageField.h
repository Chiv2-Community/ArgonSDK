#pragma once
#include "CoreMinimal.h"
#include "SlackMessageField.generated.h"

USTRUCT(BlueprintType)
struct FSlackMessageField {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsShort;
    
    TBL_API FSlackMessageField();
};

