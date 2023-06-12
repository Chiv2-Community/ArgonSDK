#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EGameModeType.h"
#include "MapModifierPropertiesArray.h"
#include "MapOption.h"
#include "CreateGameLibrary.generated.h"

class UMapModifierProperty;
class UMapOptionsObject;
class UObject;

UCLASS(Blueprintable, Config=Game)
class UCreateGameLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<TEnumAsByte<EGameModeType::Type>, FMapModifierPropertiesArray> DefaultGameModeModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMapModifierProperty*> DefaultModifiers;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GlobalTimeLimitOverride;
    
public:
    UCreateGameLibrary();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UMapOptionsObject* MakeMapOption(UObject* WorldContextObject, FMapOption MapOptions);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetTOOptions(UObject* WorldContextObject, int32& ThereAreNoOptionsAtTheMoment);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetTDMOptions(UObject* WorldContextObject, int32& TicketCountOverride, int32& TimeLimitOverride);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetGlobalTimeLimitOverride();
    
    UFUNCTION(BlueprintCallable)
    static bool GetGenericModifiers(TArray<UMapModifierProperty*>& Modifiers);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetFFAOptions(UObject* WorldContextObject, int32& ScoreLimitOverride, int32& TimeLimitOverride);
    
    UFUNCTION(BlueprintCallable)
    static bool GetDefaultModifiersForGameMode(TEnumAsByte<EGameModeType::Type> GameMode, TArray<UMapModifierProperty*>& Modifiers);
    
};

