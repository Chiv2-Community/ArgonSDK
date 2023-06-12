#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FlavorStats.generated.h"

UCLASS(Blueprintable, Config=GameViewedItems)
class UFlavorStats : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    int32 UserChangelist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, int32> FlavorStats;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, double> AchievementProgressEx;
    
    UFlavorStats();
};

