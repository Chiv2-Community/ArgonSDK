#pragma once
#include "CoreMinimal.h"
#include "DynamicGameActorTagsStruct.generated.h"

USTRUCT(BlueprintType)
struct FDynamicGameActorTagsStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ObjectiveActorTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> DynamicGameActorTags;
    
    TBL_API FDynamicGameActorTagsStruct();
};

