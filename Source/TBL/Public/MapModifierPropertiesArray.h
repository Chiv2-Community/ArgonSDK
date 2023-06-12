#pragma once
#include "CoreMinimal.h"
#include "EGameModeType.h"
#include "EHardwarePlatform.h"
#include "MapBotData.h"
#include "ModifierPropertyOverride.h"
#include "MapModifierPropertiesArray.generated.h"

class UMapModifierProperty;

USTRUCT(BlueprintType)
struct FMapModifierPropertiesArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MapAssetStr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EGameModeType::Type> GamemodeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHardwarePlatform, FMapBotData> BotCounts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMapModifierProperty*> MapModifierProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FModifierPropertyOverride> MapModifierOverrides;
    
    TBL_API FMapModifierPropertiesArray();
};

