#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "LevelStats.h"
#include "GameSparksLibrary.generated.h"

class ATBLPlayerState;
class UOnlineConfig;
class UVirtualGoodAnnouncement;

UCLASS(Blueprintable, MinimalAPI)
class UGameSparksLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGameSparksLibrary();
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetXp(ATBLPlayerState* InPlayerState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UOnlineConfig* GetOnlineConfig();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLevelStats GetLevelStats(ATBLPlayerState* InPlayerState, int32 Level);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetDaysSinceLive(ATBLPlayerState* InPlayerState, UVirtualGoodAnnouncement* InAnnouncement);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText ConvertIntToRomanNumeral(int32 InNumber);
    
};

