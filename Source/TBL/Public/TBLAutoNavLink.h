#pragma once
#include "CoreMinimal.h"
#include "Navigation/NavLinkProxy.h"
#include "UObject/NoExportTypes.h"
#include "TBLAutoNavLink.generated.h"

UCLASS(Blueprintable, NotPlaceable)
class ATBLAutoNavLink : public ANavLinkProxy {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FVector> FoundLinkPoints;
    
public:
    ATBLAutoNavLink();
};

