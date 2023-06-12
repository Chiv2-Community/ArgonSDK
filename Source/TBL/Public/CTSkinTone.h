#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CTBase.h"
#include "CTSkinTone.generated.h"

UCLASS(Blueprintable)
class TBL_API UCTSkinTone : public UCTBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor DisplayColor;
    
    UCTSkinTone();
};

