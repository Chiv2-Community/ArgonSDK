#pragma once
#include "CoreMinimal.h"
#include "OverrideMaterialDelegate.generated.h"

class UMaterialInterface;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_RetVal(UMaterialInterface*, FOverrideMaterial);

