#include "MovementDebugger.h"
#include "Net/UnrealNetwork.h"

void UMovementDebugger::ToggleRecord() {
}

void UMovementDebugger::ToggleDrawServer() {
}

void UMovementDebugger::ToggleDrawClient() {
}

void UMovementDebugger::Teleport() {
}

void UMovementDebugger::StopRecord() {
}

void UMovementDebugger::StartRecord() {
}

void UMovementDebugger::SetTargetCharacter(ATBLCharacter* Character) {
}

void UMovementDebugger::ServerSetTargetCharacter_Implementation(ATBLCharacter* DebugTarget) {
}
bool UMovementDebugger::ServerSetTargetCharacter_Validate(ATBLCharacter* DebugTarget) {
    return true;
}

void UMovementDebugger::ServerSetClientTimeStamp_Implementation(float ClientTimeStamp, int32 Direction) {
}
bool UMovementDebugger::ServerSetClientTimeStamp_Validate(float ClientTimeStamp, int32 Direction) {
    return true;
}

void UMovementDebugger::ServerSetClientIndex_Implementation(int32 Index) {
}
bool UMovementDebugger::ServerSetClientIndex_Validate(int32 Index) {
    return true;
}

void UMovementDebugger::ServerSaveToFile_Implementation(const FString& Filename) {
}
bool UMovementDebugger::ServerSaveToFile_Validate(const FString& Filename) {
    return true;
}

void UMovementDebugger::SaveToFile(const FString& Filename) {
}

void UMovementDebugger::RecordPose(FDebugDrawShapes& DebugDraw, ACharacter* Pawn, FColor Color) {
}

void UMovementDebugger::RecordOtherCharacter(FMovementDebugSimualated& OtherCharacter, ATBLCharacterBase* OtherChar, UNetConnection* Connection) {
}

void UMovementDebugger::RecordCapsule(FMovementDebugFrame& DebugFrame, ACharacter* Pawn, FColor Color) {
}

void UMovementDebugger::RecordBoneChain(FDebugDrawShapes& DebugDraw, ACharacter* Pawn, FName BoneName, FColor Color) {
}

void UMovementDebugger::PreviousCharacter() {
}

void UMovementDebugger::PlayReleased() {
}

void UMovementDebugger::OnRep_Recording() {
}

void UMovementDebugger::OnPossessed(APawn* NewPawn) {
}

void UMovementDebugger::OnMovementSync(float ClientTimeStamp, float DeltaTime) {
}

void UMovementDebugger::NextCharacter() {
}

void UMovementDebugger::LoadFromFile(const FString& Filename) {
}

void UMovementDebugger::IncreaseFrameOffset() {
}

FMovementDebugFrame UMovementDebugger::GetServerFrame() {
    return FMovementDebugFrame{};
}

int32 UMovementDebugger::GetClientIndex() {
    return 0;
}

FMovementDebugFrame UMovementDebugger::GetClientFrame() {
    return FMovementDebugFrame{};
}

void UMovementDebugger::ForwardPressed() {
}

void UMovementDebugger::FixClientTimeStamps(TArray<FMovementDebugFrame>& Frames) {
}

bool UMovementDebugger::FindServerFrame(TArray<FMovementDebugFrame>& SearchFrames, FMovementDebugFrame& ReturnFrame, float ClientTimeStamp, int32 Direction) {
    return false;
}

void UMovementDebugger::DrawStatLine(FVector Start, FVector End, FColor Clr) {
}

void UMovementDebugger::DrawPose(FDebugDrawShapes& DebugDraw, FColor Clr) {
}

void UMovementDebugger::DrawFrame(FMovementDebugFrame& DebugFrame, FColor Clr) {
}

void UMovementDebugger::DrawDebug(UCanvas* Canvas) {
}

void UMovementDebugger::DisplayDebugScrollUp() {
}

void UMovementDebugger::DisplayDebugScrollReleased() {
}

void UMovementDebugger::DisplayDebugScrollDown() {
}

void UMovementDebugger::DecreaseFrameOffset() {
}

void UMovementDebugger::CloseDebugger() {
}

void UMovementDebugger::ClientSendFrame_Implementation(FMovementDebugFrame DebugFrame, bool bSyncTimeStamp) {
}

void UMovementDebugger::ClientLoadFromFile_Implementation(const FString& Filename) {
}

void UMovementDebugger::BackwardPressed() {
}

void UMovementDebugger::AutoSaveToFile(bool bSendToServer, const FString& Directory) {
}

void UMovementDebugger::Animate(float Scale) {
}

void UMovementDebugger::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UMovementDebugger, bRecording);
    DOREPLIFETIME(UMovementDebugger, ID);
}

UMovementDebugger::UMovementDebugger() {
    this->DebugPositionIndex = 0.00f;
    this->PlayDirection = 0;
    this->PlayDirectionDelay = 0.00f;
    this->bRecording = false;
    this->ID = 0;
    this->TargetCharacter = NULL;
    this->ServerSyncFrame = 0;
    this->BoneNames.AddDefaulted(17);
    this->bDrawServer = false;
    this->bDrawClient = true;
    this->InputComponent = NULL;
    this->FrameOffset = 0;
    this->DisplayDebugScrollDir = 0;
    this->DisplayDebugScrollY = 0.00f;
    this->OtherCharacterIndex = 0;
}

