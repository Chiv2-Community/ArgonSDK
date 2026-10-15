#pragma once

#include "Commandlets/Commandlet.h"
#include "CoreMinimal.h"
#include "SDKReferenceRepairCommandlet.generated.h"

UCLASS()
class USDKReferenceRepairCommandlet : public UCommandlet
{
    GENERATED_BODY()

public:
    USDKReferenceRepairCommandlet();
    virtual int32 Main(const FString& Params) override;
};
