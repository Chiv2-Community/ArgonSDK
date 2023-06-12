#pragma once
#include "CoreMinimal.h"
#include "Action.h"
#include "EnableInteractableComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UEnableInteractableComponent : public UAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRestoreOnUndo;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bSavedEnabled;
    
public:
    UEnableInteractableComponent();
};

