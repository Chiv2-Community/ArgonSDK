#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameUpdateData.h"
#include "TBLGameUpdatesLibrary.generated.h"

class UObject;

UCLASS(Blueprintable, MinimalAPI)
class UTBLGameUpdatesLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UTBLGameUpdatesLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ShouldShowGameUpdate(const FGameUpdateData& GameUpdateData);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetIsGameUpdateSeen(const FString& UpdateVersion, UObject* WorldContextObject, bool IsSeen);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetUnseenGameUpdatesCount(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetNewestGameUpdate(FGameUpdateData& OutGameUpdateData, UObject* WorldContextObject, bool ShouldCheckIfSeen);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetIsGameUpdateSeen(const FString& UpdateVersion, UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetIsGameUpdateNewest(const FGameUpdateData& GameUpdateData, UObject* WorldContextObject, bool ShouldCheckIfSeen);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetIsGameUpdateActive(const FGameUpdateData& GameUpdateData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetHasUnseenGameUpdates(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetGameUpdates(TArray<FGameUpdateData>& OutGameUpdates, UObject* WorldContextObject, uint8 Count);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetGameUpdateData(FName UpdateVersion, FGameUpdateData& OutGameUpdateData, UObject* WorldContextObject);
    
};

