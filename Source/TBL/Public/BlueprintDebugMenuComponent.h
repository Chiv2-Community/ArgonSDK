#pragma once
#include "CoreMinimal.h"
#include "TBLComponent.h"
#include "Templates/SubclassOf.h"
#include "BlueprintDebugMenuComponent.generated.h"

class UUserWidget;

UCLASS(Blueprintable, ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class UBlueprintDebugMenuComponent : public UTBLComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> WidgetClass;
    
    UBlueprintDebugMenuComponent();
};

