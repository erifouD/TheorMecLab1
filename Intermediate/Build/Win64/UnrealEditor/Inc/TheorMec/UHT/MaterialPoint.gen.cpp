// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheorMec/MaterialPoint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialPoint() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	THEORMEC_API UClass* Z_Construct_UClass_AMaterialPoint();
	THEORMEC_API UClass* Z_Construct_UClass_AMaterialPoint_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TheorMec();
// End Cross Module References
	void AMaterialPoint::StaticRegisterNativesAMaterialPoint()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMaterialPoint);
	UClass* Z_Construct_UClass_AMaterialPoint_NoRegister()
	{
		return AMaterialPoint::StaticClass();
	}
	struct Z_Construct_UClass_AMaterialPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SphereMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SphereMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VelocityVector_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VelocityVector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AccelerationVector_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AccelerationVector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeDilationFactor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeDilationFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TangentialAcceleration_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TangentialAcceleration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalAcceleration_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NormalAcceleration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RadiusOfCurvature_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RadiusOfCurvature;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMaterialPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TheorMec,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMaterialPoint_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaterialPoint_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MaterialPoint.h" },
		{ "ModuleRelativePath", "MaterialPoint.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaterialPoint_Statics::NewProp_SphereMesh_MetaData[] = {
		{ "Category", "MaterialPoint" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MaterialPoint.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMaterialPoint_Statics::NewProp_SphereMesh = { "SphereMesh", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMaterialPoint, SphereMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMaterialPoint_Statics::NewProp_SphereMesh_MetaData), Z_Construct_UClass_AMaterialPoint_Statics::NewProp_SphereMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaterialPoint_Statics::NewProp_VelocityVector_MetaData[] = {
		{ "Category", "MaterialPoint" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MaterialPoint.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMaterialPoint_Statics::NewProp_VelocityVector = { "VelocityVector", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMaterialPoint, VelocityVector), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMaterialPoint_Statics::NewProp_VelocityVector_MetaData), Z_Construct_UClass_AMaterialPoint_Statics::NewProp_VelocityVector_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaterialPoint_Statics::NewProp_AccelerationVector_MetaData[] = {
		{ "Category", "MaterialPoint" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MaterialPoint.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMaterialPoint_Statics::NewProp_AccelerationVector = { "AccelerationVector", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMaterialPoint, AccelerationVector), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMaterialPoint_Statics::NewProp_AccelerationVector_MetaData), Z_Construct_UClass_AMaterialPoint_Statics::NewProp_AccelerationVector_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaterialPoint_Statics::NewProp_TimeDilationFactor_MetaData[] = {
		{ "Category", "MaterialPoint" },
		{ "ModuleRelativePath", "MaterialPoint.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMaterialPoint_Statics::NewProp_TimeDilationFactor = { "TimeDilationFactor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMaterialPoint, TimeDilationFactor), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMaterialPoint_Statics::NewProp_TimeDilationFactor_MetaData), Z_Construct_UClass_AMaterialPoint_Statics::NewProp_TimeDilationFactor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaterialPoint_Statics::NewProp_Time_MetaData[] = {
		{ "Category", "MaterialPoint" },
		{ "ModuleRelativePath", "MaterialPoint.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMaterialPoint_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMaterialPoint, Time), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMaterialPoint_Statics::NewProp_Time_MetaData), Z_Construct_UClass_AMaterialPoint_Statics::NewProp_Time_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaterialPoint_Statics::NewProp_TangentialAcceleration_MetaData[] = {
		{ "Category", "MaterialPoint" },
		{ "ModuleRelativePath", "MaterialPoint.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMaterialPoint_Statics::NewProp_TangentialAcceleration = { "TangentialAcceleration", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMaterialPoint, TangentialAcceleration), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMaterialPoint_Statics::NewProp_TangentialAcceleration_MetaData), Z_Construct_UClass_AMaterialPoint_Statics::NewProp_TangentialAcceleration_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaterialPoint_Statics::NewProp_NormalAcceleration_MetaData[] = {
		{ "Category", "MaterialPoint" },
		{ "ModuleRelativePath", "MaterialPoint.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMaterialPoint_Statics::NewProp_NormalAcceleration = { "NormalAcceleration", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMaterialPoint, NormalAcceleration), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMaterialPoint_Statics::NewProp_NormalAcceleration_MetaData), Z_Construct_UClass_AMaterialPoint_Statics::NewProp_NormalAcceleration_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaterialPoint_Statics::NewProp_RadiusOfCurvature_MetaData[] = {
		{ "Category", "MaterialPoint" },
		{ "ModuleRelativePath", "MaterialPoint.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMaterialPoint_Statics::NewProp_RadiusOfCurvature = { "RadiusOfCurvature", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMaterialPoint, RadiusOfCurvature), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMaterialPoint_Statics::NewProp_RadiusOfCurvature_MetaData), Z_Construct_UClass_AMaterialPoint_Statics::NewProp_RadiusOfCurvature_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMaterialPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaterialPoint_Statics::NewProp_SphereMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaterialPoint_Statics::NewProp_VelocityVector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaterialPoint_Statics::NewProp_AccelerationVector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaterialPoint_Statics::NewProp_TimeDilationFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaterialPoint_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaterialPoint_Statics::NewProp_TangentialAcceleration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaterialPoint_Statics::NewProp_NormalAcceleration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaterialPoint_Statics::NewProp_RadiusOfCurvature,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMaterialPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMaterialPoint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMaterialPoint_Statics::ClassParams = {
		&AMaterialPoint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMaterialPoint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMaterialPoint_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMaterialPoint_Statics::Class_MetaDataParams), Z_Construct_UClass_AMaterialPoint_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMaterialPoint_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AMaterialPoint()
	{
		if (!Z_Registration_Info_UClass_AMaterialPoint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMaterialPoint.OuterSingleton, Z_Construct_UClass_AMaterialPoint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMaterialPoint.OuterSingleton;
	}
	template<> THEORMEC_API UClass* StaticClass<AMaterialPoint>()
	{
		return AMaterialPoint::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMaterialPoint);
	AMaterialPoint::~AMaterialPoint() {}
	struct Z_CompiledInDeferFile_FID_TheorMec_Source_TheorMec_MaterialPoint_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TheorMec_Source_TheorMec_MaterialPoint_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMaterialPoint, AMaterialPoint::StaticClass, TEXT("AMaterialPoint"), &Z_Registration_Info_UClass_AMaterialPoint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMaterialPoint), 3131809142U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TheorMec_Source_TheorMec_MaterialPoint_h_2704358962(TEXT("/Script/TheorMec"),
		Z_CompiledInDeferFile_FID_TheorMec_Source_TheorMec_MaterialPoint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TheorMec_Source_TheorMec_MaterialPoint_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
