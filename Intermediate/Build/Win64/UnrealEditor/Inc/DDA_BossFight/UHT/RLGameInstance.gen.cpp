// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DDA_BossFight/Public/RLGameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRLGameInstance() {}
// Cross Module References
	DDA_BOSSFIGHT_API UClass* Z_Construct_UClass_URLGameInstance();
	DDA_BOSSFIGHT_API UClass* Z_Construct_UClass_URLGameInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_DDA_BossFight();
// End Cross Module References
	DEFINE_FUNCTION(URLGameInstance::execResetTable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetTable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URLGameInstance::execGetReward)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetReward();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URLGameInstance::execUpdateTable)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_action);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateTable(Z_Param_action);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URLGameInstance::execGetAction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetAction();
		P_NATIVE_END;
	}
	void URLGameInstance::StaticRegisterNativesURLGameInstance()
	{
		UClass* Class = URLGameInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAction", &URLGameInstance::execGetAction },
			{ "GetReward", &URLGameInstance::execGetReward },
			{ "ResetTable", &URLGameInstance::execResetTable },
			{ "UpdateTable", &URLGameInstance::execUpdateTable },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URLGameInstance_GetAction_Statics
	{
		struct RLGameInstance_eventGetAction_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_URLGameInstance_GetAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RLGameInstance_eventGetAction_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URLGameInstance_GetAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URLGameInstance_GetAction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URLGameInstance_GetAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RLGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URLGameInstance_GetAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URLGameInstance, nullptr, "GetAction", nullptr, nullptr, sizeof(Z_Construct_UFunction_URLGameInstance_GetAction_Statics::RLGameInstance_eventGetAction_Parms), Z_Construct_UFunction_URLGameInstance_GetAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URLGameInstance_GetAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URLGameInstance_GetAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URLGameInstance_GetAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URLGameInstance_GetAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URLGameInstance_GetAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URLGameInstance_GetReward_Statics
	{
		struct RLGameInstance_eventGetReward_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URLGameInstance_GetReward_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RLGameInstance_eventGetReward_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URLGameInstance_GetReward_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URLGameInstance_GetReward_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URLGameInstance_GetReward_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RLGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URLGameInstance_GetReward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URLGameInstance, nullptr, "GetReward", nullptr, nullptr, sizeof(Z_Construct_UFunction_URLGameInstance_GetReward_Statics::RLGameInstance_eventGetReward_Parms), Z_Construct_UFunction_URLGameInstance_GetReward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URLGameInstance_GetReward_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URLGameInstance_GetReward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URLGameInstance_GetReward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URLGameInstance_GetReward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URLGameInstance_GetReward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URLGameInstance_ResetTable_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URLGameInstance_ResetTable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RLGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URLGameInstance_ResetTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URLGameInstance, nullptr, "ResetTable", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URLGameInstance_ResetTable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URLGameInstance_ResetTable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URLGameInstance_ResetTable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URLGameInstance_ResetTable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URLGameInstance_UpdateTable_Statics
	{
		struct RLGameInstance_eventUpdateTable_Parms
		{
			int32 action;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_action;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_URLGameInstance_UpdateTable_Statics::NewProp_action = { "action", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RLGameInstance_eventUpdateTable_Parms, action), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URLGameInstance_UpdateTable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URLGameInstance_UpdateTable_Statics::NewProp_action,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URLGameInstance_UpdateTable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RLGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URLGameInstance_UpdateTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URLGameInstance, nullptr, "UpdateTable", nullptr, nullptr, sizeof(Z_Construct_UFunction_URLGameInstance_UpdateTable_Statics::RLGameInstance_eventUpdateTable_Parms), Z_Construct_UFunction_URLGameInstance_UpdateTable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URLGameInstance_UpdateTable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URLGameInstance_UpdateTable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URLGameInstance_UpdateTable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URLGameInstance_UpdateTable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URLGameInstance_UpdateTable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URLGameInstance);
	UClass* Z_Construct_UClass_URLGameInstance_NoRegister()
	{
		return URLGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_URLGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_playerHealth_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_playerHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bossHealth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_bossHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_phase_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_phase;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_playstyle_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_playstyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cooldown_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_cooldown;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_distance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_distance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_time_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_time;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_learningRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_learningRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_discountFactor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_discountFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_epsilon_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_epsilon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URLGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_DDA_BossFight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URLGameInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URLGameInstance_GetAction, "GetAction" }, // 1229898937
		{ &Z_Construct_UFunction_URLGameInstance_GetReward, "GetReward" }, // 992736191
		{ &Z_Construct_UFunction_URLGameInstance_ResetTable, "ResetTable" }, // 337227860
		{ &Z_Construct_UFunction_URLGameInstance_UpdateTable, "UpdateTable" }, // 2861417062
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URLGameInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "RLGameInstance.h" },
		{ "ModuleRelativePath", "Public/RLGameInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URLGameInstance_Statics::NewProp_playerHealth_MetaData[] = {
		{ "Category", "State Values" },
		{ "ModuleRelativePath", "Public/RLGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_URLGameInstance_Statics::NewProp_playerHealth = { "playerHealth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URLGameInstance, playerHealth), METADATA_PARAMS(Z_Construct_UClass_URLGameInstance_Statics::NewProp_playerHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URLGameInstance_Statics::NewProp_playerHealth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URLGameInstance_Statics::NewProp_bossHealth_MetaData[] = {
		{ "Category", "State Values" },
		{ "ModuleRelativePath", "Public/RLGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URLGameInstance_Statics::NewProp_bossHealth = { "bossHealth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URLGameInstance, bossHealth), METADATA_PARAMS(Z_Construct_UClass_URLGameInstance_Statics::NewProp_bossHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URLGameInstance_Statics::NewProp_bossHealth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URLGameInstance_Statics::NewProp_phase_MetaData[] = {
		{ "Category", "State Values" },
		{ "ModuleRelativePath", "Public/RLGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_URLGameInstance_Statics::NewProp_phase = { "phase", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URLGameInstance, phase), METADATA_PARAMS(Z_Construct_UClass_URLGameInstance_Statics::NewProp_phase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URLGameInstance_Statics::NewProp_phase_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URLGameInstance_Statics::NewProp_playstyle_MetaData[] = {
		{ "Category", "State Values" },
		{ "ModuleRelativePath", "Public/RLGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_URLGameInstance_Statics::NewProp_playstyle = { "playstyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URLGameInstance, playstyle), METADATA_PARAMS(Z_Construct_UClass_URLGameInstance_Statics::NewProp_playstyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URLGameInstance_Statics::NewProp_playstyle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URLGameInstance_Statics::NewProp_cooldown_MetaData[] = {
		{ "Category", "State Values" },
		{ "ModuleRelativePath", "Public/RLGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_URLGameInstance_Statics::NewProp_cooldown = { "cooldown", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URLGameInstance, cooldown), METADATA_PARAMS(Z_Construct_UClass_URLGameInstance_Statics::NewProp_cooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URLGameInstance_Statics::NewProp_cooldown_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URLGameInstance_Statics::NewProp_distance_MetaData[] = {
		{ "Category", "State Values" },
		{ "ModuleRelativePath", "Public/RLGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URLGameInstance_Statics::NewProp_distance = { "distance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URLGameInstance, distance), METADATA_PARAMS(Z_Construct_UClass_URLGameInstance_Statics::NewProp_distance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URLGameInstance_Statics::NewProp_distance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URLGameInstance_Statics::NewProp_time_MetaData[] = {
		{ "Category", "State Values" },
		{ "ModuleRelativePath", "Public/RLGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URLGameInstance_Statics::NewProp_time = { "time", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URLGameInstance, time), METADATA_PARAMS(Z_Construct_UClass_URLGameInstance_Statics::NewProp_time_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URLGameInstance_Statics::NewProp_time_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URLGameInstance_Statics::NewProp_learningRate_MetaData[] = {
		{ "Category", "Hyperparameters" },
		{ "Comment", "// RL Hyperparameters\n" },
		{ "ModuleRelativePath", "Public/RLGameInstance.h" },
		{ "ToolTip", "RL Hyperparameters" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URLGameInstance_Statics::NewProp_learningRate = { "learningRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URLGameInstance, learningRate), METADATA_PARAMS(Z_Construct_UClass_URLGameInstance_Statics::NewProp_learningRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URLGameInstance_Statics::NewProp_learningRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URLGameInstance_Statics::NewProp_discountFactor_MetaData[] = {
		{ "Category", "Hyperparameters" },
		{ "ModuleRelativePath", "Public/RLGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URLGameInstance_Statics::NewProp_discountFactor = { "discountFactor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URLGameInstance, discountFactor), METADATA_PARAMS(Z_Construct_UClass_URLGameInstance_Statics::NewProp_discountFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URLGameInstance_Statics::NewProp_discountFactor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URLGameInstance_Statics::NewProp_epsilon_MetaData[] = {
		{ "Category", "Hyperparameters" },
		{ "ModuleRelativePath", "Public/RLGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URLGameInstance_Statics::NewProp_epsilon = { "epsilon", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URLGameInstance, epsilon), METADATA_PARAMS(Z_Construct_UClass_URLGameInstance_Statics::NewProp_epsilon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URLGameInstance_Statics::NewProp_epsilon_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URLGameInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URLGameInstance_Statics::NewProp_playerHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URLGameInstance_Statics::NewProp_bossHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URLGameInstance_Statics::NewProp_phase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URLGameInstance_Statics::NewProp_playstyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URLGameInstance_Statics::NewProp_cooldown,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URLGameInstance_Statics::NewProp_distance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URLGameInstance_Statics::NewProp_time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URLGameInstance_Statics::NewProp_learningRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URLGameInstance_Statics::NewProp_discountFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URLGameInstance_Statics::NewProp_epsilon,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URLGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URLGameInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URLGameInstance_Statics::ClassParams = {
		&URLGameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URLGameInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URLGameInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_URLGameInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URLGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URLGameInstance()
	{
		if (!Z_Registration_Info_UClass_URLGameInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URLGameInstance.OuterSingleton, Z_Construct_UClass_URLGameInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URLGameInstance.OuterSingleton;
	}
	template<> DDA_BOSSFIGHT_API UClass* StaticClass<URLGameInstance>()
	{
		return URLGameInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URLGameInstance);
	struct Z_CompiledInDeferFile_FID_DissertationArtefact_DDA_BossFight_Source_DDA_BossFight_Public_RLGameInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DissertationArtefact_DDA_BossFight_Source_DDA_BossFight_Public_RLGameInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URLGameInstance, URLGameInstance::StaticClass, TEXT("URLGameInstance"), &Z_Registration_Info_UClass_URLGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URLGameInstance), 3547660527U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DissertationArtefact_DDA_BossFight_Source_DDA_BossFight_Public_RLGameInstance_h_68692608(TEXT("/Script/DDA_BossFight"),
		Z_CompiledInDeferFile_FID_DissertationArtefact_DDA_BossFight_Source_DDA_BossFight_Public_RLGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DissertationArtefact_DDA_BossFight_Source_DDA_BossFight_Public_RLGameInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
