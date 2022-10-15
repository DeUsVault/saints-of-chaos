﻿#pragma once

#include "NativeGameplayTags.h"

namespace SOCAIBehaviorTags
{
	SOCAI_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(None)
	SOCAI_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Behavior)
	SOCAI_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Idle)
	SOCAI_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(FindEnemy)
	SOCAI_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(CallForBackup)
	SOCAI_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(MoveToAllies)
	SOCAI_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(RaiseAlarm)
	SOCAI_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(EngageEnemy)
	SOCAI_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(MoveToCombatRange)
	SOCAI_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Attack)
	SOCAI_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Disengage)
	SOCAI_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Retreat)
	SOCAI_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(MoveToSafeLocation)
	SOCAI_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Surrender)
	SOCAI_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InvestigateLastKnownEnemy)
	SOCAI_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(GoToEnemyLastKnownLocation)
	SOCAI_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(SearchArea)
	SOCAI_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(AllClear)
	SOCAI_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(FollowSchedule)
	SOCAI_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(LookUpNextTask)
	SOCAI_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(FollowPathToTaskLocation)
	SOCAI_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(DoTask)

}

namespace SOCAIActionTags
{
	SOCAI_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(None)
	SOCAI_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Idle)
}