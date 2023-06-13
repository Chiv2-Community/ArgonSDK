#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ActionContext.h"
#include "TBLObject.h"
#include "Action.generated.h"

class UObject;

UCLASS(Abstract, Blueprintable, DefaultToInstanced, EditInlineNew, MinimalAPI)
class UAction : public UTBLObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Engine")
    int32 Version;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true), Category = "Engine")
    TWeakObjectPtr<UObject> Initiator;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true), Category = "Engine")
    TWeakObjectPtr<UObject> Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Engine")
    FVector TargetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true), Category = "Engine")
    FActionContext Context;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Engine")
    bool bLogEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true), Category = "Engine")
    int32 Flags;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Engine")
    bool bIsComplete;
    
public:
    UAction();
};

