// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoveBox.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SIX_MoveBox_generated_h
#error "MoveBox.generated.h already included, missing '#pragma once' in MoveBox.h"
#endif
#define SIX_MoveBox_generated_h

#define FID_Six_Source_Six_Public_MoveBox_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMoveBox(); \
	friend struct Z_Construct_UClass_AMoveBox_Statics; \
public: \
	DECLARE_CLASS(AMoveBox, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Six"), NO_API) \
	DECLARE_SERIALIZER(AMoveBox)


#define FID_Six_Source_Six_Public_MoveBox_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMoveBox(AMoveBox&&); \
	AMoveBox(const AMoveBox&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMoveBox); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMoveBox); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMoveBox) \
	NO_API virtual ~AMoveBox();


#define FID_Six_Source_Six_Public_MoveBox_h_9_PROLOG
#define FID_Six_Source_Six_Public_MoveBox_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Six_Source_Six_Public_MoveBox_h_12_INCLASS_NO_PURE_DECLS \
	FID_Six_Source_Six_Public_MoveBox_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIX_API UClass* StaticClass<class AMoveBox>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Six_Source_Six_Public_MoveBox_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
