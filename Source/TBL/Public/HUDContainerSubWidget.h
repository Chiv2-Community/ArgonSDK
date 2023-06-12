#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "HUDContainerSubWidget.generated.h"

class AActor;
class UActorComponent;

UCLASS(Blueprintable, EditInlineNew)
class UHUDContainerSubWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* AssignedActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UActorComponent* AssignedComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFocused;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FocusAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FocusScale;
    
    UHUDContainerSubWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_UpdateFocusParams(float InAlpha, float InScale);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnReturnedToPool();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnFocusedChanged(bool bInIsFocused);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnAssignedToActor(AActor* Actor, UActorComponent* Component);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetAssignedActor() const;
    
};

