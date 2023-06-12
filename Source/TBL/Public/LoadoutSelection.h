#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EInventoryItemSlot.h"
#include "EWeaponTag.h"
#include "Templates/SubclassOf.h"
#include "LoadoutSelection.generated.h"

class AInventoryItem;
class UWeaponGroup;

UCLASS(Abstract, Blueprintable)
class ULoadoutSelection : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UWeaponGroup>> Primary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UWeaponGroup>> Secondary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UWeaponGroup>> Shield;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UWeaponGroup>> Knife;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UWeaponGroup>> Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UWeaponGroup>> Bandage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UWeaponGroup>> Special;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpawnFists;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EInventoryItemSlot> DisabledSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<AInventoryItem>, int32> OverrideStackCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EInventoryItemSlot> StartingSlots;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AInventoryItem>> CachedItems;
    
public:
    ULoadoutSelection();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<AInventoryItem> GetRandomItemForSlot(EInventoryItemSlot Slot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<TSubclassOf<AInventoryItem>> GetItemSelectionBySlot(EInventoryItemSlot Slot, bool bOnPickup);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<AInventoryItem> GetItemForSlot(EInventoryItemSlot Slot, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    TArray<EWeaponTag> GetAllItemWeaponTagsFromLoadout();
    
};

