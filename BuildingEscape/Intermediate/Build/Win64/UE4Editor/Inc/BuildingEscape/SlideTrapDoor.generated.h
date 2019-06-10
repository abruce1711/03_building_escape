// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BUILDINGESCAPE_SlideTrapDoor_generated_h
#error "SlideTrapDoor.generated.h already included, missing '#pragma once' in SlideTrapDoor.h"
#endif
#define BUILDINGESCAPE_SlideTrapDoor_generated_h

#define BuildingEscape_Source_BuildingEscape_SlideTrapDoor_h_9_DELEGATE \
static inline void FTrapDoorRequest_DelegateWrapper(const FMulticastScriptDelegate& TrapDoorRequest) \
{ \
	TrapDoorRequest.ProcessMulticastDelegate<UObject>(NULL); \
}


#define BuildingEscape_Source_BuildingEscape_SlideTrapDoor_h_14_RPC_WRAPPERS
#define BuildingEscape_Source_BuildingEscape_SlideTrapDoor_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define BuildingEscape_Source_BuildingEscape_SlideTrapDoor_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSlideTrapDoor(); \
	friend struct Z_Construct_UClass_USlideTrapDoor_Statics; \
public: \
	DECLARE_CLASS(USlideTrapDoor, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BuildingEscape"), NO_API) \
	DECLARE_SERIALIZER(USlideTrapDoor)


#define BuildingEscape_Source_BuildingEscape_SlideTrapDoor_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUSlideTrapDoor(); \
	friend struct Z_Construct_UClass_USlideTrapDoor_Statics; \
public: \
	DECLARE_CLASS(USlideTrapDoor, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BuildingEscape"), NO_API) \
	DECLARE_SERIALIZER(USlideTrapDoor)


#define BuildingEscape_Source_BuildingEscape_SlideTrapDoor_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USlideTrapDoor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USlideTrapDoor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USlideTrapDoor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USlideTrapDoor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USlideTrapDoor(USlideTrapDoor&&); \
	NO_API USlideTrapDoor(const USlideTrapDoor&); \
public:


#define BuildingEscape_Source_BuildingEscape_SlideTrapDoor_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USlideTrapDoor(USlideTrapDoor&&); \
	NO_API USlideTrapDoor(const USlideTrapDoor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USlideTrapDoor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USlideTrapDoor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USlideTrapDoor)


#define BuildingEscape_Source_BuildingEscape_SlideTrapDoor_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PressurePlate() { return STRUCT_OFFSET(USlideTrapDoor, PressurePlate); } \
	FORCEINLINE static uint32 __PPO__TriggerMass() { return STRUCT_OFFSET(USlideTrapDoor, TriggerMass); } \
	FORCEINLINE static uint32 __PPO__OnOpenRequest() { return STRUCT_OFFSET(USlideTrapDoor, OnOpenRequest); } \
	FORCEINLINE static uint32 __PPO__OnCloseRequest() { return STRUCT_OFFSET(USlideTrapDoor, OnCloseRequest); }


#define BuildingEscape_Source_BuildingEscape_SlideTrapDoor_h_11_PROLOG
#define BuildingEscape_Source_BuildingEscape_SlideTrapDoor_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BuildingEscape_Source_BuildingEscape_SlideTrapDoor_h_14_PRIVATE_PROPERTY_OFFSET \
	BuildingEscape_Source_BuildingEscape_SlideTrapDoor_h_14_RPC_WRAPPERS \
	BuildingEscape_Source_BuildingEscape_SlideTrapDoor_h_14_INCLASS \
	BuildingEscape_Source_BuildingEscape_SlideTrapDoor_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BuildingEscape_Source_BuildingEscape_SlideTrapDoor_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BuildingEscape_Source_BuildingEscape_SlideTrapDoor_h_14_PRIVATE_PROPERTY_OFFSET \
	BuildingEscape_Source_BuildingEscape_SlideTrapDoor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	BuildingEscape_Source_BuildingEscape_SlideTrapDoor_h_14_INCLASS_NO_PURE_DECLS \
	BuildingEscape_Source_BuildingEscape_SlideTrapDoor_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BUILDINGESCAPE_API UClass* StaticClass<class USlideTrapDoor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BuildingEscape_Source_BuildingEscape_SlideTrapDoor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
