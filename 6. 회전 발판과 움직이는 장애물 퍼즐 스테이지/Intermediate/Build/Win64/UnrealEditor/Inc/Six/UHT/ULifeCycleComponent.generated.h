// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ULifeCycleComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SIX_ULifeCycleComponent_generated_h
#error "ULifeCycleComponent.generated.h already included, missing '#pragma once' in ULifeCycleComponent.h"
#endif
#define SIX_ULifeCycleComponent_generated_h

#define FID_Six_Source_Six_Public_ULifeCycleComponent_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULifeCycleComponent(); \
	friend struct Z_Construct_UClass_ULifeCycleComponent_Statics; \
public: \
	DECLARE_CLASS(ULifeCycleComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Six"), NO_API) \
	DECLARE_SERIALIZER(ULifeCycleComponent)


#define FID_Six_Source_Six_Public_ULifeCycleComponent_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULifeCycleComponent(ULifeCycleComponent&&); \
	ULifeCycleComponent(const ULifeCycleComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULifeCycleComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULifeCycleComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULifeCycleComponent) \
	NO_API virtual ~ULifeCycleComponent();


#define FID_Six_Source_Six_Public_ULifeCycleComponent_h_7_PROLOG
#define FID_Six_Source_Six_Public_ULifeCycleComponent_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Six_Source_Six_Public_ULifeCycleComponent_h_10_INCLASS_NO_PURE_DECLS \
	FID_Six_Source_Six_Public_ULifeCycleComponent_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIX_API UClass* StaticClass<class ULifeCycleComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Six_Source_Six_Public_ULifeCycleComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
