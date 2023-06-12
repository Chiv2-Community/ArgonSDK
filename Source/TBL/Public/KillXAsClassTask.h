#pragma once
#include "CoreMinimal.h"
#include "BaseKillTask.h"
#include "KillXAsClassTask.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UKillXAsClassTask : public UBaseKillTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Loadout;
    
    UKillXAsClassTask();
};

