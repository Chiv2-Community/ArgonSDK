#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "EUtilityAI_TargetType.h"
#include "UtilityAITargetHybrid.h"
#include "UtilityAI_Context.h"
#include "UtilityAI_TargetGenerator.generated.h"

class AActor;

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class UUtilityAI_TargetGenerator : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUtilityAI_TargetType Type;
    
    UUtilityAI_TargetGenerator();
    UFUNCTION(BlueprintCallable)
    bool IsValidTarget(const FUtilityAI_Context& Context) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<UObject*> GetTargetObjects(const FUtilityAI_Context& C) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FVector> GetTargetLocations(const FUtilityAI_Context& C) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetTargetHybridLocations(const FUtilityAI_Context& C, TArray<FUtilityAITargetHybrid>& Locations) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<AActor*> GetTargetActors(const FUtilityAI_Context& C) const;
    
};

