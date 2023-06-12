#pragma once
#include "CoreMinimal.h"
#include "GameFramework/LocalMessage.h"
#include "Templates/SubclassOf.h"
#include "TBLLocalMessage.generated.h"

class APlayerController;
class APlayerState;
class UObject;

UCLASS(Blueprintable)
class TBL_API UTBLLocalMessage : public ULocalMessage {
    GENERATED_BODY()
public:
    UTBLLocalMessage();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void UnpackData(const int32& Data, uint8& Byte, int32& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 PackData(const uint8& Byte, const int32& Value);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMessageReceived(APlayerController* Receiver, int32 Data, APlayerState* PlayerStateA, APlayerState* PlayerStateB, UObject* Object) const;
    
public:
    UFUNCTION(BlueprintCallable)
    static void BroadcastPrivateLocalMessage(APlayerController* PlayerController, TSubclassOf<ULocalMessage> MessageClass, int32 Data, APlayerState* PlayerStateA, APlayerState* PlayerStateB, UObject* Object);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void BroadcastLocalMessage(UObject* WorldContextObject, TSubclassOf<ULocalMessage> MessageClass, int32 Data, APlayerState* PlayerStateA, APlayerState* PlayerStateB, UObject* Object);
    
};

