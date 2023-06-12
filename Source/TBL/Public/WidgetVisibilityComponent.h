#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "OnVisibilityChangedDelegate.h"
#include "OnWidgetVisibilityComponentDestroyedDelegate.h"
#include "WidgetVisibilityComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWidgetVisibilityComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnVisibilityChanged OnVisibilityChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWidgetVisibilityComponentDestroyed OnWidgetVisibilityComponentDestroyed;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCompletedFadeOut;
    
public:
    UWidgetVisibilityComponent();
    UFUNCTION(BlueprintCallable)
    void SetVisibile(bool bInVisibility);
    
    UFUNCTION(BlueprintCallable)
    void NotifyWidgetCompletedFadeOut(bool bInCompletedFadeOut);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVisible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasWidgetCompletedFadeOut() const;
    
    UFUNCTION(BlueprintCallable)
    void ErrorNotifyTimer();
    
};

