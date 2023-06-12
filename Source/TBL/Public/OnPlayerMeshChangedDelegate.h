#pragma once
#include "CoreMinimal.h"
#include "OnPlayerMeshChangedDelegate.generated.h"

class USkeletalMeshComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPlayerMeshChanged, USkeletalMeshComponent*, OldMesh, USkeletalMeshComponent*, NewMesh);

