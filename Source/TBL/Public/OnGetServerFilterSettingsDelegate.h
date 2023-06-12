#pragma once
#include "CoreMinimal.h"
#include "ServerFilterSetting.h"
#include "OnGetServerFilterSettingsDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_RetVal(FServerFilterSetting, FOnGetServerFilterSettings);

