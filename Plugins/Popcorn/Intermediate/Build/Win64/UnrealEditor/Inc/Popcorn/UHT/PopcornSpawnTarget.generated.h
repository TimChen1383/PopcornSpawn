// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PopcornSpawnTarget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef POPCORN_PopcornSpawnTarget_generated_h
#error "PopcornSpawnTarget.generated.h already included, missing '#pragma once' in PopcornSpawnTarget.h"
#endif
#define POPCORN_PopcornSpawnTarget_generated_h

#define FID_UnrealProjects_UECPP_practice_V2_Plugins_Popcorn_Source_Popcorn_Public_PopcornSpawnTarget_h_13_SPARSE_DATA
#define FID_UnrealProjects_UECPP_practice_V2_Plugins_Popcorn_Source_Popcorn_Public_PopcornSpawnTarget_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTargetHitEvent);


#define FID_UnrealProjects_UECPP_practice_V2_Plugins_Popcorn_Source_Popcorn_Public_PopcornSpawnTarget_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTargetHitEvent);


#define FID_UnrealProjects_UECPP_practice_V2_Plugins_Popcorn_Source_Popcorn_Public_PopcornSpawnTarget_h_13_ACCESSORS
#define FID_UnrealProjects_UECPP_practice_V2_Plugins_Popcorn_Source_Popcorn_Public_PopcornSpawnTarget_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPopcornSpawnTarget(); \
	friend struct Z_Construct_UClass_APopcornSpawnTarget_Statics; \
public: \
	DECLARE_CLASS(APopcornSpawnTarget, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Popcorn"), NO_API) \
	DECLARE_SERIALIZER(APopcornSpawnTarget)


#define FID_UnrealProjects_UECPP_practice_V2_Plugins_Popcorn_Source_Popcorn_Public_PopcornSpawnTarget_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAPopcornSpawnTarget(); \
	friend struct Z_Construct_UClass_APopcornSpawnTarget_Statics; \
public: \
	DECLARE_CLASS(APopcornSpawnTarget, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Popcorn"), NO_API) \
	DECLARE_SERIALIZER(APopcornSpawnTarget)


#define FID_UnrealProjects_UECPP_practice_V2_Plugins_Popcorn_Source_Popcorn_Public_PopcornSpawnTarget_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APopcornSpawnTarget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APopcornSpawnTarget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APopcornSpawnTarget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APopcornSpawnTarget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APopcornSpawnTarget(APopcornSpawnTarget&&); \
	NO_API APopcornSpawnTarget(const APopcornSpawnTarget&); \
public: \
	NO_API virtual ~APopcornSpawnTarget();


#define FID_UnrealProjects_UECPP_practice_V2_Plugins_Popcorn_Source_Popcorn_Public_PopcornSpawnTarget_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APopcornSpawnTarget(APopcornSpawnTarget&&); \
	NO_API APopcornSpawnTarget(const APopcornSpawnTarget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APopcornSpawnTarget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APopcornSpawnTarget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APopcornSpawnTarget) \
	NO_API virtual ~APopcornSpawnTarget();


#define FID_UnrealProjects_UECPP_practice_V2_Plugins_Popcorn_Source_Popcorn_Public_PopcornSpawnTarget_h_10_PROLOG
#define FID_UnrealProjects_UECPP_practice_V2_Plugins_Popcorn_Source_Popcorn_Public_PopcornSpawnTarget_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_UECPP_practice_V2_Plugins_Popcorn_Source_Popcorn_Public_PopcornSpawnTarget_h_13_SPARSE_DATA \
	FID_UnrealProjects_UECPP_practice_V2_Plugins_Popcorn_Source_Popcorn_Public_PopcornSpawnTarget_h_13_RPC_WRAPPERS \
	FID_UnrealProjects_UECPP_practice_V2_Plugins_Popcorn_Source_Popcorn_Public_PopcornSpawnTarget_h_13_ACCESSORS \
	FID_UnrealProjects_UECPP_practice_V2_Plugins_Popcorn_Source_Popcorn_Public_PopcornSpawnTarget_h_13_INCLASS \
	FID_UnrealProjects_UECPP_practice_V2_Plugins_Popcorn_Source_Popcorn_Public_PopcornSpawnTarget_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_UECPP_practice_V2_Plugins_Popcorn_Source_Popcorn_Public_PopcornSpawnTarget_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_UECPP_practice_V2_Plugins_Popcorn_Source_Popcorn_Public_PopcornSpawnTarget_h_13_SPARSE_DATA \
	FID_UnrealProjects_UECPP_practice_V2_Plugins_Popcorn_Source_Popcorn_Public_PopcornSpawnTarget_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_UECPP_practice_V2_Plugins_Popcorn_Source_Popcorn_Public_PopcornSpawnTarget_h_13_ACCESSORS \
	FID_UnrealProjects_UECPP_practice_V2_Plugins_Popcorn_Source_Popcorn_Public_PopcornSpawnTarget_h_13_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_UECPP_practice_V2_Plugins_Popcorn_Source_Popcorn_Public_PopcornSpawnTarget_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> POPCORN_API UClass* StaticClass<class APopcornSpawnTarget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_UECPP_practice_V2_Plugins_Popcorn_Source_Popcorn_Public_PopcornSpawnTarget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
