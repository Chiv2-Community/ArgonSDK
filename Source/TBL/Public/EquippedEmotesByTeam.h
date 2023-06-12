#pragma once
#include "CoreMinimal.h"
#include "EFaction.h"
#include "EquippedEmotesByClass.h"
#include "EquippedEmotesByTeam.generated.h"

USTRUCT(BlueprintType)
struct FEquippedEmotesByTeam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFaction Faction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEquippedEmotesByClass> EquipmentByEnum;
    
    TBL_API FEquippedEmotesByTeam();
};

