#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "EFaction.h"
#include "AssetIdWhitelistTableRow.generated.h"

USTRUCT(BlueprintType)
struct FAssetIdWhitelistTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPrimaryAssetId AssetId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFaction RestrictToFaction;
    
    TBL_API FAssetIdWhitelistTableRow();
};

