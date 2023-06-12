#pragma once
#include "CoreMinimal.h"
#include "EPDGWorkResultState.h"
#include "OutputActorOwner.h"
#include "TOPWorkResultObject.generated.h"

class UHoudiniOutput;
class UObject;

USTRUCT(BlueprintType)
struct HOUDINIENGINERUNTIME_API FTOPWorkResultObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonTransactional, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonTransactional, meta=(AllowPrivateAccess=true))
    FString FilePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonTransactional, meta=(AllowPrivateAccess=true))
    EPDGWorkResultState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonTransactional, meta=(AllowPrivateAccess=true))
    int32 WorkItemResultInfoIndex;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonTransactional, meta=(AllowPrivateAccess=true))
    TArray<UHoudiniOutput*> ResultOutputs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonTransactional, meta=(AllowPrivateAccess=true))
    bool bAutoBakedSinceLastLoad;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonTransactional, meta=(AllowPrivateAccess=true))
    TArray<UObject*> OutputObjectsToDelete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonTransactional, meta=(AllowPrivateAccess=true))
    FOutputActorOwner OutputActorOwner;
    
public:
    FTOPWorkResultObject();
};

