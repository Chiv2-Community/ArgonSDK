#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameServerQueryHandler.generated.h"

UCLASS(Abstract, Blueprintable)
class UGameServerQueryHandler : public UObject {
    GENERATED_BODY()
public:
    UGameServerQueryHandler();
};

