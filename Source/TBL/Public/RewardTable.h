#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RewardTable.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class URewardTable : public UDataTable {
    GENERATED_BODY()
public:
    URewardTable();
};

