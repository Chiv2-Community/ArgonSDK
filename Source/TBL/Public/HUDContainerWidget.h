#pragma once
#include "CoreMinimal.h"
#include "EWidgetContainer.h"
#include "HUDContainerPoolInfo.h"
#include "HudContainerPoolEntry.h"
#include "TBLUserWidget.h"
#include "WrappedStreamableHandle.h"
#include "HUDContainerWidget.generated.h"

class UActorComponent;
class UHUDContainerSubWidget;

UCLASS(Blueprintable, EditInlineNew)
class UHUDContainerWidget : public UTBLUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWidgetContainer WidgetContainerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHUDContainerPoolInfo> PooledWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<UActorComponent*, UHUDContainerSubWidget*> Widgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UActorComponent*, FWrappedStreamableHandle> PendingWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TSet<UHUDContainerSubWidget*> AllActiveWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UClass*, FHudContainerPoolEntry> Pool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<UClass*> LoadedSubWidgetClasses;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRegisteredStaggeredUpdate;
    
public:
    UHUDContainerWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Update();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SubwidgetReturnToPool(UHUDContainerSubWidget* SubWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SubwidgetInitFromPool(UHUDContainerSubWidget* SubWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RemoveSubwidget(UHUDContainerSubWidget* SubWidget);
    
    UFUNCTION(BlueprintCallable)
    void PopulateWidgetPool();
    
    UFUNCTION(BlueprintCallable)
    void ManuallyUpdate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddSubwidget(UHUDContainerSubWidget* SubWidget);
    
};

