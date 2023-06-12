#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "EnvQueryTest_OtherBotsTargetting.generated.h"

UCLASS(Blueprintable)
class UEnvQueryTest_OtherBotsTargetting : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSameTeamAsQuerier;
    
    UEnvQueryTest_OtherBotsTargetting();
};

