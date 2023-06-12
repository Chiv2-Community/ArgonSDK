#pragma once
#include "CoreMinimal.h"
#include "HudMarkerTicketStruct.h"
#include "BroadcastHudMarkerTicketEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBroadcastHudMarkerTicketEvent, const FHudMarkerTicketStruct&, Message);

