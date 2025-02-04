// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Six/Public/RandomActorSpawner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRandomActorSpawner() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
SIX_API UClass* Z_Construct_UClass_AMoveBox_NoRegister();
SIX_API UClass* Z_Construct_UClass_ARandomActorSpawner();
SIX_API UClass* Z_Construct_UClass_ARandomActorSpawner_NoRegister();
SIX_API UClass* Z_Construct_UClass_ARotateBox_NoRegister();
UPackage* Z_Construct_UPackage__Script_Six();
// End Cross Module References

// Begin Class ARandomActorSpawner
void ARandomActorSpawner::StaticRegisterNativesARandomActorSpawner()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARandomActorSpawner);
UClass* Z_Construct_UClass_ARandomActorSpawner_NoRegister()
{
	return ARandomActorSpawner::StaticClass();
}
struct Z_Construct_UClass_ARandomActorSpawner_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "RandomActorSpawner.h" },
		{ "ModuleRelativePath", "Public/RandomActorSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinSpawnRange_MetaData[] = {
		{ "Category", "Property" },
		{ "ModuleRelativePath", "Public/RandomActorSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSpawnRange_MetaData[] = {
		{ "Category", "Property" },
		{ "ModuleRelativePath", "Public/RandomActorSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinSpeed_MetaData[] = {
		{ "Category", "Property" },
		{ "ModuleRelativePath", "Public/RandomActorSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSpeed_MetaData[] = {
		{ "Category", "Property" },
		{ "ModuleRelativePath", "Public/RandomActorSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinDistance_MetaData[] = {
		{ "Category", "Property" },
		{ "ModuleRelativePath", "Public/RandomActorSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxDistance_MetaData[] = {
		{ "Category", "Property" },
		{ "ModuleRelativePath", "Public/RandomActorSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinRotationSpeed_MetaData[] = {
		{ "Category", "Property" },
		{ "ModuleRelativePath", "Public/RandomActorSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxRotationSpeed_MetaData[] = {
		{ "Category", "Property" },
		{ "ModuleRelativePath", "Public/RandomActorSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovePlatformClass_MetaData[] = {
		{ "Category", "Spawner Settings" },
		{ "ModuleRelativePath", "Public/RandomActorSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotatePlatformClass_MetaData[] = {
		{ "Category", "Spawner Settings" },
		{ "ModuleRelativePath", "Public/RandomActorSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumPlatforms_MetaData[] = {
		{ "Category", "Spawner Settings" },
		{ "ModuleRelativePath", "Public/RandomActorSpawner.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MinSpawnRange;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxSpawnRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDistance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MinRotationSpeed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxRotationSpeed;
	static const UECodeGen_Private::FClassPropertyParams NewProp_MovePlatformClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_RotatePlatformClass;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumPlatforms;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARandomActorSpawner>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARandomActorSpawner_Statics::NewProp_MinSpawnRange = { "MinSpawnRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARandomActorSpawner, MinSpawnRange), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinSpawnRange_MetaData), NewProp_MinSpawnRange_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARandomActorSpawner_Statics::NewProp_MaxSpawnRange = { "MaxSpawnRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARandomActorSpawner, MaxSpawnRange), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSpawnRange_MetaData), NewProp_MaxSpawnRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARandomActorSpawner_Statics::NewProp_MinSpeed = { "MinSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARandomActorSpawner, MinSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinSpeed_MetaData), NewProp_MinSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARandomActorSpawner_Statics::NewProp_MaxSpeed = { "MaxSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARandomActorSpawner, MaxSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSpeed_MetaData), NewProp_MaxSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARandomActorSpawner_Statics::NewProp_MinDistance = { "MinDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARandomActorSpawner, MinDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinDistance_MetaData), NewProp_MinDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARandomActorSpawner_Statics::NewProp_MaxDistance = { "MaxDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARandomActorSpawner, MaxDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxDistance_MetaData), NewProp_MaxDistance_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARandomActorSpawner_Statics::NewProp_MinRotationSpeed = { "MinRotationSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARandomActorSpawner, MinRotationSpeed), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinRotationSpeed_MetaData), NewProp_MinRotationSpeed_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARandomActorSpawner_Statics::NewProp_MaxRotationSpeed = { "MaxRotationSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARandomActorSpawner, MaxRotationSpeed), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxRotationSpeed_MetaData), NewProp_MaxRotationSpeed_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ARandomActorSpawner_Statics::NewProp_MovePlatformClass = { "MovePlatformClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARandomActorSpawner, MovePlatformClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AMoveBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovePlatformClass_MetaData), NewProp_MovePlatformClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ARandomActorSpawner_Statics::NewProp_RotatePlatformClass = { "RotatePlatformClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARandomActorSpawner, RotatePlatformClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ARotateBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotatePlatformClass_MetaData), NewProp_RotatePlatformClass_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARandomActorSpawner_Statics::NewProp_NumPlatforms = { "NumPlatforms", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARandomActorSpawner, NumPlatforms), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumPlatforms_MetaData), NewProp_NumPlatforms_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARandomActorSpawner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARandomActorSpawner_Statics::NewProp_MinSpawnRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARandomActorSpawner_Statics::NewProp_MaxSpawnRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARandomActorSpawner_Statics::NewProp_MinSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARandomActorSpawner_Statics::NewProp_MaxSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARandomActorSpawner_Statics::NewProp_MinDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARandomActorSpawner_Statics::NewProp_MaxDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARandomActorSpawner_Statics::NewProp_MinRotationSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARandomActorSpawner_Statics::NewProp_MaxRotationSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARandomActorSpawner_Statics::NewProp_MovePlatformClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARandomActorSpawner_Statics::NewProp_RotatePlatformClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARandomActorSpawner_Statics::NewProp_NumPlatforms,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARandomActorSpawner_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ARandomActorSpawner_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Six,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARandomActorSpawner_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARandomActorSpawner_Statics::ClassParams = {
	&ARandomActorSpawner::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ARandomActorSpawner_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ARandomActorSpawner_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARandomActorSpawner_Statics::Class_MetaDataParams), Z_Construct_UClass_ARandomActorSpawner_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARandomActorSpawner()
{
	if (!Z_Registration_Info_UClass_ARandomActorSpawner.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARandomActorSpawner.OuterSingleton, Z_Construct_UClass_ARandomActorSpawner_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARandomActorSpawner.OuterSingleton;
}
template<> SIX_API UClass* StaticClass<ARandomActorSpawner>()
{
	return ARandomActorSpawner::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARandomActorSpawner);
ARandomActorSpawner::~ARandomActorSpawner() {}
// End Class ARandomActorSpawner

// Begin Registration
struct Z_CompiledInDeferFile_FID_Six_Source_Six_Public_RandomActorSpawner_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARandomActorSpawner, ARandomActorSpawner::StaticClass, TEXT("ARandomActorSpawner"), &Z_Registration_Info_UClass_ARandomActorSpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARandomActorSpawner), 3268584559U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Six_Source_Six_Public_RandomActorSpawner_h_2885603275(TEXT("/Script/Six"),
	Z_CompiledInDeferFile_FID_Six_Source_Six_Public_RandomActorSpawner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Six_Source_Six_Public_RandomActorSpawner_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
