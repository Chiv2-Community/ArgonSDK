#pragma once
#include "CoreMinimal.h"
#include "UtilityAI_InputAxis.h"
#include "I_Distance.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UI_Distance : public UUtilityAI_InputAxis {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseDist2D;
    
    UI_Distance();
};

