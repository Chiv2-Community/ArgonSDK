#pragma once
#include "CoreMinimal.h"
#include "DisplayComponent.h"
#include "EFaction.h"
#include "EObjectiveState.h"
#include "PlayerInHudMarkerZoneInterface.h"
#include "ObjectiveStatusDisplayComponent.generated.h"

class UMaterialInstance;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UObjectiveStatusDisplayComponent : public UDisplayComponent, public IPlayerInHudMarkerZoneInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLocalPlayerInsideZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EObjectiveState DefaultObjectiveState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFaction DefaultOwningTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DefaultAgathaText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DefaultMasonText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DefaultTenosiaText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* ActiveObjectiveIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* ContestedObjectiveIcon;
    
    UObjectiveStatusDisplayComponent();
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    bool IsLocalPlayerInHudMarkerZone() override PURE_VIRTUAL(IsLocalPlayerInHudMarkerZone, return false;);
    
};

