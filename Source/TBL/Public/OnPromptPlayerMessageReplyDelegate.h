#pragma once
#include "CoreMinimal.h"
#include "OnPromptPlayerMessageReplyDelegate.generated.h"

class ATBLPlayerController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnPromptPlayerMessageReply, int32, MessageId, bool, Response, ATBLPlayerController*, Player);

