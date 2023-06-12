#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TeamChatColor.generated.h"

USTRUCT(BlueprintType)
struct FTeamChatColor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ChatColor;
    
    TBL_API FTeamChatColor();
};

