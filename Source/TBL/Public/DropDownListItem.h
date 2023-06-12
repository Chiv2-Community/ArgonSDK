#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DropDownListItem.generated.h"

UCLASS(Blueprintable)
class UDropDownListItem : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    UDropDownListItem();
};

