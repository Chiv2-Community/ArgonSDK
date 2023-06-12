#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ECrossplayPlatform.h"
#include "CrossplayPlatformHelpers.generated.h"

UCLASS(Blueprintable)
class UCrossplayPlatformHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UCrossplayPlatformHelpers();
    UFUNCTION(BlueprintCallable)
    static ECrossplayPlatform StringToPlatform(const FString& String);
    
    UFUNCTION(BlueprintCallable)
    static FString PlatformToString(ECrossplayPlatform Platform);
    
    UFUNCTION(BlueprintCallable)
    static ECrossplayPlatform GetPlatform();
    
};

