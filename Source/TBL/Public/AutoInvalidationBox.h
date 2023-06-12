#pragma once
#include "CoreMinimal.h"
#include "EStaggeredUpdateCategory.h"
#include "Components/InvalidationBox.h"
#include "AutoInvalidationBox.generated.h"

UCLASS(Blueprintable)
class UAutoInvalidationBox : public UInvalidationBox {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UpdateWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStaggeredUpdateCategory UpdateCategory;
    
    UAutoInvalidationBox();
};

