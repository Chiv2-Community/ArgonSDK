#pragma once
#include "CoreMinimal.h"
#include "TBLActor.h"
#include "HUDMarkerActor.generated.h"

class UActorInfoDisplayComponent;
class UHudMarkerDisplayComponent;
class UObjectiveStatusDisplayComponent;

UCLASS(Blueprintable)
class TBL_API AHUDMarkerActor : public ATBLActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHudMarkerDisplayComponent* HUDMarkerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UObjectiveStatusDisplayComponent* ObjectiveStatusComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UActorInfoDisplayComponent* ActorInfoComponent;
    
public:
    AHUDMarkerActor();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UObjectiveStatusDisplayComponent* GetObjectiveStatusComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHudMarkerDisplayComponent* GetHUDMarkerComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UActorInfoDisplayComponent* GetActorInfoComponent() const;
    
};

