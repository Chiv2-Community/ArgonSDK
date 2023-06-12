#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EFaction.h"
#include "CharacterInfo.generated.h"

USTRUCT(BlueprintType)
struct FCharacterInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFaction Faction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    TBL_API FCharacterInfo();
};

