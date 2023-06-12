#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "TBLProfanityFilter.generated.h"

UCLASS(Blueprintable)
class UTBLProfanityFilter : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UTBLProfanityFilter();
    UFUNCTION(BlueprintCallable)
    static FString Apply(const FString& Input);
    
};

