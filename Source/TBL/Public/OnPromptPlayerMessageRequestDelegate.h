#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "OnPromptPlayerMessageRequestDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPromptPlayerMessageRequest, FGameplayTag, MessageTag, int32, MessageId);

