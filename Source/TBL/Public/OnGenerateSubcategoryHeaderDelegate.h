#pragma once
#include "CoreMinimal.h"
#include "OnGenerateSubcategoryHeaderDelegate.generated.h"

class UOptionsScreenSubCategory;
class UWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_RetVal_OneParam(UWidget*, FOnGenerateSubcategoryHeader, UOptionsScreenSubCategory*, Subcategory);

