#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DisplayComponentInterface.h"
#include "EFaction.h"
#include "EFactionOrAttackerDefender.h"
#include "EWidgetContainer.h"
#include "ReplicatedSubobjectInterface.h"
#include "DisplayComponent.generated.h"

class UHUDContainerSubWidget;
class UObject;

UCLASS(Abstract, Blueprintable, EditInlineNew, ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class UDisplayComponent : public UActorComponent, public IReplicatedSubobjectInterface, public IDisplayComponentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UHUDContainerSubWidget> WidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWidgetContainer WidgetContainerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanHudMarkerUsePooledWidget;
    
    UDisplayComponent();
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static EFaction GetFactionFromRelevantFactionStatic(UObject* WorldContextObject, EFactionOrAttackerDefender RelevantFaction);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFaction GetFactionFromRelevantFaction(EFactionOrAttackerDefender RelevantFaction);
    
    
    // Fix for true pure virtual functions not being implemented
};

