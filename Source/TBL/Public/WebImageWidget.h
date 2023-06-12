#pragma once
#include "CoreMinimal.h"
#include "Components/Image.h"
#include "WebImageWidget.generated.h"

UCLASS(Blueprintable, Config=Game)
class TBL_API UWebImageWidget : public UImage {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FWebImageWidgetImageDownloadedDelegate, bool, bSuccess);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString URL;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWebImageWidgetImageDownloadedDelegate WebImageWidgetImageDownloadedDelegate;
    
    UWebImageWidget();
    UFUNCTION(BlueprintCallable)
    void SetUrl(const FString& InUrl);
    
    UFUNCTION(BlueprintCallable)
    void OnImageDownloaded(bool bSuccess);
    
};

