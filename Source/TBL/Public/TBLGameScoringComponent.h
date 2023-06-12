#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DataTableRowSelection.h"
#include "EOnlineStat.h"
#include "GameScoringDataTable.h"
#include "TBLGameScoringComponent.generated.h"

class ATBLPlayerState;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTBLGameScoringComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Enabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowSelection ScoringRow;
    
    UTBLGameScoringComponent();
    UFUNCTION(BlueprintCallable)
    void SetScoringComponentEnabled(bool IsEnabled);
    
    UFUNCTION(BlueprintCallable)
    int32 GetScoringValue();
    
    UFUNCTION(BlueprintCallable)
    FGameScoringDataTable GetScoringRow();
    
    UFUNCTION(BlueprintCallable)
    void AwardScore(ATBLPlayerState* PlayerState, EOnlineStat Stat, int32 ScoreValueOverride);
    
};

