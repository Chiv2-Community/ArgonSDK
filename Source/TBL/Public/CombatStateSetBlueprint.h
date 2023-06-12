#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AssemblyBlueprint -FallbackName=AssemblyBlueprint
#include "CombatStateSetBlueprint.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UCombatStateSetBlueprint : public UAssemblyBlueprint {
    GENERATED_BODY()
public:
    UCombatStateSetBlueprint();
};

