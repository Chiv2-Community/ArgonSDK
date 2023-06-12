#pragma once
#include "CoreMinimal.h"
#include "Loadout.h"
#include "Templates/SubclassOf.h"
#include "ServerApprovedLoadoutSignatureDelegate.generated.h"

class ATBLCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FServerApprovedLoadoutSignature, bool, ServerApprovedLoadout, TSubclassOf<ATBLCharacter>, RequestedSubclass, FLoadout, RequestedLoadout);

