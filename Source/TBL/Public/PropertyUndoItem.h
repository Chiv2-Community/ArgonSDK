#pragma once
#include "CoreMinimal.h"
#include "PropertyMenuItem.h"
#include "PropertyUndoItem.generated.h"

USTRUCT(BlueprintType)
struct FPropertyUndoItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPropertyMenuItem MenuItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectedPropertyIndex;
    
    TBL_API FPropertyUndoItem();
};

