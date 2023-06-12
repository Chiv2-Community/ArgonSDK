#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BotSpawnOverrides.generated.h"

class UDataTable;

UCLASS(Abstract, Blueprintable, NotPlaceable, Config=Game)
class UBotSpawnOverrides : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* Table;
    
    UBotSpawnOverrides();
};

