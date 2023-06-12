#include "ST_SGStatics.h"
#include "Templates/SubclassOf.h"

void UST_SGStatics::K2_GetComponents_Sphere(const UObject* WorldContextObject, TArray<UST_SGComponent*>& GridComponents, const FVector& WorldLocation, const float SphereRadius, const bool bDrawDebug) {
}

void UST_SGStatics::K2_GetComponents_RotatedBox(const UObject* WorldContextObject, TArray<UST_SGComponent*>& GridComponents, const FVector& WorldLocation, const FRotator& BoxRotation, const FVector& BoxExtents, const bool bDrawDebug) {
}

void UST_SGStatics::K2_GetComponents_Cone(const UObject* WorldContextObject, TArray<UST_SGComponent*>& GridComponents, const FVector& WorldLocation, const float ConeLength, const float ConeHalfAngleRadians, const FVector& Axis, const bool bDrawDebug) {
}

void UST_SGStatics::K2_GetComponents_Capsule(const UObject* WorldContextObject, TArray<UST_SGComponent*>& GridComponents, const FVector& WorldLocation, const FVector& CapsuleAxis, const float CapsuleRadius, const float CapsuleHalfHeight, const bool bDrawDebug) {
}

void UST_SGStatics::K2_GetComponents_Box(const UObject* WorldContextObject, TArray<UST_SGComponent*>& GridComponents, const FVector& WorldLocation, const FVector& BoxExtents, const bool bDrawDebug) {
}

FST_Int2D UST_SGStatics::K2_ConvertToInt2D(const int32 CellID, const UST_SparseGrid* Grid) {
    return FST_Int2D{};
}

int32 UST_SGStatics::K2_ConvertToCellID(const FST_Int2D& XY, const UST_SparseGrid* Grid) {
    return 0;
}

FVector2D UST_SGStatics::Int2DToVector(const FST_Int2D& InInt2D) {
    return FVector2D{};
}

void UST_SGStatics::GetComponentsOwners_Typed(const TArray<UST_SGComponent*>& GridComponents, TArray<AActor*>& Actors, const TSubclassOf<AActor> ActorClass) {
}

void UST_SGStatics::GetComponentsOwners(const TArray<UST_SGComponent*>& GridComponents, TArray<AActor*>& Actors) {
}

UST_SGStatics::UST_SGStatics() {
}

