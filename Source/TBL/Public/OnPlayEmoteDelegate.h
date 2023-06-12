#pragma once
#include "CoreMinimal.h"
#include "ERadialVOMenuPage.h"
#include "OnPlayEmoteDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayEmote, ERadialVOMenuPage, VOMenuPage);

