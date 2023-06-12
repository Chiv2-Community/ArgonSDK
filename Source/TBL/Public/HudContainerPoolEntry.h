#pragma once
#include "CoreMinimal.h"
#include "HudContainerPoolEntry.generated.h"

class UHUDContainerSubWidget;

USTRUCT(BlueprintType)
struct FHudContainerPoolEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UHUDContainerSubWidget*> Widgets;
    
    TBL_API FHudContainerPoolEntry();
};

