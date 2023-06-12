#pragma once
#include "CoreMinimal.h"
#include "ETeamCapturePointComponentState.h"
#include "CPStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCPStateChanged, TEnumAsByte<ETeamCapturePointComponentState::Type>, CaptureState);

