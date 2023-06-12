#pragma once
#include "CoreMinimal.h"
#include "CaptureVolume.h"
#include "LoadoutVolume.generated.h"

class APawn;

UCLASS(Blueprintable)
class ALoadoutVolume : public ACaptureVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnIsActiveChanged, meta=(AllowPrivateAccess=true))
    bool bIsActive;
    
    ALoadoutVolume();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetActive(bool Active);
    
    UFUNCTION(BlueprintCallable)
    void OnIsActiveChanged();
    
protected:
    UFUNCTION(BlueprintCallable)
    void LocalPCPossessedPawn(APawn* NewPawn);
    
};

