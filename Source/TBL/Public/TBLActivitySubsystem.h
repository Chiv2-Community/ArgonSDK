#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "TBLActivitySubsystem.generated.h"

class UWorld;

UCLASS(Blueprintable)
class UTBLActivitySubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UTBLActivitySubsystem();
    UFUNCTION(BlueprintCallable)
    void OnWorldCleanup(UWorld* World, bool bSessionEnded, bool bCleanupResources);
    
    UFUNCTION(BlueprintCallable)
    void OnPostLoadMap(UWorld* LoadedWorld);
    
    UFUNCTION(BlueprintCallable)
    void HandleStateChanged(const FName& CurrentState);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnTitleDataUpdated();
    
};

