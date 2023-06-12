#pragma once
#include "CoreMinimal.h"
#include "ActorDisplayInfo.h"
#include "DisplayComponent.h"
#include "ActorInfoDisplayComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UActorInfoDisplayComponent : public UDisplayComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActorDisplayInfo> PerTeamDisplayInfo;
    
    UActorInfoDisplayComponent();
};

