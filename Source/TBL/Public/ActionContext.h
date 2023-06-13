#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "ActionContext.generated.h"

class AAbilityInvocation;
class AActor;
class AInventoryItem;
class UAbilitySpec;
class UAbilityTargetMethod;
class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct FActionContext {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true), Category = "Engine")
    TWeakObjectPtr<AAbilityInvocation> Invocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true), Category = "Engine")
    UAbilitySpec* AbilitySpec;
    
    UPROPERTY(EditAnywhere, Export, NotReplicated, meta=(AllowPrivateAccess=true), Category = "Engine")
    TWeakObjectPtr<UAbilityTargetMethod> TargetMethod;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true), Category = "Engine")
    TWeakObjectPtr<AActor> Projectile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true), Category = "Engine")
    FHitResult HitResult;
    
    UPROPERTY(EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true), Category = "Engine")
    TWeakObjectPtr<AInventoryItem> Weapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true), Category = "Engine")
    FVector HitDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true), Category = "Engine")
    FVector ImpactPointOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true), Category = "Engine")
    bool bHeadShotDamageOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true), Category = "Engine")
    bool bParried;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true), Category = "Engine")
    bool bMultiAttackHitParry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true), Category = "Engine")
    bool bArrowParried;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true), Category = "Engine")
    bool bDisarmed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true), Category = "Engine")
    bool bIsInTeamThwackRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true), Category = "Engine")
    bool bOverrideImpactPoint;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true), Category = "Engine")
    TWeakObjectPtr<AActor> CharacterWhoParried;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true), Category = "Engine")
    bool bCosmetic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true), Category = "Engine")
    bool bIgnoreAutonomousActions;
    
    UPROPERTY(EditAnywhere, Export, NotReplicated, meta=(AllowPrivateAccess=true), Category = "Engine")
    TWeakObjectPtr<UPrimitiveComponent> CollisionComponent;
    
    TBL_API FActionContext();
};

