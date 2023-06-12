#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "StatGroupData.h"
#include "AutomatedArtProfiling.generated.h"

UCLASS(Blueprintable)
class TBL_API AAutomatedArtProfiling : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStatGroupData> StatGroupsToSearch;
    
public:
    AAutomatedArtProfiling();
    UFUNCTION(BlueprintCallable)
    void SaveCsvFile();
    
    UFUNCTION(BlueprintCallable)
    void InitCsvFile(const FString& CameraName);
    
    UFUNCTION(BlueprintCallable)
    void GetStatValues(const FString& StatGroupName);
    
};

