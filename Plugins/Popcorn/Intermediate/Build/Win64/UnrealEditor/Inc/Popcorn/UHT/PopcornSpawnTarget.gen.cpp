// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Popcorn/Public/PopcornSpawnTarget.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePopcornSpawnTarget() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	POPCORN_API UClass* Z_Construct_UClass_APopcornSpawnTarget();
	POPCORN_API UClass* Z_Construct_UClass_APopcornSpawnTarget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Popcorn();
// End Cross Module References
	DEFINE_FUNCTION(APopcornSpawnTarget::execTargetHitEvent)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComponent);
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TargetHitEvent(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComponent,Z_Param_NormalImpulse,Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	void APopcornSpawnTarget::StaticRegisterNativesAPopcornSpawnTarget()
	{
		UClass* Class = APopcornSpawnTarget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TargetHitEvent", &APopcornSpawnTarget::execTargetHitEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APopcornSpawnTarget_TargetHitEvent_Statics
	{
		struct PopcornSpawnTarget_eventTargetHitEvent_Parms
		{
			UPrimitiveComponent* HitComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComponent;
			FVector NormalImpulse;
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComponent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APopcornSpawnTarget_TargetHitEvent_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APopcornSpawnTarget_TargetHitEvent_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PopcornSpawnTarget_eventTargetHitEvent_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APopcornSpawnTarget_TargetHitEvent_Statics::NewProp_HitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APopcornSpawnTarget_TargetHitEvent_Statics::NewProp_HitComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APopcornSpawnTarget_TargetHitEvent_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PopcornSpawnTarget_eventTargetHitEvent_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APopcornSpawnTarget_TargetHitEvent_Statics::NewProp_OtherComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APopcornSpawnTarget_TargetHitEvent_Statics::NewProp_OtherComponent = { "OtherComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PopcornSpawnTarget_eventTargetHitEvent_Parms, OtherComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APopcornSpawnTarget_TargetHitEvent_Statics::NewProp_OtherComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APopcornSpawnTarget_TargetHitEvent_Statics::NewProp_OtherComponent_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APopcornSpawnTarget_TargetHitEvent_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PopcornSpawnTarget_eventTargetHitEvent_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APopcornSpawnTarget_TargetHitEvent_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APopcornSpawnTarget_TargetHitEvent_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PopcornSpawnTarget_eventTargetHitEvent_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_APopcornSpawnTarget_TargetHitEvent_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APopcornSpawnTarget_TargetHitEvent_Statics::NewProp_Hit_MetaData)) }; // 1287526515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APopcornSpawnTarget_TargetHitEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APopcornSpawnTarget_TargetHitEvent_Statics::NewProp_HitComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APopcornSpawnTarget_TargetHitEvent_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APopcornSpawnTarget_TargetHitEvent_Statics::NewProp_OtherComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APopcornSpawnTarget_TargetHitEvent_Statics::NewProp_NormalImpulse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APopcornSpawnTarget_TargetHitEvent_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APopcornSpawnTarget_TargetHitEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PopcornSpawnTarget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APopcornSpawnTarget_TargetHitEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APopcornSpawnTarget, nullptr, "TargetHitEvent", nullptr, nullptr, sizeof(Z_Construct_UFunction_APopcornSpawnTarget_TargetHitEvent_Statics::PopcornSpawnTarget_eventTargetHitEvent_Parms), Z_Construct_UFunction_APopcornSpawnTarget_TargetHitEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APopcornSpawnTarget_TargetHitEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C40401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APopcornSpawnTarget_TargetHitEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APopcornSpawnTarget_TargetHitEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APopcornSpawnTarget_TargetHitEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APopcornSpawnTarget_TargetHitEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APopcornSpawnTarget);
	UClass* Z_Construct_UClass_APopcornSpawnTarget_NoRegister()
	{
		return APopcornSpawnTarget::StaticClass();
	}
	struct Z_Construct_UClass_APopcornSpawnTarget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitDetection_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitDetection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitDetecRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HitDetecRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnPlace_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnPlace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModularSpawnedActor_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ModularSpawnedActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APopcornSpawnTarget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Popcorn,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APopcornSpawnTarget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APopcornSpawnTarget_TargetHitEvent, "TargetHitEvent" }, // 1602785559
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APopcornSpawnTarget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PopcornSpawnTarget.h" },
		{ "ModuleRelativePath", "Public/PopcornSpawnTarget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APopcornSpawnTarget_Statics::NewProp_HitTarget_MetaData[] = {
		{ "Category", "Modular Spawn Target" },
		{ "Comment", "//The target's mesh\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PopcornSpawnTarget.h" },
		{ "ToolTip", "The target's mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APopcornSpawnTarget_Statics::NewProp_HitTarget = { "HitTarget", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APopcornSpawnTarget, HitTarget), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APopcornSpawnTarget_Statics::NewProp_HitTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APopcornSpawnTarget_Statics::NewProp_HitTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APopcornSpawnTarget_Statics::NewProp_HitDetection_MetaData[] = {
		{ "Category", "Modular Spawn Target" },
		{ "Comment", "//Sphere collision for detecting overlap event. Drag directly in the level to adjust the location \n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PopcornSpawnTarget.h" },
		{ "ToolTip", "Sphere collision for detecting overlap event. Drag directly in the level to adjust the location" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APopcornSpawnTarget_Statics::NewProp_HitDetection = { "HitDetection", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APopcornSpawnTarget, HitDetection), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APopcornSpawnTarget_Statics::NewProp_HitDetection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APopcornSpawnTarget_Statics::NewProp_HitDetection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APopcornSpawnTarget_Statics::NewProp_HitDetecRadius_MetaData[] = {
		{ "Category", "Modular Spawn Target" },
		{ "Comment", "//Set the radius of sphere collision\n" },
		{ "ModuleRelativePath", "Public/PopcornSpawnTarget.h" },
		{ "ToolTip", "Set the radius of sphere collision" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APopcornSpawnTarget_Statics::NewProp_HitDetecRadius = { "HitDetecRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APopcornSpawnTarget, HitDetecRadius), METADATA_PARAMS(Z_Construct_UClass_APopcornSpawnTarget_Statics::NewProp_HitDetecRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APopcornSpawnTarget_Statics::NewProp_HitDetecRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APopcornSpawnTarget_Statics::NewProp_SpawnPlace_MetaData[] = {
		{ "Category", "Modular Spawn Target" },
		{ "Comment", "//Decide the location where ModularSpawn actor spawn. Drag directly in the level to adjust the location \n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PopcornSpawnTarget.h" },
		{ "ToolTip", "Decide the location where ModularSpawn actor spawn. Drag directly in the level to adjust the location" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APopcornSpawnTarget_Statics::NewProp_SpawnPlace = { "SpawnPlace", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APopcornSpawnTarget, SpawnPlace), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APopcornSpawnTarget_Statics::NewProp_SpawnPlace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APopcornSpawnTarget_Statics::NewProp_SpawnPlace_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APopcornSpawnTarget_Statics::NewProp_ModularSpawnedActor_MetaData[] = {
		{ "Category", "Modular Spawn Target" },
		{ "Comment", "//Chose the actor we want to spawn. Choose ModularSpawn in this case \n" },
		{ "ModuleRelativePath", "Public/PopcornSpawnTarget.h" },
		{ "ToolTip", "Chose the actor we want to spawn. Choose ModularSpawn in this case" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APopcornSpawnTarget_Statics::NewProp_ModularSpawnedActor = { "ModularSpawnedActor", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APopcornSpawnTarget, ModularSpawnedActor), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APopcornSpawnTarget_Statics::NewProp_ModularSpawnedActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APopcornSpawnTarget_Statics::NewProp_ModularSpawnedActor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APopcornSpawnTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APopcornSpawnTarget_Statics::NewProp_HitTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APopcornSpawnTarget_Statics::NewProp_HitDetection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APopcornSpawnTarget_Statics::NewProp_HitDetecRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APopcornSpawnTarget_Statics::NewProp_SpawnPlace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APopcornSpawnTarget_Statics::NewProp_ModularSpawnedActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APopcornSpawnTarget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APopcornSpawnTarget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APopcornSpawnTarget_Statics::ClassParams = {
		&APopcornSpawnTarget::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APopcornSpawnTarget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APopcornSpawnTarget_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APopcornSpawnTarget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APopcornSpawnTarget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APopcornSpawnTarget()
	{
		if (!Z_Registration_Info_UClass_APopcornSpawnTarget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APopcornSpawnTarget.OuterSingleton, Z_Construct_UClass_APopcornSpawnTarget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APopcornSpawnTarget.OuterSingleton;
	}
	template<> POPCORN_API UClass* StaticClass<APopcornSpawnTarget>()
	{
		return APopcornSpawnTarget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APopcornSpawnTarget);
	APopcornSpawnTarget::~APopcornSpawnTarget() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_UECPP_practice_V2_Plugins_Popcorn_Source_Popcorn_Public_PopcornSpawnTarget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_UECPP_practice_V2_Plugins_Popcorn_Source_Popcorn_Public_PopcornSpawnTarget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APopcornSpawnTarget, APopcornSpawnTarget::StaticClass, TEXT("APopcornSpawnTarget"), &Z_Registration_Info_UClass_APopcornSpawnTarget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APopcornSpawnTarget), 106334404U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_UECPP_practice_V2_Plugins_Popcorn_Source_Popcorn_Public_PopcornSpawnTarget_h_3543708813(TEXT("/Script/Popcorn"),
		Z_CompiledInDeferFile_FID_UnrealProjects_UECPP_practice_V2_Plugins_Popcorn_Source_Popcorn_Public_PopcornSpawnTarget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_UECPP_practice_V2_Plugins_Popcorn_Source_Popcorn_Public_PopcornSpawnTarget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
