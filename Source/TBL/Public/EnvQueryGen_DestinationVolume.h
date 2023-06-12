#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvironmentQuery/Generators/EnvQueryGenerator_ProjectedPoints.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryGen_DestinationVolume.generated.h"

class UEnvQueryContext;

UCLASS(Blueprintable, EditInlineNew)
class TBL_API UEnvQueryGen_DestinationVolume : public UEnvQueryGenerator_ProjectedPoints {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> Center;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderIntValue GridDistance;
    
    UEnvQueryGen_DestinationVolume();
};

