// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePopcorn_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Popcorn;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Popcorn()
	{
		if (!Z_Registration_Info_UPackage__Script_Popcorn.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Popcorn",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x811A6C70,
				0xCE371A2C,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Popcorn.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Popcorn.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Popcorn(Z_Construct_UPackage__Script_Popcorn, TEXT("/Script/Popcorn"), Z_Registration_Info_UPackage__Script_Popcorn, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x811A6C70, 0xCE371A2C));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
