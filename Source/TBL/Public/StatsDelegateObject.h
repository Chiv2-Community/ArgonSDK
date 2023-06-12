#pragma once
#include "CoreMinimal.h"
#include "StatChangedSignatureDelegate.h"
#include "TBLObject.h"
#include "StatsDelegateObject.generated.h"

UCLASS(Blueprintable)
class UStatsDelegateObject : public UTBLObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStatChangedSignature StatChangedDelegate;
    
    UStatsDelegateObject();
};

