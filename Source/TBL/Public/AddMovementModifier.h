#pragma once
#include "CoreMinimal.h"
#include "Action.h"
#include "AddMovementModifier.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UAddMovementModifier : public UAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Modifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRemove;
    
    UAddMovementModifier();
};

