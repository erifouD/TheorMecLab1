// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheorMec/Observer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObserver() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	THEORMEC_API UClass* Z_Construct_UClass_AObserver();
	THEORMEC_API UClass* Z_Construct_UClass_AObserver_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TheorMec();
// End Cross Module References
	void AObserver::StaticRegisterNativesAObserver()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AObserver);
	UClass* Z_Construct_UClass_AObserver_NoRegister()
	{
		return AObserver::StaticClass();
	}
	struct Z_Construct_UClass_AObserver_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AObserver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_TheorMec,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AObserver_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObserver_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Observer.h" },
		{ "ModuleRelativePath", "Observer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AObserver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AObserver>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AObserver_Statics::ClassParams = {
		&AObserver::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AObserver_Statics::Class_MetaDataParams), Z_Construct_UClass_AObserver_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AObserver()
	{
		if (!Z_Registration_Info_UClass_AObserver.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AObserver.OuterSingleton, Z_Construct_UClass_AObserver_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AObserver.OuterSingleton;
	}
	template<> THEORMEC_API UClass* StaticClass<AObserver>()
	{
		return AObserver::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AObserver);
	AObserver::~AObserver() {}
	struct Z_CompiledInDeferFile_FID_TheorMec_Source_TheorMec_Observer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TheorMec_Source_TheorMec_Observer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AObserver, AObserver::StaticClass, TEXT("AObserver"), &Z_Registration_Info_UClass_AObserver, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AObserver), 4224226443U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TheorMec_Source_TheorMec_Observer_h_1711559538(TEXT("/Script/TheorMec"),
		Z_CompiledInDeferFile_FID_TheorMec_Source_TheorMec_Observer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TheorMec_Source_TheorMec_Observer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
