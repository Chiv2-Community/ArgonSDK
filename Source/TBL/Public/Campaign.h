#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "CampaignLevel.h"
#include "OnCampaignLevelChangedDelegate.h"
#include "OnCampaignXpChangedDelegate.h"
#include "Campaign.generated.h"

class IQuest;
class UQuest;

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class UCampaign : public UInterface {
    GENERATED_BODY()
};

class ICampaign : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual void UnbindOnXpChanged(const FOnCampaignXpChanged& Delegate) PURE_VIRTUAL(UnbindOnXpChanged,);
    
    UFUNCTION(BlueprintCallable)
    virtual void UnbindOnLevelChanged(const FOnCampaignLevelChanged& Delegate) PURE_VIRTUAL(UnbindOnLevelChanged,);
    
    UFUNCTION(BlueprintCallable)
    virtual bool HasPremiumRewards() const PURE_VIRTUAL(HasPremiumRewards, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual int32 GetTotalXp() const PURE_VIRTUAL(GetTotalXp, return 0;);
    
    UFUNCTION(BlueprintCallable)
    virtual int32 GetTotalMaxXp() const PURE_VIRTUAL(GetTotalMaxXp, return 0;);
    
    UFUNCTION(BlueprintCallable)
    virtual int32 GetNumLevels() const PURE_VIRTUAL(GetNumLevels, return 0;);
    
    UFUNCTION(BlueprintCallable)
    virtual int32 GetLevelFromItemId(const FPrimaryAssetId& ItemId) PURE_VIRTUAL(GetLevelFromItemId, return 0;);
    
    UFUNCTION(BlueprintCallable)
    virtual FCampaignLevel GetLevelDetails() const PURE_VIRTUAL(GetLevelDetails, return FCampaignLevel{};);
    
    UFUNCTION(BlueprintCallable)
    virtual int32 GetLevel() const PURE_VIRTUAL(GetLevel, return 0;);
    
    UFUNCTION(BlueprintCallable)
    virtual int32 GetGatedMaxLevel() const PURE_VIRTUAL(GetGatedMaxLevel, return 0;);
    
    UFUNCTION(BlueprintCallable)
    virtual FString GetFriendlyName() const PURE_VIRTUAL(GetFriendlyName, return TEXT(""););
    
    UFUNCTION(BlueprintCallable)
    virtual int32 GetCurrentLevelXp() const PURE_VIRTUAL(GetCurrentLevelXp, return 0;);
    
    UFUNCTION(BlueprintCallable)
    virtual int32 GetCurrentLevelMaxXp() const PURE_VIRTUAL(GetCurrentLevelMaxXp, return 0;);
    
    UFUNCTION(BlueprintCallable)
    virtual TArray<FCampaignLevel> GetAllLevelDetails() const PURE_VIRTUAL(GetAllLevelDetails, return TArray<FCampaignLevel>(););
    
    UFUNCTION(BlueprintCallable)
    virtual TScriptInterface<IQuest> GetActiveQuest() const PURE_VIRTUAL(GetActiveQuest, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    virtual void BindOnXpChanged(const FOnCampaignXpChanged& Delegate) PURE_VIRTUAL(BindOnXpChanged,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BindOnLevelChanged(const FOnCampaignLevelChanged& Delegate) PURE_VIRTUAL(BindOnLevelChanged,);
    
};

