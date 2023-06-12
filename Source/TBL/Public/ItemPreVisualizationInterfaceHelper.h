#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DeathDamageTakenEvent.h"
#include "Templates/SubclassOf.h"
#include "ItemPreVisualizationInterfaceHelper.generated.h"

class AInventoryItem;
class APawn;

UCLASS(Blueprintable)
class UItemPreVisualizationInterfaceHelper : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TWeakObjectPtr<UObject>, TSubclassOf<AInventoryItem>> VisualizerListeners;
    
public:
    UItemPreVisualizationInterfaceHelper();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void RemoveItemVisualizerListener(const UObject* WorldContextObject, UObject* NewListener);
    
private:
    UFUNCTION(BlueprintCallable)
    void PlayerPossessedPawn(APawn* NewPawn);
    
    UFUNCTION(BlueprintCallable)
    void OnKilled(const FDeathDamageTakenEvent& Event);
    
    UFUNCTION(BlueprintCallable)
    void CharacterEquippedItemsChanged();
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void AddItemVisualizerListener(const UObject* WorldContextObject, UObject* NewListener, TSubclassOf<AInventoryItem> Item);
    
};

