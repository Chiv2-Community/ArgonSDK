#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/Widget.h"
#include "OnBeforeBrowseDynamicDelegate.h"
#include "OnLoadUrlDynamicDelegate.h"
#include "OnTextChangedDynamicDelegate.h"
#include "SimpleDelegateDynamicDelegate.h"
#include "TBLWebWidget.generated.h"

UCLASS(Blueprintable)
class TBL_API UTBLWebWidget : public UWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowControls;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowAddressBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString InitialURL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowErrorMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SupportsTransparency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SupportsThumbMouseButtonNavigation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowInitialThrobber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor BackgroundColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSimpleDelegateDynamic OnLoadCompletedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSimpleDelegateDynamic OnSourceParsedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTextChangedDynamic OnTitleChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTextChangedDynamic OnUrlChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBeforeBrowseDynamic OnBeforeNavigationEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLoadUrlDynamic OnLoadUrlEvent;
    
public:
    UTBLWebWidget();
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void InitializeWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    FString GetButtonText(int32 ButtonIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void ClickedButton(int32 ButtonIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void BrowseToUrl(const FString& URL);
    
};

