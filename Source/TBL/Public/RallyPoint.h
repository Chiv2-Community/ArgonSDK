#pragma once
#include "CoreMinimal.h"
#include "AINavPoint.h"
#include "Templates/SubclassOf.h"
#include "RallyPoint.generated.h"

class APawn;

UCLASS(Blueprintable)
class TBL_API ARallyPoint : public AAINavPoint {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<TSubclassOf<APawn>> ProhibitedClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<TSubclassOf<APawn>> AllowedClasses;
    
public:
    ARallyPoint();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAllowedPawnClass(APawn* Pawn) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPawnClassFilters() const;
    
};

