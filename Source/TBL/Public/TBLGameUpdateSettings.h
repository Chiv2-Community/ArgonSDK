#pragma once
#include "CoreMinimal.h"
#include "TBLGameUpdateSettings.generated.h"

USTRUCT(BlueprintType)
struct FTBLGameUpdateSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FString> ViewedGameUpdateVersions;
    
    TBL_API FTBLGameUpdateSettings();
};

