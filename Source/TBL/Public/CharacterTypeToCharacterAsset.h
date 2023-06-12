#pragma once
#include "CoreMinimal.h"
#include "EAudioClassType.h"
#include "CharacterTypeToCharacterAsset.generated.h"

class ATBLCharacter;

USTRUCT(BlueprintType)
struct FCharacterTypeToCharacterAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EAudioClassType::Type> CharacterType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ATBLCharacter> CharacterAsset;
    
    TBL_API FCharacterTypeToCharacterAsset();
};

