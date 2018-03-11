// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/ShapeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShapeBase() {}
// Cross Module References
	ARCANOID_API UClass* Z_Construct_UClass_AShapeBase_NoRegister();
	ARCANOID_API UClass* Z_Construct_UClass_AShapeBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Arcanoid();
	ARCANOID_API UFunction* Z_Construct_UFunction_AShapeBase_AddForce();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AShapeBase::StaticRegisterNativesAShapeBase()
	{
		UClass* Class = AShapeBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddForce", (Native)&AShapeBase::execAddForce },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AShapeBase_AddForce()
	{
		struct ShapeBase_eventAddForce_Parms
		{
			FVector2D newForce;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_newForce = { UE4CodeGen_Private::EPropertyClass::Struct, "newForce", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ShapeBase_eventAddForce_Parms, newForce), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_newForce,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Private/ShapeBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AShapeBase, "AddForce", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00820401, sizeof(ShapeBase_eventAddForce_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AShapeBase_NoRegister()
	{
		return AShapeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_AShapeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_Arcanoid,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AShapeBase_AddForce, "AddForce" }, // 2834274950
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "ShapeBase.h" },
				{ "ModuleRelativePath", "Private/ShapeBase.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[] = {
				{ "Category", "Render" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Private/ShapeBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMesh = { UE4CodeGen_Private::EPropertyClass::Object, "StaticMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a000d, 1, nullptr, STRUCT_OFFSET(AShapeBase, StaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_StaticMesh_MetaData, ARRAY_COUNT(NewProp_StaticMesh_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StaticMesh,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AShapeBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AShapeBase::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00800080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(AShapeBase, 2973391611);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShapeBase(Z_Construct_UClass_AShapeBase, &AShapeBase::StaticClass, TEXT("/Script/Arcanoid"), TEXT("AShapeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShapeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
