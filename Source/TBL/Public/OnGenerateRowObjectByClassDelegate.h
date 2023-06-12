#pragma once
#include "CoreMinimal.h"
#include "OnGenerateRowObjectByClassDelegate.generated.h"

class UObject;
class UWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_RetVal_OneParam(UWidget*, FOnGenerateRowObjectByClass, UObject*, Object);

