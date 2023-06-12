#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MapOption.h"
#include "MapSummaryData.h"
#include "GameConfigObjectBase.generated.h"

UCLASS(Blueprintable)
class UGameConfigObjectBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMapSummaryData> MapSummaryLookup;
    
public:
    UGameConfigObjectBase();
protected:
    UFUNCTION(BlueprintCallable)
    void ClearCachedMapsData();
    
    UFUNCTION(BlueprintCallable)
    void CacheMapData(const FMapOption& MapOption);
    
    UFUNCTION(BlueprintCallable)
    void CacheAllMapsData(const TArray<FMapOption>& MapOptions, bool bClearOldData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BuildDerivedProperties();
    
};

