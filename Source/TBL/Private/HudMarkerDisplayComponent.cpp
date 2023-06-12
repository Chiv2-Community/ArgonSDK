#include "HudMarkerDisplayComponent.h"
#include "Net/UnrealNetwork.h"

bool UHudMarkerDisplayComponent::ShouldForceUsePerTeamDisplayInfo() const {
    return false;
}

bool UHudMarkerDisplayComponent::ShouldClampToScreen() const {
    return false;
}

void UHudMarkerDisplayComponent::SetWidgetVisibilityComponent(UWidgetVisibilityComponent* InWidgetVisibilityComponent) {
}

void UHudMarkerDisplayComponent::SetVisibleToTeam(EFaction NewTeam) {
}

void UHudMarkerDisplayComponent::SetVisible(bool Value) {
}

void UHudMarkerDisplayComponent::SetProgress(float Value) {
}

void UHudMarkerDisplayComponent::SetPerTeamDisplayInfo(const TArray<FActorDisplayInfo>& InPerTeamDisplayInfo) {
}

void UHudMarkerDisplayComponent::SetOwningTeam(EFaction Value) {
}

void UHudMarkerDisplayComponent::SetObjectiveStateText(EFaction Faction, FText Value) {
}

void UHudMarkerDisplayComponent::SetObjectiveState(EObjectiveState Value) {
}

void UHudMarkerDisplayComponent::SetActorToDisplayInfoFor(AActor* Actor) {
}

void UHudMarkerDisplayComponent::SetActiveIcon(UMaterialInstance* NewIcon) {
}

void UHudMarkerDisplayComponent::RemovePlayerFromPlayerVisibilityList(ATBLPlayerState* Player) {
}

void UHudMarkerDisplayComponent::OnRep_VisibleToTeam() {
}

void UHudMarkerDisplayComponent::OnRep_Visible() {
}

void UHudMarkerDisplayComponent::OnRep_Progress() {
}

void UHudMarkerDisplayComponent::OnRep_OwningTeam() {
}

void UHudMarkerDisplayComponent::OnRep_ObjectiveStateText() {
}

void UHudMarkerDisplayComponent::OnRep_ObjectiveState() {
}

void UHudMarkerDisplayComponent::OnPlayerTeamReplicated(ATBLTeam* Team) {
}

void UHudMarkerDisplayComponent::OnPlayerStateReplicated(APlayerState* PS) {
}

bool UHudMarkerDisplayComponent::IsVisibleFor(APlayerController* PlayerController, bool bCheckVisiblityComponent, bool bVerboseLogging) const {
    return false;
}

bool UHudMarkerDisplayComponent::IsVisible() const {
    return false;
}

UWidgetVisibilityComponent* UHudMarkerDisplayComponent::GetWidgetVisibilityComponent() {
    return NULL;
}

TArray<ATBLPlayerState*> UHudMarkerDisplayComponent::GetVisibleToPlayersList() {
    return TArray<ATBLPlayerState*>();
}

bool UHudMarkerDisplayComponent::GetVisible() const {
    return false;
}

FVector UHudMarkerDisplayComponent::GetScreenLocation(APlayerController* PlayerController, const FVector2D& WidgetSize, bool& bIsOnScreen, bool& bWasClamped) const {
    return FVector{};
}

FActorDisplayInfo UHudMarkerDisplayComponent::GetRelevantDisplayInfo(EFaction Faction, bool bFlip) {
    return FActorDisplayInfo{};
}

float UHudMarkerDisplayComponent::GetProgress() const {
    return 0.0f;
}

EFaction UHudMarkerDisplayComponent::GetOwningTeam() {
    return EFaction::Agatha;
}

FText UHudMarkerDisplayComponent::GetObjectiveStateText(EFaction Faction) {
    return FText::GetEmpty();
}

EObjectiveState UHudMarkerDisplayComponent::GetObjectiveState() {
    return EObjectiveState::Disabled;
}

AActor* UHudMarkerDisplayComponent::GetActorToDisplayInfoFor() {
    return NULL;
}

void UHudMarkerDisplayComponent::ForceUsePerTeamDisplayInfo() {
}

void UHudMarkerDisplayComponent::AddPlayerToPlayerVisibilityList(ATBLPlayerState* Player) {
}

void UHudMarkerDisplayComponent::Add(AActor* Actor) {
}

void UHudMarkerDisplayComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UHudMarkerDisplayComponent, ActorToDisplayInfoFor);
    DOREPLIFETIME(UHudMarkerDisplayComponent, Visible);
    DOREPLIFETIME(UHudMarkerDisplayComponent, VisibleToTeamRep);
    DOREPLIFETIME(UHudMarkerDisplayComponent, VisibleToPlayers);
    DOREPLIFETIME(UHudMarkerDisplayComponent, ObjectiveState);
    DOREPLIFETIME(UHudMarkerDisplayComponent, Progress);
    DOREPLIFETIME(UHudMarkerDisplayComponent, OwningTeam);
    DOREPLIFETIME(UHudMarkerDisplayComponent, AgathaText);
    DOREPLIFETIME(UHudMarkerDisplayComponent, MasonText);
    DOREPLIFETIME(UHudMarkerDisplayComponent, TenosiaText);
}

UHudMarkerDisplayComponent::UHudMarkerDisplayComponent() {
    this->DefaultActorToDisplayInfoFor = NULL;
    this->bUseRelativeAsWorldOffset = false;
    this->StartVisible = true;
    this->VisibleToTeam = EFaction::All;
    this->PlayerVisiblityByFaction = EFaction::None;
    this->MarkerType = EMarkerType::Objective;
    this->VisibleRadius = 0.00f;
    this->MinVisibleDistance = 0.00f;
    this->MaxVisibleDistance = 0.00f;
    this->bUseActorLocation = false;
    this->bIsFocusMarker = false;
    this->bOnlyRenderInLos = false;
    this->bOnlyFocusInLos = false;
    this->MinFocusDist = 0.00f;
    this->MaxFocusDist = 0.00f;
    this->PercentFromCenterDistanceModifier = NULL;
    this->PercentFromCenterAlphaCurve = NULL;
    this->PercentFromCenterScaleCurve = NULL;
    this->DistAlphaCurve = NULL;
    this->DistScaleCurve = NULL;
    this->VisibleEvenOnOwnPawn = false;
    this->MinimumFriendPartyMemberScale = 0.33f;
    this->bUseItemVisibility = false;
    this->ItemVisibilityRelevantFaction = EFaction::All;
    this->InventoryItemClass = NULL;
    this->VisibilityCondition = EInventoryVisibilityCondition::VisibleIfUnEquipped;
    this->bUseMountVisibility = false;
    this->MountClass = NULL;
    this->MountVisibilityCondition = EMountVisibilityCondition::VisibleIfNotMounted;
    this->bClampToScreen = true;
    this->bWantsToBeReplicated = false;
    this->ShowProgress = false;
    this->bLocalPlayerInsideZone = false;
    this->DefaultObjectiveState = EObjectiveState::Disabled;
    this->DefaultProgress = 0.00f;
    this->DefaultOwningTeam = EFaction::Agatha;
    this->ActiveObjectiveIcon = NULL;
    this->ContestedObjectiveIcon = NULL;
    this->bForceUsePerTeamDisplayInfo = false;
}

