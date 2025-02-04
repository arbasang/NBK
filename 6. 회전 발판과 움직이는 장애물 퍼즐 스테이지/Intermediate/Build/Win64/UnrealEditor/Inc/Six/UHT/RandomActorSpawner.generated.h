// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RandomActorSpawner.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SIX_RandomActorSpawner_generated_h
#error "RandomActorSpawner.generated.h already included, missing '#pragma once' in RandomActorSpawner.h"
#endif
#define SIX_RandomActorSpawner_generated_h

#define FID_Six_Source_Six_Public_RandomActorSpawner_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARandomActorSpawner(); \
	friend struct Z_Construct_UClass_ARandomActorSpawner_Statics; \
public: \
	DECLARE_CLASS(ARandomActorSpawner, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Six"), NO_API) \
	DECLARE_SERIALIZER(ARandomActorSpawner)


#define FID_Six_Source_Six_Public_RandomActorSpawner_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ARandomActorSpawner(ARandomActorSpawner&&); \
	ARandomActorSpawner(const ARandomActorSpawner&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARandomActorSpawner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARandomActorSpawner); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARandomActorSpawner) \
	NO_API virtual ~ARandomActorSpawner();


#define FID_Six_Source_Six_Public_RandomActorSpawner_h_10_PROLOG
#define FID_Six_Source_Six_Public_RandomActorSpawner_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Six_Source_Six_Public_RandomActorSpawner_h_13_INCLASS_NO_PURE_DECLS \
	FID_Six_Source_Six_Public_RandomActorSpawner_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIX_API UClass* StaticClass<class ARandomActorSpawner>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Six_Source_Six_Public_RandomActorSpawner_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
