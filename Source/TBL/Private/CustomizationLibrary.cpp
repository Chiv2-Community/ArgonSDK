#include "CustomizationLibrary.h"
#include "Templates/SubclassOf.h"

void UCustomizationLibrary::SetVectorParameterOnMaterials(ATBLCharacter* Char, const FName ParameterName, const FVector ParameterValue) {
}

bool UCustomizationLibrary::SetTextureParameterValueOnMaterials(ATBLCharacter* InCharacter, const FName InMeshName, const FName ParameterName, UTexture* ParameterValue, const FName SlotName) {
    return false;
}

bool UCustomizationLibrary::SetStaticMeshAndMaterial(UStaticMeshComponent* SKM, UStaticMesh* SrcMesh, UMaterialInterface* Material, const FName SlotName) {
    return false;
}

bool UCustomizationLibrary::SetScalarParameterValueOnMaterials(ATBLCharacter* InCharacter, const FName InMeshName, const FName InParameterName, float InParameterValue) {
    return false;
}

void UCustomizationLibrary::SetScalarParameterOnMaterials(ATBLCharacter* Char, const FName ParameterName, const float ParameterValue) {
}

bool UCustomizationLibrary::SetMorphTarget(ATBLCharacter* InCharacter, const FName InMeshName, const FName MorphTargetName, float InValue) {
    return false;
}

bool UCustomizationLibrary::SetMeshAndMaterial(ATBLCharacter* InCharacter, const FName InMeshName, USkeletalMesh* SrcMesh, UMaterialInterface* Material, const FName SlotName) {
    return false;
}

void UCustomizationLibrary::SetHelmetHidden(ATBLCharacter* Char, bool Hide) {
}

void UCustomizationLibrary::SetHairHidden(ATBLCharacter* Char, bool Hide) {
}

void UCustomizationLibrary::SetHairBeardEarHiddenFromContext(ATBLCharacter* Char, bool bUseItemsVisibilityForContext) {
}

void UCustomizationLibrary::SetEarHidden(ATBLCharacter* Char, bool Hide) {
}

bool UCustomizationLibrary::SetColorParameterValueOnMaterials(ATBLCharacter* InCharacter, const FName InMeshName, const FName InParameterName, const FLinearColor& InParameterValue) {
    return false;
}

void UCustomizationLibrary::SetBeardHidden(ATBLCharacter* Char, bool Hide) {
}

void UCustomizationLibrary::SaveAssetsForClassFaction(ATBLPlayerState* PlayerState, TEnumAsByte<EAudioClassType::Type> ClassType, EFaction Faction) {
}

FName UCustomizationLibrary::PrimaryAssetIDToPreviewCamera(const FPrimaryAssetId& AssetId) {
    return NAME_None;
}

void UCustomizationLibrary::PreviewAssets(ATBLPlayerState* PlayerState, ATBLCharacter* Char, UClass* CharacterPresetClass, const FPrimaryAssetId& InAssetIdsToPreview) {
}

bool UCustomizationLibrary::LoadCustomizationPreset(APawn* Pawn, FCustomizationPreset& InPreset) {
    return false;
}

void UCustomizationLibrary::InitializeContext(const TArray<FPrimaryAssetId>& AssetIds, FCustomizationContext& Context) {
}

EWeaponTag UCustomizationLibrary::GetWeaponTagFromPrimaryAssetId(FPrimaryAssetId PrimaryAsset) {
    return EWeaponTag::None;
}

USkeletalMeshComponent* UCustomizationLibrary::GetTorsoMesh(ATBLCharacter* Char, bool WantFirstPerson) {
    return NULL;
}

void UCustomizationLibrary::GetTattooCustomizationEnabled(bool& Enabled) {
}

void UCustomizationLibrary::GetRandomAssets(ATBLCharacter* Char, TArray<FPrimaryAssetId>& OutAssetIds) {
}

UClass* UCustomizationLibrary::GetPrimaryAssetClass(FPrimaryAssetId PrimaryAsset) {
    return NULL;
}

FText UCustomizationLibrary::GetOnlineStoreOfferTitle(const FOnlineStoreOffer& OnlineStoreOffer) {
    return FText::GetEmpty();
}

USkeletalMeshComponent* UCustomizationLibrary::GetLegsMesh(ATBLCharacter* Char, bool WantFirstPerson) {
    return NULL;
}

FText UCustomizationLibrary::GetItemNameFromAssetId(FPrimaryAssetId PrimaryAsset) {
    return FText::GetEmpty();
}

FSlateBrush UCustomizationLibrary::GetItemIconFromAssetId(FPrimaryAssetId PrimaryAsset) {
    return FSlateBrush{};
}

USkeletalMeshComponent* UCustomizationLibrary::GetInventorySKMesh(ATBLCharacter* Char, const FSoftObjectPath& WeaponAsset, AActor*& ItemOut) {
    return NULL;
}

UStaticMeshComponent* UCustomizationLibrary::GetInventoryMesh(ATBLCharacter* Char, const FSoftObjectPath& WeaponAsset, AActor*& ItemOut) {
    return NULL;
}

USkeletalMeshComponent* UCustomizationLibrary::GetHelmetMesh(ATBLCharacter* Char, bool WantFirstPerson) {
    return NULL;
}

USkeletalMeshComponent* UCustomizationLibrary::GetHeadMesh(ATBLCharacter* Char, bool WantFirstPerson) {
    return NULL;
}

USkeletalMeshComponent* UCustomizationLibrary::GetHairMesh(ATBLCharacter* Char, bool WantFirstPerson) {
    return NULL;
}

UCTBase* UCustomizationLibrary::GetCustomizationAsset(ATBLCharacter* Char, TSubclassOf<UCTBase> CustomizationType, TSubclassOf<AInventoryItem> WeaponClass) {
    return NULL;
}

USkeletalMeshComponent* UCustomizationLibrary::GetBeardMesh(ATBLCharacter* Char, bool WantFirstPerson) {
    return NULL;
}

void UCustomizationLibrary::GetAllWeaponMesh(ATBLCharacter* Char, TArray<UMeshComponent*>& OutComponents) {
}

void UCustomizationLibrary::GetAllCharMesh(ATBLCharacter* Char, TArray<UMeshComponent*>& OutComponents) {
}

bool UCustomizationLibrary::ForceAllMipLevelsOnMaterials(ATBLCharacter* InCharacter, const FName InMeshName, const FName ParameterName, const FName SlotName, float Seconds) {
    return false;
}

void UCustomizationLibrary::EquipAssetsForClassFaction(ATBLPlayerState* PlayerState, ATBLCharacter* Char, TEnumAsByte<EAudioClassType::Type> ClassType, EFaction Faction, const TArray<FPrimaryAssetId>& InAssetIds, const TArray<TSubclassOf<UCTBase>> CTClassesToIgnore) {
}

void UCustomizationLibrary::CustomizeHead(AActor* HeadActor, const FReplicated_FCustomizationPreset& CustomizationPreset) {
}

void UCustomizationLibrary::ApplyRandomAsset(ATBLCharacter* Char, FPrimaryAssetType PrimaryAssetType) {
}

void UCustomizationLibrary::ApplyCutomizationToCharacter(ATBLCharacter* InCharacter) {
}

void UCustomizationLibrary::ApplyCustomizationToItem(ATBLCharacter* Character, AInventoryItem* NewItem, ATBLPlayerState* PlaterState, EFaction Faction, TEnumAsByte<EAudioClassType::Type> Class) {
}

void UCustomizationLibrary::ApplyAssets(ATBLCharacter* Char, TArray<FPrimaryAssetId>& InAssetIds) {
}

UCustomizationLibrary::UCustomizationLibrary() {
}

