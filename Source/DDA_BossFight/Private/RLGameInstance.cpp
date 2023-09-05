// Fill out your copyright notice in the Description page of Project Settings.


#include "RLGameInstance.h"

URLGameInstance::URLGameInstance()
{
	int totalSize = PLAYER_HEALTH_DIM * BOSS_HEALTH_DIM * PHASE_DIM * PLAYSTYLE_DIM * DISTANCE_DIM * ACTION_COUNT;

	stateActionTable = (float*)malloc(sizeof(float) * totalSize);
}

URLGameInstance::~URLGameInstance()
{
	free(stateActionTable);
}


void URLGameInstance::ResetTable()
{
	free(stateActionTable);

	int totalSize = PLAYER_HEALTH_DIM * BOSS_HEALTH_DIM * PHASE_DIM * PLAYSTYLE_DIM * DISTANCE_DIM * ACTION_COUNT;

	stateActionTable = (float*)malloc(sizeof(float) * totalSize);
}

int URLGameInstance::GetAction()
{
	int selectedAction;
	float* index;

	float* actions = IndexTable();
	stateQueue.push_back(actions);

	if ((std::rand() / RAND_MAX) <= epsilon)
	{
		int random = std::rand() % 3;
		index = actions + random;
	}
	else
	{
		index = std::max_element(actions, actions + 3);
	}

	if (GEngine)
	{
		//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString::Printf(TEXT("Value %f "), *index));
	}

	selectedAction = index - actions;

	return selectedAction;
}

void URLGameInstance::UpdateTable(int action)
{
	//Snapshot State
	//Get Bottom of Queue
	//Get Reward
	//Update respective Q(s,a)

	if (stateQueue.size() == 0)
	{
		return;
	}

	int distanceQuant = QuantizeDistance(distance);
	float* prevState = *(stateQueue.begin());
	
	stateQueue.erase(stateQueue.begin());

	float* qSA = prevState + action;

	float* newState = IndexTable();

	*qSA = ((1 - learningRate) * *qSA) + learningRate * (GetReward() + discountFactor * MaxQSA(newState));

	//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString::Printf(TEXT("Updated")));
	return;
}

float* URLGameInstance::IndexTable()
{
	int distanceQuant = QuantizeDistance(distance);
	//int timeQuant = QuantizeTime(time);

	int index = (playerHealth * BOSS_HEALTH_DIM * PHASE_DIM * PLAYSTYLE_DIM * DISTANCE_DIM * ACTION_COUNT) +
				((int)std::ceil(bossHealth) * PHASE_DIM * PLAYSTYLE_DIM * DISTANCE_DIM * ACTION_COUNT) +
				(phase * PLAYSTYLE_DIM * DISTANCE_DIM * ACTION_COUNT) +
				(playstyle * DISTANCE_DIM * ACTION_COUNT) +
				(distanceQuant * ACTION_COUNT);


	return &(stateActionTable[index]);
}

int URLGameInstance::QuantizeDistance(float dis)
{
	if (dis <= NEAR_DISTANCE)
		return 0;
	if (dis <= MID_DISTANCE)
		return 1;

	return 2;
}

int URLGameInstance::QuantizeTime(float totalTime)
{
	if (totalTime <= 300)
		return 0;
	if (totalTime <= 600)
		return 1;

	return 2;
}

float URLGameInstance::GetReward()
{
	// Equation for calculating reward based on state
	float result = 0.f;
	
	// Evaluate Healths as a ratio between boss and player
	// Ideal values found at low player health but high boss health
	if (playerHealth != 0 && bossHealth != 0.f)
	{
		float healthRatio = ((float)playerHealth / (float)bossHealth);
		result += (REWARD_SCALE - (REWARD_SCALE * healthRatio));
	}
	else
	{
		result -= REWARD_SCALE; // Either boss or player at 0 is rewarded negatively 
	}
	
	// Evaluate Distance based on what phase the boss is
	// Phase 1 wants to be close range
	// Phase 2 wants to be at long range
	// Phase 3 wants to be at close or middle range
	switch (phase) 
	{
		case 0:
			if (QuantizeDistance(distance) != 0) 
			{
				result -= REWARD_SCALE / 2.f;
			}
			break;
		case 1:
			if (QuantizeDistance(distance) != 2)
			{
				result -= REWARD_SCALE / 2.f;
			}
			break;
		case 2:
			if (QuantizeDistance(distance) == 2)
			{
				result -= REWARD_SCALE / 2.f;
			}
			break;
	}
	
	return result;
}


float URLGameInstance::MaxQSA(float* state)
{
	float max = *state;

	if (*(state + 1) > max)
		max = *(state + 1);

	if (*(state + 2) > max)
		max = *(state + 2);

	return max;
}
