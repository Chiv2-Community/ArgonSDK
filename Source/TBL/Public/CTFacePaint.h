#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CTBase.h"
#include "CTFacePaint.generated.h"

class UTexture;

UCLASS(Blueprintable)
class TBL_API UCTFacePaint : public UCTBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* Map;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Color;
    
    UCTFacePaint();
};

