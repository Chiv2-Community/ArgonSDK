#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CharacterPerformanceTestSingleSetting.h"
#include "CharacterPerformanceTestSettings.generated.h"

UCLASS(Blueprintable)
class ACharacterPerformanceTestSettings : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterPerformanceTestSingleSetting> Tests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SeriesName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WaitForCharacterCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> PreTestCommands;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> StartTestCommands;
    
    ACharacterPerformanceTestSettings();
};

