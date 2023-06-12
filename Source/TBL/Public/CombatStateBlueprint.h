#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AssemblyBlueprint -FallbackName=AssemblyBlueprint
#include "CombatStateBlueprint.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UCombatStateBlueprint : public UAssemblyBlueprint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Tags;
    
    UCombatStateBlueprint();
};

