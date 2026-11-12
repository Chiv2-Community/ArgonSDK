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
    struct FMapSummaryTagNames
    {
        static const FName NAME_MapDescriptionKey;
        static const FName NAME_MapDescriptionNamespace;
        static const FName NAME_MapDescriptionSource;
        static const FName NAME_MapNameKey;
        static const FName NAME_MapNameNamespace;
        static const FName NAME_MapNameSource;
    };
    
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

