#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "NameGenerator.generated.h"

UCLASS(Blueprintable, Config=Game)
class TBL_API UNameGenerator : public UObject {
    GENERATED_BODY()
public:
    UNameGenerator();
};

