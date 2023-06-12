#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EGameModeType.h"
#include "MapModifierPropertiesArray.h"
#include "MapOptionsObject.generated.h"

class UMapModifierComboBoxProperty;
class UMapModifierProperty;

UCLASS(Blueprintable)
class UMapOptionsObject : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText MapName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EGameModeType::Type>> GameModeTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TEnumAsByte<EGameModeType::Type>, FMapModifierPropertiesArray> MapPropertiesByGameModeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TEnumAsByte<EGameModeType::Type>, FText> MapNameByGameMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMapModifierComboBoxProperty* GamemodeTypesComboboxProperty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMapModifierComboBoxProperty* ServerTypeComboboxProperty;
    
    UMapOptionsObject();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMapMofidiersForGameMode(TEnumAsByte<EGameModeType::Type> GamemodeType, TArray<UMapModifierProperty*>& MapModifiers) const;
    
    UFUNCTION(BlueprintCallable)
    FText GetGameModeMapName(TEnumAsByte<EGameModeType::Type> GamemodeType);
    
    UFUNCTION(BlueprintCallable)
    FString GenerateMapURL(TArray<UMapModifierProperty*> InMapModifierProperties);
    
};

