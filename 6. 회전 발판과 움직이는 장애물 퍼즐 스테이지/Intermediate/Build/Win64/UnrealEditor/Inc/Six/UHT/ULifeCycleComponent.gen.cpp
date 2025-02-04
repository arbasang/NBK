// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Six/Public/ULifeCycleComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeULifeCycleComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
SIX_API UClass* Z_Construct_UClass_ULifeCycleComponent();
SIX_API UClass* Z_Construct_UClass_ULifeCycleComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Six();
// End Cross Module References

// Begin Class ULifeCycleComponent
void ULifeCycleComponent::StaticRegisterNativesULifeCycleComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULifeCycleComponent);
UClass* Z_Construct_UClass_ULifeCycleComponent_NoRegister()
{
	return ULifeCycleComponent::StaticClass();
}
struct Z_Construct_UClass_ULifeCycleComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ULifeCycleComponent.h" },
		{ "ModuleRelativePath", "Public/ULifeCycleComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Lifetime_MetaData[] = {
		{ "Category", "LifeCycle" },
		{ "ModuleRelativePath", "Public/ULifeCycleComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RespawnDelay_MetaData[] = {
		{ "Category", "LifeCycle" },
		{ "ModuleRelativePath", "Public/ULifeCycleComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsVisible_MetaData[] = {
		{ "Category", "LifeCycle" },
		{ "ModuleRelativePath", "Public/ULifeCycleComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseLifeCycle_MetaData[] = {
		{ "Category", "LifeCycle" },
		{ "ModuleRelativePath", "Public/ULifeCycleComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Lifetime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RespawnDelay;
	static void NewProp_IsVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsVisible;
	static void NewProp_bUseLifeCycle_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLifeCycle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULifeCycleComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULifeCycleComponent_Statics::NewProp_Lifetime = { "Lifetime", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULifeCycleComponent, Lifetime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Lifetime_MetaData), NewProp_Lifetime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULifeCycleComponent_Statics::NewProp_RespawnDelay = { "RespawnDelay", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULifeCycleComponent, RespawnDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RespawnDelay_MetaData), NewProp_RespawnDelay_MetaData) };
void Z_Construct_UClass_ULifeCycleComponent_Statics::NewProp_IsVisible_SetBit(void* Obj)
{
	((ULifeCycleComponent*)Obj)->IsVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULifeCycleComponent_Statics::NewProp_IsVisible = { "IsVisible", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULifeCycleComponent), &Z_Construct_UClass_ULifeCycleComponent_Statics::NewProp_IsVisible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsVisible_MetaData), NewProp_IsVisible_MetaData) };
void Z_Construct_UClass_ULifeCycleComponent_Statics::NewProp_bUseLifeCycle_SetBit(void* Obj)
{
	((ULifeCycleComponent*)Obj)->bUseLifeCycle = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULifeCycleComponent_Statics::NewProp_bUseLifeCycle = { "bUseLifeCycle", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULifeCycleComponent), &Z_Construct_UClass_ULifeCycleComponent_Statics::NewProp_bUseLifeCycle_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseLifeCycle_MetaData), NewProp_bUseLifeCycle_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULifeCycleComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeCycleComponent_Statics::NewProp_Lifetime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeCycleComponent_Statics::NewProp_RespawnDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeCycleComponent_Statics::NewProp_IsVisible,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeCycleComponent_Statics::NewProp_bUseLifeCycle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULifeCycleComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULifeCycleComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Six,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULifeCycleComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULifeCycleComponent_Statics::ClassParams = {
	&ULifeCycleComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULifeCycleComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULifeCycleComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULifeCycleComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_ULifeCycleComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULifeCycleComponent()
{
	if (!Z_Registration_Info_UClass_ULifeCycleComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULifeCycleComponent.OuterSingleton, Z_Construct_UClass_ULifeCycleComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULifeCycleComponent.OuterSingleton;
}
template<> SIX_API UClass* StaticClass<ULifeCycleComponent>()
{
	return ULifeCycleComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULifeCycleComponent);
ULifeCycleComponent::~ULifeCycleComponent() {}
// End Class ULifeCycleComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Six_Source_Six_Public_ULifeCycleComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULifeCycleComponent, ULifeCycleComponent::StaticClass, TEXT("ULifeCycleComponent"), &Z_Registration_Info_UClass_ULifeCycleComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULifeCycleComponent), 2181137148U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Six_Source_Six_Public_ULifeCycleComponent_h_3768757279(TEXT("/Script/Six"),
	Z_CompiledInDeferFile_FID_Six_Source_Six_Public_ULifeCycleComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Six_Source_Six_Public_ULifeCycleComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
