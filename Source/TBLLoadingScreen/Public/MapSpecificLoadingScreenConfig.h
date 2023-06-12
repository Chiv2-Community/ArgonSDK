#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MapSpecificLoadingScreenConfigData.h"
#include "Templates/SubclassOf.h"
#include "MapSpecificLoadingScreenConfig.generated.h"

class ULoadingScreenPanelWidget;

UCLASS(Blueprintable)
class TBLLOADINGSCREEN_API UMapSpecificLoadingScreenConfig : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMapSpecificLoadingScreenConfigData> Configs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapSpecificLoadingScreenConfigData DefaultLoadingScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Frontend_TitleBar_FadeOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TitleBar_FadeOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Frontend_Widget_FadeOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Widget_FadeOutTime;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* DefaultLoadingScreenPanelBlueprint;
    
public:
    UMapSpecificLoadingScreenConfig();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TSubclassOf<ULoadingScreenPanelWidget> GetDefaultLoadingScreenPanelWidgetClass();
    
};

