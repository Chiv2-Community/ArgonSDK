#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineBaseTypes.h"
#include "EInputReplayState.h"
#include "InputReplayValues.h"
#include "ReplayCharacterState.h"
#include "InputReplayComponent.generated.h"

class AActor;
class ATBLCharacter;
class UInputReplay;

UCLASS(Blueprintable, ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class UInputReplayComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bValidRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator TargetRotation;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EInputReplayState::Type> ReplayState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInputReplayValues InputFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputReplay* InputReplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator LastControlRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ReplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> PlaybackPressed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlaybackFrameTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNewReplayFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoObjective;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoInputRec;
    
public:
    UInputReplayComponent();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateReplay(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void SetReplayState(TEnumAsByte<EInputReplayState::Type> NewReplayState);
    
public:
    UFUNCTION(BlueprintCallable)
    void SaveAutoInputRecord();
    
    UFUNCTION(BlueprintCallable)
    void InputStop();
    
    UFUNCTION(BlueprintCallable)
    void InputRec(const FString& NewReplayName);
    
    UFUNCTION(BlueprintCallable)
    void InputPlay(const FString& NewReplayName);
    
    UFUNCTION(BlueprintCallable)
    void InputCopyToOtherChars(const FString& NewReplayName);
    
    UFUNCTION(BlueprintCallable)
    void InputAppend(const FString& NewReplayName, const FString& ReplayName2);
    
protected:
    UFUNCTION(BlueprintCallable)
    FVector GetRelativeLocation(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    float GetRelativeFacingAngle(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    int32 GetNumFrames();
    
    UFUNCTION(BlueprintCallable)
    UInputReplay* GetInputReplay();
    
    UFUNCTION(BlueprintCallable)
    int32 GetCurrentFrame();
    
    UFUNCTION(BlueprintCallable)
    FReplayCharacterState GetCharacterState(ATBLCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    void DoKeyEvent(uint8 KeyBind, TEnumAsByte<EInputEvent> KeyEvent);
    
    UFUNCTION(BlueprintCallable)
    void DoFrame(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void ClearInput();
    
public:
    UFUNCTION(BlueprintCallable)
    void AutoInputRec();
    
protected:
    UFUNCTION(BlueprintCallable)
    void AdvanceFrame();
    
};

