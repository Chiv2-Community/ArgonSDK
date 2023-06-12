#pragma once
#include "CoreMinimal.h"
#include "Navigation/NavLinkProxy.h"
#include "ETBLLinkBehavior.h"
#include "TBLNavLink.generated.h"

UCLASS(Blueprintable, NotPlaceable)
class ATBLNavLink : public ANavLinkProxy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETBLLinkBehavior::Type> LinkBehaviorLeftToRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETBLLinkBehavior::Type> LinkBehaviorRightToLeft;
    
    ATBLNavLink();
};

