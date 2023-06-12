#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EActionPriorityLevel.h"
#include "OnUtilityAIActionDoneDelegate.h"
#include "UtilityAI_Context.h"
#include "UtilityAI_Action.generated.h"

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class UUtilityAI_Action : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUtilityAIActionDone OnDone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsReadyToComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanInterrupt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EActionPriorityLevel PriorityLevel;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLatentAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoNotRestartIfRedecidedUpon;
    
public:
    UUtilityAI_Action();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TickAction(float DeltaTime, FUtilityAI_Context C);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldRestartIfRedecidedUpon() const;
    
    UFUNCTION(BlueprintCallable)
    void SetCanInterrupt(bool bInCanInterrupt);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PerformAction(const FUtilityAI_Context& C);
    
    UFUNCTION(BlueprintCallable)
    void MarkReadyToFinish();
    
    UFUNCTION(BlueprintCallable)
    void MarkFinished();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDoneOrCanInterrupt() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CompleteAction(const FUtilityAI_Context& C);
    
};

