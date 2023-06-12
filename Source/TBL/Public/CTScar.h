#pragma once
#include "CoreMinimal.h"
#include "CTBase.h"
#include "CTScar.generated.h"

class UTexture;

UCLASS(Blueprintable)
class TBL_API UCTScar : public UCTBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* Normal;
    
    UCTScar();
};

