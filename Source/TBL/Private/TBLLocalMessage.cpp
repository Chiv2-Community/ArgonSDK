#include "TBLLocalMessage.h"
#include "Templates/SubclassOf.h"

void UTBLLocalMessage::UnpackData(const int32& Data, uint8& Byte, int32& Value) {
}

int32 UTBLLocalMessage::PackData(const uint8& Byte, const int32& Value) {
    return 0;
}


void UTBLLocalMessage::BroadcastPrivateLocalMessage(APlayerController* PlayerController, TSubclassOf<ULocalMessage> MessageClass, int32 Data, APlayerState* PlayerStateA, APlayerState* PlayerStateB, UObject* Object) {
}

void UTBLLocalMessage::BroadcastLocalMessage(UObject* WorldContextObject, TSubclassOf<ULocalMessage> MessageClass, int32 Data, APlayerState* PlayerStateA, APlayerState* PlayerStateB, UObject* Object) {
}

UTBLLocalMessage::UTBLLocalMessage() {
}

