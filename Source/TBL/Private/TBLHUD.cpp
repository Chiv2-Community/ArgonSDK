#include "TBLHUD.h"






void ATBLHUD::ShowHideRadialEmote(bool Show) {
}

void ATBLHUD::SetShowDebugTargetActor(AActor* Actor) {
}

void ATBLHUD::SetRadialVOMaterial(UMaterialInstanceDynamic* inRadialVOMID) {
}






void ATBLHUD::NotifyPossessedPawn(APawn* NewPawn) {
}



AActor* ATBLHUD::GetShowDebugTargetActor() {
    return NULL;
}

void ATBLHUD::GetRadialVOMouseAngle(int32& ButtonIndex, bool& RadialDeselected, FVector2D& MousePositionByCanvas) {
}

bool ATBLHUD::GetImportantMessage(FImportantGameMsg& ImportantMessageOut) {
    return false;
}

FVector2D ATBLHUD::GetCrosshairPositionInViewport() {
    return FVector2D{};
}




void ATBLHUD::DrawMaterialSimpleWithTriangles(UMaterialInterface* Material, float ScreenX, float ScreenY, float ScreenW, float ScreenH) {
}

void ATBLHUD::DrawHUD() {
}


ATBLHUD::ATBLHUD() {
    this->bEnableCrosshair = true;
    this->bEnableProjectileControl = false;
    this->bDrawHudMarkers = true;
    this->DragHUDTexture = NULL;
    this->ProjectileControlRadius = 0.00f;
    this->CrosshairChargingPercentage = 0.00f;
    this->bAbilityHasValidTarget = false;
    this->NextImportantMessageId = 0;
    this->ActorUnderCrosshair = NULL;
    this->MaxActorUnderCrosshairDistance = 2000.00f;
    this->bDisableHud = false;
    this->bDisableFriendlyIFFHudMarker = false;
    this->TimeToDelayShowingPostGame = 3.00f;
    this->TimeLengthOfObjectiveMessages = 0.00f;
    this->TimeLengthOfCrosshairMessages = 3.00f;
    this->HudMarkerDetailsMaterial = NULL;
    this->HudMarkerCrossHairMaterial = NULL;
    this->RadialVOMID = NULL;
    this->RadialMouseSensitivity = 0.00f;
    this->RadialCentreRadiusSizeSquared = 0.00f;
    this->HudMarkerScaleCurve = NULL;
    this->HudMarkerOpacity = 0.00f;
    this->HudMarkerReducedOpacity = 0.00f;
    this->HudMarkerReductionStart = 0.00f;
    this->HudMarkerReductionEnd = 0.00f;
    this->HudMarkerDetailsOpacity = 0.00f;
    this->HudMarkerDetailsFadeStart = 0.00f;
    this->HudMarkerDetailsFadeEnd = 0.00f;
    this->HudMarkerTextOffsetPixels = 0.00f;
    this->HudMarkerMaxDistance = 0.00f;
    this->HudMarkerMinimumScale = 0.00f;
    this->HudMarkerScreenRadius = 0.00f;
    this->bIsHudMarkerFontOutlined = false;
    this->bIsHudMarkerFontShadowed = false;
    this->HudMarkerDetailsOffsetPixels = 0.00f;
    this->bClampPlayerMarkersToScreen = false;
    this->FriendlyIFFHudMarkerMaterial = NULL;
    this->FriendlyMarkerMaxDistance = 0.00f;
    this->EnemyMarkerMaxDistance = 0.00f;
    this->MaxPlayerNameCharsToRender = 15;
    this->EnemyNameplateMaxDistance = 0.00f;
    this->bUseTeamColorForHealthBar = false;
    this->IFFHudMarkerOpacity = 0.00f;
    this->IFFHudMarkerReducedOpacity = 0.00f;
    this->PlayerNameOffsetPixels = 0.00f;
    this->bUseTeamColorForIffMarkerAndNameplate = false;
    this->bIsPlayerNameFontOutlined = false;
    this->bIsPlayerNameFontShadowed = false;
    this->PlayerNameDistFadeMin = 0.00f;
    this->PlayerNameDistFadeMax = 0.00f;
    this->bDisplayFriendlyHealth = false;
    this->bDisablePlayerNamePlates = false;
    this->bOnlyShowNamesOnTeammates = false;
    this->bOnlyShowMarkersOnVisiblePawns = false;
    this->NonVisiblePawnMarkerOpacity = 0.00f;
    this->HudMarkerPoolSize = 20;
    this->CacheMouseSesnitivity = 0.00f;
    this->DrawHudFlags = 0;
    this->RadialVOGamepadDeadzone = 0.00f;
    this->bAllowGamepadDeselect = false;
    this->GamepadDeadstickDeselectDelay = 0.00f;
}

