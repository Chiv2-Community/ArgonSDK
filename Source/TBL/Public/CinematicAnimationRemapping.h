#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CinematicAnimationRemapSet.h"
#include "CinematicAnimationRemapping.generated.h"

class UAnimSequenceBase;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class UCinematicAnimationRemapping : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCinematicAnimationRemapSet> RemapSets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> AutomapWeaponNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UAnimSequenceBase*, int32> AnimToRemapSetsIndex;
    
    UCinematicAnimationRemapping();
    UFUNCTION(BlueprintCallable)
    UAnimSequenceBase* OverrideSequencerAnimation(UAnimSequenceBase* InAnim, USkeletalMeshComponent* SkelMeshComp);
    
};

