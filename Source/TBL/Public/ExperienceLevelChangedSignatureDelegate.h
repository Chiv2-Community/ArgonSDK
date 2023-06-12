#pragma once
#include "CoreMinimal.h"
#include "ExperienceLevelChangedSignatureDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FExperienceLevelChangedSignature, AActor*, Owner, int32, NewLevel);

