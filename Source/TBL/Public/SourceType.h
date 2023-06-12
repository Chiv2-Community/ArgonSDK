#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SourceType.generated.h"

UCLASS(Blueprintable)
class USourceType : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    USourceType();
};

