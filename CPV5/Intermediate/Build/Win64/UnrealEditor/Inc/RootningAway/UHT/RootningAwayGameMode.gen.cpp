// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RootningAway/RootningAwayGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRootningAwayGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	ROOTNINGAWAY_API UClass* Z_Construct_UClass_ARootningAwayGameMode();
	ROOTNINGAWAY_API UClass* Z_Construct_UClass_ARootningAwayGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RootningAway();
// End Cross Module References
	void ARootningAwayGameMode::StaticRegisterNativesARootningAwayGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARootningAwayGameMode);
	UClass* Z_Construct_UClass_ARootningAwayGameMode_NoRegister()
	{
		return ARootningAwayGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ARootningAwayGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARootningAwayGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_RootningAway,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARootningAwayGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "RootningAwayGameMode.h" },
		{ "ModuleRelativePath", "RootningAwayGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARootningAwayGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARootningAwayGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARootningAwayGameMode_Statics::ClassParams = {
		&ARootningAwayGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ARootningAwayGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARootningAwayGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARootningAwayGameMode()
	{
		if (!Z_Registration_Info_UClass_ARootningAwayGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARootningAwayGameMode.OuterSingleton, Z_Construct_UClass_ARootningAwayGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARootningAwayGameMode.OuterSingleton;
	}
	template<> ROOTNINGAWAY_API UClass* StaticClass<ARootningAwayGameMode>()
	{
		return ARootningAwayGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARootningAwayGameMode);
	ARootningAwayGameMode::~ARootningAwayGameMode() {}
	struct Z_CompiledInDeferFile_FID_Githubprojects_GGJ2023_RootningAway_Source_RootningAway_RootningAwayGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Githubprojects_GGJ2023_RootningAway_Source_RootningAway_RootningAwayGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARootningAwayGameMode, ARootningAwayGameMode::StaticClass, TEXT("ARootningAwayGameMode"), &Z_Registration_Info_UClass_ARootningAwayGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARootningAwayGameMode), 3925121088U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Githubprojects_GGJ2023_RootningAway_Source_RootningAway_RootningAwayGameMode_h_588480198(TEXT("/Script/RootningAway"),
		Z_CompiledInDeferFile_FID_Githubprojects_GGJ2023_RootningAway_Source_RootningAway_RootningAwayGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Githubprojects_GGJ2023_RootningAway_Source_RootningAway_RootningAwayGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
