#pragma once
#include "CoreMinimal.h"
#include "Action.h"
#include "Delay.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UDelay : public UAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Engine")
    float Delay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true), Category = "Engine")
    TArray<UAction*> Actions;
    
    UDelay();
};

