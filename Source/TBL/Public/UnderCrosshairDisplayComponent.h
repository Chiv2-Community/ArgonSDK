#pragma once
#include "CoreMinimal.h"
#include "DisplayComponent.h"
#include "EFaction.h"
#include "UnderCrosshairDisplayComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UUnderCrosshairDisplayComponent : public UDisplayComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFaction VisibleToTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxVisibleDistance;
    
    UUnderCrosshairDisplayComponent();
};

