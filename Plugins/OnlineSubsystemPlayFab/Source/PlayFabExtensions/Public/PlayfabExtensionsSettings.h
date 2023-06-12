#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "PlayfabExtensionsSettings.generated.h"

UCLASS(Blueprintable, Config=Game)
class PLAYFABEXTENSIONS_API UPlayfabExtensionsSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NativeSessionName;
    
    UPlayfabExtensionsSettings();
};

