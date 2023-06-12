#pragma once
#include "CoreMinimal.h"
#include "TBLAnimInstance.h"
#include "Templates/SubclassOf.h"
#include "TBLAnimalAnimInstance.generated.h"

class ATBLAnimal;
class UAnimationSet;
class UStatsComponent;

UCLASS(Blueprintable, NonTransient)
class UTBLAnimalAnimInstance : public UTBLAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bProcessedDeath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeSinceLastHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeStartedPanicking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATBLAnimal* Animal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveSpeedSq;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMoving;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsBeingHeld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsBeingHeld_Combat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsBeingThrown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimationSet> PreviewAnimationSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationSet* AnimationSetBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStatsComponent* Stats;
    
    UTBLAnimalAnimInstance();
    UFUNCTION(BlueprintCallable)
    void OnAnimationSetChanged(TSubclassOf<UAnimationSet> AnimationSet);
    
    UFUNCTION(BlueprintCallable)
    void NotifyTookDamage();
    
    UFUNCTION(BlueprintCallable)
    void NotifyStartedPanicking();
    
    UFUNCTION(BlueprintCallable)
    void NotifyLanded();
    
    UFUNCTION(BlueprintCallable)
    void NotifyKilled();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventOnTookDamage();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventOnStartedPanicking();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventOnLanded();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventOnKilled();
    
};

