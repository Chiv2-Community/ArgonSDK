#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameUserSettings.h"
#include "Engine/PlatformInterfaceBase.h"
#include "Rendering/RenderingCommon.h"
#include "EAllyMarkerLevel.h"
#include "EGoreLevel.h"
#include "EHapticsVolumeSettings.h"
#include "EKillFeedFilter.h"
#include "EProConsoleOption.h"
#include "TBLGameUserSettings.generated.h"

class UCloudUserSettings;
class UCurveFloat;
class UTBLOptionsScreen;

UCLASS(Blueprintable)
class TBL_API UTBLGameUserSettings : public UGameUserSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTBLOptionsScreen* OptionsScreen;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCloudUserSettings* CloudUserSettings;
    
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ResolutionScaleModifier;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PreferredDLSSOperatingMode;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PreferredXESSOperatingMode;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EColorVisionDeficiency ColorVisionDeficiency;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ColorVisionDeficiencyCorrectionStrength;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableCrossPlayMatchmaking;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GUIScale;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 TBLVersion;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bConsoleEnabled;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 SmoothedFrameRateRange;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableUpdateRateOptimizations;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MouseSensitivity;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MouseFocusSensitivity;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHeadphonesMode;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RagdollLifetime;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRagdollEnabled;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BloodDecalLifetime;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MotionBlurQuality;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Gamma;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxFPS;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DFAO;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAmbientFXEnabled;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AmbientCorpseQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EProConsoleOption ProConsoleSetting;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHapticsVolumeSettings HapticsVolumeSetting;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseAdaptiveTriggers;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PreferrredIntelVRSSetting;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 PreferredFaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCurveFloat*> GamepadLookResponseCurves;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MotionBlurAmountDefault;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MotionBlurAmountMax;
    
    UTBLGameUserSettings();
    UFUNCTION(BlueprintCallable)
    void SetServerBrowserNumFreeSlotServers(int32 Num);
    
    UFUNCTION(BlueprintCallable)
    void SetServerBrowserHideHighPingEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetServerBrowserHideFullServers(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetServerBrowserHideEmptyServersEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetPreferredFaction(uint8 InPreferredFaction);
    
    UFUNCTION(BlueprintCallable)
    void SetDX12Enabled(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SaveCloudUserSettingsIfDirty();
    
    UFUNCTION(BlueprintCallable)
    void OnReadUserFileComplete(const FPlatformInterfaceDelegateResult& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsServerBrowserHideHighPingEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsServerBrowserHideFullServersEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsServerBrowserHideEmptyServersEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsRagdollEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoadoutDisplayOnFirstDeathEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsHeadBobEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGamepadYInverted() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsDynamicCrosshairEnabled();
    
    UFUNCTION(BlueprintCallable)
    bool IsDX12Enabled();
    
    UFUNCTION(BlueprintCallable)
    bool IsDamageMultipliersEnabled();
    
    UFUNCTION(BlueprintCallable)
    bool IsCombatNumbersEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAmbientFXEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetServerBrowserNumFreeSlotServers() const;
    
    UFUNCTION(BlueprintCallable)
    uint8 GetPreferredFaction();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTBLOptionsScreen* GetOptionsScreen();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMotionBlurQuality() const;
    
    UFUNCTION(BlueprintCallable)
    float GetMasterVolume();
    
    UFUNCTION(BlueprintCallable)
    TEnumAsByte<EKillFeedFilter::Type> GetKillFeedFilter();
    
    UFUNCTION(BlueprintCallable)
    TEnumAsByte<EGoreLevel::Type> GetGoreLevel();
    
    UFUNCTION(BlueprintCallable)
    bool GetEnableCrossPlayMatchmaking();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBloodDecalLifeTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAmbientCorpseQuality() const;
    
    UFUNCTION(BlueprintCallable)
    TEnumAsByte<EAllyMarkerLevel::Type> GetAllyMarkerLevel();
    
    UFUNCTION(BlueprintCallable)
    bool AreHintsEnabled();
    
};

