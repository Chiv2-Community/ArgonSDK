#pragma once
#include "CoreMinimal.h"
#include "EScoreEventType.generated.h"

UENUM(BlueprintType)
namespace EScoreEventType {
    enum Type {
        Invalid,
        MatchWinBonus,
        MatchLossBonus,
        MatchTiedBonus,
        ObjStageCompleteBonus,
        ObjCaptureZoneBonus,
        ObjPushableBonus,
        ObjBombPlantBonus,
        StatKillBonus,
        StatAssistBonus,
        StatAssistedSuicide,
        StatSuicideBonus,
        StreakSpreeBonus,
        StreakRampageBonus,
        StreakDominatingBonus,
        StreakUnstoppableBonus,
        StreakGodlikeBonus,
        StreakWickedSickBonus,
        MKDoubleBonus,
        MKTripleBonus,
        MKMegaBonus,
        MKUltraBonus,
        MKMonsterBonus,
        MKLudicrousBonus,
        MKHolyBonus,
        KMOffenseBonus,
        KMDefenseBonus,
        KMFirstBloodBonus,
        KMHeadshotBonus,
        KMComebackBonus,
        KMExecutionBonus,
        KMRescueBonus,
        KMShutdownBonus,
        KMAvengerBonus,
        KMRevengeBonus,
        AKTinkerTurretBonus,
        AKVigilistHealingTotemBonus,
        AKTinkerMineBonus,
        StatTeamKillBonus,
        MAX,
    };
}

