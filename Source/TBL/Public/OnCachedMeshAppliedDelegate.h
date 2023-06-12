#pragma once
#include "CoreMinimal.h"
#include "OnCachedMeshAppliedDelegate.generated.h"

class USkeletalMeshComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCachedMeshApplied, USkeletalMeshComponent*, MeshComponent);

