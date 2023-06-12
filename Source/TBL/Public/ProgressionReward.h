#pragma once
#include "CoreMinimal.h"
#include "TBLObject.h"
#include "ProgressionReward.generated.h"

UCLASS(Abstract, Blueprintable, DefaultToInstanced, EditInlineNew, MinimalAPI)
class UProgressionReward : public UTBLObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UProgressionReward();
};

