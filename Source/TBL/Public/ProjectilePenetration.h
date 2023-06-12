#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AssemblyBlueprint -FallbackName=AssemblyBlueprint
#include "Templates/SubclassOf.h"
#include "ProjectilePenetration.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UProjectilePenetration : public UAssemblyBlueprint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AllowedNumPenetrations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamagerPerPenetrationMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PenetratableDamageMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AActor>> AllowedClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldPenetratedChildrenOfAllowedClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldAwardScoreOnPenetration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DamageScoreEventName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName KillScoreEventName;
    
    UProjectilePenetration();
    UFUNCTION(BlueprintCallable)
    bool ShouldPenetrationAwardScore(AActor* HitActor) const;
    
    UFUNCTION(BlueprintCallable)
    void InitPenetrationCollisionResponse();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanPenetrateActor(AActor* HitActor) const;
    
};

