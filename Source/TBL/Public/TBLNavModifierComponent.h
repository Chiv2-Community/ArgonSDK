#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "NavModifierComponent.h"
#include "TBLNavModifierComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTBLNavModifierComponent : public UNavModifierComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector NavModifierOffset;
    
    UTBLNavModifierComponent();
};

