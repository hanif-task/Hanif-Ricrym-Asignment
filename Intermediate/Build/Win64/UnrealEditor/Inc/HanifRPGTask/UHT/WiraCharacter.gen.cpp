// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HanifRPGTask/Wira/WiraCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWiraCharacter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
HANIFRPGTASK_API UClass* Z_Construct_UClass_AWiraCharacter();
HANIFRPGTASK_API UClass* Z_Construct_UClass_AWiraCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_HanifRPGTask();
// End Cross Module References

// Begin Class AWiraCharacter Function LineTrace
struct Z_Construct_UFunction_AWiraCharacter_LineTrace_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Wira/WiraCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWiraCharacter_LineTrace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWiraCharacter, nullptr, "LineTrace", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWiraCharacter_LineTrace_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWiraCharacter_LineTrace_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AWiraCharacter_LineTrace()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWiraCharacter_LineTrace_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWiraCharacter::execLineTrace)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LineTrace();
	P_NATIVE_END;
}
// End Class AWiraCharacter Function LineTrace

// Begin Class AWiraCharacter
void AWiraCharacter::StaticRegisterNativesAWiraCharacter()
{
	UClass* Class = AWiraCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "LineTrace", &AWiraCharacter::execLineTrace },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWiraCharacter);
UClass* Z_Construct_UClass_AWiraCharacter_NoRegister()
{
	return AWiraCharacter::StaticClass();
}
struct Z_Construct_UClass_AWiraCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Wira/WiraCharacter.h" },
		{ "ModuleRelativePath", "Wira/WiraCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[] = {
		{ "Category", "WiraCharacter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//add camera into bpwira character\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Wira/WiraCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "add camera into bpwira character" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwordMesh_MetaData[] = {
		{ "Category", "WiraCharacter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//add sword into bpwira character\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Wira/WiraCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "add sword into bpwira character" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackAnimaton_MetaData[] = {
		{ "Category", "WiraCharacter" },
		{ "ModuleRelativePath", "Wira/WiraCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[] = {
		{ "Category", "WiraCharacter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Attack\n" },
#endif
		{ "ModuleRelativePath", "Wira/WiraCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attack" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsAttacking_MetaData[] = {
		{ "Category", "WiraCharacter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//need to call this when attack animation //sword\n" },
#endif
		{ "ModuleRelativePath", "Wira/WiraCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "need to call this when attack animation sword" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SwordMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackAnimaton;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Damage;
	static void NewProp_bIsAttacking_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAttacking;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AWiraCharacter_LineTrace, "LineTrace" }, // 1891797004
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWiraCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWiraCharacter_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWiraCharacter, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Camera_MetaData), NewProp_Camera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWiraCharacter_Statics::NewProp_SwordMesh = { "SwordMesh", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWiraCharacter, SwordMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwordMesh_MetaData), NewProp_SwordMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWiraCharacter_Statics::NewProp_AttackAnimaton = { "AttackAnimaton", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWiraCharacter, AttackAnimaton), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackAnimaton_MetaData), NewProp_AttackAnimaton_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWiraCharacter_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWiraCharacter, Damage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Damage_MetaData), NewProp_Damage_MetaData) };
void Z_Construct_UClass_AWiraCharacter_Statics::NewProp_bIsAttacking_SetBit(void* Obj)
{
	((AWiraCharacter*)Obj)->bIsAttacking = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWiraCharacter_Statics::NewProp_bIsAttacking = { "bIsAttacking", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AWiraCharacter), &Z_Construct_UClass_AWiraCharacter_Statics::NewProp_bIsAttacking_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsAttacking_MetaData), NewProp_bIsAttacking_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWiraCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWiraCharacter_Statics::NewProp_Camera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWiraCharacter_Statics::NewProp_SwordMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWiraCharacter_Statics::NewProp_AttackAnimaton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWiraCharacter_Statics::NewProp_Damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWiraCharacter_Statics::NewProp_bIsAttacking,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWiraCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AWiraCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_HanifRPGTask,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWiraCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWiraCharacter_Statics::ClassParams = {
	&AWiraCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AWiraCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AWiraCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWiraCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AWiraCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWiraCharacter()
{
	if (!Z_Registration_Info_UClass_AWiraCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWiraCharacter.OuterSingleton, Z_Construct_UClass_AWiraCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWiraCharacter.OuterSingleton;
}
template<> HANIFRPGTASK_API UClass* StaticClass<AWiraCharacter>()
{
	return AWiraCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWiraCharacter);
AWiraCharacter::~AWiraCharacter() {}
// End Class AWiraCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_My_Files_Unreal_Engine_5_HanifRPGTask_Source_HanifRPGTask_Wira_WiraCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWiraCharacter, AWiraCharacter::StaticClass, TEXT("AWiraCharacter"), &Z_Registration_Info_UClass_AWiraCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWiraCharacter), 2874389303U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_My_Files_Unreal_Engine_5_HanifRPGTask_Source_HanifRPGTask_Wira_WiraCharacter_h_3533578086(TEXT("/Script/HanifRPGTask"),
	Z_CompiledInDeferFile_FID_My_Files_Unreal_Engine_5_HanifRPGTask_Source_HanifRPGTask_Wira_WiraCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_My_Files_Unreal_Engine_5_HanifRPGTask_Source_HanifRPGTask_Wira_WiraCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
