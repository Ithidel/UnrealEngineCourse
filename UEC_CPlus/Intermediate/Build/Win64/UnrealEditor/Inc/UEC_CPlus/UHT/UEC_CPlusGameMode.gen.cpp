// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEC_CPlus/UEC_CPlusGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUEC_CPlusGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UEC_CPLUS_API UClass* Z_Construct_UClass_AUEC_CPlusGameMode();
	UEC_CPLUS_API UClass* Z_Construct_UClass_AUEC_CPlusGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UEC_CPlus();
// End Cross Module References
	void AUEC_CPlusGameMode::StaticRegisterNativesAUEC_CPlusGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUEC_CPlusGameMode);
	UClass* Z_Construct_UClass_AUEC_CPlusGameMode_NoRegister()
	{
		return AUEC_CPlusGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AUEC_CPlusGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUEC_CPlusGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UEC_CPlus,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUEC_CPlusGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUEC_CPlusGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "UEC_CPlusGameMode.h" },
		{ "ModuleRelativePath", "UEC_CPlusGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUEC_CPlusGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUEC_CPlusGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AUEC_CPlusGameMode_Statics::ClassParams = {
		&AUEC_CPlusGameMode::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUEC_CPlusGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AUEC_CPlusGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AUEC_CPlusGameMode()
	{
		if (!Z_Registration_Info_UClass_AUEC_CPlusGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUEC_CPlusGameMode.OuterSingleton, Z_Construct_UClass_AUEC_CPlusGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AUEC_CPlusGameMode.OuterSingleton;
	}
	template<> UEC_CPLUS_API UClass* StaticClass<AUEC_CPlusGameMode>()
	{
		return AUEC_CPlusGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUEC_CPlusGameMode);
	AUEC_CPlusGameMode::~AUEC_CPlusGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_luism_Documents_GitHub_UnrealEngineCourse_UEC_CPlus_Source_UEC_CPlus_UEC_CPlusGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_luism_Documents_GitHub_UnrealEngineCourse_UEC_CPlus_Source_UEC_CPlus_UEC_CPlusGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AUEC_CPlusGameMode, AUEC_CPlusGameMode::StaticClass, TEXT("AUEC_CPlusGameMode"), &Z_Registration_Info_UClass_AUEC_CPlusGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUEC_CPlusGameMode), 39135714U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_luism_Documents_GitHub_UnrealEngineCourse_UEC_CPlus_Source_UEC_CPlus_UEC_CPlusGameMode_h_1992126095(TEXT("/Script/UEC_CPlus"),
		Z_CompiledInDeferFile_FID_Users_luism_Documents_GitHub_UnrealEngineCourse_UEC_CPlus_Source_UEC_CPlus_UEC_CPlusGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_luism_Documents_GitHub_UnrealEngineCourse_UEC_CPlus_Source_UEC_CPlus_UEC_CPlusGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
