// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Six/Public/MoveBox.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoveBox() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
SIX_API UClass* Z_Construct_UClass_AMoveBox();
SIX_API UClass* Z_Construct_UClass_AMoveBox_NoRegister();
SIX_API UClass* Z_Construct_UClass_ULifeCycleComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Six();
// End Cross Module References

// Begin Class AMoveBox
void AMoveBox::StaticRegisterNativesAMoveBox()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMoveBox);
UClass* Z_Construct_UClass_AMoveBox_NoRegister()
{
	return AMoveBox::StaticClass();
}
struct Z_Construct_UClass_AMoveBox_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MoveBox.h" },
		{ "ModuleRelativePath", "Public/MoveBox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxDistance_MetaData[] = {
		{ "Category", "Platform Settings" },
		{ "ModuleRelativePath", "Public/MoveBox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "Platform Settings" },
		{ "ModuleRelativePath", "Public/MoveBox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PatrolDirection_MetaData[] = {
		{ "Category", "Platform Settings" },
		{ "ModuleRelativePath", "Public/MoveBox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneRoot_MetaData[] = {
		{ "Category", "Platform Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MoveBox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComp_MetaData[] = {
		{ "Category", "Platform Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MoveBox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartLocation_MetaData[] = {
		{ "Category", "Platform Settings" },
		{ "ModuleRelativePath", "Public/MoveBox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LifeCycleComp_MetaData[] = {
		{ "Category", "LifeCycle" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MoveBox.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PatrolDirection;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneRoot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartLocation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LifeCycleComp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMoveBox>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMoveBox_Statics::NewProp_MaxDistance = { "MaxDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMoveBox, MaxDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxDistance_MetaData), NewProp_MaxDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMoveBox_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMoveBox, MoveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveSpeed_MetaData), NewProp_MoveSpeed_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMoveBox_Statics::NewProp_PatrolDirection = { "PatrolDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMoveBox, PatrolDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PatrolDirection_MetaData), NewProp_PatrolDirection_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMoveBox_Statics::NewProp_SceneRoot = { "SceneRoot", nullptr, (EPropertyFlags)0x00200800000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMoveBox, SceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneRoot_MetaData), NewProp_SceneRoot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMoveBox_Statics::NewProp_StaticMeshComp = { "StaticMeshComp", nullptr, (EPropertyFlags)0x00200800000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMoveBox, StaticMeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshComp_MetaData), NewProp_StaticMeshComp_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMoveBox_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMoveBox, StartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartLocation_MetaData), NewProp_StartLocation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMoveBox_Statics::NewProp_LifeCycleComp = { "LifeCycleComp", nullptr, (EPropertyFlags)0x00200800000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMoveBox, LifeCycleComp), Z_Construct_UClass_ULifeCycleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LifeCycleComp_MetaData), NewProp_LifeCycleComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMoveBox_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveBox_Statics::NewProp_MaxDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveBox_Statics::NewProp_MoveSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveBox_Statics::NewProp_PatrolDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveBox_Statics::NewProp_SceneRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveBox_Statics::NewProp_StaticMeshComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveBox_Statics::NewProp_StartLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveBox_Statics::NewProp_LifeCycleComp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMoveBox_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMoveBox_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Six,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMoveBox_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMoveBox_Statics::ClassParams = {
	&AMoveBox::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMoveBox_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMoveBox_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMoveBox_Statics::Class_MetaDataParams), Z_Construct_UClass_AMoveBox_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMoveBox()
{
	if (!Z_Registration_Info_UClass_AMoveBox.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMoveBox.OuterSingleton, Z_Construct_UClass_AMoveBox_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMoveBox.OuterSingleton;
}
template<> SIX_API UClass* StaticClass<AMoveBox>()
{
	return AMoveBox::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMoveBox);
AMoveBox::~AMoveBox() {}
// End Class AMoveBox

// Begin Registration
struct Z_CompiledInDeferFile_FID_Six_Source_Six_Public_MoveBox_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMoveBox, AMoveBox::StaticClass, TEXT("AMoveBox"), &Z_Registration_Info_UClass_AMoveBox, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMoveBox), 650392488U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Six_Source_Six_Public_MoveBox_h_4099505721(TEXT("/Script/Six"),
	Z_CompiledInDeferFile_FID_Six_Source_Six_Public_MoveBox_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Six_Source_Six_Public_MoveBox_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
