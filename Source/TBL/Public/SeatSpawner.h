#pragma once
#include "CoreMinimal.h"
#include "ESeatSelectionMode.h"
#include "SeatEntry.h"
#include "Spawner.h"
#include "SeatSpawner.generated.h"

class USiegeMountPoint;

UCLASS(Blueprintable)
class TBL_API ASeatSpawner : public ASpawner {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SeatActorTag;
    
    UPROPERTY(EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<USiegeMountPoint>> CurrentSeatMountComponentList;
    
    UPROPERTY(EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<USiegeMountPoint>> PendingSpawnSeatMountComponentList;
    
    UPROPERTY(EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<USiegeMountPoint>> SeatMountComponentIndexList;
    
    UPROPERTY(EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<USiegeMountPoint>> SeatMountComponentList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSeatEntry> SeatActorList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESeatSelectionMode SeatSelectionMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 SeatSelectionIndex;
    
public:
    ASeatSpawner();
};

