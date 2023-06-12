#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Info.h"
#include "Templates/SubclassOf.h"
#include "GameModeModifier.generated.h"

class ATBLCharacter;

UCLASS(Blueprintable, NotPlaceable)
class AGameModeModifier : public AInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<ATBLCharacter>, TSubclassOf<ATBLCharacter>> OverridePawnClasses;
    
    AGameModeModifier();
};

