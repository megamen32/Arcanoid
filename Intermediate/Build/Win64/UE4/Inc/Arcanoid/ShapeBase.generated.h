// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector2D;
#ifdef ARCANOID_ShapeBase_generated_h
#error "ShapeBase.generated.h already included, missing '#pragma once' in ShapeBase.h"
#endif
#define ARCANOID_ShapeBase_generated_h

#define Arcanoid_Source_Arcanoid_Private_ShapeBase_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddForce) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_newForce); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AddForce(Z_Param_newForce); \
		P_NATIVE_END; \
	}


#define Arcanoid_Source_Arcanoid_Private_ShapeBase_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddForce) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_newForce); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AddForce(Z_Param_newForce); \
		P_NATIVE_END; \
	}


#define Arcanoid_Source_Arcanoid_Private_ShapeBase_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShapeBase(); \
	friend ARCANOID_API class UClass* Z_Construct_UClass_AShapeBase(); \
public: \
	DECLARE_CLASS(AShapeBase, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Arcanoid"), NO_API) \
	DECLARE_SERIALIZER(AShapeBase) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Arcanoid_Source_Arcanoid_Private_ShapeBase_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAShapeBase(); \
	friend ARCANOID_API class UClass* Z_Construct_UClass_AShapeBase(); \
public: \
	DECLARE_CLASS(AShapeBase, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Arcanoid"), NO_API) \
	DECLARE_SERIALIZER(AShapeBase) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Arcanoid_Source_Arcanoid_Private_ShapeBase_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShapeBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShapeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShapeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShapeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShapeBase(AShapeBase&&); \
	NO_API AShapeBase(const AShapeBase&); \
public:


#define Arcanoid_Source_Arcanoid_Private_ShapeBase_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShapeBase(AShapeBase&&); \
	NO_API AShapeBase(const AShapeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShapeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShapeBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AShapeBase)


#define Arcanoid_Source_Arcanoid_Private_ShapeBase_h_17_PRIVATE_PROPERTY_OFFSET
#define Arcanoid_Source_Arcanoid_Private_ShapeBase_h_14_PROLOG
#define Arcanoid_Source_Arcanoid_Private_ShapeBase_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Arcanoid_Source_Arcanoid_Private_ShapeBase_h_17_PRIVATE_PROPERTY_OFFSET \
	Arcanoid_Source_Arcanoid_Private_ShapeBase_h_17_RPC_WRAPPERS \
	Arcanoid_Source_Arcanoid_Private_ShapeBase_h_17_INCLASS \
	Arcanoid_Source_Arcanoid_Private_ShapeBase_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Arcanoid_Source_Arcanoid_Private_ShapeBase_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Arcanoid_Source_Arcanoid_Private_ShapeBase_h_17_PRIVATE_PROPERTY_OFFSET \
	Arcanoid_Source_Arcanoid_Private_ShapeBase_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Arcanoid_Source_Arcanoid_Private_ShapeBase_h_17_INCLASS_NO_PURE_DECLS \
	Arcanoid_Source_Arcanoid_Private_ShapeBase_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Arcanoid_Source_Arcanoid_Private_ShapeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
