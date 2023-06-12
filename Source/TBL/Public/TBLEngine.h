#pragma once
#include "CoreMinimal.h"
#include "Engine/GameEngine.h"
#include "AvailableCPUBuckets.h"
#include "FrameTimeBuckets.h"
#include "PerMinuteBucket.h"
#include "PingTimeBuckets.h"
#include "TBLHardwareInfo.h"
#include "TBLEngine.generated.h"

class UWorld;

UCLASS(Blueprintable, NonTransient)
class TBL_API UTBLEngine : public UGameEngine {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* HorseClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* WeaponFistClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* CharacterCombatStatesClass;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWorld* ServerWorld;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 LastFrameTimestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PingFrameNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NetSaturatedCount;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 NetOutBytes;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double NetOutTime;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 NetConnections;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 NetSampleCount;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double LastFrameTime;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double LastNetFlushTime;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 LastOutBytes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalPingSamples;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalPingSamplesPerMinute;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 TotalRetryReliableCount;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 TotalRetryReliableBytes;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 TotalRetryUnreliableCount;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 TotalRetryUnreliableBytes;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 TotalSendFailBytes;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double AveragePingTime;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double AverageFrameTime;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double AveragePingTimePerMinute;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double AverageFrameTimePerMinute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalFrames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalFramesPerMinute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameTimeBuckets FrameTimeBuckets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameTimeBuckets StatFrameTimeBuckets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPingTimeBuckets PingTimeBuckets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAvailableCPUBuckets AvailableCpu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAvailableCPUBuckets AvailableCpuEx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PerMinuteTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AvailableCpuTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AvailableCpuRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPerMinuteBucket> PerMinuteBuckets;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 NetInPackets;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 NetInPacketsLost;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 NetInOutOfOrderPackets;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 NetOutPackets;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 NetOutPacketsLost;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 NetOutOutOfOrderPackets;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 LastInPackets;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 LastInPacketsLost;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 LastInOutOfOrderPackets;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 LastOutPackets;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 LastOutPacketsLost;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 LastOutOutOfOrderPackets;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 NetAutonomousMovementCorrections;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 NetAutonomousMovementCorrectionBunches;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 NetSimulatedMovementCorrections;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double LastAutonomousMovementCorrectionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTBLHardwareInfo HardwareInfo;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CPUPerfIndex;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GPUPerfIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SkippedServerMoves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SkippedServerMoveFrames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastSkippedServerMoveFrame;
    
public:
    UTBLEngine();
    UFUNCTION(BlueprintCallable)
    float GetStatMS();
    
    UFUNCTION(BlueprintCallable)
    float GetStatFPS();
    
    UFUNCTION(BlueprintCallable)
    float GetAvailableCPU();
    
};

