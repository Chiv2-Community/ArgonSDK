#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TracerType.h"
#include "AttackTracers.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UAttackTracers : public UTracerType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreTeammates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bParryImmediately;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor DebugColor;
    
    UAttackTracers();
};

