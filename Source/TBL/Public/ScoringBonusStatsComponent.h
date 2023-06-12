#pragma once
#include "CoreMinimal.h"
#include "DamageTakenEvent.h"
#include "TBLGameScoringComponent.h"
#include "ScoringBonusStatsComponent.generated.h"

class UStatsComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UScoringBonusStatsComponent : public UTBLGameScoringComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UStatsComponent* OwnerStatsComponent;
    
    UScoringBonusStatsComponent();
    UFUNCTION(BlueprintCallable)
    void OnOwnerDamageTaken(const FDamageTakenEvent& Event);
    
};

