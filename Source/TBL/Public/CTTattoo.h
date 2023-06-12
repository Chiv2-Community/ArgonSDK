#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CTBase.h"
#include "ETattooColorChannel.h"
#include "CTTattoo.generated.h"

class UTexture;

UCLASS(Blueprintable)
class TBL_API UCTTattoo : public UCTBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* Map;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETattooColorChannel MapChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor InkColor;
    
    UCTTattoo();
};

