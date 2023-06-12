#pragma once
#include "CoreMinimal.h"
#include "EFactionOrAttackerDefender.h"
#include "ActorDisplayInfo.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FActorDisplayInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFactionOrAttackerDefender RelevantTo;
    
    TBL_API FActorDisplayInfo();
};

