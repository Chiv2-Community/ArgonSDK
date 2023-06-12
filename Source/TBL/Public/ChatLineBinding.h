#pragma once
#include "CoreMinimal.h"
#include "Binding/PropertyBinding.h"
#include "ChatLine.h"
#include "ChatLineBinding.generated.h"

UCLASS(Blueprintable)
class UChatLineBinding : public UPropertyBinding {
    GENERATED_BODY()
public:
    UChatLineBinding();
    UFUNCTION(BlueprintCallable)
    FChatLine GetValue() const;
    
};

