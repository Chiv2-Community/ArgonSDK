#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EAudioClassType.h"
#include "EFaction.h"
#include "CustomizationPreset.generated.h"

class UCharacterCustomization;

USTRUCT(BlueprintType)
struct FCustomizationPreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EAudioClassType::Type> PlayerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    EFaction PlayerTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPrimaryAssetId> AssetIds;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    UCharacterCustomization* OverridedCustomization;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    UCharacterCustomization* DefaultCustomization;
    
public:
    TBL_API FCustomizationPreset();
};

