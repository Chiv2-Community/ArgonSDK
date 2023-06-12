#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TBLOptionsScreen.generated.h"

class UOptionsScreenCategory;
class UOptionsScreenProp_CheckBox;
class UOptionsScreenProp_ComboBox;
class UOptionsScreenProp_Slider;

UCLASS(Blueprintable)
class UTBLOptionsScreen : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UOptionsScreenCategory*> Categories;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOptionsScreenProp_ComboBox* ResolutionsComboBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOptionsScreenProp_ComboBox* WindowModeComboBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOptionsScreenProp_ComboBox* DLSSComboBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOptionsScreenProp_ComboBox* XESSComboBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOptionsScreenProp_ComboBox* IntelVRSComboBox;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOptionsScreenProp_CheckBox* CrossplayCheckbox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOptionsScreenProp_Slider* FOVSlider;
    
public:
    UTBLOptionsScreen();
private:
    UFUNCTION(BlueprintCallable)
    void UserRevertedResolution();
    
    UFUNCTION(BlueprintCallable)
    void UserDeclinedFOVChange();
    
    UFUNCTION(BlueprintCallable)
    void UserDeclinedCrossplayChange();
    
    UFUNCTION(BlueprintCallable)
    void UserConfirmedResolution();
    
    UFUNCTION(BlueprintCallable)
    void UserConfirmedFOVChange();
    
    UFUNCTION(BlueprintCallable)
    void UserConfirmedCrossplayChange();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetOverallScalabilityLevelWithAuto(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SaveAll();
    
    UFUNCTION(BlueprintCallable)
    void ResetAll();
    
    UFUNCTION(BlueprintCallable)
    void OnGameUserSettingsUINeedsUpdate();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnGameExit();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetOverallScalabilityLevelWithAuto() const;
    
    UFUNCTION(BlueprintCallable)
    void ApplyAll();
    
};

