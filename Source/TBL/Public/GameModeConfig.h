#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AssemblyBlueprint -FallbackName=AssemblyBlueprint
#include "GameModeConfig.generated.h"

class UCurveFloat;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI, Config=Game)
class UGameModeConfig : public UAssemblyBlueprint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PostGameUIDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* PostGameSlomoCurve;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnalyticsSampleEventInterval;
    
    UGameModeConfig();
};

