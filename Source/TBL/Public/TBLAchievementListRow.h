#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TBLAchievementListRow.generated.h"

class UTBLAchievementTask;

USTRUCT(BlueprintType)
struct FTBLAchievementListRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTBLAchievementTask* SingleTask;
    
    TBL_API FTBLAchievementListRow();
};

