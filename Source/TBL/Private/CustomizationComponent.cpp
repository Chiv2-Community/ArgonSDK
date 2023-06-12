#include "CustomizationComponent.h"
#include "Net/UnrealNetwork.h"

void UCustomizationComponent::OnRep_CustomizationPreset() {
}

TArray<FPrimaryAssetId> UCustomizationComponent::GetPendingCustomization() {
    return TArray<FPrimaryAssetId>();
}

TArray<FPrimaryAssetId> UCustomizationComponent::GetCurrentCustomization() {
    return TArray<FPrimaryAssetId>();
}

bool UCustomizationComponent::FindPreset(FCustomizationPreset& OutPreset) {
    return false;
}

void UCustomizationComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UCustomizationComponent, CustomizationPreset);
}

UCustomizationComponent::UCustomizationComponent() {
    this->CustomizationApplied = false;
}

