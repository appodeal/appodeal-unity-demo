#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tCBF754C290FAE894631BED8FD56E9E22C4C187F9;
// System.Action`1<UnityEngine.Cubemap>
struct Action_1_t72B039F88BDD04A9A013812982859354EDA03D63;
// System.Action`2<UnityEngine.ReflectionProbe,UnityEngine.ReflectionProbe/ReflectionProbeEvent>
struct Action_2_tAD3FD2CFE6F2B8404049F867BD190C4B64593314;
// System.AsyncCallback
struct AsyncCallback_t74ABD1277F711E7FBDCB00E169A63DEFD39E86A2;
// System.Char[]
struct CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744;
// System.Collections.IDictionary
struct IDictionary_tD35B9437F08BE98D1E0B295CC73C48E168CAB316;
// System.DelegateData
struct DelegateData_tF588FE8D395F9A38FC7D222940F9B218441D21A9;
// System.IAsyncResult
struct IAsyncResult_tDA33C24465239FB383C4C2CDAAC43B9AD3CB7F05;
// System.Int32[]
struct Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074;
// System.IntPtr[]
struct IntPtrU5BU5D_tB866BA24C91559CF299618E230043451CC7CF659;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.UnhandledExceptionEventHandler
struct UnhandledExceptionEventHandler_tB7988286F96CF5350E4037A92C900D84BB7FB650;
// System.Void
struct Void_tDB81A15FA2AB53E2401A76B745D215397B29F783;
// UnityEngine.Events.UnityAction
struct UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4;
// UnityEngine.Experimental.LowLevel.PlayerLoopSystem/UpdateFunction
struct UpdateFunction_tE0936D5A5B8C3367F0E6E464162E1FB1E9F304A8;
// UnityEngine.Experimental.LowLevel.PlayerLoopSystem[]
struct PlayerLoopSystemU5BU5D_t97939DCF6160BDDB681EB4155D9D1BEB1CB659A2;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;

struct PlayerLoopSystem_t89BC6208BDD3B7C57FED7B0201341A7D4E846A6D_marshaled_com;
struct PlayerLoopSystem_t89BC6208BDD3B7C57FED7B0201341A7D4E846A6D_marshaled_pinvoke;



#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef ATTRIBUTE_T60F25EB48D5935E4C6C2BAF7F90F57A43528E469_H
#define ATTRIBUTE_T60F25EB48D5935E4C6C2BAF7F90F57A43528E469_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t60F25EB48D5935E4C6C2BAF7F90F57A43528E469  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T60F25EB48D5935E4C6C2BAF7F90F57A43528E469_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_tB866BA24C91559CF299618E230043451CC7CF659* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t, ___trace_ips_0)); }
	inline IntPtrU5BU5D_tB866BA24C91559CF299618E230043451CC7CF659* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_tB866BA24C91559CF299618E230043451CC7CF659** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_tB866BA24C91559CF299618E230043451CC7CF659* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t, ___inner_exception_1)); }
	inline Exception_t * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T_H
#ifndef VALUETYPE_T1810BD84E0FDB5D3A7CD34286A5B22F343995C9C_H
#define VALUETYPE_T1810BD84E0FDB5D3A7CD34286A5B22F343995C9C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t1810BD84E0FDB5D3A7CD34286A5B22F343995C9C  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t1810BD84E0FDB5D3A7CD34286A5B22F343995C9C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t1810BD84E0FDB5D3A7CD34286A5B22F343995C9C_marshaled_com
{
};
#endif // VALUETYPE_T1810BD84E0FDB5D3A7CD34286A5B22F343995C9C_H
#ifndef ARGUMENTCACHE_T22D888CFC4D56B3F6BFB5EB6DBEB8996B857331C_H
#define ARGUMENTCACHE_T22D888CFC4D56B3F6BFB5EB6DBEB8996B857331C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.ArgumentCache
struct  ArgumentCache_t22D888CFC4D56B3F6BFB5EB6DBEB8996B857331C  : public RuntimeObject
{
public:
	// UnityEngine.Object UnityEngine.Events.ArgumentCache::m_ObjectArgument
	Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___m_ObjectArgument_0;
	// System.String UnityEngine.Events.ArgumentCache::m_ObjectArgumentAssemblyTypeName
	String_t* ___m_ObjectArgumentAssemblyTypeName_1;
	// System.Int32 UnityEngine.Events.ArgumentCache::m_IntArgument
	int32_t ___m_IntArgument_2;
	// System.Single UnityEngine.Events.ArgumentCache::m_FloatArgument
	float ___m_FloatArgument_3;
	// System.String UnityEngine.Events.ArgumentCache::m_StringArgument
	String_t* ___m_StringArgument_4;
	// System.Boolean UnityEngine.Events.ArgumentCache::m_BoolArgument
	bool ___m_BoolArgument_5;

public:
	inline static int32_t get_offset_of_m_ObjectArgument_0() { return static_cast<int32_t>(offsetof(ArgumentCache_t22D888CFC4D56B3F6BFB5EB6DBEB8996B857331C, ___m_ObjectArgument_0)); }
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * get_m_ObjectArgument_0() const { return ___m_ObjectArgument_0; }
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 ** get_address_of_m_ObjectArgument_0() { return &___m_ObjectArgument_0; }
	inline void set_m_ObjectArgument_0(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * value)
	{
		___m_ObjectArgument_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ObjectArgument_0), value);
	}

	inline static int32_t get_offset_of_m_ObjectArgumentAssemblyTypeName_1() { return static_cast<int32_t>(offsetof(ArgumentCache_t22D888CFC4D56B3F6BFB5EB6DBEB8996B857331C, ___m_ObjectArgumentAssemblyTypeName_1)); }
	inline String_t* get_m_ObjectArgumentAssemblyTypeName_1() const { return ___m_ObjectArgumentAssemblyTypeName_1; }
	inline String_t** get_address_of_m_ObjectArgumentAssemblyTypeName_1() { return &___m_ObjectArgumentAssemblyTypeName_1; }
	inline void set_m_ObjectArgumentAssemblyTypeName_1(String_t* value)
	{
		___m_ObjectArgumentAssemblyTypeName_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_ObjectArgumentAssemblyTypeName_1), value);
	}

	inline static int32_t get_offset_of_m_IntArgument_2() { return static_cast<int32_t>(offsetof(ArgumentCache_t22D888CFC4D56B3F6BFB5EB6DBEB8996B857331C, ___m_IntArgument_2)); }
	inline int32_t get_m_IntArgument_2() const { return ___m_IntArgument_2; }
	inline int32_t* get_address_of_m_IntArgument_2() { return &___m_IntArgument_2; }
	inline void set_m_IntArgument_2(int32_t value)
	{
		___m_IntArgument_2 = value;
	}

	inline static int32_t get_offset_of_m_FloatArgument_3() { return static_cast<int32_t>(offsetof(ArgumentCache_t22D888CFC4D56B3F6BFB5EB6DBEB8996B857331C, ___m_FloatArgument_3)); }
	inline float get_m_FloatArgument_3() const { return ___m_FloatArgument_3; }
	inline float* get_address_of_m_FloatArgument_3() { return &___m_FloatArgument_3; }
	inline void set_m_FloatArgument_3(float value)
	{
		___m_FloatArgument_3 = value;
	}

	inline static int32_t get_offset_of_m_StringArgument_4() { return static_cast<int32_t>(offsetof(ArgumentCache_t22D888CFC4D56B3F6BFB5EB6DBEB8996B857331C, ___m_StringArgument_4)); }
	inline String_t* get_m_StringArgument_4() const { return ___m_StringArgument_4; }
	inline String_t** get_address_of_m_StringArgument_4() { return &___m_StringArgument_4; }
	inline void set_m_StringArgument_4(String_t* value)
	{
		___m_StringArgument_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_StringArgument_4), value);
	}

	inline static int32_t get_offset_of_m_BoolArgument_5() { return static_cast<int32_t>(offsetof(ArgumentCache_t22D888CFC4D56B3F6BFB5EB6DBEB8996B857331C, ___m_BoolArgument_5)); }
	inline bool get_m_BoolArgument_5() const { return ___m_BoolArgument_5; }
	inline bool* get_address_of_m_BoolArgument_5() { return &___m_BoolArgument_5; }
	inline void set_m_BoolArgument_5(bool value)
	{
		___m_BoolArgument_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTCACHE_T22D888CFC4D56B3F6BFB5EB6DBEB8996B857331C_H
#ifndef BASEINVOKABLECALL_TE686BE3371ABBF6DB32C422D433199AD18316DF5_H
#define BASEINVOKABLECALL_TE686BE3371ABBF6DB32C422D433199AD18316DF5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.BaseInvokableCall
struct  BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEINVOKABLECALL_TE686BE3371ABBF6DB32C422D433199AD18316DF5_H
#ifndef PLAYERPREFS_T6E16EDCF104A27E432EDE9AE648DFE7A0401C37C_H
#define PLAYERPREFS_T6E16EDCF104A27E432EDE9AE648DFE7A0401C37C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PlayerPrefs
struct  PlayerPrefs_t6E16EDCF104A27E432EDE9AE648DFE7A0401C37C  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERPREFS_T6E16EDCF104A27E432EDE9AE648DFE7A0401C37C_H
#ifndef PROPERTYNAMEUTILS_T01310671910F3EA84F5FD7D29149378A4FD19D28_H
#define PROPERTYNAMEUTILS_T01310671910F3EA84F5FD7D29149378A4FD19D28_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PropertyNameUtils
struct  PropertyNameUtils_t01310671910F3EA84F5FD7D29149378A4FD19D28  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYNAMEUTILS_T01310671910F3EA84F5FD7D29149378A4FD19D28_H
#ifndef RESOURCES_T516CB639AA1F373695D285E3F9274C65A70D3935_H
#define RESOURCES_T516CB639AA1F373695D285E3F9274C65A70D3935_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Resources
struct  Resources_t516CB639AA1F373695D285E3F9274C65A70D3935  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOURCES_T516CB639AA1F373695D285E3F9274C65A70D3935_H
#ifndef STACKTRACEUTILITY_TEC8508315507A7E593CB689255A3FDACEE505C47_H
#define STACKTRACEUTILITY_TEC8508315507A7E593CB689255A3FDACEE505C47_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.StackTraceUtility
struct  StackTraceUtility_tEC8508315507A7E593CB689255A3FDACEE505C47  : public RuntimeObject
{
public:

public:
};

struct StackTraceUtility_tEC8508315507A7E593CB689255A3FDACEE505C47_StaticFields
{
public:
	// System.String UnityEngine.StackTraceUtility::projectFolder
	String_t* ___projectFolder_0;

public:
	inline static int32_t get_offset_of_projectFolder_0() { return static_cast<int32_t>(offsetof(StackTraceUtility_tEC8508315507A7E593CB689255A3FDACEE505C47_StaticFields, ___projectFolder_0)); }
	inline String_t* get_projectFolder_0() const { return ___projectFolder_0; }
	inline String_t** get_address_of_projectFolder_0() { return &___projectFolder_0; }
	inline void set_projectFolder_0(String_t* value)
	{
		___projectFolder_0 = value;
		Il2CppCodeGenWriteBarrier((&___projectFolder_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACKTRACEUTILITY_TEC8508315507A7E593CB689255A3FDACEE505C47_H
#ifndef SYSTEMINFO_T94EEC32D450B80C297412606B6221043013A55D9_H
#define SYSTEMINFO_T94EEC32D450B80C297412606B6221043013A55D9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SystemInfo
struct  SystemInfo_t94EEC32D450B80C297412606B6221043013A55D9  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMINFO_T94EEC32D450B80C297412606B6221043013A55D9_H
#ifndef TIME_T0C14CAF02A532E5385B5A26F8367E384DC289F48_H
#define TIME_T0C14CAF02A532E5385B5A26F8367E384DC289F48_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Time
struct  Time_t0C14CAF02A532E5385B5A26F8367E384DC289F48  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIME_T0C14CAF02A532E5385B5A26F8367E384DC289F48_H
#ifndef UNHANDLEDEXCEPTIONHANDLER_TF4F8A50BB2C5592177E80592BB181B43297850AC_H
#define UNHANDLEDEXCEPTIONHANDLER_TF4F8A50BB2C5592177E80592BB181B43297850AC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UnhandledExceptionHandler
struct  UnhandledExceptionHandler_tF4F8A50BB2C5592177E80592BB181B43297850AC  : public RuntimeObject
{
public:

public:
};

struct UnhandledExceptionHandler_tF4F8A50BB2C5592177E80592BB181B43297850AC_StaticFields
{
public:
	// System.UnhandledExceptionEventHandler UnityEngine.UnhandledExceptionHandler::<>f__mgU24cache0
	UnhandledExceptionEventHandler_tB7988286F96CF5350E4037A92C900D84BB7FB650 * ___U3CU3Ef__mgU24cache0_0;

public:
	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_0() { return static_cast<int32_t>(offsetof(UnhandledExceptionHandler_tF4F8A50BB2C5592177E80592BB181B43297850AC_StaticFields, ___U3CU3Ef__mgU24cache0_0)); }
	inline UnhandledExceptionEventHandler_tB7988286F96CF5350E4037A92C900D84BB7FB650 * get_U3CU3Ef__mgU24cache0_0() const { return ___U3CU3Ef__mgU24cache0_0; }
	inline UnhandledExceptionEventHandler_tB7988286F96CF5350E4037A92C900D84BB7FB650 ** get_address_of_U3CU3Ef__mgU24cache0_0() { return &___U3CU3Ef__mgU24cache0_0; }
	inline void set_U3CU3Ef__mgU24cache0_0(UnhandledExceptionEventHandler_tB7988286F96CF5350E4037A92C900D84BB7FB650 * value)
	{
		___U3CU3Ef__mgU24cache0_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNHANDLEDEXCEPTIONHANDLER_TF4F8A50BB2C5592177E80592BB181B43297850AC_H
#ifndef YIELDINSTRUCTION_T836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_H
#define YIELDINSTRUCTION_T836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.YieldInstruction
struct  YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
};
#endif // YIELDINSTRUCTION_T836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_H
#ifndef ENUM_T5AAC444DFCAA78411386665A25FE3CD3169879EF_H
#define ENUM_T5AAC444DFCAA78411386665A25FE3CD3169879EF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t5AAC444DFCAA78411386665A25FE3CD3169879EF  : public ValueType_t1810BD84E0FDB5D3A7CD34286A5B22F343995C9C
{
public:

public:
};

struct Enum_t5AAC444DFCAA78411386665A25FE3CD3169879EF_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t5AAC444DFCAA78411386665A25FE3CD3169879EF_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t5AAC444DFCAA78411386665A25FE3CD3169879EF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t5AAC444DFCAA78411386665A25FE3CD3169879EF_marshaled_com
{
};
#endif // ENUM_T5AAC444DFCAA78411386665A25FE3CD3169879EF_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef VOID_TDB81A15FA2AB53E2401A76B745D215397B29F783_H
#define VOID_TDB81A15FA2AB53E2401A76B745D215397B29F783_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_tDB81A15FA2AB53E2401A76B745D215397B29F783 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_TDB81A15FA2AB53E2401A76B745D215397B29F783_H
#ifndef INVOKABLECALL_T4195709D9C5DF20B7FC3986828A7612C9C28B0FC_H
#define INVOKABLECALL_T4195709D9C5DF20B7FC3986828A7612C9C28B0FC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.InvokableCall
struct  InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC  : public BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5
{
public:
	// UnityEngine.Events.UnityAction UnityEngine.Events.InvokableCall::Delegate
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC, ___Delegate_0)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((&___Delegate_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVOKABLECALL_T4195709D9C5DF20B7FC3986828A7612C9C28B0FC_H
#ifndef BATCHMODEUPDATE_T05EC976E3F41B0647D199448D6090F27EE804CE0_H
#define BATCHMODEUPDATE_T05EC976E3F41B0647D199448D6090F27EE804CE0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate_BatchModeUpdate
struct  BatchModeUpdate_t05EC976E3F41B0647D199448D6090F27EE804CE0 
{
public:
	union
	{
		struct
		{
		};
		uint8_t BatchModeUpdate_t05EC976E3F41B0647D199448D6090F27EE804CE0__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BATCHMODEUPDATE_T05EC976E3F41B0647D199448D6090F27EE804CE0_H
#ifndef CLEARIMMEDIATERENDERERS_TC7DEB4F34AB987A9164EA8289C9FFEE94010CDA0_H
#define CLEARIMMEDIATERENDERERS_TC7DEB4F34AB987A9164EA8289C9FFEE94010CDA0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate_ClearImmediateRenderers
struct  ClearImmediateRenderers_tC7DEB4F34AB987A9164EA8289C9FFEE94010CDA0 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ClearImmediateRenderers_tC7DEB4F34AB987A9164EA8289C9FFEE94010CDA0__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLEARIMMEDIATERENDERERS_TC7DEB4F34AB987A9164EA8289C9FFEE94010CDA0_H
#ifndef DIRECTORLATEUPDATE_TFD444276DAAFDF5385A0F9183B76A3A5A0E1E887_H
#define DIRECTORLATEUPDATE_TFD444276DAAFDF5385A0F9183B76A3A5A0E1E887_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate_DirectorLateUpdate
struct  DirectorLateUpdate_tFD444276DAAFDF5385A0F9183B76A3A5A0E1E887 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DirectorLateUpdate_tFD444276DAAFDF5385A0F9183B76A3A5A0E1E887__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIRECTORLATEUPDATE_TFD444276DAAFDF5385A0F9183B76A3A5A0E1E887_H
#ifndef DIRECTORRENDERIMAGE_T3345E0254BC93C9546A5ED8A6C98F7435E0A281C_H
#define DIRECTORRENDERIMAGE_T3345E0254BC93C9546A5ED8A6C98F7435E0A281C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate_DirectorRenderImage
struct  DirectorRenderImage_t3345E0254BC93C9546A5ED8A6C98F7435E0A281C 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DirectorRenderImage_t3345E0254BC93C9546A5ED8A6C98F7435E0A281C__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIRECTORRENDERIMAGE_T3345E0254BC93C9546A5ED8A6C98F7435E0A281C_H
#ifndef ENDGRAPHICSJOBSAFTERSCRIPTLATEUPDATE_TF1E49A609B99DD2CB51D0CF259EA98D756428329_H
#define ENDGRAPHICSJOBSAFTERSCRIPTLATEUPDATE_TF1E49A609B99DD2CB51D0CF259EA98D756428329_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate_EndGraphicsJobsAfterScriptLateUpdate
struct  EndGraphicsJobsAfterScriptLateUpdate_tF1E49A609B99DD2CB51D0CF259EA98D756428329 
{
public:
	union
	{
		struct
		{
		};
		uint8_t EndGraphicsJobsAfterScriptLateUpdate_tF1E49A609B99DD2CB51D0CF259EA98D756428329__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENDGRAPHICSJOBSAFTERSCRIPTLATEUPDATE_TF1E49A609B99DD2CB51D0CF259EA98D756428329_H
#ifndef ENLIGHTENRUNTIMEUPDATE_T0E127B1521BECA2EC500152C52B0C233A30C2468_H
#define ENLIGHTENRUNTIMEUPDATE_T0E127B1521BECA2EC500152C52B0C233A30C2468_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate_EnlightenRuntimeUpdate
struct  EnlightenRuntimeUpdate_t0E127B1521BECA2EC500152C52B0C233A30C2468 
{
public:
	union
	{
		struct
		{
		};
		uint8_t EnlightenRuntimeUpdate_t0E127B1521BECA2EC500152C52B0C233A30C2468__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENLIGHTENRUNTIMEUPDATE_T0E127B1521BECA2EC500152C52B0C233A30C2468_H
#ifndef EXECUTEGAMECENTERCALLBACKS_T467F28230A59874C41F1C64F910FCD69387EE90E_H
#define EXECUTEGAMECENTERCALLBACKS_T467F28230A59874C41F1C64F910FCD69387EE90E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate_ExecuteGameCenterCallbacks
struct  ExecuteGameCenterCallbacks_t467F28230A59874C41F1C64F910FCD69387EE90E 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ExecuteGameCenterCallbacks_t467F28230A59874C41F1C64F910FCD69387EE90E__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXECUTEGAMECENTERCALLBACKS_T467F28230A59874C41F1C64F910FCD69387EE90E_H
#ifndef FINISHFRAMERENDERING_T6893FD5B11B29E45964FC1B7ACB96044CE1F96B5_H
#define FINISHFRAMERENDERING_T6893FD5B11B29E45964FC1B7ACB96044CE1F96B5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate_FinishFrameRendering
struct  FinishFrameRendering_t6893FD5B11B29E45964FC1B7ACB96044CE1F96B5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t FinishFrameRendering_t6893FD5B11B29E45964FC1B7ACB96044CE1F96B5__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FINISHFRAMERENDERING_T6893FD5B11B29E45964FC1B7ACB96044CE1F96B5_H
#ifndef GUICLEAREVENTS_T5EA09C530F0D51243FDD36BF5DC7C2BDC6A404ED_H
#define GUICLEAREVENTS_T5EA09C530F0D51243FDD36BF5DC7C2BDC6A404ED_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate_GUIClearEvents
struct  GUIClearEvents_t5EA09C530F0D51243FDD36BF5DC7C2BDC6A404ED 
{
public:
	union
	{
		struct
		{
		};
		uint8_t GUIClearEvents_t5EA09C530F0D51243FDD36BF5DC7C2BDC6A404ED__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUICLEAREVENTS_T5EA09C530F0D51243FDD36BF5DC7C2BDC6A404ED_H
#ifndef INPUTENDFRAME_TE7AE2B1BB082471507CFC806851C624088ABE260_H
#define INPUTENDFRAME_TE7AE2B1BB082471507CFC806851C624088ABE260_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate_InputEndFrame
struct  InputEndFrame_tE7AE2B1BB082471507CFC806851C624088ABE260 
{
public:
	union
	{
		struct
		{
		};
		uint8_t InputEndFrame_tE7AE2B1BB082471507CFC806851C624088ABE260__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUTENDFRAME_TE7AE2B1BB082471507CFC806851C624088ABE260_H
#ifndef MEMORYFRAMEMAINTENANCE_T0BF88737639E721CEB73FA4889D7317E7636D0C9_H
#define MEMORYFRAMEMAINTENANCE_T0BF88737639E721CEB73FA4889D7317E7636D0C9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate_MemoryFrameMaintenance
struct  MemoryFrameMaintenance_t0BF88737639E721CEB73FA4889D7317E7636D0C9 
{
public:
	union
	{
		struct
		{
		};
		uint8_t MemoryFrameMaintenance_t0BF88737639E721CEB73FA4889D7317E7636D0C9__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMORYFRAMEMAINTENANCE_T0BF88737639E721CEB73FA4889D7317E7636D0C9_H
#ifndef PARTICLESYSTEMENDUPDATEALL_T54355FCD73467AA0BA006B36C78E4B5B4491C5F0_H
#define PARTICLESYSTEMENDUPDATEALL_T54355FCD73467AA0BA006B36C78E4B5B4491C5F0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate_ParticleSystemEndUpdateAll
struct  ParticleSystemEndUpdateAll_t54355FCD73467AA0BA006B36C78E4B5B4491C5F0 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ParticleSystemEndUpdateAll_t54355FCD73467AA0BA006B36C78E4B5B4491C5F0__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARTICLESYSTEMENDUPDATEALL_T54355FCD73467AA0BA006B36C78E4B5B4491C5F0_H
#ifndef PHYSICSSKINNEDCLOTHBEGINUPDATE_T5719B08DAE9436304E01ACAECDB05427EC982D54_H
#define PHYSICSSKINNEDCLOTHBEGINUPDATE_T5719B08DAE9436304E01ACAECDB05427EC982D54_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate_PhysicsSkinnedClothBeginUpdate
struct  PhysicsSkinnedClothBeginUpdate_t5719B08DAE9436304E01ACAECDB05427EC982D54 
{
public:
	union
	{
		struct
		{
		};
		uint8_t PhysicsSkinnedClothBeginUpdate_t5719B08DAE9436304E01ACAECDB05427EC982D54__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PHYSICSSKINNEDCLOTHBEGINUPDATE_T5719B08DAE9436304E01ACAECDB05427EC982D54_H
#ifndef PHYSICSSKINNEDCLOTHFINISHUPDATE_T0F1B386C557255E8AF6CAB325C682582506556E8_H
#define PHYSICSSKINNEDCLOTHFINISHUPDATE_T0F1B386C557255E8AF6CAB325C682582506556E8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate_PhysicsSkinnedClothFinishUpdate
struct  PhysicsSkinnedClothFinishUpdate_t0F1B386C557255E8AF6CAB325C682582506556E8 
{
public:
	union
	{
		struct
		{
		};
		uint8_t PhysicsSkinnedClothFinishUpdate_t0F1B386C557255E8AF6CAB325C682582506556E8__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PHYSICSSKINNEDCLOTHFINISHUPDATE_T0F1B386C557255E8AF6CAB325C682582506556E8_H
#ifndef PLAYEREMITCANVASGEOMETRY_TF766699132854F46892FC92B8DF85B5093BDE2EB_H
#define PLAYEREMITCANVASGEOMETRY_TF766699132854F46892FC92B8DF85B5093BDE2EB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate_PlayerEmitCanvasGeometry
struct  PlayerEmitCanvasGeometry_tF766699132854F46892FC92B8DF85B5093BDE2EB 
{
public:
	union
	{
		struct
		{
		};
		uint8_t PlayerEmitCanvasGeometry_tF766699132854F46892FC92B8DF85B5093BDE2EB__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYEREMITCANVASGEOMETRY_TF766699132854F46892FC92B8DF85B5093BDE2EB_H
#ifndef PLAYERSENDFRAMECOMPLETE_T9F172FEA447751A82C98B959B65A5E8B8788F1E1_H
#define PLAYERSENDFRAMECOMPLETE_T9F172FEA447751A82C98B959B65A5E8B8788F1E1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate_PlayerSendFrameComplete
struct  PlayerSendFrameComplete_t9F172FEA447751A82C98B959B65A5E8B8788F1E1 
{
public:
	union
	{
		struct
		{
		};
		uint8_t PlayerSendFrameComplete_t9F172FEA447751A82C98B959B65A5E8B8788F1E1__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERSENDFRAMECOMPLETE_T9F172FEA447751A82C98B959B65A5E8B8788F1E1_H
#ifndef PLAYERSENDFRAMEPOSTPRESENT_T3B9B3F6866C8A67A5AD2C8FD8CE7544BF92F7936_H
#define PLAYERSENDFRAMEPOSTPRESENT_T3B9B3F6866C8A67A5AD2C8FD8CE7544BF92F7936_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate_PlayerSendFramePostPresent
struct  PlayerSendFramePostPresent_t3B9B3F6866C8A67A5AD2C8FD8CE7544BF92F7936 
{
public:
	union
	{
		struct
		{
		};
		uint8_t PlayerSendFramePostPresent_t3B9B3F6866C8A67A5AD2C8FD8CE7544BF92F7936__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERSENDFRAMEPOSTPRESENT_T3B9B3F6866C8A67A5AD2C8FD8CE7544BF92F7936_H
#ifndef PLAYERUPDATECANVASES_T49B2F8239228B8096C4AE5FC0731F51E5C6117FB_H
#define PLAYERUPDATECANVASES_T49B2F8239228B8096C4AE5FC0731F51E5C6117FB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate_PlayerUpdateCanvases
struct  PlayerUpdateCanvases_t49B2F8239228B8096C4AE5FC0731F51E5C6117FB 
{
public:
	union
	{
		struct
		{
		};
		uint8_t PlayerUpdateCanvases_t49B2F8239228B8096C4AE5FC0731F51E5C6117FB__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERUPDATECANVASES_T49B2F8239228B8096C4AE5FC0731F51E5C6117FB_H
#ifndef PRESENTAFTERDRAW_T83E0606C786BDFBBAE7C7AD52530A105079CC272_H
#define PRESENTAFTERDRAW_T83E0606C786BDFBBAE7C7AD52530A105079CC272_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate_PresentAfterDraw
struct  PresentAfterDraw_t83E0606C786BDFBBAE7C7AD52530A105079CC272 
{
public:
	union
	{
		struct
		{
		};
		uint8_t PresentAfterDraw_t83E0606C786BDFBBAE7C7AD52530A105079CC272__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRESENTAFTERDRAW_T83E0606C786BDFBBAE7C7AD52530A105079CC272_H
#ifndef PROCESSWEBSENDMESSAGES_T8F86BF4455C109A1F054609D74FC0E23ADE1C158_H
#define PROCESSWEBSENDMESSAGES_T8F86BF4455C109A1F054609D74FC0E23ADE1C158_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate_ProcessWebSendMessages
struct  ProcessWebSendMessages_t8F86BF4455C109A1F054609D74FC0E23ADE1C158 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ProcessWebSendMessages_t8F86BF4455C109A1F054609D74FC0E23ADE1C158__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROCESSWEBSENDMESSAGES_T8F86BF4455C109A1F054609D74FC0E23ADE1C158_H
#ifndef PROFILERENDFRAME_TF1FF6A7DE4F0E7F3681E7D0F329157B8CAFC02B8_H
#define PROFILERENDFRAME_TF1FF6A7DE4F0E7F3681E7D0F329157B8CAFC02B8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate_ProfilerEndFrame
struct  ProfilerEndFrame_tF1FF6A7DE4F0E7F3681E7D0F329157B8CAFC02B8 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ProfilerEndFrame_tF1FF6A7DE4F0E7F3681E7D0F329157B8CAFC02B8__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROFILERENDFRAME_TF1FF6A7DE4F0E7F3681E7D0F329157B8CAFC02B8_H
#ifndef PROFILERSYNCHRONIZESTATS_T4108C3FE92D72433F79E6DB785D16B74BDD71EAF_H
#define PROFILERSYNCHRONIZESTATS_T4108C3FE92D72433F79E6DB785D16B74BDD71EAF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate_ProfilerSynchronizeStats
struct  ProfilerSynchronizeStats_t4108C3FE92D72433F79E6DB785D16B74BDD71EAF 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ProfilerSynchronizeStats_t4108C3FE92D72433F79E6DB785D16B74BDD71EAF__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROFILERSYNCHRONIZESTATS_T4108C3FE92D72433F79E6DB785D16B74BDD71EAF_H
#ifndef RESETINPUTAXIS_T4B544F5072B205D69657274449C898238F863808_H
#define RESETINPUTAXIS_T4B544F5072B205D69657274449C898238F863808_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate_ResetInputAxis
struct  ResetInputAxis_t4B544F5072B205D69657274449C898238F863808 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ResetInputAxis_t4B544F5072B205D69657274449C898238F863808__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESETINPUTAXIS_T4B544F5072B205D69657274449C898238F863808_H
#ifndef SCRIPTRUNDELAYEDDYNAMICFRAMERATE_TE104884C892D5EB2425AE6A37D709D47BC184B6F_H
#define SCRIPTRUNDELAYEDDYNAMICFRAMERATE_TE104884C892D5EB2425AE6A37D709D47BC184B6F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate_ScriptRunDelayedDynamicFrameRate
struct  ScriptRunDelayedDynamicFrameRate_tE104884C892D5EB2425AE6A37D709D47BC184B6F 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ScriptRunDelayedDynamicFrameRate_tE104884C892D5EB2425AE6A37D709D47BC184B6F__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCRIPTRUNDELAYEDDYNAMICFRAMERATE_TE104884C892D5EB2425AE6A37D709D47BC184B6F_H
#ifndef SHADERHANDLEERRORS_TAE4F539805A8101E6290BA5C8453520CC21F8444_H
#define SHADERHANDLEERRORS_TAE4F539805A8101E6290BA5C8453520CC21F8444_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate_ShaderHandleErrors
struct  ShaderHandleErrors_tAE4F539805A8101E6290BA5C8453520CC21F8444 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ShaderHandleErrors_tAE4F539805A8101E6290BA5C8453520CC21F8444__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHADERHANDLEERRORS_TAE4F539805A8101E6290BA5C8453520CC21F8444_H
#ifndef SORTINGGROUPSUPDATE_TA50D0E757364F33606CF9A28337111EB6E2A7926_H
#define SORTINGGROUPSUPDATE_TA50D0E757364F33606CF9A28337111EB6E2A7926_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate_SortingGroupsUpdate
struct  SortingGroupsUpdate_tA50D0E757364F33606CF9A28337111EB6E2A7926 
{
public:
	union
	{
		struct
		{
		};
		uint8_t SortingGroupsUpdate_tA50D0E757364F33606CF9A28337111EB6E2A7926__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SORTINGGROUPSUPDATE_TA50D0E757364F33606CF9A28337111EB6E2A7926_H
#ifndef THREADEDLOADINGDEBUG_T963D36E6BFF6B9C26D8A24E8D5FA2DF884EDB49A_H
#define THREADEDLOADINGDEBUG_T963D36E6BFF6B9C26D8A24E8D5FA2DF884EDB49A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate_ThreadedLoadingDebug
struct  ThreadedLoadingDebug_t963D36E6BFF6B9C26D8A24E8D5FA2DF884EDB49A 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ThreadedLoadingDebug_t963D36E6BFF6B9C26D8A24E8D5FA2DF884EDB49A__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADEDLOADINGDEBUG_T963D36E6BFF6B9C26D8A24E8D5FA2DF884EDB49A_H
#ifndef TRIGGERENDOFFRAMECALLBACKS_TF9B550CBCF8866CE1B28E994EEC64FEEACAC67A8_H
#define TRIGGERENDOFFRAMECALLBACKS_TF9B550CBCF8866CE1B28E994EEC64FEEACAC67A8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate_TriggerEndOfFrameCallbacks
struct  TriggerEndOfFrameCallbacks_tF9B550CBCF8866CE1B28E994EEC64FEEACAC67A8 
{
public:
	union
	{
		struct
		{
		};
		uint8_t TriggerEndOfFrameCallbacks_tF9B550CBCF8866CE1B28E994EEC64FEEACAC67A8__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRIGGERENDOFFRAMECALLBACKS_TF9B550CBCF8866CE1B28E994EEC64FEEACAC67A8_H
#ifndef UPDATEALLRENDERERS_T75C75FD780EC3C39E2C1701FE3309F111C3FE0A2_H
#define UPDATEALLRENDERERS_T75C75FD780EC3C39E2C1701FE3309F111C3FE0A2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate_UpdateAllRenderers
struct  UpdateAllRenderers_t75C75FD780EC3C39E2C1701FE3309F111C3FE0A2 
{
public:
	union
	{
		struct
		{
		};
		uint8_t UpdateAllRenderers_t75C75FD780EC3C39E2C1701FE3309F111C3FE0A2__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPDATEALLRENDERERS_T75C75FD780EC3C39E2C1701FE3309F111C3FE0A2_H
#ifndef UPDATEALLSKINNEDMESHES_TADDB42406F9C4FCC034AA96752A6C03CF71323E5_H
#define UPDATEALLSKINNEDMESHES_TADDB42406F9C4FCC034AA96752A6C03CF71323E5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate_UpdateAllSkinnedMeshes
struct  UpdateAllSkinnedMeshes_tADDB42406F9C4FCC034AA96752A6C03CF71323E5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t UpdateAllSkinnedMeshes_tADDB42406F9C4FCC034AA96752A6C03CF71323E5__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPDATEALLSKINNEDMESHES_TADDB42406F9C4FCC034AA96752A6C03CF71323E5_H
#ifndef UPDATEAUDIO_T68A074027049DC4DD5A0B0E30008DF30F3A6F2FD_H
#define UPDATEAUDIO_T68A074027049DC4DD5A0B0E30008DF30F3A6F2FD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate_UpdateAudio
struct  UpdateAudio_t68A074027049DC4DD5A0B0E30008DF30F3A6F2FD 
{
public:
	union
	{
		struct
		{
		};
		uint8_t UpdateAudio_t68A074027049DC4DD5A0B0E30008DF30F3A6F2FD__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPDATEAUDIO_T68A074027049DC4DD5A0B0E30008DF30F3A6F2FD_H
#ifndef UPDATECANVASRECTTRANSFORM_TEC8BCF8BEC086DBD7B137894FC2D80583BF3490C_H
#define UPDATECANVASRECTTRANSFORM_TEC8BCF8BEC086DBD7B137894FC2D80583BF3490C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate_UpdateCanvasRectTransform
struct  UpdateCanvasRectTransform_tEC8BCF8BEC086DBD7B137894FC2D80583BF3490C 
{
public:
	union
	{
		struct
		{
		};
		uint8_t UpdateCanvasRectTransform_tEC8BCF8BEC086DBD7B137894FC2D80583BF3490C__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPDATECANVASRECTTRANSFORM_TEC8BCF8BEC086DBD7B137894FC2D80583BF3490C_H
#ifndef UPDATECAPTURESCREENSHOT_TCD1A4C5937E922991268364CC11D3A19C4F24450_H
#define UPDATECAPTURESCREENSHOT_TCD1A4C5937E922991268364CC11D3A19C4F24450_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate_UpdateCaptureScreenshot
struct  UpdateCaptureScreenshot_tCD1A4C5937E922991268364CC11D3A19C4F24450 
{
public:
	union
	{
		struct
		{
		};
		uint8_t UpdateCaptureScreenshot_tCD1A4C5937E922991268364CC11D3A19C4F24450__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPDATECAPTURESCREENSHOT_TCD1A4C5937E922991268364CC11D3A19C4F24450_H
#ifndef UPDATECUSTOMRENDERTEXTURES_T4C2C0B1F32265A3DB660FB828749E6A622095A3E_H
#define UPDATECUSTOMRENDERTEXTURES_T4C2C0B1F32265A3DB660FB828749E6A622095A3E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate_UpdateCustomRenderTextures
struct  UpdateCustomRenderTextures_t4C2C0B1F32265A3DB660FB828749E6A622095A3E 
{
public:
	union
	{
		struct
		{
		};
		uint8_t UpdateCustomRenderTextures_t4C2C0B1F32265A3DB660FB828749E6A622095A3E__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPDATECUSTOMRENDERTEXTURES_T4C2C0B1F32265A3DB660FB828749E6A622095A3E_H
#ifndef UPDATERECTTRANSFORM_T2D0563041FA661EC515A3E081EFFE268655F2808_H
#define UPDATERECTTRANSFORM_T2D0563041FA661EC515A3E081EFFE268655F2808_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate_UpdateRectTransform
struct  UpdateRectTransform_t2D0563041FA661EC515A3E081EFFE268655F2808 
{
public:
	union
	{
		struct
		{
		};
		uint8_t UpdateRectTransform_t2D0563041FA661EC515A3E081EFFE268655F2808__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPDATERECTTRANSFORM_T2D0563041FA661EC515A3E081EFFE268655F2808_H
#ifndef UPDATERESOLUTION_TC42B88920237206D134F4166CA3A8B8FC8745AB1_H
#define UPDATERESOLUTION_TC42B88920237206D134F4166CA3A8B8FC8745AB1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate_UpdateResolution
struct  UpdateResolution_tC42B88920237206D134F4166CA3A8B8FC8745AB1 
{
public:
	union
	{
		struct
		{
		};
		uint8_t UpdateResolution_tC42B88920237206D134F4166CA3A8B8FC8745AB1__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPDATERESOLUTION_TC42B88920237206D134F4166CA3A8B8FC8745AB1_H
#ifndef UPDATESUBSTANCE_T56F9E729626CD4E63134C2AE0A1F29A345E1F7E9_H
#define UPDATESUBSTANCE_T56F9E729626CD4E63134C2AE0A1F29A345E1F7E9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate_UpdateSubstance
struct  UpdateSubstance_t56F9E729626CD4E63134C2AE0A1F29A345E1F7E9 
{
public:
	union
	{
		struct
		{
		};
		uint8_t UpdateSubstance_t56F9E729626CD4E63134C2AE0A1F29A345E1F7E9__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPDATESUBSTANCE_T56F9E729626CD4E63134C2AE0A1F29A345E1F7E9_H
#ifndef UPDATEVIDEO_TD60EF1E63AAA33CBCC856A38082BC8E0632F5F3A_H
#define UPDATEVIDEO_TD60EF1E63AAA33CBCC856A38082BC8E0632F5F3A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate_UpdateVideo
struct  UpdateVideo_tD60EF1E63AAA33CBCC856A38082BC8E0632F5F3A 
{
public:
	union
	{
		struct
		{
		};
		uint8_t UpdateVideo_tD60EF1E63AAA33CBCC856A38082BC8E0632F5F3A__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPDATEVIDEO_TD60EF1E63AAA33CBCC856A38082BC8E0632F5F3A_H
#ifndef UPDATEVIDEOTEXTURES_T8864A4393628834CC76D8501F593F7562B32882B_H
#define UPDATEVIDEOTEXTURES_T8864A4393628834CC76D8501F593F7562B32882B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate_UpdateVideoTextures
struct  UpdateVideoTextures_t8864A4393628834CC76D8501F593F7562B32882B 
{
public:
	union
	{
		struct
		{
		};
		uint8_t UpdateVideoTextures_t8864A4393628834CC76D8501F593F7562B32882B__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPDATEVIDEOTEXTURES_T8864A4393628834CC76D8501F593F7562B32882B_H
#ifndef VFXUPDATE_TDBB6870227F433D7E16712117F30F166D76235A0_H
#define VFXUPDATE_TDBB6870227F433D7E16712117F30F166D76235A0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate_VFXUpdate
struct  VFXUpdate_tDBB6870227F433D7E16712117F30F166D76235A0 
{
public:
	union
	{
		struct
		{
		};
		uint8_t VFXUpdate_tDBB6870227F433D7E16712117F30F166D76235A0__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VFXUPDATE_TDBB6870227F433D7E16712117F30F166D76235A0_H
#ifndef XRPOSTPRESENT_TD0C09FF1E316A8C652EBD675121E0436221746CD_H
#define XRPOSTPRESENT_TD0C09FF1E316A8C652EBD675121E0436221746CD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate_XRPostPresent
struct  XRPostPresent_tD0C09FF1E316A8C652EBD675121E0436221746CD 
{
public:
	union
	{
		struct
		{
		};
		uint8_t XRPostPresent_tD0C09FF1E316A8C652EBD675121E0436221746CD__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XRPOSTPRESENT_TD0C09FF1E316A8C652EBD675121E0436221746CD_H
#ifndef PLAYERPREFSEXCEPTION_TFC087CD527E55947EEB584B893B96977392396DC_H
#define PLAYERPREFSEXCEPTION_TFC087CD527E55947EEB584B893B96977392396DC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PlayerPrefsException
struct  PlayerPrefsException_tFC087CD527E55947EEB584B893B96977392396DC  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERPREFSEXCEPTION_TFC087CD527E55947EEB584B893B96977392396DC_H
#ifndef PREFERBINARYSERIALIZATION_TB72B23C484386F00A6C3C4EC4F81B8E571B0C3D0_H
#define PREFERBINARYSERIALIZATION_TB72B23C484386F00A6C3C4EC4F81B8E571B0C3D0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PreferBinarySerialization
struct  PreferBinarySerialization_tB72B23C484386F00A6C3C4EC4F81B8E571B0C3D0  : public Attribute_t60F25EB48D5935E4C6C2BAF7F90F57A43528E469
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PREFERBINARYSERIALIZATION_TB72B23C484386F00A6C3C4EC4F81B8E571B0C3D0_H
#ifndef PROPERTYATTRIBUTE_T25BFFC093C9C96E3CCF4EAB36F5DC6F937B1FA54_H
#define PROPERTYATTRIBUTE_T25BFFC093C9C96E3CCF4EAB36F5DC6F937B1FA54_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PropertyAttribute
struct  PropertyAttribute_t25BFFC093C9C96E3CCF4EAB36F5DC6F937B1FA54  : public Attribute_t60F25EB48D5935E4C6C2BAF7F90F57A43528E469
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYATTRIBUTE_T25BFFC093C9C96E3CCF4EAB36F5DC6F937B1FA54_H
#ifndef PROPERTYNAME_T75EB843FEA2EC372093479A35C24364D2DF98529_H
#define PROPERTYNAME_T75EB843FEA2EC372093479A35C24364D2DF98529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PropertyName
struct  PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529 
{
public:
	// System.Int32 UnityEngine.PropertyName::id
	int32_t ___id_0;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
	{
		___id_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYNAME_T75EB843FEA2EC372093479A35C24364D2DF98529_H
#ifndef RANGEINT_T4480955B65C346F1B3A7A8AB74693AAB84D2988D_H
#define RANGEINT_T4480955B65C346F1B3A7A8AB74693AAB84D2988D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RangeInt
struct  RangeInt_t4480955B65C346F1B3A7A8AB74693AAB84D2988D 
{
public:
	// System.Int32 UnityEngine.RangeInt::start
	int32_t ___start_0;
	// System.Int32 UnityEngine.RangeInt::length
	int32_t ___length_1;

public:
	inline static int32_t get_offset_of_start_0() { return static_cast<int32_t>(offsetof(RangeInt_t4480955B65C346F1B3A7A8AB74693AAB84D2988D, ___start_0)); }
	inline int32_t get_start_0() const { return ___start_0; }
	inline int32_t* get_address_of_start_0() { return &___start_0; }
	inline void set_start_0(int32_t value)
	{
		___start_0 = value;
	}

	inline static int32_t get_offset_of_length_1() { return static_cast<int32_t>(offsetof(RangeInt_t4480955B65C346F1B3A7A8AB74693AAB84D2988D, ___length_1)); }
	inline int32_t get_length_1() const { return ___length_1; }
	inline int32_t* get_address_of_length_1() { return &___length_1; }
	inline void set_length_1(int32_t value)
	{
		___length_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANGEINT_T4480955B65C346F1B3A7A8AB74693AAB84D2988D_H
#ifndef RECT_T35B976DE901B5423C11705E156938EA27AB402CE_H
#define RECT_T35B976DE901B5423C11705E156938EA27AB402CE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rect
struct  Rect_t35B976DE901B5423C11705E156938EA27AB402CE 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECT_T35B976DE901B5423C11705E156938EA27AB402CE_H
#ifndef PRESERVEATTRIBUTE_T864F9DAA4DBF2524206AD57CE51AEB955702AA3F_H
#define PRESERVEATTRIBUTE_T864F9DAA4DBF2524206AD57CE51AEB955702AA3F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Scripting.PreserveAttribute
struct  PreserveAttribute_t864F9DAA4DBF2524206AD57CE51AEB955702AA3F  : public Attribute_t60F25EB48D5935E4C6C2BAF7F90F57A43528E469
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRESERVEATTRIBUTE_T864F9DAA4DBF2524206AD57CE51AEB955702AA3F_H
#ifndef SELECTIONBASEATTRIBUTE_T1E6DA918DE93CF97BAB00073419BF8FC43C84B33_H
#define SELECTIONBASEATTRIBUTE_T1E6DA918DE93CF97BAB00073419BF8FC43C84B33_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SelectionBaseAttribute
struct  SelectionBaseAttribute_t1E6DA918DE93CF97BAB00073419BF8FC43C84B33  : public Attribute_t60F25EB48D5935E4C6C2BAF7F90F57A43528E469
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SELECTIONBASEATTRIBUTE_T1E6DA918DE93CF97BAB00073419BF8FC43C84B33_H
#ifndef SERIALIZEFIELD_T2C7845E4134D47F2D89267492CB6B955DC4787A5_H
#define SERIALIZEFIELD_T2C7845E4134D47F2D89267492CB6B955DC4787A5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SerializeField
struct  SerializeField_t2C7845E4134D47F2D89267492CB6B955DC4787A5  : public Attribute_t60F25EB48D5935E4C6C2BAF7F90F57A43528E469
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZEFIELD_T2C7845E4134D47F2D89267492CB6B955DC4787A5_H
#ifndef SERIALIZEPRIVATEVARIABLES_TCB1ACE74D68078EE1D0C9AA6B67E4D8D1CD303CD_H
#define SERIALIZEPRIVATEVARIABLES_TCB1ACE74D68078EE1D0C9AA6B67E4D8D1CD303CD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SerializePrivateVariables
struct  SerializePrivateVariables_tCB1ACE74D68078EE1D0C9AA6B67E4D8D1CD303CD  : public Attribute_t60F25EB48D5935E4C6C2BAF7F90F57A43528E469
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZEPRIVATEVARIABLES_TCB1ACE74D68078EE1D0C9AA6B67E4D8D1CD303CD_H
#ifndef SORTINGLAYER_TC8689CC6D9E452F76E2729FD7CE8C1C2744F0203_H
#define SORTINGLAYER_TC8689CC6D9E452F76E2729FD7CE8C1C2744F0203_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SortingLayer
struct  SortingLayer_tC8689CC6D9E452F76E2729FD7CE8C1C2744F0203 
{
public:
	// System.Int32 UnityEngine.SortingLayer::m_Id
	int32_t ___m_Id_0;

public:
	inline static int32_t get_offset_of_m_Id_0() { return static_cast<int32_t>(offsetof(SortingLayer_tC8689CC6D9E452F76E2729FD7CE8C1C2744F0203, ___m_Id_0)); }
	inline int32_t get_m_Id_0() const { return ___m_Id_0; }
	inline int32_t* get_address_of_m_Id_0() { return &___m_Id_0; }
	inline void set_m_Id_0(int32_t value)
	{
		___m_Id_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SORTINGLAYER_TC8689CC6D9E452F76E2729FD7CE8C1C2744F0203_H
#ifndef UNITYAPICOMPATIBILITYVERSIONATTRIBUTE_TDC26EEE2EDF33E26A15AD9E28EC3225DF09738C8_H
#define UNITYAPICOMPATIBILITYVERSIONATTRIBUTE_TDC26EEE2EDF33E26A15AD9E28EC3225DF09738C8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UnityAPICompatibilityVersionAttribute
struct  UnityAPICompatibilityVersionAttribute_tDC26EEE2EDF33E26A15AD9E28EC3225DF09738C8  : public Attribute_t60F25EB48D5935E4C6C2BAF7F90F57A43528E469
{
public:
	// System.String UnityEngine.UnityAPICompatibilityVersionAttribute::_version
	String_t* ____version_0;

public:
	inline static int32_t get_offset_of__version_0() { return static_cast<int32_t>(offsetof(UnityAPICompatibilityVersionAttribute_tDC26EEE2EDF33E26A15AD9E28EC3225DF09738C8, ____version_0)); }
	inline String_t* get__version_0() const { return ____version_0; }
	inline String_t** get_address_of__version_0() { return &____version_0; }
	inline void set__version_0(String_t* value)
	{
		____version_0 = value;
		Il2CppCodeGenWriteBarrier((&____version_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYAPICOMPATIBILITYVERSIONATTRIBUTE_TDC26EEE2EDF33E26A15AD9E28EC3225DF09738C8_H
#ifndef UNITYEXCEPTION_T513F7D97037DB40AE78D7C3AAA2F9E011D050C28_H
#define UNITYEXCEPTION_T513F7D97037DB40AE78D7C3AAA2F9E011D050C28_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UnityException
struct  UnityException_t513F7D97037DB40AE78D7C3AAA2F9E011D050C28  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEXCEPTION_T513F7D97037DB40AE78D7C3AAA2F9E011D050C28_H
#ifndef VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#define VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#ifndef DELEGATE_T_H
#define DELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_tF588FE8D395F9A38FC7D222940F9B218441D21A9 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_8)); }
	inline DelegateData_tF588FE8D395F9A38FC7D222940F9B218441D21A9 * get_data_8() const { return ___data_8; }
	inline DelegateData_tF588FE8D395F9A38FC7D222940F9B218441D21A9 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_tF588FE8D395F9A38FC7D222940F9B218441D21A9 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T_H
#ifndef ASYNCOPERATION_T304C51ABED8AE734CC8DDDFE13013D8D5A44641D_H
#define ASYNCOPERATION_T304C51ABED8AE734CC8DDDFE13013D8D5A44641D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AsyncOperation
struct  AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tCBF754C290FAE894631BED8FD56E9E22C4C187F9 * ___m_completeCallback_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_completeCallback_1() { return static_cast<int32_t>(offsetof(AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D, ___m_completeCallback_1)); }
	inline Action_1_tCBF754C290FAE894631BED8FD56E9E22C4C187F9 * get_m_completeCallback_1() const { return ___m_completeCallback_1; }
	inline Action_1_tCBF754C290FAE894631BED8FD56E9E22C4C187F9 ** get_address_of_m_completeCallback_1() { return &___m_completeCallback_1; }
	inline void set_m_completeCallback_1(Action_1_tCBF754C290FAE894631BED8FD56E9E22C4C187F9 * value)
	{
		___m_completeCallback_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_completeCallback_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D_marshaled_pinvoke : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D_marshaled_com : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
#endif // ASYNCOPERATION_T304C51ABED8AE734CC8DDDFE13013D8D5A44641D_H
#ifndef PERSISTENTLISTENERMODE_T30AFC0420B2DFBF9B081AABBF799753412C44E4D_H
#define PERSISTENTLISTENERMODE_T30AFC0420B2DFBF9B081AABBF799753412C44E4D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.PersistentListenerMode
struct  PersistentListenerMode_t30AFC0420B2DFBF9B081AABBF799753412C44E4D 
{
public:
	// System.Int32 UnityEngine.Events.PersistentListenerMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PersistentListenerMode_t30AFC0420B2DFBF9B081AABBF799753412C44E4D, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERSISTENTLISTENERMODE_T30AFC0420B2DFBF9B081AABBF799753412C44E4D_H
#ifndef UNITYEVENTCALLSTATE_T9DAC0E82071EC326FCE98DC1470D18897713DD6D_H
#define UNITYEVENTCALLSTATE_T9DAC0E82071EC326FCE98DC1470D18897713DD6D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEventCallState
struct  UnityEventCallState_t9DAC0E82071EC326FCE98DC1470D18897713DD6D 
{
public:
	// System.Int32 UnityEngine.Events.UnityEventCallState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UnityEventCallState_t9DAC0E82071EC326FCE98DC1470D18897713DD6D, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENTCALLSTATE_T9DAC0E82071EC326FCE98DC1470D18897713DD6D_H
#ifndef PLAYERLOOPSYSTEM_T89BC6208BDD3B7C57FED7B0201341A7D4E846A6D_H
#define PLAYERLOOPSYSTEM_T89BC6208BDD3B7C57FED7B0201341A7D4E846A6D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.LowLevel.PlayerLoopSystem
struct  PlayerLoopSystem_t89BC6208BDD3B7C57FED7B0201341A7D4E846A6D 
{
public:
	// System.Type UnityEngine.Experimental.LowLevel.PlayerLoopSystem::type
	Type_t * ___type_0;
	// UnityEngine.Experimental.LowLevel.PlayerLoopSystem[] UnityEngine.Experimental.LowLevel.PlayerLoopSystem::subSystemList
	PlayerLoopSystemU5BU5D_t97939DCF6160BDDB681EB4155D9D1BEB1CB659A2* ___subSystemList_1;
	// UnityEngine.Experimental.LowLevel.PlayerLoopSystem_UpdateFunction UnityEngine.Experimental.LowLevel.PlayerLoopSystem::updateDelegate
	UpdateFunction_tE0936D5A5B8C3367F0E6E464162E1FB1E9F304A8 * ___updateDelegate_2;
	// System.IntPtr UnityEngine.Experimental.LowLevel.PlayerLoopSystem::updateFunction
	intptr_t ___updateFunction_3;
	// System.IntPtr UnityEngine.Experimental.LowLevel.PlayerLoopSystem::loopConditionFunction
	intptr_t ___loopConditionFunction_4;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(PlayerLoopSystem_t89BC6208BDD3B7C57FED7B0201341A7D4E846A6D, ___type_0)); }
	inline Type_t * get_type_0() const { return ___type_0; }
	inline Type_t ** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(Type_t * value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier((&___type_0), value);
	}

	inline static int32_t get_offset_of_subSystemList_1() { return static_cast<int32_t>(offsetof(PlayerLoopSystem_t89BC6208BDD3B7C57FED7B0201341A7D4E846A6D, ___subSystemList_1)); }
	inline PlayerLoopSystemU5BU5D_t97939DCF6160BDDB681EB4155D9D1BEB1CB659A2* get_subSystemList_1() const { return ___subSystemList_1; }
	inline PlayerLoopSystemU5BU5D_t97939DCF6160BDDB681EB4155D9D1BEB1CB659A2** get_address_of_subSystemList_1() { return &___subSystemList_1; }
	inline void set_subSystemList_1(PlayerLoopSystemU5BU5D_t97939DCF6160BDDB681EB4155D9D1BEB1CB659A2* value)
	{
		___subSystemList_1 = value;
		Il2CppCodeGenWriteBarrier((&___subSystemList_1), value);
	}

	inline static int32_t get_offset_of_updateDelegate_2() { return static_cast<int32_t>(offsetof(PlayerLoopSystem_t89BC6208BDD3B7C57FED7B0201341A7D4E846A6D, ___updateDelegate_2)); }
	inline UpdateFunction_tE0936D5A5B8C3367F0E6E464162E1FB1E9F304A8 * get_updateDelegate_2() const { return ___updateDelegate_2; }
	inline UpdateFunction_tE0936D5A5B8C3367F0E6E464162E1FB1E9F304A8 ** get_address_of_updateDelegate_2() { return &___updateDelegate_2; }
	inline void set_updateDelegate_2(UpdateFunction_tE0936D5A5B8C3367F0E6E464162E1FB1E9F304A8 * value)
	{
		___updateDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((&___updateDelegate_2), value);
	}

	inline static int32_t get_offset_of_updateFunction_3() { return static_cast<int32_t>(offsetof(PlayerLoopSystem_t89BC6208BDD3B7C57FED7B0201341A7D4E846A6D, ___updateFunction_3)); }
	inline intptr_t get_updateFunction_3() const { return ___updateFunction_3; }
	inline intptr_t* get_address_of_updateFunction_3() { return &___updateFunction_3; }
	inline void set_updateFunction_3(intptr_t value)
	{
		___updateFunction_3 = value;
	}

	inline static int32_t get_offset_of_loopConditionFunction_4() { return static_cast<int32_t>(offsetof(PlayerLoopSystem_t89BC6208BDD3B7C57FED7B0201341A7D4E846A6D, ___loopConditionFunction_4)); }
	inline intptr_t get_loopConditionFunction_4() const { return ___loopConditionFunction_4; }
	inline intptr_t* get_address_of_loopConditionFunction_4() { return &___loopConditionFunction_4; }
	inline void set_loopConditionFunction_4(intptr_t value)
	{
		___loopConditionFunction_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Experimental.LowLevel.PlayerLoopSystem
struct PlayerLoopSystem_t89BC6208BDD3B7C57FED7B0201341A7D4E846A6D_marshaled_pinvoke
{
	Type_t * ___type_0;
	PlayerLoopSystem_t89BC6208BDD3B7C57FED7B0201341A7D4E846A6D_marshaled_pinvoke* ___subSystemList_1;
	Il2CppMethodPointer ___updateDelegate_2;
	intptr_t ___updateFunction_3;
	intptr_t ___loopConditionFunction_4;
};
// Native definition for COM marshalling of UnityEngine.Experimental.LowLevel.PlayerLoopSystem
struct PlayerLoopSystem_t89BC6208BDD3B7C57FED7B0201341A7D4E846A6D_marshaled_com
{
	Type_t * ___type_0;
	PlayerLoopSystem_t89BC6208BDD3B7C57FED7B0201341A7D4E846A6D_marshaled_com* ___subSystemList_1;
	Il2CppMethodPointer ___updateDelegate_2;
	intptr_t ___updateFunction_3;
	intptr_t ___loopConditionFunction_4;
};
#endif // PLAYERLOOPSYSTEM_T89BC6208BDD3B7C57FED7B0201341A7D4E846A6D_H
#ifndef PLAYERLOOPSYSTEMINTERNAL_TE0D30607A74F1E0D695E5E83717C26308CB5C9E9_H
#define PLAYERLOOPSYSTEMINTERNAL_TE0D30607A74F1E0D695E5E83717C26308CB5C9E9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.LowLevel.PlayerLoopSystemInternal
struct  PlayerLoopSystemInternal_tE0D30607A74F1E0D695E5E83717C26308CB5C9E9 
{
public:
	// System.Type UnityEngine.Experimental.LowLevel.PlayerLoopSystemInternal::type
	Type_t * ___type_0;
	// UnityEngine.Experimental.LowLevel.PlayerLoopSystem_UpdateFunction UnityEngine.Experimental.LowLevel.PlayerLoopSystemInternal::updateDelegate
	UpdateFunction_tE0936D5A5B8C3367F0E6E464162E1FB1E9F304A8 * ___updateDelegate_1;
	// System.IntPtr UnityEngine.Experimental.LowLevel.PlayerLoopSystemInternal::updateFunction
	intptr_t ___updateFunction_2;
	// System.IntPtr UnityEngine.Experimental.LowLevel.PlayerLoopSystemInternal::loopConditionFunction
	intptr_t ___loopConditionFunction_3;
	// System.Int32 UnityEngine.Experimental.LowLevel.PlayerLoopSystemInternal::numSubSystems
	int32_t ___numSubSystems_4;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(PlayerLoopSystemInternal_tE0D30607A74F1E0D695E5E83717C26308CB5C9E9, ___type_0)); }
	inline Type_t * get_type_0() const { return ___type_0; }
	inline Type_t ** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(Type_t * value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier((&___type_0), value);
	}

	inline static int32_t get_offset_of_updateDelegate_1() { return static_cast<int32_t>(offsetof(PlayerLoopSystemInternal_tE0D30607A74F1E0D695E5E83717C26308CB5C9E9, ___updateDelegate_1)); }
	inline UpdateFunction_tE0936D5A5B8C3367F0E6E464162E1FB1E9F304A8 * get_updateDelegate_1() const { return ___updateDelegate_1; }
	inline UpdateFunction_tE0936D5A5B8C3367F0E6E464162E1FB1E9F304A8 ** get_address_of_updateDelegate_1() { return &___updateDelegate_1; }
	inline void set_updateDelegate_1(UpdateFunction_tE0936D5A5B8C3367F0E6E464162E1FB1E9F304A8 * value)
	{
		___updateDelegate_1 = value;
		Il2CppCodeGenWriteBarrier((&___updateDelegate_1), value);
	}

	inline static int32_t get_offset_of_updateFunction_2() { return static_cast<int32_t>(offsetof(PlayerLoopSystemInternal_tE0D30607A74F1E0D695E5E83717C26308CB5C9E9, ___updateFunction_2)); }
	inline intptr_t get_updateFunction_2() const { return ___updateFunction_2; }
	inline intptr_t* get_address_of_updateFunction_2() { return &___updateFunction_2; }
	inline void set_updateFunction_2(intptr_t value)
	{
		___updateFunction_2 = value;
	}

	inline static int32_t get_offset_of_loopConditionFunction_3() { return static_cast<int32_t>(offsetof(PlayerLoopSystemInternal_tE0D30607A74F1E0D695E5E83717C26308CB5C9E9, ___loopConditionFunction_3)); }
	inline intptr_t get_loopConditionFunction_3() const { return ___loopConditionFunction_3; }
	inline intptr_t* get_address_of_loopConditionFunction_3() { return &___loopConditionFunction_3; }
	inline void set_loopConditionFunction_3(intptr_t value)
	{
		___loopConditionFunction_3 = value;
	}

	inline static int32_t get_offset_of_numSubSystems_4() { return static_cast<int32_t>(offsetof(PlayerLoopSystemInternal_tE0D30607A74F1E0D695E5E83717C26308CB5C9E9, ___numSubSystems_4)); }
	inline int32_t get_numSubSystems_4() const { return ___numSubSystems_4; }
	inline int32_t* get_address_of_numSubSystems_4() { return &___numSubSystems_4; }
	inline void set_numSubSystems_4(int32_t value)
	{
		___numSubSystems_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Experimental.LowLevel.PlayerLoopSystemInternal
struct PlayerLoopSystemInternal_tE0D30607A74F1E0D695E5E83717C26308CB5C9E9_marshaled_pinvoke
{
	Type_t * ___type_0;
	Il2CppMethodPointer ___updateDelegate_1;
	intptr_t ___updateFunction_2;
	intptr_t ___loopConditionFunction_3;
	int32_t ___numSubSystems_4;
};
// Native definition for COM marshalling of UnityEngine.Experimental.LowLevel.PlayerLoopSystemInternal
struct PlayerLoopSystemInternal_tE0D30607A74F1E0D695E5E83717C26308CB5C9E9_marshaled_com
{
	Type_t * ___type_0;
	Il2CppMethodPointer ___updateDelegate_1;
	intptr_t ___updateFunction_2;
	intptr_t ___loopConditionFunction_3;
	int32_t ___numSubSystems_4;
};
#endif // PLAYERLOOPSYSTEMINTERNAL_TE0D30607A74F1E0D695E5E83717C26308CB5C9E9_H
#ifndef SCRIPTABLERENDERCONTEXT_TEB273FD29C26BEA887D85DCCAE9B10D1A521EE6D_H
#define SCRIPTABLERENDERCONTEXT_TEB273FD29C26BEA887D85DCCAE9B10D1A521EE6D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Rendering.ScriptableRenderContext
struct  ScriptableRenderContext_tEB273FD29C26BEA887D85DCCAE9B10D1A521EE6D 
{
public:
	// System.IntPtr UnityEngine.Experimental.Rendering.ScriptableRenderContext::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(ScriptableRenderContext_tEB273FD29C26BEA887D85DCCAE9B10D1A521EE6D, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCRIPTABLERENDERCONTEXT_TEB273FD29C26BEA887D85DCCAE9B10D1A521EE6D_H
#ifndef HIDEFLAGS_T30B57DC00548E963A569318C8F4A4123E7447E37_H
#define HIDEFLAGS_T30B57DC00548E963A569318C8F4A4123E7447E37_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.HideFlags
struct  HideFlags_t30B57DC00548E963A569318C8F4A4123E7447E37 
{
public:
	// System.Int32 UnityEngine.HideFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(HideFlags_t30B57DC00548E963A569318C8F4A4123E7447E37, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HIDEFLAGS_T30B57DC00548E963A569318C8F4A4123E7447E37_H
#ifndef OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#define OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#ifndef OPERATINGSYSTEMFAMILY_TB10B95DB611852B942F4B31CCD63B9955350F2EE_H
#define OPERATINGSYSTEMFAMILY_TB10B95DB611852B942F4B31CCD63B9955350F2EE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.OperatingSystemFamily
struct  OperatingSystemFamily_tB10B95DB611852B942F4B31CCD63B9955350F2EE 
{
public:
	// System.Int32 UnityEngine.OperatingSystemFamily::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(OperatingSystemFamily_tB10B95DB611852B942F4B31CCD63B9955350F2EE, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OPERATINGSYSTEMFAMILY_TB10B95DB611852B942F4B31CCD63B9955350F2EE_H
#ifndef RANGEATTRIBUTE_T6E0A9EC0A04C454D5243C82EFBFEC2D3E77F9C98_H
#define RANGEATTRIBUTE_T6E0A9EC0A04C454D5243C82EFBFEC2D3E77F9C98_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RangeAttribute
struct  RangeAttribute_t6E0A9EC0A04C454D5243C82EFBFEC2D3E77F9C98  : public PropertyAttribute_t25BFFC093C9C96E3CCF4EAB36F5DC6F937B1FA54
{
public:
	// System.Single UnityEngine.RangeAttribute::min
	float ___min_0;
	// System.Single UnityEngine.RangeAttribute::max
	float ___max_1;

public:
	inline static int32_t get_offset_of_min_0() { return static_cast<int32_t>(offsetof(RangeAttribute_t6E0A9EC0A04C454D5243C82EFBFEC2D3E77F9C98, ___min_0)); }
	inline float get_min_0() const { return ___min_0; }
	inline float* get_address_of_min_0() { return &___min_0; }
	inline void set_min_0(float value)
	{
		___min_0 = value;
	}

	inline static int32_t get_offset_of_max_1() { return static_cast<int32_t>(offsetof(RangeAttribute_t6E0A9EC0A04C454D5243C82EFBFEC2D3E77F9C98, ___max_1)); }
	inline float get_max_1() const { return ___max_1; }
	inline float* get_address_of_max_1() { return &___max_1; }
	inline void set_max_1(float value)
	{
		___max_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANGEATTRIBUTE_T6E0A9EC0A04C454D5243C82EFBFEC2D3E77F9C98_H
#ifndef RAY_TE2163D4CB3E6B267E29F8ABE41684490E4A614B2_H
#define RAY_TE2163D4CB3E6B267E29F8ABE41684490E4A614B2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Ray
struct  Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2, ___m_Origin_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2, ___m_Direction_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Direction_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAY_TE2163D4CB3E6B267E29F8ABE41684490E4A614B2_H
#ifndef REFLECTIONPROBEEVENT_TAD4C0C38E85136A37E2E3596DF3C052A62ACCC9B_H
#define REFLECTIONPROBEEVENT_TAD4C0C38E85136A37E2E3596DF3C052A62ACCC9B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ReflectionProbe_ReflectionProbeEvent
struct  ReflectionProbeEvent_tAD4C0C38E85136A37E2E3596DF3C052A62ACCC9B 
{
public:
	// System.Int32 UnityEngine.ReflectionProbe_ReflectionProbeEvent::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ReflectionProbeEvent_tAD4C0C38E85136A37E2E3596DF3C052A62ACCC9B, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFLECTIONPROBEEVENT_TAD4C0C38E85136A37E2E3596DF3C052A62ACCC9B_H
#ifndef RENDERTEXTURECREATIONFLAGS_TF63E06301E4BB4746F7E07759B359872BD4BFB1E_H
#define RENDERTEXTURECREATIONFLAGS_TF63E06301E4BB4746F7E07759B359872BD4BFB1E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RenderTextureCreationFlags
struct  RenderTextureCreationFlags_tF63E06301E4BB4746F7E07759B359872BD4BFB1E 
{
public:
	// System.Int32 UnityEngine.RenderTextureCreationFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RenderTextureCreationFlags_tF63E06301E4BB4746F7E07759B359872BD4BFB1E, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERTEXTURECREATIONFLAGS_TF63E06301E4BB4746F7E07759B359872BD4BFB1E_H
#ifndef RENDERTEXTUREFORMAT_T2AB1B77FBD247648292FBBE1182F12B5FC47AF85_H
#define RENDERTEXTUREFORMAT_T2AB1B77FBD247648292FBBE1182F12B5FC47AF85_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RenderTextureFormat
struct  RenderTextureFormat_t2AB1B77FBD247648292FBBE1182F12B5FC47AF85 
{
public:
	// System.Int32 UnityEngine.RenderTextureFormat::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RenderTextureFormat_t2AB1B77FBD247648292FBBE1182F12B5FC47AF85, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERTEXTUREFORMAT_T2AB1B77FBD247648292FBBE1182F12B5FC47AF85_H
#ifndef RENDERTEXTUREMEMORYLESS_T19E37ADD57C1F00D67146A2BB4521D06F370D2E9_H
#define RENDERTEXTUREMEMORYLESS_T19E37ADD57C1F00D67146A2BB4521D06F370D2E9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RenderTextureMemoryless
struct  RenderTextureMemoryless_t19E37ADD57C1F00D67146A2BB4521D06F370D2E9 
{
public:
	// System.Int32 UnityEngine.RenderTextureMemoryless::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RenderTextureMemoryless_t19E37ADD57C1F00D67146A2BB4521D06F370D2E9, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERTEXTUREMEMORYLESS_T19E37ADD57C1F00D67146A2BB4521D06F370D2E9_H
#ifndef SHADOWSAMPLINGMODE_T585A9BDECAC505FF19FF785F55CDD403A2E5DA73_H
#define SHADOWSAMPLINGMODE_T585A9BDECAC505FF19FF785F55CDD403A2E5DA73_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.ShadowSamplingMode
struct  ShadowSamplingMode_t585A9BDECAC505FF19FF785F55CDD403A2E5DA73 
{
public:
	// System.Int32 UnityEngine.Rendering.ShadowSamplingMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ShadowSamplingMode_t585A9BDECAC505FF19FF785F55CDD403A2E5DA73, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHADOWSAMPLINGMODE_T585A9BDECAC505FF19FF785F55CDD403A2E5DA73_H
#ifndef TEXTUREDIMENSION_T90D0E4110D3F4D062F3E8C0F69809BFBBDF8E19C_H
#define TEXTUREDIMENSION_T90D0E4110D3F4D062F3E8C0F69809BFBBDF8E19C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.TextureDimension
struct  TextureDimension_t90D0E4110D3F4D062F3E8C0F69809BFBBDF8E19C 
{
public:
	// System.Int32 UnityEngine.Rendering.TextureDimension::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TextureDimension_t90D0E4110D3F4D062F3E8C0F69809BFBBDF8E19C, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTUREDIMENSION_T90D0E4110D3F4D062F3E8C0F69809BFBBDF8E19C_H
#ifndef RUNTIMEINITIALIZELOADTYPE_T888FB9E422DBFD5C67D23B9AB2C0C6635DAAFC80_H
#define RUNTIMEINITIALIZELOADTYPE_T888FB9E422DBFD5C67D23B9AB2C0C6635DAAFC80_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RuntimeInitializeLoadType
struct  RuntimeInitializeLoadType_t888FB9E422DBFD5C67D23B9AB2C0C6635DAAFC80 
{
public:
	// System.Int32 UnityEngine.RuntimeInitializeLoadType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RuntimeInitializeLoadType_t888FB9E422DBFD5C67D23B9AB2C0C6635DAAFC80, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEINITIALIZELOADTYPE_T888FB9E422DBFD5C67D23B9AB2C0C6635DAAFC80_H
#ifndef SPACEATTRIBUTE_TA724C103FE786D2E773D89B2789C0C1F812376C2_H
#define SPACEATTRIBUTE_TA724C103FE786D2E773D89B2789C0C1F812376C2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SpaceAttribute
struct  SpaceAttribute_tA724C103FE786D2E773D89B2789C0C1F812376C2  : public PropertyAttribute_t25BFFC093C9C96E3CCF4EAB36F5DC6F937B1FA54
{
public:
	// System.Single UnityEngine.SpaceAttribute::height
	float ___height_0;

public:
	inline static int32_t get_offset_of_height_0() { return static_cast<int32_t>(offsetof(SpaceAttribute_tA724C103FE786D2E773D89B2789C0C1F812376C2, ___height_0)); }
	inline float get_height_0() const { return ___height_0; }
	inline float* get_address_of_height_0() { return &___height_0; }
	inline void set_height_0(float value)
	{
		___height_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPACEATTRIBUTE_TA724C103FE786D2E773D89B2789C0C1F812376C2_H
#ifndef TEXTAREAATTRIBUTE_T85045C366B3A3B41CE21984CDDE589E1A786E394_H
#define TEXTAREAATTRIBUTE_T85045C366B3A3B41CE21984CDDE589E1A786E394_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextAreaAttribute
struct  TextAreaAttribute_t85045C366B3A3B41CE21984CDDE589E1A786E394  : public PropertyAttribute_t25BFFC093C9C96E3CCF4EAB36F5DC6F937B1FA54
{
public:
	// System.Int32 UnityEngine.TextAreaAttribute::minLines
	int32_t ___minLines_0;
	// System.Int32 UnityEngine.TextAreaAttribute::maxLines
	int32_t ___maxLines_1;

public:
	inline static int32_t get_offset_of_minLines_0() { return static_cast<int32_t>(offsetof(TextAreaAttribute_t85045C366B3A3B41CE21984CDDE589E1A786E394, ___minLines_0)); }
	inline int32_t get_minLines_0() const { return ___minLines_0; }
	inline int32_t* get_address_of_minLines_0() { return &___minLines_0; }
	inline void set_minLines_0(int32_t value)
	{
		___minLines_0 = value;
	}

	inline static int32_t get_offset_of_maxLines_1() { return static_cast<int32_t>(offsetof(TextAreaAttribute_t85045C366B3A3B41CE21984CDDE589E1A786E394, ___maxLines_1)); }
	inline int32_t get_maxLines_1() const { return ___maxLines_1; }
	inline int32_t* get_address_of_maxLines_1() { return &___maxLines_1; }
	inline void set_maxLines_1(int32_t value)
	{
		___maxLines_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTAREAATTRIBUTE_T85045C366B3A3B41CE21984CDDE589E1A786E394_H
#ifndef TOOLTIPATTRIBUTE_T92811DE0164DF2D722334584EBEEE3EF15AD5E6C_H
#define TOOLTIPATTRIBUTE_T92811DE0164DF2D722334584EBEEE3EF15AD5E6C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TooltipAttribute
struct  TooltipAttribute_t92811DE0164DF2D722334584EBEEE3EF15AD5E6C  : public PropertyAttribute_t25BFFC093C9C96E3CCF4EAB36F5DC6F937B1FA54
{
public:
	// System.String UnityEngine.TooltipAttribute::tooltip
	String_t* ___tooltip_0;

public:
	inline static int32_t get_offset_of_tooltip_0() { return static_cast<int32_t>(offsetof(TooltipAttribute_t92811DE0164DF2D722334584EBEEE3EF15AD5E6C, ___tooltip_0)); }
	inline String_t* get_tooltip_0() const { return ___tooltip_0; }
	inline String_t** get_address_of_tooltip_0() { return &___tooltip_0; }
	inline void set_tooltip_0(String_t* value)
	{
		___tooltip_0 = value;
		Il2CppCodeGenWriteBarrier((&___tooltip_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOOLTIPATTRIBUTE_T92811DE0164DF2D722334584EBEEE3EF15AD5E6C_H
#ifndef TOUCHSCREENKEYBOARDTYPE_TDD21D45735F3021BF4C6C7C1A660ABF03EBCE602_H
#define TOUCHSCREENKEYBOARDTYPE_TDD21D45735F3021BF4C6C7C1A660ABF03EBCE602_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TouchScreenKeyboardType
struct  TouchScreenKeyboardType_tDD21D45735F3021BF4C6C7C1A660ABF03EBCE602 
{
public:
	// System.Int32 UnityEngine.TouchScreenKeyboardType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TouchScreenKeyboardType_tDD21D45735F3021BF4C6C7C1A660ABF03EBCE602, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOUCHSCREENKEYBOARDTYPE_TDD21D45735F3021BF4C6C7C1A660ABF03EBCE602_H
#ifndef TRACKEDREFERENCE_TE93229EF7055CBB35B2A98DD2493947428D06107_H
#define TRACKEDREFERENCE_TE93229EF7055CBB35B2A98DD2493947428D06107_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TrackedReference
struct  TrackedReference_tE93229EF7055CBB35B2A98DD2493947428D06107  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.TrackedReference::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(TrackedReference_tE93229EF7055CBB35B2A98DD2493947428D06107, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.TrackedReference
struct TrackedReference_tE93229EF7055CBB35B2A98DD2493947428D06107_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.TrackedReference
struct TrackedReference_tE93229EF7055CBB35B2A98DD2493947428D06107_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // TRACKEDREFERENCE_TE93229EF7055CBB35B2A98DD2493947428D06107_H
#ifndef VRTEXTUREUSAGE_T2D7C2397ABF03DD28086B969100F7D91DDD978A0_H
#define VRTEXTUREUSAGE_T2D7C2397ABF03DD28086B969100F7D91DDD978A0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.VRTextureUsage
struct  VRTextureUsage_t2D7C2397ABF03DD28086B969100F7D91DDD978A0 
{
public:
	// System.Int32 UnityEngine.VRTextureUsage::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(VRTextureUsage_t2D7C2397ABF03DD28086B969100F7D91DDD978A0, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VRTEXTUREUSAGE_T2D7C2397ABF03DD28086B969100F7D91DDD978A0_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
#ifndef COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#define COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#ifndef COMPUTESHADER_TF8B65214DC8C7C124C01984EB5CCD28F55C85B2A_H
#define COMPUTESHADER_TF8B65214DC8C7C124C01984EB5CCD28F55C85B2A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ComputeShader
struct  ComputeShader_tF8B65214DC8C7C124C01984EB5CCD28F55C85B2A  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPUTESHADER_TF8B65214DC8C7C124C01984EB5CCD28F55C85B2A_H
#ifndef RENDERTEXTUREDESCRIPTOR_T74FEC57A54F89E11748E1865F7DCA3565BFAF58E_H
#define RENDERTEXTUREDESCRIPTOR_T74FEC57A54F89E11748E1865F7DCA3565BFAF58E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RenderTextureDescriptor
struct  RenderTextureDescriptor_t74FEC57A54F89E11748E1865F7DCA3565BFAF58E 
{
public:
	// System.Int32 UnityEngine.RenderTextureDescriptor::<width>k__BackingField
	int32_t ___U3CwidthU3Ek__BackingField_0;
	// System.Int32 UnityEngine.RenderTextureDescriptor::<height>k__BackingField
	int32_t ___U3CheightU3Ek__BackingField_1;
	// System.Int32 UnityEngine.RenderTextureDescriptor::<msaaSamples>k__BackingField
	int32_t ___U3CmsaaSamplesU3Ek__BackingField_2;
	// System.Int32 UnityEngine.RenderTextureDescriptor::<volumeDepth>k__BackingField
	int32_t ___U3CvolumeDepthU3Ek__BackingField_3;
	// UnityEngine.RenderTextureFormat UnityEngine.RenderTextureDescriptor::<colorFormat>k__BackingField
	int32_t ___U3CcolorFormatU3Ek__BackingField_4;
	// System.Int32 UnityEngine.RenderTextureDescriptor::_depthBufferBits
	int32_t ____depthBufferBits_5;
	// UnityEngine.Rendering.TextureDimension UnityEngine.RenderTextureDescriptor::<dimension>k__BackingField
	int32_t ___U3CdimensionU3Ek__BackingField_7;
	// UnityEngine.Rendering.ShadowSamplingMode UnityEngine.RenderTextureDescriptor::<shadowSamplingMode>k__BackingField
	int32_t ___U3CshadowSamplingModeU3Ek__BackingField_8;
	// UnityEngine.VRTextureUsage UnityEngine.RenderTextureDescriptor::<vrUsage>k__BackingField
	int32_t ___U3CvrUsageU3Ek__BackingField_9;
	// UnityEngine.RenderTextureCreationFlags UnityEngine.RenderTextureDescriptor::_flags
	int32_t ____flags_10;
	// UnityEngine.RenderTextureMemoryless UnityEngine.RenderTextureDescriptor::<memoryless>k__BackingField
	int32_t ___U3CmemorylessU3Ek__BackingField_11;

public:
	inline static int32_t get_offset_of_U3CwidthU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t74FEC57A54F89E11748E1865F7DCA3565BFAF58E, ___U3CwidthU3Ek__BackingField_0)); }
	inline int32_t get_U3CwidthU3Ek__BackingField_0() const { return ___U3CwidthU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CwidthU3Ek__BackingField_0() { return &___U3CwidthU3Ek__BackingField_0; }
	inline void set_U3CwidthU3Ek__BackingField_0(int32_t value)
	{
		___U3CwidthU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CheightU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t74FEC57A54F89E11748E1865F7DCA3565BFAF58E, ___U3CheightU3Ek__BackingField_1)); }
	inline int32_t get_U3CheightU3Ek__BackingField_1() const { return ___U3CheightU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CheightU3Ek__BackingField_1() { return &___U3CheightU3Ek__BackingField_1; }
	inline void set_U3CheightU3Ek__BackingField_1(int32_t value)
	{
		___U3CheightU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CmsaaSamplesU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t74FEC57A54F89E11748E1865F7DCA3565BFAF58E, ___U3CmsaaSamplesU3Ek__BackingField_2)); }
	inline int32_t get_U3CmsaaSamplesU3Ek__BackingField_2() const { return ___U3CmsaaSamplesU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CmsaaSamplesU3Ek__BackingField_2() { return &___U3CmsaaSamplesU3Ek__BackingField_2; }
	inline void set_U3CmsaaSamplesU3Ek__BackingField_2(int32_t value)
	{
		___U3CmsaaSamplesU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CvolumeDepthU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t74FEC57A54F89E11748E1865F7DCA3565BFAF58E, ___U3CvolumeDepthU3Ek__BackingField_3)); }
	inline int32_t get_U3CvolumeDepthU3Ek__BackingField_3() const { return ___U3CvolumeDepthU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CvolumeDepthU3Ek__BackingField_3() { return &___U3CvolumeDepthU3Ek__BackingField_3; }
	inline void set_U3CvolumeDepthU3Ek__BackingField_3(int32_t value)
	{
		___U3CvolumeDepthU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CcolorFormatU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t74FEC57A54F89E11748E1865F7DCA3565BFAF58E, ___U3CcolorFormatU3Ek__BackingField_4)); }
	inline int32_t get_U3CcolorFormatU3Ek__BackingField_4() const { return ___U3CcolorFormatU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CcolorFormatU3Ek__BackingField_4() { return &___U3CcolorFormatU3Ek__BackingField_4; }
	inline void set_U3CcolorFormatU3Ek__BackingField_4(int32_t value)
	{
		___U3CcolorFormatU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of__depthBufferBits_5() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t74FEC57A54F89E11748E1865F7DCA3565BFAF58E, ____depthBufferBits_5)); }
	inline int32_t get__depthBufferBits_5() const { return ____depthBufferBits_5; }
	inline int32_t* get_address_of__depthBufferBits_5() { return &____depthBufferBits_5; }
	inline void set__depthBufferBits_5(int32_t value)
	{
		____depthBufferBits_5 = value;
	}

	inline static int32_t get_offset_of_U3CdimensionU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t74FEC57A54F89E11748E1865F7DCA3565BFAF58E, ___U3CdimensionU3Ek__BackingField_7)); }
	inline int32_t get_U3CdimensionU3Ek__BackingField_7() const { return ___U3CdimensionU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3CdimensionU3Ek__BackingField_7() { return &___U3CdimensionU3Ek__BackingField_7; }
	inline void set_U3CdimensionU3Ek__BackingField_7(int32_t value)
	{
		___U3CdimensionU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CshadowSamplingModeU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t74FEC57A54F89E11748E1865F7DCA3565BFAF58E, ___U3CshadowSamplingModeU3Ek__BackingField_8)); }
	inline int32_t get_U3CshadowSamplingModeU3Ek__BackingField_8() const { return ___U3CshadowSamplingModeU3Ek__BackingField_8; }
	inline int32_t* get_address_of_U3CshadowSamplingModeU3Ek__BackingField_8() { return &___U3CshadowSamplingModeU3Ek__BackingField_8; }
	inline void set_U3CshadowSamplingModeU3Ek__BackingField_8(int32_t value)
	{
		___U3CshadowSamplingModeU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CvrUsageU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t74FEC57A54F89E11748E1865F7DCA3565BFAF58E, ___U3CvrUsageU3Ek__BackingField_9)); }
	inline int32_t get_U3CvrUsageU3Ek__BackingField_9() const { return ___U3CvrUsageU3Ek__BackingField_9; }
	inline int32_t* get_address_of_U3CvrUsageU3Ek__BackingField_9() { return &___U3CvrUsageU3Ek__BackingField_9; }
	inline void set_U3CvrUsageU3Ek__BackingField_9(int32_t value)
	{
		___U3CvrUsageU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of__flags_10() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t74FEC57A54F89E11748E1865F7DCA3565BFAF58E, ____flags_10)); }
	inline int32_t get__flags_10() const { return ____flags_10; }
	inline int32_t* get_address_of__flags_10() { return &____flags_10; }
	inline void set__flags_10(int32_t value)
	{
		____flags_10 = value;
	}

	inline static int32_t get_offset_of_U3CmemorylessU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t74FEC57A54F89E11748E1865F7DCA3565BFAF58E, ___U3CmemorylessU3Ek__BackingField_11)); }
	inline int32_t get_U3CmemorylessU3Ek__BackingField_11() const { return ___U3CmemorylessU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CmemorylessU3Ek__BackingField_11() { return &___U3CmemorylessU3Ek__BackingField_11; }
	inline void set_U3CmemorylessU3Ek__BackingField_11(int32_t value)
	{
		___U3CmemorylessU3Ek__BackingField_11 = value;
	}
};

struct RenderTextureDescriptor_t74FEC57A54F89E11748E1865F7DCA3565BFAF58E_StaticFields
{
public:
	// System.Int32[] UnityEngine.RenderTextureDescriptor::depthFormatBits
	Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074* ___depthFormatBits_6;

public:
	inline static int32_t get_offset_of_depthFormatBits_6() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t74FEC57A54F89E11748E1865F7DCA3565BFAF58E_StaticFields, ___depthFormatBits_6)); }
	inline Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074* get_depthFormatBits_6() const { return ___depthFormatBits_6; }
	inline Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074** get_address_of_depthFormatBits_6() { return &___depthFormatBits_6; }
	inline void set_depthFormatBits_6(Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074* value)
	{
		___depthFormatBits_6 = value;
		Il2CppCodeGenWriteBarrier((&___depthFormatBits_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERTEXTUREDESCRIPTOR_T74FEC57A54F89E11748E1865F7DCA3565BFAF58E_H
#ifndef RESOURCEREQUEST_T22744D420D4DEF7C924A01EB117C0FEC6B07D486_H
#define RESOURCEREQUEST_T22744D420D4DEF7C924A01EB117C0FEC6B07D486_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ResourceRequest
struct  ResourceRequest_t22744D420D4DEF7C924A01EB117C0FEC6B07D486  : public AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D
{
public:
	// System.String UnityEngine.ResourceRequest::m_Path
	String_t* ___m_Path_2;
	// System.Type UnityEngine.ResourceRequest::m_Type
	Type_t * ___m_Type_3;

public:
	inline static int32_t get_offset_of_m_Path_2() { return static_cast<int32_t>(offsetof(ResourceRequest_t22744D420D4DEF7C924A01EB117C0FEC6B07D486, ___m_Path_2)); }
	inline String_t* get_m_Path_2() const { return ___m_Path_2; }
	inline String_t** get_address_of_m_Path_2() { return &___m_Path_2; }
	inline void set_m_Path_2(String_t* value)
	{
		___m_Path_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Path_2), value);
	}

	inline static int32_t get_offset_of_m_Type_3() { return static_cast<int32_t>(offsetof(ResourceRequest_t22744D420D4DEF7C924A01EB117C0FEC6B07D486, ___m_Type_3)); }
	inline Type_t * get_m_Type_3() const { return ___m_Type_3; }
	inline Type_t ** get_address_of_m_Type_3() { return &___m_Type_3; }
	inline void set_m_Type_3(Type_t * value)
	{
		___m_Type_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Type_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ResourceRequest
struct ResourceRequest_t22744D420D4DEF7C924A01EB117C0FEC6B07D486_marshaled_pinvoke : public AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D_marshaled_pinvoke
{
	char* ___m_Path_2;
	Type_t * ___m_Type_3;
};
// Native definition for COM marshalling of UnityEngine.ResourceRequest
struct ResourceRequest_t22744D420D4DEF7C924A01EB117C0FEC6B07D486_marshaled_com : public AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D_marshaled_com
{
	Il2CppChar* ___m_Path_2;
	Type_t * ___m_Type_3;
};
#endif // RESOURCEREQUEST_T22744D420D4DEF7C924A01EB117C0FEC6B07D486_H
#ifndef RUNTIMEINITIALIZEONLOADMETHODATTRIBUTE_T885895E16D3B9209752951C406B870126AA69D70_H
#define RUNTIMEINITIALIZEONLOADMETHODATTRIBUTE_T885895E16D3B9209752951C406B870126AA69D70_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RuntimeInitializeOnLoadMethodAttribute
struct  RuntimeInitializeOnLoadMethodAttribute_t885895E16D3B9209752951C406B870126AA69D70  : public PreserveAttribute_t864F9DAA4DBF2524206AD57CE51AEB955702AA3F
{
public:
	// UnityEngine.RuntimeInitializeLoadType UnityEngine.RuntimeInitializeOnLoadMethodAttribute::<loadType>k__BackingField
	int32_t ___U3CloadTypeU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CloadTypeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RuntimeInitializeOnLoadMethodAttribute_t885895E16D3B9209752951C406B870126AA69D70, ___U3CloadTypeU3Ek__BackingField_0)); }
	inline int32_t get_U3CloadTypeU3Ek__BackingField_0() const { return ___U3CloadTypeU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CloadTypeU3Ek__BackingField_0() { return &___U3CloadTypeU3Ek__BackingField_0; }
	inline void set_U3CloadTypeU3Ek__BackingField_0(int32_t value)
	{
		___U3CloadTypeU3Ek__BackingField_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEINITIALIZEONLOADMETHODATTRIBUTE_T885895E16D3B9209752951C406B870126AA69D70_H
#ifndef SCRIPTABLEOBJECT_TAB015486CEAB714DA0D5C1BA389B84FB90427734_H
#define SCRIPTABLEOBJECT_TAB015486CEAB714DA0D5C1BA389B84FB90427734_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScriptableObject
struct  ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_pinvoke : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_com : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
};
#endif // SCRIPTABLEOBJECT_TAB015486CEAB714DA0D5C1BA389B84FB90427734_H
#ifndef TEXTURE_T387FE83BB848001FD06B14707AEA6D5A0F6A95F4_H
#define TEXTURE_T387FE83BB848001FD06B14707AEA6D5A0F6A95F4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture
struct  Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE_T387FE83BB848001FD06B14707AEA6D5A0F6A95F4_H
#ifndef BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#define BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#ifndef CUBEMAP_TBFAC336F35E8D7499397F07A41505BD98F4491AF_H
#define CUBEMAP_TBFAC336F35E8D7499397F07A41505BD98F4491AF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Cubemap
struct  Cubemap_tBFAC336F35E8D7499397F07A41505BD98F4491AF  : public Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUBEMAP_TBFAC336F35E8D7499397F07A41505BD98F4491AF_H
#ifndef CUBEMAPARRAY_TE1DF6E1B9F1DBA0FE149BAB4A45779748212C5D5_H
#define CUBEMAPARRAY_TE1DF6E1B9F1DBA0FE149BAB4A45779748212C5D5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CubemapArray
struct  CubemapArray_tE1DF6E1B9F1DBA0FE149BAB4A45779748212C5D5  : public Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUBEMAPARRAY_TE1DF6E1B9F1DBA0FE149BAB4A45779748212C5D5_H
#ifndef UPDATEFUNCTION_TE0936D5A5B8C3367F0E6E464162E1FB1E9F304A8_H
#define UPDATEFUNCTION_TE0936D5A5B8C3367F0E6E464162E1FB1E9F304A8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.LowLevel.PlayerLoopSystem_UpdateFunction
struct  UpdateFunction_tE0936D5A5B8C3367F0E6E464162E1FB1E9F304A8  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPDATEFUNCTION_TE0936D5A5B8C3367F0E6E464162E1FB1E9F304A8_H
#ifndef RENDERTEXTURE_TBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6_H
#define RENDERTEXTURE_TBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RenderTexture
struct  RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6  : public Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERTEXTURE_TBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6_H
#ifndef TEXTURE2D_TBBF96AC337723E2EF156DF17E09D4379FD05DE1C_H
#define TEXTURE2D_TBBF96AC337723E2EF156DF17E09D4379FD05DE1C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture2D
struct  Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C  : public Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE2D_TBBF96AC337723E2EF156DF17E09D4379FD05DE1C_H
#ifndef TEXTURE2DARRAY_T78E2A31569610CAD1EA2115AD121B771C4E454B8_H
#define TEXTURE2DARRAY_T78E2A31569610CAD1EA2115AD121B771C4E454B8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture2DArray
struct  Texture2DArray_t78E2A31569610CAD1EA2115AD121B771C4E454B8  : public Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE2DARRAY_T78E2A31569610CAD1EA2115AD121B771C4E454B8_H
#ifndef TEXTURE3D_T041D3C554E80910E92D1EAAA85E0F70655FD66B4_H
#define TEXTURE3D_T041D3C554E80910E92D1EAAA85E0F70655FD66B4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture3D
struct  Texture3D_t041D3C554E80910E92D1EAAA85E0F70655FD66B4  : public Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE3D_T041D3C554E80910E92D1EAAA85E0F70655FD66B4_H
#ifndef REFLECTIONPROBE_T8CA59E05D8F20EDFE174BFF49CD3FB2DC62F207C_H
#define REFLECTIONPROBE_T8CA59E05D8F20EDFE174BFF49CD3FB2DC62F207C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ReflectionProbe
struct  ReflectionProbe_t8CA59E05D8F20EDFE174BFF49CD3FB2DC62F207C  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

struct ReflectionProbe_t8CA59E05D8F20EDFE174BFF49CD3FB2DC62F207C_StaticFields
{
public:
	// System.Action`2<UnityEngine.ReflectionProbe,UnityEngine.ReflectionProbe_ReflectionProbeEvent> UnityEngine.ReflectionProbe::reflectionProbeChanged
	Action_2_tAD3FD2CFE6F2B8404049F867BD190C4B64593314 * ___reflectionProbeChanged_4;
	// System.Action`1<UnityEngine.Cubemap> UnityEngine.ReflectionProbe::defaultReflectionSet
	Action_1_t72B039F88BDD04A9A013812982859354EDA03D63 * ___defaultReflectionSet_5;

public:
	inline static int32_t get_offset_of_reflectionProbeChanged_4() { return static_cast<int32_t>(offsetof(ReflectionProbe_t8CA59E05D8F20EDFE174BFF49CD3FB2DC62F207C_StaticFields, ___reflectionProbeChanged_4)); }
	inline Action_2_tAD3FD2CFE6F2B8404049F867BD190C4B64593314 * get_reflectionProbeChanged_4() const { return ___reflectionProbeChanged_4; }
	inline Action_2_tAD3FD2CFE6F2B8404049F867BD190C4B64593314 ** get_address_of_reflectionProbeChanged_4() { return &___reflectionProbeChanged_4; }
	inline void set_reflectionProbeChanged_4(Action_2_tAD3FD2CFE6F2B8404049F867BD190C4B64593314 * value)
	{
		___reflectionProbeChanged_4 = value;
		Il2CppCodeGenWriteBarrier((&___reflectionProbeChanged_4), value);
	}

	inline static int32_t get_offset_of_defaultReflectionSet_5() { return static_cast<int32_t>(offsetof(ReflectionProbe_t8CA59E05D8F20EDFE174BFF49CD3FB2DC62F207C_StaticFields, ___defaultReflectionSet_5)); }
	inline Action_1_t72B039F88BDD04A9A013812982859354EDA03D63 * get_defaultReflectionSet_5() const { return ___defaultReflectionSet_5; }
	inline Action_1_t72B039F88BDD04A9A013812982859354EDA03D63 ** get_address_of_defaultReflectionSet_5() { return &___defaultReflectionSet_5; }
	inline void set_defaultReflectionSet_5(Action_1_t72B039F88BDD04A9A013812982859354EDA03D63 * value)
	{
		___defaultReflectionSet_5 = value;
		Il2CppCodeGenWriteBarrier((&___defaultReflectionSet_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFLECTIONPROBE_T8CA59E05D8F20EDFE174BFF49CD3FB2DC62F207C_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1500 = { sizeof (UpdateRectTransform_t2D0563041FA661EC515A3E081EFFE268655F2808)+ sizeof (RuntimeObject), sizeof(UpdateRectTransform_t2D0563041FA661EC515A3E081EFFE268655F2808 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1501 = { sizeof (UpdateCanvasRectTransform_tEC8BCF8BEC086DBD7B137894FC2D80583BF3490C)+ sizeof (RuntimeObject), sizeof(UpdateCanvasRectTransform_tEC8BCF8BEC086DBD7B137894FC2D80583BF3490C ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1502 = { sizeof (PlayerUpdateCanvases_t49B2F8239228B8096C4AE5FC0731F51E5C6117FB)+ sizeof (RuntimeObject), sizeof(PlayerUpdateCanvases_t49B2F8239228B8096C4AE5FC0731F51E5C6117FB ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1503 = { sizeof (UpdateAudio_t68A074027049DC4DD5A0B0E30008DF30F3A6F2FD)+ sizeof (RuntimeObject), sizeof(UpdateAudio_t68A074027049DC4DD5A0B0E30008DF30F3A6F2FD ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1504 = { sizeof (UpdateVideo_tD60EF1E63AAA33CBCC856A38082BC8E0632F5F3A)+ sizeof (RuntimeObject), sizeof(UpdateVideo_tD60EF1E63AAA33CBCC856A38082BC8E0632F5F3A ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1505 = { sizeof (DirectorLateUpdate_tFD444276DAAFDF5385A0F9183B76A3A5A0E1E887)+ sizeof (RuntimeObject), sizeof(DirectorLateUpdate_tFD444276DAAFDF5385A0F9183B76A3A5A0E1E887 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1506 = { sizeof (ScriptRunDelayedDynamicFrameRate_tE104884C892D5EB2425AE6A37D709D47BC184B6F)+ sizeof (RuntimeObject), sizeof(ScriptRunDelayedDynamicFrameRate_tE104884C892D5EB2425AE6A37D709D47BC184B6F ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1507 = { sizeof (VFXUpdate_tDBB6870227F433D7E16712117F30F166D76235A0)+ sizeof (RuntimeObject), sizeof(VFXUpdate_tDBB6870227F433D7E16712117F30F166D76235A0 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1508 = { sizeof (ParticleSystemEndUpdateAll_t54355FCD73467AA0BA006B36C78E4B5B4491C5F0)+ sizeof (RuntimeObject), sizeof(ParticleSystemEndUpdateAll_t54355FCD73467AA0BA006B36C78E4B5B4491C5F0 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1509 = { sizeof (EndGraphicsJobsAfterScriptLateUpdate_tF1E49A609B99DD2CB51D0CF259EA98D756428329)+ sizeof (RuntimeObject), sizeof(EndGraphicsJobsAfterScriptLateUpdate_tF1E49A609B99DD2CB51D0CF259EA98D756428329 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1510 = { sizeof (UpdateSubstance_t56F9E729626CD4E63134C2AE0A1F29A345E1F7E9)+ sizeof (RuntimeObject), sizeof(UpdateSubstance_t56F9E729626CD4E63134C2AE0A1F29A345E1F7E9 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1511 = { sizeof (UpdateCustomRenderTextures_t4C2C0B1F32265A3DB660FB828749E6A622095A3E)+ sizeof (RuntimeObject), sizeof(UpdateCustomRenderTextures_t4C2C0B1F32265A3DB660FB828749E6A622095A3E ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1512 = { sizeof (UpdateAllRenderers_t75C75FD780EC3C39E2C1701FE3309F111C3FE0A2)+ sizeof (RuntimeObject), sizeof(UpdateAllRenderers_t75C75FD780EC3C39E2C1701FE3309F111C3FE0A2 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1513 = { sizeof (EnlightenRuntimeUpdate_t0E127B1521BECA2EC500152C52B0C233A30C2468)+ sizeof (RuntimeObject), sizeof(EnlightenRuntimeUpdate_t0E127B1521BECA2EC500152C52B0C233A30C2468 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1514 = { sizeof (UpdateAllSkinnedMeshes_tADDB42406F9C4FCC034AA96752A6C03CF71323E5)+ sizeof (RuntimeObject), sizeof(UpdateAllSkinnedMeshes_tADDB42406F9C4FCC034AA96752A6C03CF71323E5 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1515 = { sizeof (ProcessWebSendMessages_t8F86BF4455C109A1F054609D74FC0E23ADE1C158)+ sizeof (RuntimeObject), sizeof(ProcessWebSendMessages_t8F86BF4455C109A1F054609D74FC0E23ADE1C158 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1516 = { sizeof (SortingGroupsUpdate_tA50D0E757364F33606CF9A28337111EB6E2A7926)+ sizeof (RuntimeObject), sizeof(SortingGroupsUpdate_tA50D0E757364F33606CF9A28337111EB6E2A7926 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1517 = { sizeof (UpdateVideoTextures_t8864A4393628834CC76D8501F593F7562B32882B)+ sizeof (RuntimeObject), sizeof(UpdateVideoTextures_t8864A4393628834CC76D8501F593F7562B32882B ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1518 = { sizeof (DirectorRenderImage_t3345E0254BC93C9546A5ED8A6C98F7435E0A281C)+ sizeof (RuntimeObject), sizeof(DirectorRenderImage_t3345E0254BC93C9546A5ED8A6C98F7435E0A281C ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1519 = { sizeof (PlayerEmitCanvasGeometry_tF766699132854F46892FC92B8DF85B5093BDE2EB)+ sizeof (RuntimeObject), sizeof(PlayerEmitCanvasGeometry_tF766699132854F46892FC92B8DF85B5093BDE2EB ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1520 = { sizeof (FinishFrameRendering_t6893FD5B11B29E45964FC1B7ACB96044CE1F96B5)+ sizeof (RuntimeObject), sizeof(FinishFrameRendering_t6893FD5B11B29E45964FC1B7ACB96044CE1F96B5 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1521 = { sizeof (BatchModeUpdate_t05EC976E3F41B0647D199448D6090F27EE804CE0)+ sizeof (RuntimeObject), sizeof(BatchModeUpdate_t05EC976E3F41B0647D199448D6090F27EE804CE0 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1522 = { sizeof (PlayerSendFrameComplete_t9F172FEA447751A82C98B959B65A5E8B8788F1E1)+ sizeof (RuntimeObject), sizeof(PlayerSendFrameComplete_t9F172FEA447751A82C98B959B65A5E8B8788F1E1 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1523 = { sizeof (UpdateCaptureScreenshot_tCD1A4C5937E922991268364CC11D3A19C4F24450)+ sizeof (RuntimeObject), sizeof(UpdateCaptureScreenshot_tCD1A4C5937E922991268364CC11D3A19C4F24450 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1524 = { sizeof (PresentAfterDraw_t83E0606C786BDFBBAE7C7AD52530A105079CC272)+ sizeof (RuntimeObject), sizeof(PresentAfterDraw_t83E0606C786BDFBBAE7C7AD52530A105079CC272 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1525 = { sizeof (ClearImmediateRenderers_tC7DEB4F34AB987A9164EA8289C9FFEE94010CDA0)+ sizeof (RuntimeObject), sizeof(ClearImmediateRenderers_tC7DEB4F34AB987A9164EA8289C9FFEE94010CDA0 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1526 = { sizeof (XRPostPresent_tD0C09FF1E316A8C652EBD675121E0436221746CD)+ sizeof (RuntimeObject), sizeof(XRPostPresent_tD0C09FF1E316A8C652EBD675121E0436221746CD ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1527 = { sizeof (UpdateResolution_tC42B88920237206D134F4166CA3A8B8FC8745AB1)+ sizeof (RuntimeObject), sizeof(UpdateResolution_tC42B88920237206D134F4166CA3A8B8FC8745AB1 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1528 = { sizeof (InputEndFrame_tE7AE2B1BB082471507CFC806851C624088ABE260)+ sizeof (RuntimeObject), sizeof(InputEndFrame_tE7AE2B1BB082471507CFC806851C624088ABE260 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1529 = { sizeof (GUIClearEvents_t5EA09C530F0D51243FDD36BF5DC7C2BDC6A404ED)+ sizeof (RuntimeObject), sizeof(GUIClearEvents_t5EA09C530F0D51243FDD36BF5DC7C2BDC6A404ED ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1530 = { sizeof (ShaderHandleErrors_tAE4F539805A8101E6290BA5C8453520CC21F8444)+ sizeof (RuntimeObject), sizeof(ShaderHandleErrors_tAE4F539805A8101E6290BA5C8453520CC21F8444 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1531 = { sizeof (ResetInputAxis_t4B544F5072B205D69657274449C898238F863808)+ sizeof (RuntimeObject), sizeof(ResetInputAxis_t4B544F5072B205D69657274449C898238F863808 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1532 = { sizeof (ThreadedLoadingDebug_t963D36E6BFF6B9C26D8A24E8D5FA2DF884EDB49A)+ sizeof (RuntimeObject), sizeof(ThreadedLoadingDebug_t963D36E6BFF6B9C26D8A24E8D5FA2DF884EDB49A ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1533 = { sizeof (ProfilerSynchronizeStats_t4108C3FE92D72433F79E6DB785D16B74BDD71EAF)+ sizeof (RuntimeObject), sizeof(ProfilerSynchronizeStats_t4108C3FE92D72433F79E6DB785D16B74BDD71EAF ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1534 = { sizeof (MemoryFrameMaintenance_t0BF88737639E721CEB73FA4889D7317E7636D0C9)+ sizeof (RuntimeObject), sizeof(MemoryFrameMaintenance_t0BF88737639E721CEB73FA4889D7317E7636D0C9 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1535 = { sizeof (ExecuteGameCenterCallbacks_t467F28230A59874C41F1C64F910FCD69387EE90E)+ sizeof (RuntimeObject), sizeof(ExecuteGameCenterCallbacks_t467F28230A59874C41F1C64F910FCD69387EE90E ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1536 = { sizeof (ProfilerEndFrame_tF1FF6A7DE4F0E7F3681E7D0F329157B8CAFC02B8)+ sizeof (RuntimeObject), sizeof(ProfilerEndFrame_tF1FF6A7DE4F0E7F3681E7D0F329157B8CAFC02B8 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1537 = { sizeof (PlayerSendFramePostPresent_t3B9B3F6866C8A67A5AD2C8FD8CE7544BF92F7936)+ sizeof (RuntimeObject), sizeof(PlayerSendFramePostPresent_t3B9B3F6866C8A67A5AD2C8FD8CE7544BF92F7936 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1538 = { sizeof (PhysicsSkinnedClothBeginUpdate_t5719B08DAE9436304E01ACAECDB05427EC982D54)+ sizeof (RuntimeObject), sizeof(PhysicsSkinnedClothBeginUpdate_t5719B08DAE9436304E01ACAECDB05427EC982D54 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1539 = { sizeof (PhysicsSkinnedClothFinishUpdate_t0F1B386C557255E8AF6CAB325C682582506556E8)+ sizeof (RuntimeObject), sizeof(PhysicsSkinnedClothFinishUpdate_t0F1B386C557255E8AF6CAB325C682582506556E8 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1540 = { sizeof (TriggerEndOfFrameCallbacks_tF9B550CBCF8866CE1B28E994EEC64FEEACAC67A8)+ sizeof (RuntimeObject), sizeof(TriggerEndOfFrameCallbacks_tF9B550CBCF8866CE1B28E994EEC64FEEACAC67A8 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1541 = { sizeof (PlayerLoopSystemInternal_tE0D30607A74F1E0D695E5E83717C26308CB5C9E9)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1541[5] = 
{
	PlayerLoopSystemInternal_tE0D30607A74F1E0D695E5E83717C26308CB5C9E9::get_offset_of_type_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayerLoopSystemInternal_tE0D30607A74F1E0D695E5E83717C26308CB5C9E9::get_offset_of_updateDelegate_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayerLoopSystemInternal_tE0D30607A74F1E0D695E5E83717C26308CB5C9E9::get_offset_of_updateFunction_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayerLoopSystemInternal_tE0D30607A74F1E0D695E5E83717C26308CB5C9E9::get_offset_of_loopConditionFunction_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayerLoopSystemInternal_tE0D30607A74F1E0D695E5E83717C26308CB5C9E9::get_offset_of_numSubSystems_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1542 = { sizeof (PlayerLoopSystem_t89BC6208BDD3B7C57FED7B0201341A7D4E846A6D)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1542[5] = 
{
	PlayerLoopSystem_t89BC6208BDD3B7C57FED7B0201341A7D4E846A6D::get_offset_of_type_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayerLoopSystem_t89BC6208BDD3B7C57FED7B0201341A7D4E846A6D::get_offset_of_subSystemList_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayerLoopSystem_t89BC6208BDD3B7C57FED7B0201341A7D4E846A6D::get_offset_of_updateDelegate_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayerLoopSystem_t89BC6208BDD3B7C57FED7B0201341A7D4E846A6D::get_offset_of_updateFunction_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayerLoopSystem_t89BC6208BDD3B7C57FED7B0201341A7D4E846A6D::get_offset_of_loopConditionFunction_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1543 = { sizeof (UpdateFunction_tE0936D5A5B8C3367F0E6E464162E1FB1E9F304A8), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1544 = { sizeof (PlayerPrefsException_tFC087CD527E55947EEB584B893B96977392396DC), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1545 = { sizeof (PlayerPrefs_t6E16EDCF104A27E432EDE9AE648DFE7A0401C37C), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1546 = { sizeof (PropertyAttribute_t25BFFC093C9C96E3CCF4EAB36F5DC6F937B1FA54), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1547 = { sizeof (TooltipAttribute_t92811DE0164DF2D722334584EBEEE3EF15AD5E6C), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1547[1] = 
{
	TooltipAttribute_t92811DE0164DF2D722334584EBEEE3EF15AD5E6C::get_offset_of_tooltip_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1548 = { sizeof (SpaceAttribute_tA724C103FE786D2E773D89B2789C0C1F812376C2), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1548[1] = 
{
	SpaceAttribute_tA724C103FE786D2E773D89B2789C0C1F812376C2::get_offset_of_height_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1549 = { sizeof (RangeAttribute_t6E0A9EC0A04C454D5243C82EFBFEC2D3E77F9C98), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1549[2] = 
{
	RangeAttribute_t6E0A9EC0A04C454D5243C82EFBFEC2D3E77F9C98::get_offset_of_min_0(),
	RangeAttribute_t6E0A9EC0A04C454D5243C82EFBFEC2D3E77F9C98::get_offset_of_max_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1550 = { sizeof (TextAreaAttribute_t85045C366B3A3B41CE21984CDDE589E1A786E394), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1550[2] = 
{
	TextAreaAttribute_t85045C366B3A3B41CE21984CDDE589E1A786E394::get_offset_of_minLines_0(),
	TextAreaAttribute_t85045C366B3A3B41CE21984CDDE589E1A786E394::get_offset_of_maxLines_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1551 = { sizeof (PropertyNameUtils_t01310671910F3EA84F5FD7D29149378A4FD19D28), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1552 = { sizeof (PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529)+ sizeof (RuntimeObject), sizeof(PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1552[1] = 
{
	PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529::get_offset_of_id_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1553 = { sizeof (RangeInt_t4480955B65C346F1B3A7A8AB74693AAB84D2988D)+ sizeof (RuntimeObject), sizeof(RangeInt_t4480955B65C346F1B3A7A8AB74693AAB84D2988D ), 0, 0 };
extern const int32_t g_FieldOffsetTable1553[2] = 
{
	RangeInt_t4480955B65C346F1B3A7A8AB74693AAB84D2988D::get_offset_of_start_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RangeInt_t4480955B65C346F1B3A7A8AB74693AAB84D2988D::get_offset_of_length_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1554 = { sizeof (Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2)+ sizeof (RuntimeObject), sizeof(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1554[2] = 
{
	Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2::get_offset_of_m_Origin_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2::get_offset_of_m_Direction_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1555 = { sizeof (Rect_t35B976DE901B5423C11705E156938EA27AB402CE)+ sizeof (RuntimeObject), sizeof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE ), 0, 0 };
extern const int32_t g_FieldOffsetTable1555[4] = 
{
	Rect_t35B976DE901B5423C11705E156938EA27AB402CE::get_offset_of_m_XMin_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Rect_t35B976DE901B5423C11705E156938EA27AB402CE::get_offset_of_m_YMin_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Rect_t35B976DE901B5423C11705E156938EA27AB402CE::get_offset_of_m_Width_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Rect_t35B976DE901B5423C11705E156938EA27AB402CE::get_offset_of_m_Height_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1556 = { sizeof (ReflectionProbe_t8CA59E05D8F20EDFE174BFF49CD3FB2DC62F207C), -1, sizeof(ReflectionProbe_t8CA59E05D8F20EDFE174BFF49CD3FB2DC62F207C_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1556[2] = 
{
	ReflectionProbe_t8CA59E05D8F20EDFE174BFF49CD3FB2DC62F207C_StaticFields::get_offset_of_reflectionProbeChanged_4(),
	ReflectionProbe_t8CA59E05D8F20EDFE174BFF49CD3FB2DC62F207C_StaticFields::get_offset_of_defaultReflectionSet_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1557 = { sizeof (ReflectionProbeEvent_tAD4C0C38E85136A37E2E3596DF3C052A62ACCC9B)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1557[3] = 
{
	ReflectionProbeEvent_tAD4C0C38E85136A37E2E3596DF3C052A62ACCC9B::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1558 = { sizeof (ResourceRequest_t22744D420D4DEF7C924A01EB117C0FEC6B07D486), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1558[2] = 
{
	ResourceRequest_t22744D420D4DEF7C924A01EB117C0FEC6B07D486::get_offset_of_m_Path_2(),
	ResourceRequest_t22744D420D4DEF7C924A01EB117C0FEC6B07D486::get_offset_of_m_Type_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1559 = { sizeof (Resources_t516CB639AA1F373695D285E3F9274C65A70D3935), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1560 = { sizeof (RuntimeInitializeLoadType_t888FB9E422DBFD5C67D23B9AB2C0C6635DAAFC80)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1560[3] = 
{
	RuntimeInitializeLoadType_t888FB9E422DBFD5C67D23B9AB2C0C6635DAAFC80::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1561 = { sizeof (RuntimeInitializeOnLoadMethodAttribute_t885895E16D3B9209752951C406B870126AA69D70), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1561[1] = 
{
	RuntimeInitializeOnLoadMethodAttribute_t885895E16D3B9209752951C406B870126AA69D70::get_offset_of_U3CloadTypeU3Ek__BackingField_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1562 = { sizeof (ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734), sizeof(ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_pinvoke), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1563 = { sizeof (ScriptableRenderContext_tEB273FD29C26BEA887D85DCCAE9B10D1A521EE6D)+ sizeof (RuntimeObject), sizeof(ScriptableRenderContext_tEB273FD29C26BEA887D85DCCAE9B10D1A521EE6D ), 0, 0 };
extern const int32_t g_FieldOffsetTable1563[1] = 
{
	ScriptableRenderContext_tEB273FD29C26BEA887D85DCCAE9B10D1A521EE6D::get_offset_of_m_Ptr_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1564 = { sizeof (SelectionBaseAttribute_t1E6DA918DE93CF97BAB00073419BF8FC43C84B33), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1565 = { sizeof (SerializePrivateVariables_tCB1ACE74D68078EE1D0C9AA6B67E4D8D1CD303CD), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1566 = { sizeof (SerializeField_t2C7845E4134D47F2D89267492CB6B955DC4787A5), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1567 = { sizeof (PreferBinarySerialization_tB72B23C484386F00A6C3C4EC4F81B8E571B0C3D0), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1568 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1569 = { sizeof (ComputeShader_tF8B65214DC8C7C124C01984EB5CCD28F55C85B2A), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1570 = { sizeof (SortingLayer_tC8689CC6D9E452F76E2729FD7CE8C1C2744F0203)+ sizeof (RuntimeObject), sizeof(SortingLayer_tC8689CC6D9E452F76E2729FD7CE8C1C2744F0203 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1570[1] = 
{
	SortingLayer_tC8689CC6D9E452F76E2729FD7CE8C1C2744F0203::get_offset_of_m_Id_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1571 = { sizeof (StackTraceUtility_tEC8508315507A7E593CB689255A3FDACEE505C47), -1, sizeof(StackTraceUtility_tEC8508315507A7E593CB689255A3FDACEE505C47_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1571[1] = 
{
	StackTraceUtility_tEC8508315507A7E593CB689255A3FDACEE505C47_StaticFields::get_offset_of_projectFolder_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1572 = { sizeof (UnityException_t513F7D97037DB40AE78D7C3AAA2F9E011D050C28), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1573 = { sizeof (OperatingSystemFamily_tB10B95DB611852B942F4B31CCD63B9955350F2EE)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1573[5] = 
{
	OperatingSystemFamily_tB10B95DB611852B942F4B31CCD63B9955350F2EE::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1574 = { sizeof (SystemInfo_t94EEC32D450B80C297412606B6221043013A55D9), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1575 = { sizeof (Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1576 = { sizeof (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1577 = { sizeof (Cubemap_tBFAC336F35E8D7499397F07A41505BD98F4491AF), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1578 = { sizeof (Texture3D_t041D3C554E80910E92D1EAAA85E0F70655FD66B4), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1579 = { sizeof (Texture2DArray_t78E2A31569610CAD1EA2115AD121B771C4E454B8), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1580 = { sizeof (CubemapArray_tE1DF6E1B9F1DBA0FE149BAB4A45779748212C5D5), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1581 = { sizeof (RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1582 = { sizeof (RenderTextureDescriptor_t74FEC57A54F89E11748E1865F7DCA3565BFAF58E)+ sizeof (RuntimeObject), sizeof(RenderTextureDescriptor_t74FEC57A54F89E11748E1865F7DCA3565BFAF58E ), sizeof(RenderTextureDescriptor_t74FEC57A54F89E11748E1865F7DCA3565BFAF58E_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1582[12] = 
{
	RenderTextureDescriptor_t74FEC57A54F89E11748E1865F7DCA3565BFAF58E::get_offset_of_U3CwidthU3Ek__BackingField_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RenderTextureDescriptor_t74FEC57A54F89E11748E1865F7DCA3565BFAF58E::get_offset_of_U3CheightU3Ek__BackingField_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RenderTextureDescriptor_t74FEC57A54F89E11748E1865F7DCA3565BFAF58E::get_offset_of_U3CmsaaSamplesU3Ek__BackingField_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RenderTextureDescriptor_t74FEC57A54F89E11748E1865F7DCA3565BFAF58E::get_offset_of_U3CvolumeDepthU3Ek__BackingField_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RenderTextureDescriptor_t74FEC57A54F89E11748E1865F7DCA3565BFAF58E::get_offset_of_U3CcolorFormatU3Ek__BackingField_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RenderTextureDescriptor_t74FEC57A54F89E11748E1865F7DCA3565BFAF58E::get_offset_of__depthBufferBits_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RenderTextureDescriptor_t74FEC57A54F89E11748E1865F7DCA3565BFAF58E_StaticFields::get_offset_of_depthFormatBits_6(),
	RenderTextureDescriptor_t74FEC57A54F89E11748E1865F7DCA3565BFAF58E::get_offset_of_U3CdimensionU3Ek__BackingField_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RenderTextureDescriptor_t74FEC57A54F89E11748E1865F7DCA3565BFAF58E::get_offset_of_U3CshadowSamplingModeU3Ek__BackingField_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RenderTextureDescriptor_t74FEC57A54F89E11748E1865F7DCA3565BFAF58E::get_offset_of_U3CvrUsageU3Ek__BackingField_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RenderTextureDescriptor_t74FEC57A54F89E11748E1865F7DCA3565BFAF58E::get_offset_of__flags_10() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RenderTextureDescriptor_t74FEC57A54F89E11748E1865F7DCA3565BFAF58E::get_offset_of_U3CmemorylessU3Ek__BackingField_11() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1583 = { sizeof (Time_t0C14CAF02A532E5385B5A26F8367E384DC289F48), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1584 = { sizeof (TouchScreenKeyboardType_tDD21D45735F3021BF4C6C7C1A660ABF03EBCE602)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1584[12] = 
{
	TouchScreenKeyboardType_tDD21D45735F3021BF4C6C7C1A660ABF03EBCE602::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1585 = { sizeof (TrackedReference_tE93229EF7055CBB35B2A98DD2493947428D06107), sizeof(TrackedReference_tE93229EF7055CBB35B2A98DD2493947428D06107_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1585[1] = 
{
	TrackedReference_tE93229EF7055CBB35B2A98DD2493947428D06107::get_offset_of_m_Ptr_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1586 = { sizeof (UnhandledExceptionHandler_tF4F8A50BB2C5592177E80592BB181B43297850AC), -1, sizeof(UnhandledExceptionHandler_tF4F8A50BB2C5592177E80592BB181B43297850AC_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1586[1] = 
{
	UnhandledExceptionHandler_tF4F8A50BB2C5592177E80592BB181B43297850AC_StaticFields::get_offset_of_U3CU3Ef__mgU24cache0_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1587 = { sizeof (UnityAPICompatibilityVersionAttribute_tDC26EEE2EDF33E26A15AD9E28EC3225DF09738C8), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1587[1] = 
{
	UnityAPICompatibilityVersionAttribute_tDC26EEE2EDF33E26A15AD9E28EC3225DF09738C8::get_offset_of__version_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1588 = { sizeof (HideFlags_t30B57DC00548E963A569318C8F4A4123E7447E37)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1588[10] = 
{
	HideFlags_t30B57DC00548E963A569318C8F4A4123E7447E37::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1589 = { sizeof (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0), sizeof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke), sizeof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1589[4] = 
{
	Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0::get_offset_of_m_CachedPtr_0(),
	Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields::get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1(),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1590 = { sizeof (PersistentListenerMode_t30AFC0420B2DFBF9B081AABBF799753412C44E4D)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1590[8] = 
{
	PersistentListenerMode_t30AFC0420B2DFBF9B081AABBF799753412C44E4D::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1591 = { sizeof (ArgumentCache_t22D888CFC4D56B3F6BFB5EB6DBEB8996B857331C), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1591[6] = 
{
	ArgumentCache_t22D888CFC4D56B3F6BFB5EB6DBEB8996B857331C::get_offset_of_m_ObjectArgument_0(),
	ArgumentCache_t22D888CFC4D56B3F6BFB5EB6DBEB8996B857331C::get_offset_of_m_ObjectArgumentAssemblyTypeName_1(),
	ArgumentCache_t22D888CFC4D56B3F6BFB5EB6DBEB8996B857331C::get_offset_of_m_IntArgument_2(),
	ArgumentCache_t22D888CFC4D56B3F6BFB5EB6DBEB8996B857331C::get_offset_of_m_FloatArgument_3(),
	ArgumentCache_t22D888CFC4D56B3F6BFB5EB6DBEB8996B857331C::get_offset_of_m_StringArgument_4(),
	ArgumentCache_t22D888CFC4D56B3F6BFB5EB6DBEB8996B857331C::get_offset_of_m_BoolArgument_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1592 = { sizeof (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1593 = { sizeof (InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1593[1] = 
{
	InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC::get_offset_of_Delegate_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1594 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1594[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1595 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1595[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1596 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1596[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1597 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1597[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1598 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1598[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1599 = { sizeof (UnityEventCallState_t9DAC0E82071EC326FCE98DC1470D18897713DD6D)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1599[4] = 
{
	UnityEventCallState_t9DAC0E82071EC326FCE98DC1470D18897713DD6D::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
