#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AssemblyBlueprint -FallbackName=AssemblyBlueprint
#include "ProgressionSpec.generated.h"

class UDataTable;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UProgressionSpec : public UAssemblyBlueprint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* XpTable;
    
    UProgressionSpec();
};

