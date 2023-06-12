#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "TBLSocialSubScreen.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UTBLSocialSubScreen : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ListRefreshInterval;
    
public:
    UTBLSocialSubScreen();
    UFUNCTION(BlueprintCallable)
    void RefreshLists();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRefreshLists();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnOpened();
    
    UFUNCTION(BlueprintCallable)
    void OnClosed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FocusOnEntry();
    
    UFUNCTION(BlueprintCallable)
    void FocusOnEntries();
    
};

