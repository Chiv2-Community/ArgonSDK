#pragma once
#include "CoreMinimal.h"
#include "RichTextEmbedInfo.generated.h"

class UTBLTextBlock;

USTRUCT(BlueprintType)
struct FRichTextEmbedInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Content;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RunName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTBLTextBlock* ParentTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> MetaData;
    
    TBL_API FRichTextEmbedInfo();
};

