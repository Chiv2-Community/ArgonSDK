#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AssemblyBlueprint -FallbackName=AssemblyBlueprint
#include "WeaponTracersBlueprint.generated.h"

class UTracerType;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UWeaponTracersBlueprint : public UAssemblyBlueprint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UTracerType*> TracerList;
    
    UWeaponTracersBlueprint();
};

