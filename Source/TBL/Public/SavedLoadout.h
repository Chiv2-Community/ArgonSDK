#pragma once
#include "CoreMinimal.h"
#include "LoadoutConfig.h"
#include "SavedLoadout.generated.h"

class ATBLCharacter;
class ULoadoutSelection;

USTRUCT(BlueprintType)
struct FSavedLoadout {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ATBLCharacter> CharacterClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ULoadoutSelection> LoadoutSelection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLoadoutConfig Loadout;
    
    TBL_API FSavedLoadout();
};

