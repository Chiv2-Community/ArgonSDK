#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/EngineTypes.h"
#include "Engine/LatentActionManager.h"
#include "EPlatformType.h"
#include "ESonyAppType.h"
#include "SwatchSelectionsByClass.h"
#include "TBLUtilityLibrary.generated.h"

class AActor;
class UAkComponent;
class UObject;
class UPrimitiveComponent;
class USceneComponent;

UCLASS(Blueprintable)
class UTBLUtilityLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UTBLUtilityLibrary();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetEnabledRenderMainScene(UObject* WorldContextObject, bool bShouldRenderMainScene);
    
    UFUNCTION(BlueprintCallable)
    static void SetAudioEnemyRTPC(UAkComponent* AkComponent, AActor* Initiator);
    
    UFUNCTION(BlueprintCallable)
    static void SaveCustomizationSettings();
    
    UFUNCTION(BlueprintCallable)
    static void RecursiveSetVisibility(UPrimitiveComponent* Root, bool bOwnerNoSee, bool bOnlyOwnerSee);
    
    UFUNCTION(BlueprintCallable)
    static int32 RandomWeightedIntegerFromStream(const TArray<float>& Weights, const FRandomStream& InStream);
    
    UFUNCTION(BlueprintCallable)
    static void LogWithCallstacks(const FString& Message);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void LoadCinematicSublevel(const UObject* WorldContextObject, FName LevelName, bool bMakeVisibleAfterLoad, bool bShouldBlockOnLoad, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    static TEnumAsByte<ESonyAppType> GetSonyPlatformRegion();
    
    UFUNCTION(BlueprintCallable)
    static TArray<FSwatchSelectionsByClass> GetSavedCustomizationSettings();
    
    UFUNCTION(BlueprintCallable)
    static TEnumAsByte<EPlatformType> GetPlatformType();
    
    UFUNCTION(BlueprintCallable)
    static void GetMatchingChildComponentsByName(const USceneComponent* RootComponent, const FString& MatchName, TArray<USceneComponent*>& OutMatches);
    
    UFUNCTION(BlueprintCallable)
    static float GetClosestPointOnCollision(const AActor* Actor, const FVector& Point, TEnumAsByte<ECollisionChannel> CollisionChannel, FVector& ClosestPointOnCollision);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetAzimuth(const FVector& Direction, const FVector& Forward);
    
    UFUNCTION(BlueprintCallable)
    static FName FindClosestSocket(USceneComponent* Component, FVector Location, const FString& SocketSubstring);
    
    UFUNCTION(BlueprintCallable)
    static void CopyToClipboard(const FString& TextToCopy);
    
};

