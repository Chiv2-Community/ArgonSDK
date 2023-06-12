#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AssemblyInstance -FallbackName=AssemblyInstance
#include "Engine/EngineTypes.h"
#include "TracerCacheParams.h"
#include "WeaponTracers.generated.h"

class AActor;
class AHorse;
class AInventoryItem;
class ATBLCharacter;
class UTracerShape;
class UTracerType;
class UWeaponTracersBlueprint;

UCLASS(Blueprintable, MinimalAPI)
class UWeaponTracers : public UAssemblyInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UTracerType*> TracerList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyParryTracers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasTracerCache;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTracerActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TracerFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ParryActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> HitActorsThisFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTracerType* CurrentTracers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTracerShape* CurrentTracerShape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTracerCacheParams Params;
    
public:
    UWeaponTracers();
    UFUNCTION(BlueprintCallable)
    void StartWeaponTracers();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetTracerFrame();
    
    UFUNCTION(BlueprintCallable)
    void SaveHitActor(AActor* HitActor);
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsValid(AInventoryItem* Weapon) const;
    
    UFUNCTION(BlueprintCallable)
    void Initialize(AInventoryItem* Weapon, const UWeaponTracersBlueprint* SourceObj);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool IgnoreHitActorWithStats(FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void HandleReleaseClash(FHitResult& Hit, ATBLCharacter* HitChar);
    
    UFUNCTION(BlueprintCallable)
    void HandleHitWorld(FHitResult& Hit, UTracerShape* TracerShape);
    
    UFUNCTION(BlueprintCallable)
    bool HandleHitParry(FHitResult& Hit, ATBLCharacter* HitChar);
    
    UFUNCTION(BlueprintCallable)
    void HandleHitInventoryItem(FHitResult& Hit, AInventoryItem* HitInventoryItem);
    
    UFUNCTION(BlueprintCallable)
    void HandleHitDeadHorse(FHitResult& Hit, AHorse* HitHorse);
    
    UFUNCTION(BlueprintCallable)
    void HandleHitDeadCharacter(FHitResult& Hit, ATBLCharacter* HitChar);
    
    UFUNCTION(BlueprintCallable)
    bool HandleHitCharacter(FHitResult& Hit, ATBLCharacter* HitChar);
    
    UFUNCTION(BlueprintCallable)
    void HandleHitActorWithStats(FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void HandleEarlyHitCharacter(FHitResult& Hit, ATBLCharacter* HitChar);
    
public:
    UFUNCTION(BlueprintCallable)
    void EndWeaponTracers();
    
protected:
    UFUNCTION(BlueprintCallable)
    void DrawDebugParryHit(FVector Loc);
    
public:
    UFUNCTION(BlueprintCallable)
    void DoWeaponTracers();
    
protected:
    UFUNCTION(BlueprintCallable)
    void DoTracerCollisionCheck();
    
    UFUNCTION(BlueprintCallable)
    bool DidReleaseClash(FHitResult& Hit, ATBLCharacter*& OutCharacter) const;
    
    UFUNCTION(BlueprintCallable)
    bool DidHitWorld(FHitResult& Hit, ATBLCharacter*& OutCharacter) const;
    
    UFUNCTION(BlueprintCallable)
    bool DidHitParryBox(FHitResult& Hit, ATBLCharacter*& OutCharacter) const;
    
    UFUNCTION(BlueprintCallable)
    bool DidHitInventoryItem(FHitResult& Hit, AInventoryItem*& OutInventoryItem) const;
    
    UFUNCTION(BlueprintCallable)
    bool DidHitDeadHorse(FHitResult& Hit, AHorse*& OutHorse) const;
    
    UFUNCTION(BlueprintCallable)
    bool DidHitDeadCharacter(FHitResult& Hit, ATBLCharacter*& OutCharacter) const;
    
    UFUNCTION(BlueprintCallable)
    bool DidHitCharacter(FHitResult& Hit, ATBLCharacter*& OutCharacter) const;
    
    UFUNCTION(BlueprintCallable)
    bool DidHitActorWithStats(FHitResult& Hit, ATBLCharacter*& OutCharacter) const;
    
    UFUNCTION(BlueprintCallable)
    bool DidHitActor(AActor* HitActor) const;
    
    UFUNCTION(BlueprintCallable)
    bool DidHeadShot(FHitResult& Hit) const;
    
    UFUNCTION(BlueprintCallable)
    bool DidEarlyHit(FHitResult& Hit, ATBLCharacter*& OutCharacter) const;
    
    UFUNCTION(BlueprintCallable)
    void CopyPreviousFrame();
    
    UFUNCTION(BlueprintCallable)
    bool CheckTargetVisibility(AActor* Target);
    
    UFUNCTION(BlueprintCallable)
    void CalcTracerPoints();
    
public:
    UFUNCTION(BlueprintCallable)
    void ActivateAttackTracers();
    
};

