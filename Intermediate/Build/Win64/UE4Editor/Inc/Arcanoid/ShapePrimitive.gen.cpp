// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/ShapePrimitive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShapePrimitive() {}
// Cross Module References
	ARCANOID_API UClass* Z_Construct_UClass_AShapePrimitive_NoRegister();
	ARCANOID_API UClass* Z_Construct_UClass_AShapePrimitive();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_Arcanoid();
// End Cross Module References
	void AShapePrimitive::StaticRegisterNativesAShapePrimitive()
	{
	}
	UClass* Z_Construct_UClass_AShapePrimitive_NoRegister()
	{
		return AShapePrimitive::StaticClass();
	}
	UClass* Z_Construct_UClass_AShapePrimitive()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_APawn,
				(UObject* (*)())Z_Construct_UPackage__Script_Arcanoid,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "ShapePrimitive.h" },
				{ "ModuleRelativePath", "Private/ShapePrimitive.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AShapePrimitive>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AShapePrimitive::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00800080u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AShapePrimitive, 2698078379);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShapePrimitive(Z_Construct_UClass_AShapePrimitive, &AShapePrimitive::StaticClass, TEXT("/Script/Arcanoid"), TEXT("AShapePrimitive"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShapePrimitive);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
