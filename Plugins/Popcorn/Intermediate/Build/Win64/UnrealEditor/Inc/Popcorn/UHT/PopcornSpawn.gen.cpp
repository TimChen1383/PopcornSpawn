// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Popcorn/Public/PopcornSpawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePopcornSpawn() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	POPCORN_API UClass* Z_Construct_UClass_APopcornSpawn();
	POPCORN_API UClass* Z_Construct_UClass_APopcornSpawn_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Popcorn();
// End Cross Module References
	void APopcornSpawn::StaticRegisterNativesAPopcornSpawn()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APopcornSpawn);
	UClass* Z_Construct_UClass_APopcornSpawn_NoRegister()
	{
		return APopcornSpawn::StaticClass();
	}
	struct Z_Construct_UClass_APopcornSpawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModularMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ModularMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImpulseStrength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ImpulseStrength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnParticle_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnParticle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APopcornSpawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Popcorn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APopcornSpawn_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PopcornSpawn.h" },
		{ "ModuleRelativePath", "Public/PopcornSpawn.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APopcornSpawn_Statics::NewProp_ModularMesh_MetaData[] = {
		{ "Category", "ModularSpawn" },
		{ "Comment", "//The mesh we want to spawn\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PopcornSpawn.h" },
		{ "ToolTip", "The mesh we want to spawn" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APopcornSpawn_Statics::NewProp_ModularMesh = { "ModularMesh", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APopcornSpawn, ModularMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APopcornSpawn_Statics::NewProp_ModularMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APopcornSpawn_Statics::NewProp_ModularMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APopcornSpawn_Statics::NewProp_ImpulseStrength_MetaData[] = {
		{ "Category", "ModularSpawn" },
		{ "Comment", "//The initial strength of actors birth\n" },
		{ "ModuleRelativePath", "Public/PopcornSpawn.h" },
		{ "ToolTip", "The initial strength of actors birth" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APopcornSpawn_Statics::NewProp_ImpulseStrength = { "ImpulseStrength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APopcornSpawn, ImpulseStrength), METADATA_PARAMS(Z_Construct_UClass_APopcornSpawn_Statics::NewProp_ImpulseStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APopcornSpawn_Statics::NewProp_ImpulseStrength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APopcornSpawn_Statics::NewProp_SpawnParticle_MetaData[] = {
		{ "Category", "ModularSpawn" },
		{ "Comment", "//Attach the Niagara system we want to emit when actor spawned. Locked to specific Niagara system\n" },
		{ "ModuleRelativePath", "Public/PopcornSpawn.h" },
		{ "ToolTip", "Attach the Niagara system we want to emit when actor spawned. Locked to specific Niagara system" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APopcornSpawn_Statics::NewProp_SpawnParticle = { "SpawnParticle", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APopcornSpawn, SpawnParticle), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APopcornSpawn_Statics::NewProp_SpawnParticle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APopcornSpawn_Statics::NewProp_SpawnParticle_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APopcornSpawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APopcornSpawn_Statics::NewProp_ModularMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APopcornSpawn_Statics::NewProp_ImpulseStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APopcornSpawn_Statics::NewProp_SpawnParticle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APopcornSpawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APopcornSpawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APopcornSpawn_Statics::ClassParams = {
		&APopcornSpawn::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APopcornSpawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APopcornSpawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APopcornSpawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APopcornSpawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APopcornSpawn()
	{
		if (!Z_Registration_Info_UClass_APopcornSpawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APopcornSpawn.OuterSingleton, Z_Construct_UClass_APopcornSpawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APopcornSpawn.OuterSingleton;
	}
	template<> POPCORN_API UClass* StaticClass<APopcornSpawn>()
	{
		return APopcornSpawn::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APopcornSpawn);
	APopcornSpawn::~APopcornSpawn() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_UECPP_practice_V2_Plugins_Popcorn_Source_Popcorn_Public_PopcornSpawn_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_UECPP_practice_V2_Plugins_Popcorn_Source_Popcorn_Public_PopcornSpawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APopcornSpawn, APopcornSpawn::StaticClass, TEXT("APopcornSpawn"), &Z_Registration_Info_UClass_APopcornSpawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APopcornSpawn), 133315266U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_UECPP_practice_V2_Plugins_Popcorn_Source_Popcorn_Public_PopcornSpawn_h_1241813639(TEXT("/Script/Popcorn"),
		Z_CompiledInDeferFile_FID_UnrealProjects_UECPP_practice_V2_Plugins_Popcorn_Source_Popcorn_Public_PopcornSpawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_UECPP_practice_V2_Plugins_Popcorn_Source_Popcorn_Public_PopcornSpawn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
