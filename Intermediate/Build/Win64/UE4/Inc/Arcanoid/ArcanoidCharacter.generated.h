// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARCANOID_ArcanoidCharacter_generated_h
#error "ArcanoidCharacter.generated.h already included, missing '#pragma once' in ArcanoidCharacter.h"
#endif
#define ARCANOID_ArcanoidCharacter_generated_h

#define Arcanoid_Source_Arcanoid_ArcanoidCharacter_h_22_RPC_WRAPPERS
#define Arcanoid_Source_Arcanoid_ArcanoidCharacter_h_22_RPC_WRAPPERS_NO_PURE_DECLS
#define Arcanoid_Source_Arcanoid_ArcanoidCharacter_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAArcanoidCharacter(); \
	friend ARCANOID_API class UClass* Z_Construct_UClass_AArcanoidCharacter(); \
public: \
	DECLARE_CLASS(AArcanoidCharacter, APaperCharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Arcanoid"), NO_API) \
	DECLARE_SERIALIZER(AArcanoidCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Arcanoid_Source_Arcanoid_ArcanoidCharacter_h_22_INCLASS \
private: \
	static void StaticRegisterNativesAArcanoidCharacter(); \
	friend ARCANOID_API class UClass* Z_Construct_UClass_AArcanoidCharacter(); \
public: \
	DECLARE_CLASS(AArcanoidCharacter, APaperCharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Arcanoid"), NO_API) \
	DECLARE_SERIALIZER(AArcanoidCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Arcanoid_Source_Arcanoid_ArcanoidCharacter_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AArcanoidCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AArcanoidCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AArcanoidCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AArcanoidCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AArcanoidCharacter(AArcanoidCharacter&&); \
	NO_API AArcanoidCharacter(const AArcanoidCharacter&); \
public:


#define Arcanoid_Source_Arcanoid_ArcanoidCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AArcanoidCharacter(AArcanoidCharacter&&); \
	NO_API AArcanoidCharacter(const AArcanoidCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AArcanoidCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AArcanoidCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AArcanoidCharacter)


#define Arcanoid_Source_Arcanoid_ArcanoidCharacter_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SideViewCameraComponent() { return STRUCT_OFFSET(AArcanoidCharacter, SideViewCameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AArcanoidCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__RunningAnimation() { return STRUCT_OFFSET(AArcanoidCharacter, RunningAnimation); } \
	FORCEINLINE static uint32 __PPO__IdleAnimation() { return STRUCT_OFFSET(AArcanoidCharacter, IdleAnimation); }


#define Arcanoid_Source_Arcanoid_ArcanoidCharacter_h_19_PROLOG
#define Arcanoid_Source_Arcanoid_ArcanoidCharacter_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Arcanoid_Source_Arcanoid_ArcanoidCharacter_h_22_PRIVATE_PROPERTY_OFFSET \
	Arcanoid_Source_Arcanoid_ArcanoidCharacter_h_22_RPC_WRAPPERS \
	Arcanoid_Source_Arcanoid_ArcanoidCharacter_h_22_INCLASS \
	Arcanoid_Source_Arcanoid_ArcanoidCharacter_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Arcanoid_Source_Arcanoid_ArcanoidCharacter_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Arcanoid_Source_Arcanoid_ArcanoidCharacter_h_22_PRIVATE_PROPERTY_OFFSET \
	Arcanoid_Source_Arcanoid_ArcanoidCharacter_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	Arcanoid_Source_Arcanoid_ArcanoidCharacter_h_22_INCLASS_NO_PURE_DECLS \
	Arcanoid_Source_Arcanoid_ArcanoidCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Arcanoid_Source_Arcanoid_ArcanoidCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
