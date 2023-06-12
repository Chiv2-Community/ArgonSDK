#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "EHapticsVolumeSettings.h"
#include "TBLPS5HapticsManager.generated.h"

class ATBLPlayerController;
class UObject;
class UObjectLibrary;

UCLASS(Blueprintable)
class UTBLPS5HapticsManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObjectLibrary* PS5HapticsLibrary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, UObject*> PS5HapticsLookupMap;
    
public:
    UTBLPS5HapticsManager();
    UFUNCTION(BlueprintCallable)
    void SetVolumeSetting(EHapticsVolumeSettings NewSetting);
    
    UFUNCTION(BlueprintCallable)
    void SetIsUsingAdaptiveTriggers(bool UsingAdaptiveTrigger, ATBLPlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    bool IsUsingAdaptiveTriggers();
    
    UFUNCTION(BlueprintCallable)
    EHapticsVolumeSettings GetVolumeSetting();
    
};

