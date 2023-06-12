#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EFaction.h"
#include "EGameModeType.h"
#include "TBLMapSummary.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UTBLMapSummary : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText MapName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText MapDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFaction AttackingFaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EGameModeType::Type> GamemodeType;
    
    UTBLMapSummary();
};

