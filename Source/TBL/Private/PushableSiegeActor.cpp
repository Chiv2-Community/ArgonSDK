#include "PushableSiegeActor.h"
#include "AkComponent.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "HudMarkerDisplayComponent.h"
#include "Net/UnrealNetwork.h"
#include "PushableComponent.h"
#include "PushingComponent.h"
#include "TBLNavModifierComponent.h"
#include "TeamCapturePointComponent.h"

void APushableSiegeActor::UpdateSkeletalMesh() {
}


void APushableSiegeActor::SetSiegeState(ESiegeActorState NewState) {
}

void APushableSiegeActor::SetAvoidanceEnabled(bool bEnable) {
}

void APushableSiegeActor::OnRep_ReplicatedSiegeState() {
}

void APushableSiegeActor::OnPushableReachedEndPoint(int32 EndPointNum, FPushableEndPoint EndPoint, bool IsLastEndPoint) {
}

void APushableSiegeActor::OnPushableCompleted() {
}

void APushableSiegeActor::OnPushableActivated(bool bIsActive) {
}

void APushableSiegeActor::OnMeshLODChanged() {
}

void APushableSiegeActor::AddLogEntry(const FString& LogEntry) {
}

void APushableSiegeActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APushableSiegeActor, ReplicatedSiegeState);
}

APushableSiegeActor::APushableSiegeActor() {
    this->DefaultSceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
    this->AvoidanceUID = -1;
    this->bUseRVOAvoidance = false;
    this->AvoidanceHeight = 0.00f;
    this->StationaryPhysAsset = NULL;
    this->PushablePhysAsset = NULL;
    this->StationaryPhysAssetLowLod = NULL;
    this->PushablePhysAssetLowLod = NULL;
    this->bDedicatedServerUseLowLodPhysics = true;
    this->LowLodPhysAssetLevel = 2;
    this->PushableComponent = CreateDefaultSubobject<UPushableComponent>(TEXT("PushableComponent"));
    this->PushingComponent = CreateDefaultSubobject<UPushingComponent>(TEXT("PushingComponent"));
    this->TeamCapturePoint = CreateDefaultSubobject<UTeamCapturePointComponent>(TEXT("TeamCapturePoint"));
    this->HudMarkerDisplay = CreateDefaultSubobject<UHudMarkerDisplayComponent>(TEXT("HudMarkerDisplay"));
    this->TBLNavModifier = CreateDefaultSubobject<UTBLNavModifierComponent>(TEXT("TBLNavModifier"));
    this->SiegeMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SiegeMesh"));
    this->PawnPushingCollisionComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("PawnPushingCollisionComponent"));
    this->HudMarkerComponentLocation = CreateDefaultSubobject<USceneComponent>(TEXT("HudMarkerComponentLocation"));
    this->AudioComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AudioComponent0"));
}

