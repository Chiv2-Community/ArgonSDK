#pragma once
#include "CoreMinimal.h"
#include "UtilityAI_InputAxis.h"
#include "I_BlackboardValue.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UI_BlackboardValue : public UUtilityAI_InputAxis {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName KeyName;
    
    UI_BlackboardValue();
};

