// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <algorithm>
#include <tuple>

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "RLGameInstance.generated.h"

#define NEAR_DISTANCE	200.0f
#define MID_DISTANCE	500.0f

#define PLAYER_HEALTH_DIM		5
#define BOSS_HEALTH_DIM			5
#define PHASE_DIM				1
#define PLAYSTYLE_DIM			3
#define COOLDOWN_DIM			2
#define DISTANCE_DIM			3
#define TIME_DIM				3
#define ACTION_COUNT			3


#define REWARD_SCALE			1.0f

/**
 * 
 */
UCLASS()
class DDA_BOSSFIGHT_API URLGameInstance : public UGameInstance
{
	GENERATED_BODY()
public:
	URLGameInstance();
	~URLGameInstance();

	UFUNCTION(BlueprintCallable)
		int GetAction();

	UFUNCTION(BlueprintCallable)
		void UpdateTable(int action);

	UFUNCTION(BlueprintCallable)
		float	GetReward();

	UFUNCTION(BlueprintCallable)
		void ResetTable();

private:

	float*	IndexTable();
	int		QuantizeDistance(float);
	int		QuantizeTime(float);
	float	MaxQSA(float*);


public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "State Values")
		int playerHealth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "State Values")
		float bossHealth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "State Values")
		int phase;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "State Values")
		int playstyle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "State Values")
		int cooldown;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "State Values")
		float distance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "State Values")
		float time;


	// RL Hyperparameters
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hyperparameters")
		float learningRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hyperparameters")
		float discountFactor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hyperparameters")
		float epsilon;

private:

	// State Action Table with dimesions as follows
	// 0 - Player Health
	// 1 - Boss Health
	// 2 - Phase
	// 3 - Playstyle
	// 4 - Cooldown
	// 5 - Distance
	// 6 - Action
	float* stateActionTable;

	std::vector<float*> stateQueue;
	
};
