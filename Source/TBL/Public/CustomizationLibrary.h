#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OnlineSubsystem -ObjectName=OnlineStoreOffer -FallbackName=OnlineStoreOffer
#include "Engine_misc.h"
#include "Styling/SlateBrush.h"
#include "CustomizationContext.h"
#include "CustomizationPreset.h"
#include "EAudioClassType.h"
#include "EFaction.h"
#include "EWeaponTag.h"
#include "Replicated_FCustomizationPreset.h"
#include "Templates/SubclassOf.h"
#include "CustomizationLibrary.generated.h"

class AActor;
class AInventoryItem;
class APawn;
class ATBLCharacter;
class ATBLPlayerState;
class UCTBase;
class UMaterialInterface;
class UMeshComponent;
class USkeletalMesh;
class USkeletalMeshComponent;
class UStaticMesh;
class UStaticMeshComponent;
class UTexture;

UCLASS(Blueprintable)
class TBL_API UCustomizationLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UCustomizationLibrary();
    UFUNCTION(BlueprintCallable)
    static void SetVectorParameterOnMaterials(ATBLCharacter* Char, const FName ParameterName, const FVector ParameterValue);
    
    UFUNCTION(BlueprintCallable)
    static bool SetTextureParameterValueOnMaterials(ATBLCharacter* InCharacter, const FName InMeshName, const FName ParameterName, UTexture* ParameterValue, const FName SlotName);
    
    UFUNCTION(BlueprintCallable)
    static bool SetStaticMeshAndMaterial(UStaticMeshComponent* SKM, UStaticMesh* SrcMesh, UMaterialInterface* Material, const FName SlotName);
    
    UFUNCTION(BlueprintCallable)
    static bool SetScalarParameterValueOnMaterials(ATBLCharacter* InCharacter, const FName InMeshName, const FName InParameterName, float InParameterValue);
    
    UFUNCTION(BlueprintCallable)
    static void SetScalarParameterOnMaterials(ATBLCharacter* Char, const FName ParameterName, const float ParameterValue);
    
    UFUNCTION(BlueprintCallable)
    static bool SetMorphTarget(ATBLCharacter* InCharacter, const FName InMeshName, const FName MorphTargetName, float InValue);
    
    UFUNCTION(BlueprintCallable)
    static bool SetMeshAndMaterial(ATBLCharacter* InCharacter, const FName InMeshName, USkeletalMesh* SrcMesh, UMaterialInterface* Material, const FName SlotName);
    
    UFUNCTION(BlueprintCallable)
    static void SetHelmetHidden(ATBLCharacter* Char, bool Hide);
    
    UFUNCTION(BlueprintCallable)
    static void SetHairHidden(ATBLCharacter* Char, bool Hide);
    
    UFUNCTION(BlueprintCallable)
    static void SetHairBeardEarHiddenFromContext(ATBLCharacter* Char, bool bUseItemsVisibilityForContext);
    
    UFUNCTION(BlueprintCallable)
    static void SetEarHidden(ATBLCharacter* Char, bool Hide);
    
    UFUNCTION(BlueprintCallable)
    static bool SetColorParameterValueOnMaterials(ATBLCharacter* InCharacter, const FName InMeshName, const FName InParameterName, const FLinearColor& InParameterValue);
    
    UFUNCTION(BlueprintCallable)
    static void SetBeardHidden(ATBLCharacter* Char, bool Hide);
    
    UFUNCTION(BlueprintCallable)
    static void SaveAssetsForClassFaction(ATBLPlayerState* PlayerState, TEnumAsByte<EAudioClassType::Type> ClassType, EFaction Faction);
    
    UFUNCTION(BlueprintCallable)
    static FName PrimaryAssetIDToPreviewCamera(const FPrimaryAssetId& AssetId);
    
    UFUNCTION(BlueprintCallable)
    static void PreviewAssets(ATBLPlayerState* PlayerState, ATBLCharacter* Char, UClass* CharacterPresetClass, const FPrimaryAssetId& InAssetIdsToPreview);
    
    UFUNCTION(BlueprintCallable)
    static bool LoadCustomizationPreset(APawn* Pawn, FCustomizationPreset& InPreset);
    
    UFUNCTION(BlueprintCallable)
    static void InitializeContext(const TArray<FPrimaryAssetId>& AssetIds, FCustomizationContext& Context);
    
    UFUNCTION(BlueprintCallable)
    static EWeaponTag GetWeaponTagFromPrimaryAssetId(FPrimaryAssetId PrimaryAsset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static USkeletalMeshComponent* GetTorsoMesh(ATBLCharacter* Char, bool WantFirstPerson);
    
    UFUNCTION(BlueprintCallable)
    static void GetTattooCustomizationEnabled(bool& Enabled);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetRandomAssets(ATBLCharacter* Char, TArray<FPrimaryAssetId>& OutAssetIds);
    
    UFUNCTION(BlueprintCallable)
    static UClass* GetPrimaryAssetClass(FPrimaryAssetId PrimaryAsset);
    
    /*UFUNCTION(BlueprintCallable)
    static FText GetOnlineStoreOfferTitle(const FOnlineStoreOffer& OnlineStoreOffer);*/
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static USkeletalMeshComponent* GetLegsMesh(ATBLCharacter* Char, bool WantFirstPerson);
    
    UFUNCTION(BlueprintCallable)
    static FText GetItemNameFromAssetId(FPrimaryAssetId PrimaryAsset);
    
    UFUNCTION(BlueprintCallable)
    static FSlateBrush GetItemIconFromAssetId(FPrimaryAssetId PrimaryAsset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static USkeletalMeshComponent* GetInventorySKMesh(ATBLCharacter* Char, const FSoftObjectPath& WeaponAsset, AActor*& ItemOut);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UStaticMeshComponent* GetInventoryMesh(ATBLCharacter* Char, const FSoftObjectPath& WeaponAsset, AActor*& ItemOut);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static USkeletalMeshComponent* GetHelmetMesh(ATBLCharacter* Char, bool WantFirstPerson);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static USkeletalMeshComponent* GetHeadMesh(ATBLCharacter* Char, bool WantFirstPerson);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static USkeletalMeshComponent* GetHairMesh(ATBLCharacter* Char, bool WantFirstPerson);
    
    UFUNCTION(BlueprintCallable)
    static UCTBase* GetCustomizationAsset(ATBLCharacter* Char, TSubclassOf<UCTBase> CustomizationType, TSubclassOf<AInventoryItem> WeaponClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static USkeletalMeshComponent* GetBeardMesh(ATBLCharacter* Char, bool WantFirstPerson);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetAllWeaponMesh(ATBLCharacter* Char, TArray<UMeshComponent*>& OutComponents);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetAllCharMesh(ATBLCharacter* Char, TArray<UMeshComponent*>& OutComponents);
    
    UFUNCTION(BlueprintCallable)
    static bool ForceAllMipLevelsOnMaterials(ATBLCharacter* InCharacter, const FName InMeshName, const FName ParameterName, const FName SlotName, float Seconds);
    
    UFUNCTION(BlueprintCallable)
    static void EquipAssetsForClassFaction(ATBLPlayerState* PlayerState, ATBLCharacter* Char, TEnumAsByte<EAudioClassType::Type> ClassType, EFaction Faction, const TArray<FPrimaryAssetId>& InAssetIds, const TArray<TSubclassOf<UCTBase>> CTClassesToIgnore);
    
    UFUNCTION(BlueprintCallable)
    static void CustomizeHead(AActor* HeadActor, const FReplicated_FCustomizationPreset& CustomizationPreset);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyRandomAsset(ATBLCharacter* Char, FPrimaryAssetType PrimaryAssetType);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyCutomizationToCharacter(ATBLCharacter* InCharacter);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyCustomizationToItem(ATBLCharacter* Character, AInventoryItem* NewItem, ATBLPlayerState* PlaterState, EFaction Faction, TEnumAsByte<EAudioClassType::Type> Class);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyAssets(ATBLCharacter* Char, UPARAM(Ref) TArray<FPrimaryAssetId>& InAssetIds);
    
};

