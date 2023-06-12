#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CustomizationData.h"
#include "CustomizationPreset.h"
#include "OnCachedMeshAppliedDelegate.h"
#include "OnCustomizationAppliedDelegate.h"
#include "ReplicatedSubobjectInterface.h"
#include "Replicated_FCustomizationPreset.h"
#include "TBLComponent.h"
#include "CustomizationComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UCustomizationComponent : public UTBLComponent, public IReplicatedSubobjectInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCustomizationApplied OnCustomizationApplied;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCachedMeshApplied OnCachedMeshApplied;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CustomizationPreset, meta=(AllowPrivateAccess=true))
    FReplicated_FCustomizationPreset CustomizationPreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FCustomizationData CustomizationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CustomizationApplied;
    
    UCustomizationComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_CustomizationPreset();
    
public:
    UFUNCTION(BlueprintCallable)
    TArray<FPrimaryAssetId> GetPendingCustomization();
    
    UFUNCTION(BlueprintCallable)
    TArray<FPrimaryAssetId> GetCurrentCustomization();
    
    UFUNCTION(BlueprintCallable)
    bool FindPreset(FCustomizationPreset& OutPreset);
    
    
    // Fix for true pure virtual functions not being implemented
};

