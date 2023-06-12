#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Templates/SubclassOf.h"
#include "EmbeddedWidgetRow.generated.h"

class UUserWidget;

USTRUCT(BlueprintType)
struct FEmbeddedWidgetRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> WidgetClass;
    
    TBL_API FEmbeddedWidgetRow();
};

