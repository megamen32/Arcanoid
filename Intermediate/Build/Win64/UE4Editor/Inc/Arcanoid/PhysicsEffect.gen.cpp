// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/PhysicsEffect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicsEffect() {}
// Cross Module References
	ARCANOID_API UClass* Z_Construct_UClass_UPhysicsEffect_NoRegister();
	ARCANOID_API UClass* Z_Construct_UClass_UPhysicsEffect();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Arcanoid();
	ARCANOID_API UClass* Z_Construct_UClass_AShapeBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void UPhysicsEffect::StaticRegisterNativesUPhysicsEffect()
	{
	}
	UClass* Z_Construct_UClass_UPhysicsEffect_NoRegister()
	{
		return UPhysicsEffect::StaticClass();
	}
	UClass* Z_Construct_UClass_UPhysicsEffect()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UActorComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_Arcanoid,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Physics" },
				{ "IncludePath", "PhysicsEffect.h" },
				{ "ModuleRelativePath", "Private/PhysicsEffect.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_self_MetaData[] = {
				{ "Category", "Setting" },
				{ "ModuleRelativePath", "Private/PhysicsEffect.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_self = { UE4CodeGen_Private::EPropertyClass::Object, "self", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000005, 1, nullptr, STRUCT_OFFSET(UPhysicsEffect, self), Z_Construct_UClass_AShapeBase_NoRegister, METADATA_PARAMS(NewProp_self_MetaData, ARRAY_COUNT(NewProp_self_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_useTimer_MetaData[] = {
				{ "Category", "Setting" },
				{ "ModuleRelativePath", "Private/PhysicsEffect.h" },
			};
#endif
			auto NewProp_useTimer_SetBit = [](void* Obj){ ((UPhysicsEffect*)Obj)->useTimer = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_useTimer = { UE4CodeGen_Private::EPropertyClass::Bool, "useTimer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UPhysicsEffect), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_useTimer_SetBit)>::SetBit, METADATA_PARAMS(NewProp_useTimer_MetaData, ARRAY_COUNT(NewProp_useTimer_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_duration_MetaData[] = {
				{ "Category", "Setting" },
				{ "ModuleRelativePath", "Private/PhysicsEffect.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_duration = { UE4CodeGen_Private::EPropertyClass::Float, "duration", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000005, 1, nullptr, STRUCT_OFFSET(UPhysicsEffect, duration), METADATA_PARAMS(NewProp_duration_MetaData, ARRAY_COUNT(NewProp_duration_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_strengthModiefer_MetaData[] = {
				{ "Category", "Setting" },
				{ "ModuleRelativePath", "Private/PhysicsEffect.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_strengthModiefer = { UE4CodeGen_Private::EPropertyClass::Float, "strengthModiefer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000005, 1, nullptr, STRUCT_OFFSET(UPhysicsEffect, strengthModiefer), METADATA_PARAMS(NewProp_strengthModiefer_MetaData, ARRAY_COUNT(NewProp_strengthModiefer_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
				{ "Category", "Render" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Private/PhysicsEffect.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh = { UE4CodeGen_Private::EPropertyClass::Object, "Mesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000000008000d, 1, nullptr, STRUCT_OFFSET(UPhysicsEffect, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_Mesh_MetaData, ARRAY_COUNT(NewProp_Mesh_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_self,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_useTimer,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_duration,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_strengthModiefer,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Mesh,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UPhysicsEffect>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UPhysicsEffect::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00A00080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPhysicsEffect, 2960915482);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPhysicsEffect(Z_Construct_UClass_UPhysicsEffect, &UPhysicsEffect::StaticClass, TEXT("/Script/Arcanoid"), TEXT("UPhysicsEffect"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPhysicsEffect);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
