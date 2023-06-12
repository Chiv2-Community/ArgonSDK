#pragma once
#include "CoreMinimal.h"
#include "KeymapSimpleSignatureDelegate.generated.h"

class UTBLKeymapWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FKeymapSimpleSignature, UTBLKeymapWidget*, Keymap);

