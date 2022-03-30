// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HighNumberShooting/HighNumberShootingGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHighNumberShootingGameModeBase() {}
// Cross Module References
	HIGHNUMBERSHOOTING_API UClass* Z_Construct_UClass_AHighNumberShootingGameModeBase_NoRegister();
	HIGHNUMBERSHOOTING_API UClass* Z_Construct_UClass_AHighNumberShootingGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_HighNumberShooting();
// End Cross Module References
	void AHighNumberShootingGameModeBase::StaticRegisterNativesAHighNumberShootingGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AHighNumberShootingGameModeBase_NoRegister()
	{
		return AHighNumberShootingGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AHighNumberShootingGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHighNumberShootingGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_HighNumberShooting,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHighNumberShootingGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "HighNumberShootingGameModeBase.h" },
		{ "ModuleRelativePath", "HighNumberShootingGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHighNumberShootingGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHighNumberShootingGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHighNumberShootingGameModeBase_Statics::ClassParams = {
		&AHighNumberShootingGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AHighNumberShootingGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHighNumberShootingGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHighNumberShootingGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHighNumberShootingGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHighNumberShootingGameModeBase, 250180678);
	template<> HIGHNUMBERSHOOTING_API UClass* StaticClass<AHighNumberShootingGameModeBase>()
	{
		return AHighNumberShootingGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHighNumberShootingGameModeBase(Z_Construct_UClass_AHighNumberShootingGameModeBase, &AHighNumberShootingGameModeBase::StaticClass, TEXT("/Script/HighNumberShooting"), TEXT("AHighNumberShootingGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHighNumberShootingGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
