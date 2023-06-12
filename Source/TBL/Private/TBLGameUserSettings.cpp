#include "TBLGameUserSettings.h"
#include "CloudUserSettings.h"

void UTBLGameUserSettings::SetServerBrowserNumFreeSlotServers(int32 Num) {
}

void UTBLGameUserSettings::SetServerBrowserHideHighPingEnabled(bool bEnabled) {
}

void UTBLGameUserSettings::SetServerBrowserHideFullServers(bool bEnabled) {
}

void UTBLGameUserSettings::SetServerBrowserHideEmptyServersEnabled(bool bEnabled) {
}

void UTBLGameUserSettings::SetPreferredFaction(uint8 InPreferredFaction) {
}

void UTBLGameUserSettings::SetDX12Enabled(bool Value) {
}

void UTBLGameUserSettings::SaveCloudUserSettingsIfDirty() {
}

void UTBLGameUserSettings::OnReadUserFileComplete(const FPlatformInterfaceDelegateResult& Result) {
}

bool UTBLGameUserSettings::IsServerBrowserHideHighPingEnabled() const {
    return false;
}

bool UTBLGameUserSettings::IsServerBrowserHideFullServersEnabled() const {
    return false;
}

bool UTBLGameUserSettings::IsServerBrowserHideEmptyServersEnabled() const {
    return false;
}

bool UTBLGameUserSettings::IsRagdollEnabled() {
    return false;
}

bool UTBLGameUserSettings::IsLoadoutDisplayOnFirstDeathEnabled() const {
    return false;
}

bool UTBLGameUserSettings::IsHeadBobEnabled() {
    return false;
}

bool UTBLGameUserSettings::IsGamepadYInverted() const {
    return false;
}

bool UTBLGameUserSettings::IsDynamicCrosshairEnabled() {
    return false;
}

bool UTBLGameUserSettings::IsDX12Enabled() {
    return false;
}

bool UTBLGameUserSettings::IsDamageMultipliersEnabled() {
    return false;
}

bool UTBLGameUserSettings::IsCombatNumbersEnabled() {
    return false;
}

bool UTBLGameUserSettings::IsAmbientFXEnabled() const {
    return false;
}

int32 UTBLGameUserSettings::GetServerBrowserNumFreeSlotServers() const {
    return 0;
}

uint8 UTBLGameUserSettings::GetPreferredFaction() {
    return 0;
}

UTBLOptionsScreen* UTBLGameUserSettings::GetOptionsScreen() {
    return NULL;
}

int32 UTBLGameUserSettings::GetMotionBlurQuality() const {
    return 0;
}

float UTBLGameUserSettings::GetMasterVolume() {
    return 0.0f;
}

TEnumAsByte<EKillFeedFilter::Type> UTBLGameUserSettings::GetKillFeedFilter() {
    return EKillFeedFilter::AllMessages;
}

TEnumAsByte<EGoreLevel::Type> UTBLGameUserSettings::GetGoreLevel() {
    return EGoreLevel::Full;
}

bool UTBLGameUserSettings::GetEnableCrossPlayMatchmaking() {
    return false;
}

float UTBLGameUserSettings::GetBloodDecalLifeTime() const {
    return 0.0f;
}

int32 UTBLGameUserSettings::GetAmbientCorpseQuality() const {
    return 0;
}

TEnumAsByte<EAllyMarkerLevel::Type> UTBLGameUserSettings::GetAllyMarkerLevel() {
    return EAllyMarkerLevel::All;
}

bool UTBLGameUserSettings::AreHintsEnabled() {
    return false;
}

UTBLGameUserSettings::UTBLGameUserSettings() {
    this->OptionsScreen = NULL;
    this->CloudUserSettings = CreateDefaultSubobject<UCloudUserSettings>(TEXT("CloudUserSettings"));
    this->ResolutionScaleModifier = 1.33f;
    this->PreferredDLSSOperatingMode = 0;
    this->PreferredXESSOperatingMode = 0;
    this->ColorVisionDeficiency = EColorVisionDeficiency::NormalVision;
    this->ColorVisionDeficiencyCorrectionStrength = 10;
    this->bDisableCrossPlayMatchmaking = false;
    this->GUIScale = 0.00f;
    this->TBLVersion = 36;
    this->bConsoleEnabled = true;
    this->SmoothedFrameRateRange = 1;
    this->EnableUpdateRateOptimizations = true;
    this->MouseSensitivity = 0.04f;
    this->MouseFocusSensitivity = 0.02f;
    this->bHeadphonesMode = false;
    this->RagdollLifetime = 25.00f;
    this->bRagdollEnabled = true;
    this->BloodDecalLifetime = 30;
    this->MotionBlurQuality = 3;
    this->Gamma = 2.92f;
    this->MaxFPS = -1;
    this->DFAO = false;
    this->bAmbientFXEnabled = true;
    this->AmbientCorpseQuality = 3;
    this->ProConsoleSetting = EProConsoleOption::Balanced;
    this->HapticsVolumeSetting = EHapticsVolumeSettings::HIGH_VOLUME;
    this->bUseAdaptiveTriggers = false;
    this->PreferrredIntelVRSSetting = 0;
    this->PreferredFaction = 0;
    this->GamepadLookResponseCurves.AddDefaulted(4);
    this->MotionBlurAmountDefault = 0.35f;
    this->MotionBlurAmountMax = 1.00f;
}

