#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ST_Int2D.h"
#include "Templates/SubclassOf.h"
#include "ST_SGStatics.generated.h"

class AActor;
class UObject;
class UST_SGComponent;
class UST_SparseGrid;

UCLASS(Blueprintable)
class ST_SPARSEGRID_API UST_SGStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UST_SGStatics();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void K2_GetComponents_Sphere(const UObject* WorldContextObject, TArray<UST_SGComponent*>& GridComponents, const FVector& WorldLocation, const float SphereRadius, const bool bDrawDebug);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void K2_GetComponents_RotatedBox(const UObject* WorldContextObject, TArray<UST_SGComponent*>& GridComponents, const FVector& WorldLocation, const FRotator& BoxRotation, const FVector& BoxExtents, const bool bDrawDebug);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void K2_GetComponents_Cone(const UObject* WorldContextObject, TArray<UST_SGComponent*>& GridComponents, const FVector& WorldLocation, const float ConeLength, const float ConeHalfAngleRadians, const FVector& Axis, const bool bDrawDebug);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void K2_GetComponents_Capsule(const UObject* WorldContextObject, TArray<UST_SGComponent*>& GridComponents, const FVector& WorldLocation, const FVector& CapsuleAxis, const float CapsuleRadius, const float CapsuleHalfHeight, const bool bDrawDebug);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void K2_GetComponents_Box(const UObject* WorldContextObject, TArray<UST_SGComponent*>& GridComponents, const FVector& WorldLocation, const FVector& BoxExtents, const bool bDrawDebug);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FST_Int2D K2_ConvertToInt2D(const int32 CellID, const UST_SparseGrid* Grid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 K2_ConvertToCellID(const FST_Int2D& XY, const UST_SparseGrid* Grid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D Int2DToVector(const FST_Int2D& InInt2D);
    
    UFUNCTION(BlueprintCallable)
    static void GetComponentsOwners_Typed(const TArray<UST_SGComponent*>& GridComponents, TArray<AActor*>& Actors, const TSubclassOf<AActor> ActorClass);
    
    UFUNCTION(BlueprintCallable)
    static void GetComponentsOwners(const TArray<UST_SGComponent*>& GridComponents, TArray<AActor*>& Actors);
    
};

