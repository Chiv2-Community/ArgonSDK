#pragma once
#include "CoreMinimal.h"
#include "ControllerLogoutDelegate.generated.h"

class AController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FControllerLogout, AController*, Controller);

