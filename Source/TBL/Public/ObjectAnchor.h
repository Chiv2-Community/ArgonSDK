#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ObjectAnchor.generated.h"

class UObject;

UCLASS(Blueprintable)
class AObjectAnchor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> AnchoredObjects;
    
    AObjectAnchor();
};

