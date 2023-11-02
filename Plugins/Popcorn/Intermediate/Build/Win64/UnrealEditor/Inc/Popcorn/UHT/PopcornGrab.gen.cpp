// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Popcorn/Public/PopcornGrab.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePopcornGrab() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	POPCORN_API UClass* Z_Construct_UClass_UPopcornGrab();
	POPCORN_API UClass* Z_Construct_UClass_UPopcornGrab_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Popcorn();
// End Cross Module References
	DEFINE_FUNCTION(UPopcornGrab::execReleaseObjects)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReleaseObjects();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPopcornGrab::execGrabObjects)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GrabObjects();
		P_NATIVE_END;
	}
	void UPopcornGrab::StaticRegisterNativesUPopcornGrab()
	{
		UClass* Class = UPopcornGrab::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GrabObjects", &UPopcornGrab::execGrabObjects },
			{ "ReleaseObjects", &UPopcornGrab::execReleaseObjects },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPopcornGrab_GrabObjects_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPopcornGrab_GrabObjects_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grabbing Force" },
		{ "Comment", "//Exposed GrabObject function for player to trigger\n" },
		{ "ModuleRelativePath", "Public/PopcornGrab.h" },
		{ "ToolTip", "Exposed GrabObject function for player to trigger" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPopcornGrab_GrabObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPopcornGrab, nullptr, "GrabObjects", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPopcornGrab_GrabObjects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPopcornGrab_GrabObjects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPopcornGrab_GrabObjects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPopcornGrab_GrabObjects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPopcornGrab_ReleaseObjects_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPopcornGrab_ReleaseObjects_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grabbing Force" },
		{ "Comment", "//Exposed ReleaseObject function for player to trigger\n" },
		{ "ModuleRelativePath", "Public/PopcornGrab.h" },
		{ "ToolTip", "Exposed ReleaseObject function for player to trigger" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPopcornGrab_ReleaseObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPopcornGrab, nullptr, "ReleaseObjects", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPopcornGrab_ReleaseObjects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPopcornGrab_ReleaseObjects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPopcornGrab_ReleaseObjects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPopcornGrab_ReleaseObjects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPopcornGrab);
	UClass* Z_Construct_UClass_UPopcornGrab_NoRegister()
	{
		return UPopcornGrab::StaticClass();
	}
	struct Z_Construct_UClass_UPopcornGrab_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BPRadialForce_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_BPRadialForce;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForcePlayerOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ForcePlayerOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPopcornGrab_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Popcorn,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPopcornGrab_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPopcornGrab_GrabObjects, "GrabObjects" }, // 3550828261
		{ &Z_Construct_UFunction_UPopcornGrab_ReleaseObjects, "ReleaseObjects" }, // 4292719921
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPopcornGrab_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "PopcornGrab.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PopcornGrab.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPopcornGrab_Statics::NewProp_BPRadialForce_MetaData[] = {
		{ "Category", "Grabbing Force" },
		{ "Comment", "//Chose the actor we want to spawn. Choose RadialForce blueprint in this case \n" },
		{ "ModuleRelativePath", "Public/PopcornGrab.h" },
		{ "ToolTip", "Chose the actor we want to spawn. Choose RadialForce blueprint in this case" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPopcornGrab_Statics::NewProp_BPRadialForce = { "BPRadialForce", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPopcornGrab, BPRadialForce), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPopcornGrab_Statics::NewProp_BPRadialForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPopcornGrab_Statics::NewProp_BPRadialForce_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPopcornGrab_Statics::NewProp_ForcePlayerOffset_MetaData[] = {
		{ "Category", "Grabbing Force" },
		{ "Comment", "//Offset the center of radial force\n" },
		{ "ModuleRelativePath", "Public/PopcornGrab.h" },
		{ "ToolTip", "Offset the center of radial force" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPopcornGrab_Statics::NewProp_ForcePlayerOffset = { "ForcePlayerOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPopcornGrab, ForcePlayerOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UPopcornGrab_Statics::NewProp_ForcePlayerOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPopcornGrab_Statics::NewProp_ForcePlayerOffset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPopcornGrab_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPopcornGrab_Statics::NewProp_BPRadialForce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPopcornGrab_Statics::NewProp_ForcePlayerOffset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPopcornGrab_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPopcornGrab>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPopcornGrab_Statics::ClassParams = {
		&UPopcornGrab::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPopcornGrab_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPopcornGrab_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPopcornGrab_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPopcornGrab_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPopcornGrab()
	{
		if (!Z_Registration_Info_UClass_UPopcornGrab.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPopcornGrab.OuterSingleton, Z_Construct_UClass_UPopcornGrab_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPopcornGrab.OuterSingleton;
	}
	template<> POPCORN_API UClass* StaticClass<UPopcornGrab>()
	{
		return UPopcornGrab::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPopcornGrab);
	UPopcornGrab::~UPopcornGrab() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_UECPP_practice_V2_Plugins_Popcorn_Source_Popcorn_Public_PopcornGrab_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_UECPP_practice_V2_Plugins_Popcorn_Source_Popcorn_Public_PopcornGrab_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPopcornGrab, UPopcornGrab::StaticClass, TEXT("UPopcornGrab"), &Z_Registration_Info_UClass_UPopcornGrab, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPopcornGrab), 2515377459U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_UECPP_practice_V2_Plugins_Popcorn_Source_Popcorn_Public_PopcornGrab_h_1586641426(TEXT("/Script/Popcorn"),
		Z_CompiledInDeferFile_FID_UnrealProjects_UECPP_practice_V2_Plugins_Popcorn_Source_Popcorn_Public_PopcornGrab_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_UECPP_practice_V2_Plugins_Popcorn_Source_Popcorn_Public_PopcornGrab_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
