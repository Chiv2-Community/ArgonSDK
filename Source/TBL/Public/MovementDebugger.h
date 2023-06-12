#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "DebugDrawShapes.h"
#include "MovementDebugFrame.h"
#include "MovementDebugSimualated.h"
#include "MovementDebugger.generated.h"

class ACharacter;
class APawn;
class ATBLCharacter;
class ATBLCharacterBase;
class UCanvas;
class UInputComponent;
class UNetConnection;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UMovementDebugger : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMovementDebugFrame> RecordedFrames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMovementDebugFrame> ServerFramesFromFile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DebugPositionIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayDirectionDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Recording, meta=(AllowPrivateAccess=true))
    bool bRecording;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATBLCharacter* TargetCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovementDebugFrame ServerFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ServerSyncFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> BoneNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawClient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputComponent* InputComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FrameOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LastSavedFileName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DisplayDebugScrollDir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisplayDebugScrollY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OtherCharacterIndex;
    
    UMovementDebugger();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void ToggleRecord();
    
    UFUNCTION(BlueprintCallable)
    void ToggleDrawServer();
    
    UFUNCTION(BlueprintCallable)
    void ToggleDrawClient();
    
    UFUNCTION(BlueprintCallable)
    void Teleport();
    
    UFUNCTION(BlueprintCallable)
    void StopRecord();
    
    UFUNCTION(BlueprintCallable)
    void StartRecord();
    
    UFUNCTION(BlueprintCallable)
    void SetTargetCharacter(ATBLCharacter* Character);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetTargetCharacter(ATBLCharacter* DebugTarget);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetClientTimeStamp(float ClientTimeStamp, int32 Direction);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetClientIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSaveToFile(const FString& Filename);
    
    UFUNCTION(BlueprintCallable)
    void SaveToFile(const FString& Filename);
    
    UFUNCTION(BlueprintCallable)
    void RecordPose(FDebugDrawShapes& DebugDraw, ACharacter* Pawn, FColor Color);
    
    UFUNCTION(BlueprintCallable)
    void RecordOtherCharacter(FMovementDebugSimualated& OtherCharacter, ATBLCharacterBase* OtherChar, UNetConnection* Connection);
    
    UFUNCTION(BlueprintCallable)
    void RecordCapsule(FMovementDebugFrame& DebugFrame, ACharacter* Pawn, FColor Color);
    
    UFUNCTION(BlueprintCallable)
    void RecordBoneChain(FDebugDrawShapes& DebugDraw, ACharacter* Pawn, FName BoneName, FColor Color);
    
    UFUNCTION(BlueprintCallable)
    void PreviousCharacter();
    
    UFUNCTION(BlueprintCallable)
    void PlayReleased();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Recording();
    
    UFUNCTION(BlueprintCallable)
    void OnPossessed(APawn* NewPawn);
    
    UFUNCTION(BlueprintCallable)
    void OnMovementSync(float ClientTimeStamp, float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void NextCharacter();
    
    UFUNCTION(BlueprintCallable)
    void LoadFromFile(const FString& Filename);
    
    UFUNCTION(BlueprintCallable)
    void IncreaseFrameOffset();
    
    UFUNCTION(BlueprintCallable)
    FMovementDebugFrame GetServerFrame();
    
    UFUNCTION(BlueprintCallable)
    int32 GetClientIndex();
    
    UFUNCTION(BlueprintCallable)
    FMovementDebugFrame GetClientFrame();
    
    UFUNCTION(BlueprintCallable)
    void ForwardPressed();
    
    UFUNCTION(BlueprintCallable)
    void FixClientTimeStamps(TArray<FMovementDebugFrame>& Frames);
    
    UFUNCTION(BlueprintCallable)
    bool FindServerFrame(TArray<FMovementDebugFrame>& SearchFrames, FMovementDebugFrame& ReturnFrame, float ClientTimeStamp, int32 Direction);
    
    UFUNCTION(BlueprintCallable)
    void DrawStatLine(FVector Start, FVector End, FColor Clr);
    
    UFUNCTION(BlueprintCallable)
    void DrawPose(FDebugDrawShapes& DebugDraw, FColor Clr);
    
    UFUNCTION(BlueprintCallable)
    void DrawFrame(FMovementDebugFrame& DebugFrame, FColor Clr);
    
    UFUNCTION(BlueprintCallable)
    void DrawDebug(UCanvas* Canvas);
    
    UFUNCTION(BlueprintCallable)
    void DisplayDebugScrollUp();
    
    UFUNCTION(BlueprintCallable)
    void DisplayDebugScrollReleased();
    
    UFUNCTION(BlueprintCallable)
    void DisplayDebugScrollDown();
    
    UFUNCTION(BlueprintCallable)
    void DecreaseFrameOffset();
    
    UFUNCTION(BlueprintCallable)
    void CloseDebugger();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSendFrame(FMovementDebugFrame DebugFrame, bool bSyncTimeStamp);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientLoadFromFile(const FString& Filename);
    
    UFUNCTION(BlueprintCallable)
    void BackwardPressed();
    
    UFUNCTION(BlueprintCallable)
    void AutoSaveToFile(bool bSendToServer, const FString& Directory);
    
    UFUNCTION(BlueprintCallable)
    void Animate(float Scale);
    
};

