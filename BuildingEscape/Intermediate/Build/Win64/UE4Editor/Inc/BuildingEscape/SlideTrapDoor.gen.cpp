// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/SlideTrapDoor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlideTrapDoor() {}
// Cross Module References
	BUILDINGESCAPE_API UFunction* Z_Construct_UDelegateFunction_BuildingEscape_TrapDoorRequest__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_USlideTrapDoor_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_USlideTrapDoor();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerVolume_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_BuildingEscape_TrapDoorRequest__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_BuildingEscape_TrapDoorRequest__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SlideTrapDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BuildingEscape_TrapDoorRequest__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BuildingEscape, nullptr, "TrapDoorRequest__DelegateSignature", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_BuildingEscape_TrapDoorRequest__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_BuildingEscape_TrapDoorRequest__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_BuildingEscape_TrapDoorRequest__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_BuildingEscape_TrapDoorRequest__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void USlideTrapDoor::StaticRegisterNativesUSlideTrapDoor()
	{
	}
	UClass* Z_Construct_UClass_USlideTrapDoor_NoRegister()
	{
		return USlideTrapDoor::StaticClass();
	}
	struct Z_Construct_UClass_USlideTrapDoor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCloseRequest_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCloseRequest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnOpenRequest_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnOpenRequest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriggerMass_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TriggerMass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PressurePlate_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PressurePlate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USlideTrapDoor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlideTrapDoor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SlideTrapDoor.h" },
		{ "ModuleRelativePath", "SlideTrapDoor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlideTrapDoor_Statics::NewProp_OnCloseRequest_MetaData[] = {
		{ "ModuleRelativePath", "SlideTrapDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USlideTrapDoor_Statics::NewProp_OnCloseRequest = { "OnCloseRequest", nullptr, (EPropertyFlags)0x0040000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlideTrapDoor, OnCloseRequest), Z_Construct_UDelegateFunction_BuildingEscape_TrapDoorRequest__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USlideTrapDoor_Statics::NewProp_OnCloseRequest_MetaData, ARRAY_COUNT(Z_Construct_UClass_USlideTrapDoor_Statics::NewProp_OnCloseRequest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlideTrapDoor_Statics::NewProp_OnOpenRequest_MetaData[] = {
		{ "ModuleRelativePath", "SlideTrapDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USlideTrapDoor_Statics::NewProp_OnOpenRequest = { "OnOpenRequest", nullptr, (EPropertyFlags)0x0040000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlideTrapDoor, OnOpenRequest), Z_Construct_UDelegateFunction_BuildingEscape_TrapDoorRequest__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USlideTrapDoor_Statics::NewProp_OnOpenRequest_MetaData, ARRAY_COUNT(Z_Construct_UClass_USlideTrapDoor_Statics::NewProp_OnOpenRequest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlideTrapDoor_Statics::NewProp_TriggerMass_MetaData[] = {
		{ "Category", "SlideTrapDoor" },
		{ "ModuleRelativePath", "SlideTrapDoor.h" },
		{ "ToolTip", "Amount of weight it takes to open the door" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USlideTrapDoor_Statics::NewProp_TriggerMass = { "TriggerMass", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlideTrapDoor, TriggerMass), METADATA_PARAMS(Z_Construct_UClass_USlideTrapDoor_Statics::NewProp_TriggerMass_MetaData, ARRAY_COUNT(Z_Construct_UClass_USlideTrapDoor_Statics::NewProp_TriggerMass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlideTrapDoor_Statics::NewProp_PressurePlate_MetaData[] = {
		{ "Category", "SlideTrapDoor" },
		{ "ModuleRelativePath", "SlideTrapDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USlideTrapDoor_Statics::NewProp_PressurePlate = { "PressurePlate", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlideTrapDoor, PressurePlate), Z_Construct_UClass_ATriggerVolume_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USlideTrapDoor_Statics::NewProp_PressurePlate_MetaData, ARRAY_COUNT(Z_Construct_UClass_USlideTrapDoor_Statics::NewProp_PressurePlate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USlideTrapDoor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlideTrapDoor_Statics::NewProp_OnCloseRequest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlideTrapDoor_Statics::NewProp_OnOpenRequest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlideTrapDoor_Statics::NewProp_TriggerMass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlideTrapDoor_Statics::NewProp_PressurePlate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USlideTrapDoor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USlideTrapDoor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USlideTrapDoor_Statics::ClassParams = {
		&USlideTrapDoor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USlideTrapDoor_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_USlideTrapDoor_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USlideTrapDoor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USlideTrapDoor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USlideTrapDoor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USlideTrapDoor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USlideTrapDoor, 3437134105);
	template<> BUILDINGESCAPE_API UClass* StaticClass<USlideTrapDoor>()
	{
		return USlideTrapDoor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USlideTrapDoor(Z_Construct_UClass_USlideTrapDoor, &USlideTrapDoor::StaticClass, TEXT("/Script/BuildingEscape"), TEXT("USlideTrapDoor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USlideTrapDoor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
