// Fill out your copyright notice in the Description page of Project Settings.


#include "ReinforcementAgent.h"

AReinforcementAgent::AReinforcementAgent()
{
	int totalSize = PLAYER_HEALTH_DIM * BOSS_HEALTH_DIM * PHASE_DIM * PLAYSTYLE_DIM * DISTANCE_DIM * TIME_DIM * ACTION_COUNT;

	stateActionTable = (float*) malloc(sizeof(float) * totalSize);
	std::fill_n(stateActionTable, totalSize, -10);
}

AReinforcementAgent::~AReinforcementAgent()
{

}

int AReinforcementAgent::GetAction()
{
	int selectedAction;
	float* index;

	float* actions = IndexTable();

	if ((std::rand() / RAND_MAX) <= epsilon)
	{
		int random = std::rand() % 3;
		index = actions + random;
	}
	else
	{
		index = std::max_element(actions, actions + 3);
	}

	selectedAction = index - actions;
	
	return 1;
}

void AReinforcementAgent::UpdateTable()
{
	//Snapshot State
	//Get Bottom of Queue
	//Get Reward
	//Update respective Q(s,a)

	//Q(s,a) = (1 - learnRate) * Q(s,a,) + learnRate * (Reward + discount * max Q(newstate, a))

	return;
}

float* AReinforcementAgent::IndexTable()
{
	int distanceQuant = QuantizeDistance(distance);

	return &(stateActionTable[playerHealth*bossHealth*phase*playstyle*cooldown*distanceQuant]);
}

int AReinforcementAgent::QuantizeDistance(float dis)
{
	if(dis <= NEAR_DISTANCE)
		return 0;

	if (dis <= MID_DISTANCE)
		return 1;

	return 2;
}

float AReinforcementAgent::GetReward(int stateActionIndex, State newState)
{
	// Equation for calculating reward based on state
	float result = 0.f;

	return result;
}
