// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Six/Public/RotateBox.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRotateBox() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
SIX_API UClass* Z_Construct_UClass_ARotateBox();
SIX_API UClass* Z_Construct_UClass_ARotateBox_NoRegister();
UPackage* Z_Construct_UPackage__Script_Six();
// End Cross Module References

// Begin Class ARotateBox
void ARotateBox::StaticRegisterNativesARotateBox()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARotateBox);
UClass* Z_Construct_UClass_ARotateBox_NoRegister()
{
	return ARotateBox::StaticClass();
}
struct Z_Construct_UClass_ARotateBox_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "RotateBox.h" },
		{ "ModuleRelativePath", "Public/RotateBox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PitchRotationSpeed_MetaData[] = {
		{ "Category", "Platform Settings" },
		{ "ModuleRelativePath", "Public/RotateBox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_YawRotationSpeed_MetaData[] = {
		{ "Category", "Platform Settings" },
		{ "ModuleRelativePath", "Public/RotateBox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RollRotationSpeed_MetaData[] = {
		{ "Category", "Platform Settings" },
		{ "ModuleRelativePath", "Public/RotateBox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneRoot_MetaData[] = {
		{ "Category", "Platform Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RotateBox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComp_MetaData[] = {
		{ "Category", "Platform Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RotateBox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "Category", "Platform Settings" },
		{ "ModuleRelativePath", "Public/RotateBox.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchRotationSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_YawRotationSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RollRotationSpeed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneRoot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARotateBox>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARotateBox_Statics::NewProp_PitchRotationSpeed = { "PitchRotationSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARotateBox, PitchRotationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PitchRotationSpeed_MetaData), NewProp_PitchRotationSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARotateBox_Statics::NewProp_YawRotationSpeed = { "YawRotationSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARotateBox, YawRotationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YawRotationSpeed_MetaData), NewProp_YawRotationSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARotateBox_Statics::NewProp_RollRotationSpeed = { "RollRotationSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARotateBox, RollRotationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RollRotationSpeed_MetaData), NewProp_RollRotationSpeed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARotateBox_Statics::NewProp_SceneRoot = { "SceneRoot", nullptr, (EPropertyFlags)0x00200800000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARotateBox, SceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneRoot_MetaData), NewProp_SceneRoot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARotateBox_Statics::NewProp_StaticMeshComp = { "StaticMeshComp", nullptr, (EPropertyFlags)0x00200800000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARotateBox, StaticMeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshComp_MetaData), NewProp_StaticMeshComp_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARotateBox_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARotateBox, Radius), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARotateBox_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARotateBox_Statics::NewProp_PitchRotationSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARotateBox_Statics::NewProp_YawRotationSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARotateBox_Statics::NewProp_RollRotationSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARotateBox_Statics::NewProp_SceneRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARotateBox_Statics::NewProp_StaticMeshComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARotateBox_Statics::NewProp_Radius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARotateBox_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ARotateBox_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Six,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARotateBox_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARotateBox_Statics::ClassParams = {
	&ARotateBox::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ARotateBox_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ARotateBox_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARotateBox_Statics::Class_MetaDataParams), Z_Construct_UClass_ARotateBox_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARotateBox()
{
	if (!Z_Registration_Info_UClass_ARotateBox.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARotateBox.OuterSingleton, Z_Construct_UClass_ARotateBox_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARotateBox.OuterSingleton;
}
template<> SIX_API UClass* StaticClass<ARotateBox>()
{
	return ARotateBox::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARotateBox);
ARotateBox::~ARotateBox() {}
// End Class ARotateBox

// Begin Registration
struct Z_CompiledInDeferFile_FID_Six_Source_Six_Public_RotateBox_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARotateBox, ARotateBox::StaticClass, TEXT("ARotateBox"), &Z_Registration_Info_UClass_ARotateBox, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARotateBox), 1133163038U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Six_Source_Six_Public_RotateBox_h_597840919(TEXT("/Script/Six"),
	Z_CompiledInDeferFile_FID_Six_Source_Six_Public_RotateBox_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Six_Source_Six_Public_RotateBox_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
