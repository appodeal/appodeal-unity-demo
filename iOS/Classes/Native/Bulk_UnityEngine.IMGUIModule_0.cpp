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

template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action
struct Action_tC9F24EBA5075EA0322C6E0DC6BE2C7BDF962FB21;
// System.Action`1<UnityEngine.Font>
struct Action_1_t795662E553415ECF2DD0F8EEB9BA170C3670F37C;
// System.ArgumentException
struct ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60;
// System.AsyncCallback
struct AsyncCallback_t74ABD1277F711E7FBDCB00E169A63DEFD39E86A2;
// System.Byte
struct Byte_t4C3393E6E7EAD06B53234C05564190D9A2D7B149;
// System.Char[]
struct CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache,System.Collections.DictionaryEntry>
struct Transform_1_tFBD449AADDEE0D7044B2DEB99D5E2B5B8A815BC3;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.GUIStyle,System.Collections.DictionaryEntry>
struct Transform_1_tAC0A8D3274639A5BFC4969848447CA583B65D78E;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_tB118C56BE90A8B19D389651BC1B14D98E5384B14;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.GUIStyle>
struct ValueCollection_t0C6A26D50A89F916DF2650A7C132FFB1992070B9;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tF5BA1D0A4DCFDBD8F491243C61DDF399DB893D78;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>
struct Dictionary_2_t0F1A21E14D53E05B0F1D474060AC4B36995FBCA1;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tCF455EEDBEB1050374511D3875D3A1F51AF8889C;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>
struct Dictionary_2_tF2F04E1BE233EE6C4A6E90261E463B2A67A3FB6A;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t3230DBFFA468009DB20C200A718343B79AFDE7A5;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t7EF6C2A72A0576715DB11A57350CC476A9711639;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t862850E7A796A22A359C413FF4367484A404CAD2;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_tA58A56CD6B5AD6B2DF5F4934A46CEC9F681B71AD;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tE72A517BD14F52539FF78EA90F58D1387FEED660;
// System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>
struct List_1_t046427F3923444CF746C550FD96A3D0E4189D273;
// System.Collections.IDictionary
struct IDictionary_tD35B9437F08BE98D1E0B295CC73C48E168CAB316;
// System.Collections.IEnumerator
struct IEnumerator_t5F4AD85C6EA424A50584F741049EA645DBD8EEFC;
// System.DelegateData
struct DelegateData_tF588FE8D395F9A38FC7D222940F9B218441D21A9;
// System.Double
struct Double_t2011D65DAF7D1FCBE71DD4CBDFA69A8F24643159;
// System.Exception
struct Exception_t;
// System.Func`2<System.Exception,System.Boolean>
struct Func_2_tC816C5FDED4A7372C449E7660CAB9F94E2AC12F8;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_tDEF023F672D996A8F3621B1D60289785EBC389F2;
// System.Func`3<System.Int32,System.IntPtr,System.Boolean>
struct Func_3_tBD99633D8A18C43CC528ECE3F77E2F69900048A7;
// System.IAsyncResult
struct IAsyncResult_tDA33C24465239FB383C4C2CDAAC43B9AD3CB7F05;
// System.Int32[]
struct Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074;
// System.IntPtr[]
struct IntPtrU5BU5D_tB866BA24C91559CF299618E230043451CC7CF659;
// System.Object[]
struct ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D;
// System.Reflection.MemberFilter
struct MemberFilter_t0471813A7FF5255D21A8EA144C5CCF3325274CDE;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2;
// System.String
struct String_t;
// System.StringComparer
struct StringComparer_t2BD4D768665C1290582CAD7439D03599B59ACCCF;
// System.String[]
struct StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_tEF927658123F6CD4274B971442504A42AB6DE532;
// System.UInt16
struct UInt16_t1FF1E02102FB09D5656DF30E5299DD359E497E9B;
// System.Void
struct Void_tDB81A15FA2AB53E2401A76B745D215397B29F783;
// UnityEngine.Event
struct Event_t187FF6A6B357447B83EC2064823EE0AEC5263210;
// UnityEngine.Font
struct Font_t1EDE54AF557272BE314EB4B40EFA50CEB353CA26;
// UnityEngine.Font/FontTextureRebuildCallback
struct FontTextureRebuildCallback_tD700C63BB1A449E3A0464C81701E981677D3021C;
// UnityEngine.GUI/WindowFunction
struct WindowFunction_t9AF05117863D95AA9F85D497A3B9B53216708100;
// UnityEngine.GUIContent
struct GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0;
// UnityEngine.GUILayoutEntry
struct GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845;
// UnityEngine.GUILayoutEntry[]
struct GUILayoutEntryU5BU5D_tABE834456D53BDC45598E951D6FBF94E97BDADFD;
// UnityEngine.GUILayoutGroup
struct GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601;
// UnityEngine.GUILayoutOption
struct GUILayoutOption_t27A0221AC2F6F53E7B89310FD19F51C565D835A6;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_tAB2AD0A365DBD2277A04E397AE8E1430A022AF1B;
// UnityEngine.GUILayoutUtility/LayoutCache
struct LayoutCache_t0D14FE6139444D164ECA5D31E39E625D80077468;
// UnityEngine.GUILayoutUtility/LayoutCache[]
struct LayoutCacheU5BU5D_tCC79FFB8CEEFCBF8672942A4E0AC60D3A32FBEBE;
// UnityEngine.GUIScrollGroup
struct GUIScrollGroup_tF7FE45226FB28968F68A8D2428FE9EA7DC5B18EE;
// UnityEngine.GUISettings
struct GUISettings_tA863524720A3C984BAE56598D922F2C04DC80EF4;
// UnityEngine.GUISkin
struct GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7;
// UnityEngine.GUISkin/SkinChangedDelegate
struct SkinChangedDelegate_tAB4CEEA8C8A0BDCFD51C9624AE173C46A40135D8;
// UnityEngine.GUIStyle
struct GUIStyle_t671F175A201A19166385EE3392292A5F50070572;
// UnityEngine.GUIStyleState
struct GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5;
// UnityEngine.GUIStyle[]
struct GUIStyleU5BU5D_t2F343713D6ADFF41BBCF1D17BAE79F51BD745DBB;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.RectOffset
struct RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A;
// UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734;
// UnityEngine.ScrollViewState
struct ScrollViewState_t738AAD89973B4E764B6F977945263C24A881428E;
// UnityEngine.SliderState
struct SliderState_t6081D6F2CF6D0F1A13B2A2D255671B4053EC52CB;
// UnityEngine.TextEditor
struct TextEditor_t72CB6095A5C38226E08CD8073D5B6AD98579D440;
// UnityEngine.Texture
struct Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4;
// UnityEngine.Texture2D
struct Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_t2A69F85698E9780470181532D3F2BC903623FD90;
// UnityEngineInternal.GenericStack
struct GenericStack_tC59D21E8DBC50F3C608479C942200AC44CA2D5BC;

extern RuntimeClass* ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60_il2cpp_TypeInfo_var;
extern RuntimeClass* DateTime_t816BBD9125EA02B42B87CB07643FC5F803391DA2_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t0F1A21E14D53E05B0F1D474060AC4B36995FBCA1_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_tF2F04E1BE233EE6C4A6E90261E463B2A67A3FB6A_il2cpp_TypeInfo_var;
extern RuntimeClass* Enumerator_t7CFB6C06FEABB756D0C0A1BA202A13F5091958A6_il2cpp_TypeInfo_var;
extern RuntimeClass* EventModifiers_tC34E3018F3697001F894187AF6E9E63D7E203061_il2cpp_TypeInfo_var;
extern RuntimeClass* EventType_t3D3937E705A4506226002DAB22071B7B181DA57B_il2cpp_TypeInfo_var;
extern RuntimeClass* Event_t187FF6A6B357447B83EC2064823EE0AEC5263210_il2cpp_TypeInfo_var;
extern RuntimeClass* ExitGUIException_t6AD1987AE1D23E0E774F9BEA41F30AE4CE378F07_il2cpp_TypeInfo_var;
extern RuntimeClass* GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0_il2cpp_TypeInfo_var;
extern RuntimeClass* GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845_il2cpp_TypeInfo_var;
extern RuntimeClass* GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601_il2cpp_TypeInfo_var;
extern RuntimeClass* GUILayoutOptionU5BU5D_tAB2AD0A365DBD2277A04E397AE8E1430A022AF1B_il2cpp_TypeInfo_var;
extern RuntimeClass* GUILayoutOption_t27A0221AC2F6F53E7B89310FD19F51C565D835A6_il2cpp_TypeInfo_var;
extern RuntimeClass* GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_il2cpp_TypeInfo_var;
extern RuntimeClass* GUISettings_tA863524720A3C984BAE56598D922F2C04DC80EF4_il2cpp_TypeInfo_var;
extern RuntimeClass* GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7_il2cpp_TypeInfo_var;
extern RuntimeClass* GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_il2cpp_TypeInfo_var;
extern RuntimeClass* GUIStyleU5BU5D_t2F343713D6ADFF41BBCF1D17BAE79F51BD745DBB_il2cpp_TypeInfo_var;
extern RuntimeClass* GUIStyle_t671F175A201A19166385EE3392292A5F50070572_il2cpp_TypeInfo_var;
extern RuntimeClass* GUITargetAttribute_tA23DD43B1D91AF11499A0320EBAAC900A35FC4B8_il2cpp_TypeInfo_var;
extern RuntimeClass* GUIUtility_t943494CC50E876A4A08ECD471C06E23D52E5E5BA_il2cpp_TypeInfo_var;
extern RuntimeClass* GUI_t3E5CBC6B113E392EBBE1453DEF2B7CD020F345AA_il2cpp_TypeInfo_var;
extern RuntimeClass* GenericStack_tC59D21E8DBC50F3C608479C942200AC44CA2D5BC_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_tC16F64335CE8B56D99229DE94BB3A876ED55FE87_il2cpp_TypeInfo_var;
extern RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
extern RuntimeClass* KeyCode_tC93EA87C5A6901160B583ADFCD3EF6726570DC3C_il2cpp_TypeInfo_var;
extern RuntimeClass* LayoutCache_t0D14FE6139444D164ECA5D31E39E625D80077468_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t046427F3923444CF746C550FD96A3D0E4189D273_il2cpp_TypeInfo_var;
extern RuntimeClass* Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
extern RuntimeClass* RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A_il2cpp_TypeInfo_var;
extern RuntimeClass* Single_tF2613CF3F3AF0E8BEBC3CE8AD41479C44E6075DB_il2cpp_TypeInfo_var;
extern RuntimeClass* StringComparer_t2BD4D768665C1290582CAD7439D03599B59ACCCF_il2cpp_TypeInfo_var;
extern RuntimeClass* StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* TargetInvocationException_t23A3E9F5590EAF5E9831C51F9E3A5EF4CE868077_il2cpp_TypeInfo_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral00CE3E1623671A834728138CD689D176F0000CEB;
extern String_t* _stringLiteral047A7EA97FB24BA0C74949892C1880E97AC0FB35;
extern String_t* _stringLiteral061CD5E48C5A194C95B561D18FCDC1A57D790069;
extern String_t* _stringLiteral09820128951D618D4CFE7DC0105A1B6B113C921F;
extern String_t* _stringLiteral0C258057D84276FDE292E99D213EB3AA75E8A463;
extern String_t* _stringLiteral0D421A870FA2CD6E6DCF150A4ACE67EC7405AF75;
extern String_t* _stringLiteral225F12AD8179D36194EBC648F0064B7E925473EC;
extern String_t* _stringLiteral239CA5767AFAC9641593464CE02BC454D6AC07A9;
extern String_t* _stringLiteral2BBC38111940698AFB713196AC3CDC77F8520F36;
extern String_t* _stringLiteral2C72A73D3153ECA8FBF9E58315C5EE073BE0D5AB;
extern String_t* _stringLiteral320AD267D8D969F285EDA5C184F5455BD29C8C95;
extern String_t* _stringLiteral32ECC4719669918929E577728ABBC5556B1258D9;
extern String_t* _stringLiteral3BC15C8AAE3E4124DD409035F32EA2FD6835EFC9;
extern String_t* _stringLiteral43038A7293A88F58900A924007043B16F5DF3840;
extern String_t* _stringLiteral43B731706EEE5F12E52ED519717DB9572EADF165;
extern String_t* _stringLiteral44749C3F0A84037EA50385BCA7D2CFEFD6C0BDB2;
extern String_t* _stringLiteral4609E730123B8AB7743493DE7E9F350E7DF58440;
extern String_t* _stringLiteral487A38C9550C3B08588319E52F112CE6A539A561;
extern String_t* _stringLiteral4EBF4799F637E32D34B9DBF78887989DD6C458D1;
extern String_t* _stringLiteral52424150CE94D4AA9600469221595A075963D010;
extern String_t* _stringLiteral5370ABC43B604B9438E05FD111325616F5BA93EB;
extern String_t* _stringLiteral553F4091D1912B191C8392C610091F6B85B0B6E3;
extern String_t* _stringLiteral5C99F2EA0C681082AA59B6CD687CA19041028B63;
extern String_t* _stringLiteral5EB8003910C4D9CB2B9CAF1A8610A9FB39ACD4BD;
extern String_t* _stringLiteral645983D981B058C71B234B4EF85974E83DF46C36;
extern String_t* _stringLiteral64C65374DBAB6FE3762748196D9D3A9610E2E5A9;
extern String_t* _stringLiteral794145F030FF721599A0353A9B2E59E9A92B9BF1;
extern String_t* _stringLiteral7B7FCC78D6CD1507925B769B1386CED3683F99C7;
extern String_t* _stringLiteral8CE379368AB8E774A4F51BE28DD637628F20DA93;
extern String_t* _stringLiteral8E436B06A17CFAF87BEB781E30D07B6FF58B2B71;
extern String_t* _stringLiteral8F13B25223E12B732676D159774DCB00806DA4CB;
extern String_t* _stringLiteral9A5E2F5BDDFCF829F248A8C91E5AACBBDFEE7223;
extern String_t* _stringLiteral9B611144024AB5EC850C1A1C7668509DA40C92DB;
extern String_t* _stringLiteral9B93271A1F5C73A7A67E544DD659306E5EE80C4B;
extern String_t* _stringLiteralA8D40E8C95571FFC4E4BA4C9CEF0289695BD8057;
extern String_t* _stringLiteralA93D2B140984CB1ED70E8B2F25565EF16927EE77;
extern String_t* _stringLiteralA979EF10CC6F6A36DF6B8A323307EE3BB2E2DB9C;
extern String_t* _stringLiteralAA5DB7D82232EE34651EB5ADEA59B01C839EB843;
extern String_t* _stringLiteralACAB6798BE3F8F69AA0198A7C9B83ADA0F075932;
extern String_t* _stringLiteralADC83B19E793491B1C6EA0FD8B46CD9F32E592FC;
extern String_t* _stringLiteralB71AA0202634484C09B931E01A9CF812565B054B;
extern String_t* _stringLiteralB72EF1950CD4E44A073B202D2C0D05D8A97FD42F;
extern String_t* _stringLiteralB858CB282617FB0956D960215C8E84D1CCF909C6;
extern String_t* _stringLiteralBFAF5DB045B9BE61FE1BC19E0486B8287028A876;
extern String_t* _stringLiteralC14E8131835767D3CB183BB760D5C40B86612DDE;
extern String_t* _stringLiteralC1736E388224676A122F6D36DB2BFE2D5B5815D1;
extern String_t* _stringLiteralC2B7DF6201FDD3362399091F0A29550DF3505B6A;
extern String_t* _stringLiteralC7D8A6D722A1EC9A16FAE165177C418D4FD63175;
extern String_t* _stringLiteralD3280C579ECC78E7C99A42607D1529992F9DD5F3;
extern String_t* _stringLiteralD5E14B063514CB6630E55F0AEB0AD3B37897EFCA;
extern String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
extern String_t* _stringLiteralE1D1873098D32108BBEF9FD4C21B888ED8659C49;
extern String_t* _stringLiteralE647442EAD89630DC43D2047D097508AD66D2618;
extern String_t* _stringLiteralE794E3C8A26A199BEB58080D834D082D83C3C1B2;
extern String_t* _stringLiteralE8603CA0394240FFC435FB8A9A44A0B8ADFDB19F;
extern String_t* _stringLiteralEEF19C54306DAA69EDA49C0272623BDB5E2B341F;
extern String_t* _stringLiteralF92769A88C9334E4CDB8DF06F40EC92B7B4086D0;
extern String_t* _stringLiteralF9C5942B1F55CB12B8F2B5FAE21A9F1706F9D367;
extern String_t* _stringLiteralFC8656334C97C18022AE87133F261DBA949A4CDD;
extern const RuntimeMethod* Dictionary_2_TryGetValue_m0E6D1EEC81E6A904B99EEC04DB95C1CC0E4A0B31_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_TryGetValue_m72452D4223AA3313BF658BFBDFC1B417CA40EC18_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_mD9286F4A0EF1BEC0B6BC4BD72D8D6A246B994EBF_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_mE7D4915AD1A64B140D2C412B197D4D43B016074E_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Values_mBCCD4E4C93C5E4DF2E0A07934040870B3662866F_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_set_Item_m24E725BAB2853FE434C3D507858296BA81733DC5_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_set_Item_mB2CFA325B47C43C9E27C606844FE1AED4CD344A2_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_mC263356C16A1948C299607F9A77AAFAEB7C55A38_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m3A0A0A98E9378A32A74EC51C4CAB6C564001CAC7_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m9422C22943D0E9900CDB7DF407D9EBE215B2A6B6_RuntimeMethod_var;
extern const RuntimeMethod* Func_2_Invoke_m9621506610C10C9E735B305E826ACEFF914422CD_RuntimeMethod_var;
extern const RuntimeMethod* Func_3_Invoke_mCD6DEEC09B4F1B42DD0FD4A8F58632B08EC66737_RuntimeMethod_var;
extern const RuntimeMethod* GUIUtility_CheckOnGUI_mBFC764B475683BC50E40BD249248CE43DA754873_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_mA457B3CB61E2B7BAFB0F7D0ADEFD25237B4429DF_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m8334B758D374FE266FFF49329936203BCE3A3770_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m2995506A297520F84CBD9AD421D8672D5755E115_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m96FCB482CBADC5AD4AD5F01B7A0B822AF619D388_RuntimeMethod_var;
extern const RuntimeMethod* ValueCollection_GetEnumerator_m56252F012AAECD0BFFC3729A87D60BF2945499C2_RuntimeMethod_var;
extern const RuntimeType* GUITargetAttribute_tA23DD43B1D91AF11499A0320EBAAC900A35FC4B8_0_0_0_var;
extern const uint32_t Event_Equals_m1DEF4FB843B631FC437B1366F0F78CEF7A739070_MetadataUsageId;
extern const uint32_t Event_Finalize_m71EE3F6BC6C0A99F849EC39C0E47B7305BB9EB3D_MetadataUsageId;
extern const uint32_t Event_Internal_MakeMasterEventCurrent_mAD78377C8BB08EFB5DF3D3E3A4F1089F2FC2BA48_MetadataUsageId;
extern const uint32_t Event_ToString_m2843623B66F30AC141175B1D16F1B112D3835A65_MetadataUsageId;
extern const uint32_t Event_Use_m2328ACD6C711742273C1321F5F79C6D3CEB08AC5_MetadataUsageId;
extern const uint32_t Event_get_current_m072CEE599D11B8A9A916697E57C0F561188CDB2B_MetadataUsageId;
extern const uint32_t GUIContent_ClearStaticCache_m567DA736612F9E6E66262CC630952AB2E22BC933_MetadataUsageId;
extern const uint32_t GUIContent_Temp_m29B9E688E5EA09D12FDFAC6096B8762F7E84688D_MetadataUsageId;
extern const uint32_t GUIContent__cctor_m5AF68CD5FB2E47506F7FF1A6F46ADAD5C8BC927C_MetadataUsageId;
extern const uint32_t GUIContent__ctor_m2805872C5E7E66C3ABF83607DC02BEB1BEFA82DA_MetadataUsageId;
extern const uint32_t GUIContent__ctor_m8EE36BB9048C2A279E7EAD258D63F2A1BDEA8A81_MetadataUsageId;
extern const uint32_t GUIContent__ctor_m939CDEFF44061020E997A0F0640ADDF2740B0C38_MetadataUsageId;
extern const uint32_t GUILayoutEntry_ApplyOptions_m2002EBD9FE42B9787544D204A71C8BEF3F671F5B_MetadataUsageId;
extern const uint32_t GUILayoutEntry_ToString_mCDA5CD14A39ADAD29F6B450B98FDB80E37AC95D5_MetadataUsageId;
extern const uint32_t GUILayoutEntry__cctor_m7425E2D0EE5771858B9823BBD024333CE7CAD3F9_MetadataUsageId;
extern const uint32_t GUILayoutEntry__ctor_mC640CA08AEBCC7E479DB6AF5B208436A98AB75B2_MetadataUsageId;
extern const uint32_t GUILayoutGroup_ApplyOptions_mCBAF4F0DA13F941ABF47886054A3443247767A97_MetadataUsageId;
extern const uint32_t GUILayoutGroup_CalcHeight_m0511BD2172BC13D54ABC8DB5887A91C17E9F21BB_MetadataUsageId;
extern const uint32_t GUILayoutGroup_CalcWidth_m0D2819C659392B14175C2B163DD889AD35794A9B_MetadataUsageId;
extern const uint32_t GUILayoutGroup_SetHorizontal_m0AFB617E7BB6B32431BA65873B27660E6E5C9E51_MetadataUsageId;
extern const uint32_t GUILayoutGroup_SetVertical_m29D8744D2D1464EF4E6E4008CD21F5E44D6CB146_MetadataUsageId;
extern const uint32_t GUILayoutGroup_ToString_mF66B820B07A33FFA240FBBE20A6F39C492B52372_MetadataUsageId;
extern const uint32_t GUILayoutGroup__ctor_m14D8B35B4A89F6688D354A534ED871860905BA3B_MetadataUsageId;
extern const uint32_t GUILayoutUtility_BeginWindow_mB3475D9BE89CF26AB0E6F0D46B1930F1874EB132_MetadataUsageId;
extern const uint32_t GUILayoutUtility_Begin_m6876A33199599688408A4AD364069090E833B237_MetadataUsageId;
extern const uint32_t GUILayoutUtility_Internal_GetWindowRect_mE35BED0433EE8BD928CD52681620519E647A1DA9_MetadataUsageId;
extern const uint32_t GUILayoutUtility_Internal_MoveWindow_mFCB2DFE399B833D263138CF0A57626AFF52CB037_MetadataUsageId;
extern const uint32_t GUILayoutUtility_LayoutFreeGroup_m890E6BD9614C48B151D61F197251E3DBAC637967_MetadataUsageId;
extern const uint32_t GUILayoutUtility_LayoutFromEditorWindow_mBE82BE965B54F68E7090952684C86BFF0538AB52_MetadataUsageId;
extern const uint32_t GUILayoutUtility_LayoutSingleGroup_m0BE91E195E4E2FC8B5B491783AFACBD1310F15A1_MetadataUsageId;
extern const uint32_t GUILayoutUtility_Layout_mB01F00635FD538214B47A545C53E4F8C682491B5_MetadataUsageId;
extern const uint32_t GUILayoutUtility_SelectIDList_m230ED9206897C92C5B090B3BBFC9B408603E56FD_MetadataUsageId;
extern const uint32_t GUILayoutUtility__cctor_m6C436C771D62B8982AE0E47DD5D41C607988395F_MetadataUsageId;
extern const uint32_t GUILayout_Height_mA5A24D5490022AC6449BBAED9C5A1647184B4026_MetadataUsageId;
extern const uint32_t GUILayout_Width_mDA8F26D92E788474E09AECA1541E8C920C72DA10_MetadataUsageId;
extern const uint32_t GUISkin_Apply_mA93B0EEE3C2DE1F8D867A472130CDA98814C8A49_MetadataUsageId;
extern const uint32_t GUISkin_BuildStyleCache_m2C68BB5521EAF11FC98C86D7E60008901D61866A_MetadataUsageId;
extern const uint32_t GUISkin_CleanupRoots_m00D215E556265ACF704EA1C31399298DB092BA02_MetadataUsageId;
extern const uint32_t GUISkin_FindStyle_m977BAAD9DE35AC43C9FA2DB52C6C0BDF83EE4706_MetadataUsageId;
extern const uint32_t GUISkin_GetEnumerator_m3F6D91C1C038E5DC24C38F6D23C95DEE03173987_MetadataUsageId;
extern const uint32_t GUISkin_GetStyle_mD292E6470E961CA986674875B78746A1859D5FEC_MetadataUsageId;
extern const uint32_t GUISkin_MakeCurrent_m42FAF8090F6B57648678704D86A6451DB917CF2D_MetadataUsageId;
extern const uint32_t GUISkin__ctor_mD75B370774F1DA0C871C8C642299E8DB4B0FABFF_MetadataUsageId;
extern const uint32_t GUISkin_get_error_m40FBD0C57353CBFD8EE75B796E3EADBF9033C47F_MetadataUsageId;
extern const uint32_t GUISkin_set_font_m2602A62DF6F035C7DA9BF4411C5F117022B5C07F_MetadataUsageId;
extern const uint32_t GUIStyleState_Finalize_m68F554CD5B53E9BFC8B952E371D1E18D96D4C626_MetadataUsageId;
extern const uint32_t GUIStyleState_GetGUIStyleState_m207443170D2CA9E48BAB05FF74B30C76C6D63F68_MetadataUsageId;
extern const uint32_t GUIStyle_Finalize_m06DC9D0C766664ACF0D2C8D6BE214756E6361BA4_MetadataUsageId;
extern const uint32_t GUIStyle_ToString_mE73FFC6A93F4F7BC2560EADEB074F0E81F77CB07_MetadataUsageId;
extern const uint32_t GUIStyle__cctor_mA7579A59C320A9202F6E83B39DADC06C10231D6F_MetadataUsageId;
extern const uint32_t GUIStyle__ctor_m64098019A1065381E9909C513D3B8CA4617EF168_MetadataUsageId;
extern const uint32_t GUIStyle__ctor_m8AA3D5AA506A252687923D0DA80741862AA83805_MetadataUsageId;
extern const uint32_t GUIStyle_get_margin_mFC3EA0FA030A6334AC03BDDFA4AC80419C9E5BAA_MetadataUsageId;
extern const uint32_t GUIStyle_get_none_m2B48FA4E2FA2B9BB7A458DF25B1391F9C7BB8B7B_MetadataUsageId;
extern const uint32_t GUIStyle_get_padding_m5DF76AA03A313366D0DD8D577731DAC4FB83053A_MetadataUsageId;
extern const uint32_t GUITargetAttribute_GetGUITargetAttrValue_mED49CA9A9696B0D52CD6C6D7BA7344EA1F019590_MetadataUsageId;
extern const uint32_t GUIUtility_BeginGUI_m9981BDF2828246EBE4EDA43447EF6DAA74B54C91_MetadataUsageId;
extern const uint32_t GUIUtility_CheckOnGUI_mBFC764B475683BC50E40BD249248CE43DA754873_MetadataUsageId;
extern const uint32_t GUIUtility_EndContainerGUIFromException_m66F073A94FF85A8B7C6D8A4614B43365F0A68042_MetadataUsageId;
extern const uint32_t GUIUtility_EndGUI_mE93B54A19231BCC9DFC68DF54CE7C29DE41A3414_MetadataUsageId;
extern const uint32_t GUIUtility_GetDefaultSkin_m2F1B580445522074FF41CF9906531DBEAB034365_MetadataUsageId;
extern const uint32_t GUIUtility_IsExitGUIException_mBCCE6118666769B8B767D74496E44D2ECC7AFDD2_MetadataUsageId;
extern const uint32_t GUIUtility_MarkGUIChanged_m624187E89EC5D08B052B8F74B8BFD803EEE53956_MetadataUsageId;
extern const uint32_t GUIUtility_ProcessEvent_mA250CB35828235FE2F8BA5EA7B6592234DA2D312_MetadataUsageId;
extern const uint32_t GUIUtility_RemoveCapture_m37B735649012E93EBEA50DB8708FB6D39DFA4FE9_MetadataUsageId;
extern const uint32_t GUIUtility_ResetGlobalState_m192C9FAE2A4B87F34CB051C4967B8A919A902A5C_MetadataUsageId;
extern const uint32_t GUIUtility_TakeCapture_mE32A66FEEF1DFA8A3DDF3CE310D1C93397B31221_MetadataUsageId;
extern const uint32_t GUIUtility_set_guiIsExiting_m16D5DFFB64483BC588CA6BEA0FAA618E4A227960_MetadataUsageId;
extern const uint32_t GUI_Button_m28E3F256D52839EBB502B3A6C5DA2E556FF45BC1_MetadataUsageId;
extern const uint32_t GUI_Button_m9315927732E13236FFCE020D2444CF08C26927F5_MetadataUsageId;
extern const uint32_t GUI_Button_mC39C9F8426A10930825737A6D63B7C8DDF24748B_MetadataUsageId;
extern const uint32_t GUI_CallWindowDelegate_m49D5A2E2DAEF525772FAAAA9A840244137BB9175_MetadataUsageId;
extern const uint32_t GUI_DoButton_m3DA80A30ABFA7F00B48683498AEB28ACAAA404ED_MetadataUsageId;
extern const uint32_t GUI_DoControl_m8D0ED253ABE2776E91274FD814F72D2FB43E8557_MetadataUsageId;
extern const uint32_t GUI_DoSetSkin_mC72F1980793E86E8F33D641A207D2AAB409A71F7_MetadataUsageId;
extern const uint32_t GUI_DoToggle_mBD68645E78C5056965D0C1799F360635C27D1376_MetadataUsageId;
extern const uint32_t GUI_Toggle_m0EB6DC4DF9F9CB8AC07A66BFD05542CA5AC210A2_MetadataUsageId;
extern const uint32_t GUI_Toggle_m9A5D81FC8B341D9183F388E1F7EA9EB22A75F2B1_MetadataUsageId;
extern const uint32_t GUI__cctor_m9A902CA13649D04BFB54D86C051A09AC5301ED63_MetadataUsageId;
extern const uint32_t GUI_get_skin_mF6804BE33CFD74FF0665C1185AC7B5C1687AE866_MetadataUsageId;
extern const uint32_t GUI_set_nextScrollStepTime_m0EBE9A3F5960CD23334E4678D9CF6F5E15CBDE23_MetadataUsageId;
extern const uint32_t GUI_set_skin_mFC9EC2E88A46A7F42664C6C41D8CCD9B9BA4DBA0_MetadataUsageId;
extern const uint32_t LayoutCache__ctor_mF66D53540321BFD98CA89285D2E8FFDA5014A9CE_MetadataUsageId;
extern const uint32_t TextEditor__ctor_m279158A237B393882E3CC2834C1F7CA7679F79CC_MetadataUsageId;
extern const uint32_t WindowFunction_BeginInvoke_m522A6C91248FC9E44284AAB8909F83E5DB2960A2_MetadataUsageId;
struct GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5;;
struct GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshaled_com;
struct GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshaled_com;;
struct GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshaled_pinvoke;
struct GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshaled_pinvoke;;
struct GUIStyle_t671F175A201A19166385EE3392292A5F50070572;;
struct GUIStyle_t671F175A201A19166385EE3392292A5F50070572_marshaled_com;
struct GUIStyle_t671F175A201A19166385EE3392292A5F50070572_marshaled_com;;
struct GUIStyle_t671F175A201A19166385EE3392292A5F50070572_marshaled_pinvoke;
struct GUIStyle_t671F175A201A19166385EE3392292A5F50070572_marshaled_pinvoke;;
struct RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A;;
struct RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A_marshaled_com;
struct RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A_marshaled_com;;
struct RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A_marshaled_pinvoke;
struct RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A_marshaled_pinvoke;;

struct ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D;
struct StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B;
struct GUILayoutOptionU5BU5D_tAB2AD0A365DBD2277A04E397AE8E1430A022AF1B;
struct GUIStyleU5BU5D_t2F343713D6ADFF41BBCF1D17BAE79F51BD745DBB;


#ifndef U3CMODULEU3E_TB6F5D3E9B5847F75DE623964BF4C6C552D94BB22_H
#define U3CMODULEU3E_TB6F5D3E9B5847F75DE623964BF4C6C552D94BB22_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tB6F5D3E9B5847F75DE623964BF4C6C552D94BB22 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_TB6F5D3E9B5847F75DE623964BF4C6C552D94BB22_H
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
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
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
#ifndef VALUECOLLECTION_T0C6A26D50A89F916DF2650A7C132FFB1992070B9_H
#define VALUECOLLECTION_T0C6A26D50A89F916DF2650A7C132FFB1992070B9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2_ValueCollection<System.String,UnityEngine.GUIStyle>
struct  ValueCollection_t0C6A26D50A89F916DF2650A7C132FFB1992070B9  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2_ValueCollection::dictionary
	Dictionary_2_tF2F04E1BE233EE6C4A6E90261E463B2A67A3FB6A * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_t0C6A26D50A89F916DF2650A7C132FFB1992070B9, ___dictionary_0)); }
	inline Dictionary_2_tF2F04E1BE233EE6C4A6E90261E463B2A67A3FB6A * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tF2F04E1BE233EE6C4A6E90261E463B2A67A3FB6A ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tF2F04E1BE233EE6C4A6E90261E463B2A67A3FB6A * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VALUECOLLECTION_T0C6A26D50A89F916DF2650A7C132FFB1992070B9_H
#ifndef DICTIONARY_2_T0F1A21E14D53E05B0F1D474060AC4B36995FBCA1_H
#define DICTIONARY_2_T0F1A21E14D53E05B0F1D474060AC4B36995FBCA1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility_LayoutCache>
struct  Dictionary_2_t0F1A21E14D53E05B0F1D474060AC4B36995FBCA1  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_tA58A56CD6B5AD6B2DF5F4934A46CEC9F681B71AD* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	LayoutCacheU5BU5D_tCC79FFB8CEEFCBF8672942A4E0AC60D3A32FBEBE* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t0F1A21E14D53E05B0F1D474060AC4B36995FBCA1, ___table_4)); }
	inline Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t0F1A21E14D53E05B0F1D474060AC4B36995FBCA1, ___linkSlots_5)); }
	inline LinkU5BU5D_tA58A56CD6B5AD6B2DF5F4934A46CEC9F681B71AD* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_tA58A56CD6B5AD6B2DF5F4934A46CEC9F681B71AD** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_tA58A56CD6B5AD6B2DF5F4934A46CEC9F681B71AD* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t0F1A21E14D53E05B0F1D474060AC4B36995FBCA1, ___keySlots_6)); }
	inline Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074* get_keySlots_6() const { return ___keySlots_6; }
	inline Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t0F1A21E14D53E05B0F1D474060AC4B36995FBCA1, ___valueSlots_7)); }
	inline LayoutCacheU5BU5D_tCC79FFB8CEEFCBF8672942A4E0AC60D3A32FBEBE* get_valueSlots_7() const { return ___valueSlots_7; }
	inline LayoutCacheU5BU5D_tCC79FFB8CEEFCBF8672942A4E0AC60D3A32FBEBE** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(LayoutCacheU5BU5D_tCC79FFB8CEEFCBF8672942A4E0AC60D3A32FBEBE* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t0F1A21E14D53E05B0F1D474060AC4B36995FBCA1, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t0F1A21E14D53E05B0F1D474060AC4B36995FBCA1, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t0F1A21E14D53E05B0F1D474060AC4B36995FBCA1, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t0F1A21E14D53E05B0F1D474060AC4B36995FBCA1, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t0F1A21E14D53E05B0F1D474060AC4B36995FBCA1, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t0F1A21E14D53E05B0F1D474060AC4B36995FBCA1, ___serialization_info_13)); }
	inline SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t0F1A21E14D53E05B0F1D474060AC4B36995FBCA1, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t0F1A21E14D53E05B0F1D474060AC4B36995FBCA1_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2_Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__amU24cacheB
	Transform_1_tFBD449AADDEE0D7044B2DEB99D5E2B5B8A815BC3 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t0F1A21E14D53E05B0F1D474060AC4B36995FBCA1_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_tFBD449AADDEE0D7044B2DEB99D5E2B5B8A815BC3 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_tFBD449AADDEE0D7044B2DEB99D5E2B5B8A815BC3 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_tFBD449AADDEE0D7044B2DEB99D5E2B5B8A815BC3 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T0F1A21E14D53E05B0F1D474060AC4B36995FBCA1_H
#ifndef DICTIONARY_2_TF2F04E1BE233EE6C4A6E90261E463B2A67A3FB6A_H
#define DICTIONARY_2_TF2F04E1BE233EE6C4A6E90261E463B2A67A3FB6A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>
struct  Dictionary_2_tF2F04E1BE233EE6C4A6E90261E463B2A67A3FB6A  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_tA58A56CD6B5AD6B2DF5F4934A46CEC9F681B71AD* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	GUIStyleU5BU5D_t2F343713D6ADFF41BBCF1D17BAE79F51BD745DBB* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tF2F04E1BE233EE6C4A6E90261E463B2A67A3FB6A, ___table_4)); }
	inline Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tF2F04E1BE233EE6C4A6E90261E463B2A67A3FB6A, ___linkSlots_5)); }
	inline LinkU5BU5D_tA58A56CD6B5AD6B2DF5F4934A46CEC9F681B71AD* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_tA58A56CD6B5AD6B2DF5F4934A46CEC9F681B71AD** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_tA58A56CD6B5AD6B2DF5F4934A46CEC9F681B71AD* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tF2F04E1BE233EE6C4A6E90261E463B2A67A3FB6A, ___keySlots_6)); }
	inline StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* get_keySlots_6() const { return ___keySlots_6; }
	inline StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tF2F04E1BE233EE6C4A6E90261E463B2A67A3FB6A, ___valueSlots_7)); }
	inline GUIStyleU5BU5D_t2F343713D6ADFF41BBCF1D17BAE79F51BD745DBB* get_valueSlots_7() const { return ___valueSlots_7; }
	inline GUIStyleU5BU5D_t2F343713D6ADFF41BBCF1D17BAE79F51BD745DBB** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(GUIStyleU5BU5D_t2F343713D6ADFF41BBCF1D17BAE79F51BD745DBB* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tF2F04E1BE233EE6C4A6E90261E463B2A67A3FB6A, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tF2F04E1BE233EE6C4A6E90261E463B2A67A3FB6A, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_tF2F04E1BE233EE6C4A6E90261E463B2A67A3FB6A, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_tF2F04E1BE233EE6C4A6E90261E463B2A67A3FB6A, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_tF2F04E1BE233EE6C4A6E90261E463B2A67A3FB6A, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_tF2F04E1BE233EE6C4A6E90261E463B2A67A3FB6A, ___serialization_info_13)); }
	inline SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_tF2F04E1BE233EE6C4A6E90261E463B2A67A3FB6A, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_tF2F04E1BE233EE6C4A6E90261E463B2A67A3FB6A_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2_Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__amU24cacheB
	Transform_1_tAC0A8D3274639A5BFC4969848447CA583B65D78E * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_tF2F04E1BE233EE6C4A6E90261E463B2A67A3FB6A_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_tAC0A8D3274639A5BFC4969848447CA583B65D78E * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_tAC0A8D3274639A5BFC4969848447CA583B65D78E ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_tAC0A8D3274639A5BFC4969848447CA583B65D78E * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_TF2F04E1BE233EE6C4A6E90261E463B2A67A3FB6A_H
#ifndef LIST_1_T046427F3923444CF746C550FD96A3D0E4189D273_H
#define LIST_1_T046427F3923444CF746C550FD96A3D0E4189D273_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>
struct  List_1_t046427F3923444CF746C550FD96A3D0E4189D273  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	GUILayoutEntryU5BU5D_tABE834456D53BDC45598E951D6FBF94E97BDADFD* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t046427F3923444CF746C550FD96A3D0E4189D273, ____items_1)); }
	inline GUILayoutEntryU5BU5D_tABE834456D53BDC45598E951D6FBF94E97BDADFD* get__items_1() const { return ____items_1; }
	inline GUILayoutEntryU5BU5D_tABE834456D53BDC45598E951D6FBF94E97BDADFD** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(GUILayoutEntryU5BU5D_tABE834456D53BDC45598E951D6FBF94E97BDADFD* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t046427F3923444CF746C550FD96A3D0E4189D273, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t046427F3923444CF746C550FD96A3D0E4189D273, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t046427F3923444CF746C550FD96A3D0E4189D273_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	GUILayoutEntryU5BU5D_tABE834456D53BDC45598E951D6FBF94E97BDADFD* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t046427F3923444CF746C550FD96A3D0E4189D273_StaticFields, ___EmptyArray_4)); }
	inline GUILayoutEntryU5BU5D_tABE834456D53BDC45598E951D6FBF94E97BDADFD* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline GUILayoutEntryU5BU5D_tABE834456D53BDC45598E951D6FBF94E97BDADFD** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(GUILayoutEntryU5BU5D_tABE834456D53BDC45598E951D6FBF94E97BDADFD* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T046427F3923444CF746C550FD96A3D0E4189D273_H
#ifndef STACK_T7384B3BC16406A09DCD2C2D2EA591D34ACBFDBA5_H
#define STACK_T7384B3BC16406A09DCD2C2D2EA591D34ACBFDBA5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Stack
struct  Stack_t7384B3BC16406A09DCD2C2D2EA591D34ACBFDBA5  : public RuntimeObject
{
public:
	// System.Object[] System.Collections.Stack::contents
	ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* ___contents_0;
	// System.Int32 System.Collections.Stack::current
	int32_t ___current_1;
	// System.Int32 System.Collections.Stack::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Stack::capacity
	int32_t ___capacity_3;
	// System.Int32 System.Collections.Stack::modCount
	int32_t ___modCount_4;

public:
	inline static int32_t get_offset_of_contents_0() { return static_cast<int32_t>(offsetof(Stack_t7384B3BC16406A09DCD2C2D2EA591D34ACBFDBA5, ___contents_0)); }
	inline ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* get_contents_0() const { return ___contents_0; }
	inline ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D** get_address_of_contents_0() { return &___contents_0; }
	inline void set_contents_0(ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* value)
	{
		___contents_0 = value;
		Il2CppCodeGenWriteBarrier((&___contents_0), value);
	}

	inline static int32_t get_offset_of_current_1() { return static_cast<int32_t>(offsetof(Stack_t7384B3BC16406A09DCD2C2D2EA591D34ACBFDBA5, ___current_1)); }
	inline int32_t get_current_1() const { return ___current_1; }
	inline int32_t* get_address_of_current_1() { return &___current_1; }
	inline void set_current_1(int32_t value)
	{
		___current_1 = value;
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Stack_t7384B3BC16406A09DCD2C2D2EA591D34ACBFDBA5, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_capacity_3() { return static_cast<int32_t>(offsetof(Stack_t7384B3BC16406A09DCD2C2D2EA591D34ACBFDBA5, ___capacity_3)); }
	inline int32_t get_capacity_3() const { return ___capacity_3; }
	inline int32_t* get_address_of_capacity_3() { return &___capacity_3; }
	inline void set_capacity_3(int32_t value)
	{
		___capacity_3 = value;
	}

	inline static int32_t get_offset_of_modCount_4() { return static_cast<int32_t>(offsetof(Stack_t7384B3BC16406A09DCD2C2D2EA591D34ACBFDBA5, ___modCount_4)); }
	inline int32_t get_modCount_4() const { return ___modCount_4; }
	inline int32_t* get_address_of_modCount_4() { return &___modCount_4; }
	inline void set_modCount_4(int32_t value)
	{
		___modCount_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACK_T7384B3BC16406A09DCD2C2D2EA591D34ACBFDBA5_H
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
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef STRINGCOMPARER_T2BD4D768665C1290582CAD7439D03599B59ACCCF_H
#define STRINGCOMPARER_T2BD4D768665C1290582CAD7439D03599B59ACCCF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.StringComparer
struct  StringComparer_t2BD4D768665C1290582CAD7439D03599B59ACCCF  : public RuntimeObject
{
public:

public:
};

struct StringComparer_t2BD4D768665C1290582CAD7439D03599B59ACCCF_StaticFields
{
public:
	// System.StringComparer System.StringComparer::invariantCultureIgnoreCase
	StringComparer_t2BD4D768665C1290582CAD7439D03599B59ACCCF * ___invariantCultureIgnoreCase_0;
	// System.StringComparer System.StringComparer::invariantCulture
	StringComparer_t2BD4D768665C1290582CAD7439D03599B59ACCCF * ___invariantCulture_1;
	// System.StringComparer System.StringComparer::ordinalIgnoreCase
	StringComparer_t2BD4D768665C1290582CAD7439D03599B59ACCCF * ___ordinalIgnoreCase_2;
	// System.StringComparer System.StringComparer::ordinal
	StringComparer_t2BD4D768665C1290582CAD7439D03599B59ACCCF * ___ordinal_3;

public:
	inline static int32_t get_offset_of_invariantCultureIgnoreCase_0() { return static_cast<int32_t>(offsetof(StringComparer_t2BD4D768665C1290582CAD7439D03599B59ACCCF_StaticFields, ___invariantCultureIgnoreCase_0)); }
	inline StringComparer_t2BD4D768665C1290582CAD7439D03599B59ACCCF * get_invariantCultureIgnoreCase_0() const { return ___invariantCultureIgnoreCase_0; }
	inline StringComparer_t2BD4D768665C1290582CAD7439D03599B59ACCCF ** get_address_of_invariantCultureIgnoreCase_0() { return &___invariantCultureIgnoreCase_0; }
	inline void set_invariantCultureIgnoreCase_0(StringComparer_t2BD4D768665C1290582CAD7439D03599B59ACCCF * value)
	{
		___invariantCultureIgnoreCase_0 = value;
		Il2CppCodeGenWriteBarrier((&___invariantCultureIgnoreCase_0), value);
	}

	inline static int32_t get_offset_of_invariantCulture_1() { return static_cast<int32_t>(offsetof(StringComparer_t2BD4D768665C1290582CAD7439D03599B59ACCCF_StaticFields, ___invariantCulture_1)); }
	inline StringComparer_t2BD4D768665C1290582CAD7439D03599B59ACCCF * get_invariantCulture_1() const { return ___invariantCulture_1; }
	inline StringComparer_t2BD4D768665C1290582CAD7439D03599B59ACCCF ** get_address_of_invariantCulture_1() { return &___invariantCulture_1; }
	inline void set_invariantCulture_1(StringComparer_t2BD4D768665C1290582CAD7439D03599B59ACCCF * value)
	{
		___invariantCulture_1 = value;
		Il2CppCodeGenWriteBarrier((&___invariantCulture_1), value);
	}

	inline static int32_t get_offset_of_ordinalIgnoreCase_2() { return static_cast<int32_t>(offsetof(StringComparer_t2BD4D768665C1290582CAD7439D03599B59ACCCF_StaticFields, ___ordinalIgnoreCase_2)); }
	inline StringComparer_t2BD4D768665C1290582CAD7439D03599B59ACCCF * get_ordinalIgnoreCase_2() const { return ___ordinalIgnoreCase_2; }
	inline StringComparer_t2BD4D768665C1290582CAD7439D03599B59ACCCF ** get_address_of_ordinalIgnoreCase_2() { return &___ordinalIgnoreCase_2; }
	inline void set_ordinalIgnoreCase_2(StringComparer_t2BD4D768665C1290582CAD7439D03599B59ACCCF * value)
	{
		___ordinalIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((&___ordinalIgnoreCase_2), value);
	}

	inline static int32_t get_offset_of_ordinal_3() { return static_cast<int32_t>(offsetof(StringComparer_t2BD4D768665C1290582CAD7439D03599B59ACCCF_StaticFields, ___ordinal_3)); }
	inline StringComparer_t2BD4D768665C1290582CAD7439D03599B59ACCCF * get_ordinal_3() const { return ___ordinal_3; }
	inline StringComparer_t2BD4D768665C1290582CAD7439D03599B59ACCCF ** get_address_of_ordinal_3() { return &___ordinal_3; }
	inline void set_ordinal_3(StringComparer_t2BD4D768665C1290582CAD7439D03599B59ACCCF * value)
	{
		___ordinal_3 = value;
		Il2CppCodeGenWriteBarrier((&___ordinal_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGCOMPARER_T2BD4D768665C1290582CAD7439D03599B59ACCCF_H
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
#ifndef GUICONTENT_T2A00F8961C69C0A382168840CFB2111FB00B5EA0_H
#define GUICONTENT_T2A00F8961C69C0A382168840CFB2111FB00B5EA0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUIContent
struct  GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0  : public RuntimeObject
{
public:
	// System.String UnityEngine.GUIContent::m_Text
	String_t* ___m_Text_0;
	// UnityEngine.Texture UnityEngine.GUIContent::m_Image
	Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * ___m_Image_1;
	// System.String UnityEngine.GUIContent::m_Tooltip
	String_t* ___m_Tooltip_2;

public:
	inline static int32_t get_offset_of_m_Text_0() { return static_cast<int32_t>(offsetof(GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0, ___m_Text_0)); }
	inline String_t* get_m_Text_0() const { return ___m_Text_0; }
	inline String_t** get_address_of_m_Text_0() { return &___m_Text_0; }
	inline void set_m_Text_0(String_t* value)
	{
		___m_Text_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Text_0), value);
	}

	inline static int32_t get_offset_of_m_Image_1() { return static_cast<int32_t>(offsetof(GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0, ___m_Image_1)); }
	inline Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * get_m_Image_1() const { return ___m_Image_1; }
	inline Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 ** get_address_of_m_Image_1() { return &___m_Image_1; }
	inline void set_m_Image_1(Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * value)
	{
		___m_Image_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Image_1), value);
	}

	inline static int32_t get_offset_of_m_Tooltip_2() { return static_cast<int32_t>(offsetof(GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0, ___m_Tooltip_2)); }
	inline String_t* get_m_Tooltip_2() const { return ___m_Tooltip_2; }
	inline String_t** get_address_of_m_Tooltip_2() { return &___m_Tooltip_2; }
	inline void set_m_Tooltip_2(String_t* value)
	{
		___m_Tooltip_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Tooltip_2), value);
	}
};

struct GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0_StaticFields
{
public:
	// UnityEngine.GUIContent UnityEngine.GUIContent::s_Text
	GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * ___s_Text_3;
	// UnityEngine.GUIContent UnityEngine.GUIContent::s_Image
	GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * ___s_Image_4;
	// UnityEngine.GUIContent UnityEngine.GUIContent::s_TextImage
	GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * ___s_TextImage_5;
	// UnityEngine.GUIContent UnityEngine.GUIContent::none
	GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * ___none_6;

public:
	inline static int32_t get_offset_of_s_Text_3() { return static_cast<int32_t>(offsetof(GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0_StaticFields, ___s_Text_3)); }
	inline GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * get_s_Text_3() const { return ___s_Text_3; }
	inline GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 ** get_address_of_s_Text_3() { return &___s_Text_3; }
	inline void set_s_Text_3(GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * value)
	{
		___s_Text_3 = value;
		Il2CppCodeGenWriteBarrier((&___s_Text_3), value);
	}

	inline static int32_t get_offset_of_s_Image_4() { return static_cast<int32_t>(offsetof(GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0_StaticFields, ___s_Image_4)); }
	inline GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * get_s_Image_4() const { return ___s_Image_4; }
	inline GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 ** get_address_of_s_Image_4() { return &___s_Image_4; }
	inline void set_s_Image_4(GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * value)
	{
		___s_Image_4 = value;
		Il2CppCodeGenWriteBarrier((&___s_Image_4), value);
	}

	inline static int32_t get_offset_of_s_TextImage_5() { return static_cast<int32_t>(offsetof(GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0_StaticFields, ___s_TextImage_5)); }
	inline GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * get_s_TextImage_5() const { return ___s_TextImage_5; }
	inline GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 ** get_address_of_s_TextImage_5() { return &___s_TextImage_5; }
	inline void set_s_TextImage_5(GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * value)
	{
		___s_TextImage_5 = value;
		Il2CppCodeGenWriteBarrier((&___s_TextImage_5), value);
	}

	inline static int32_t get_offset_of_none_6() { return static_cast<int32_t>(offsetof(GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0_StaticFields, ___none_6)); }
	inline GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * get_none_6() const { return ___none_6; }
	inline GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 ** get_address_of_none_6() { return &___none_6; }
	inline void set_none_6(GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * value)
	{
		___none_6 = value;
		Il2CppCodeGenWriteBarrier((&___none_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.GUIContent
struct GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0_marshaled_pinvoke
{
	char* ___m_Text_0;
	Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * ___m_Image_1;
	char* ___m_Tooltip_2;
};
// Native definition for COM marshalling of UnityEngine.GUIContent
struct GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0_marshaled_com
{
	Il2CppChar* ___m_Text_0;
	Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * ___m_Image_1;
	Il2CppChar* ___m_Tooltip_2;
};
#endif // GUICONTENT_T2A00F8961C69C0A382168840CFB2111FB00B5EA0_H
#ifndef GUILAYOUT_T5BDBA9AE696E27285227012F08642F97F2CCE2EC_H
#define GUILAYOUT_T5BDBA9AE696E27285227012F08642F97F2CCE2EC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUILayout
struct  GUILayout_t5BDBA9AE696E27285227012F08642F97F2CCE2EC  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUILAYOUT_T5BDBA9AE696E27285227012F08642F97F2CCE2EC_H
#ifndef LAYOUTCACHE_T0D14FE6139444D164ECA5D31E39E625D80077468_H
#define LAYOUTCACHE_T0D14FE6139444D164ECA5D31E39E625D80077468_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUILayoutUtility_LayoutCache
struct  LayoutCache_t0D14FE6139444D164ECA5D31E39E625D80077468  : public RuntimeObject
{
public:
	// UnityEngine.GUILayoutGroup UnityEngine.GUILayoutUtility_LayoutCache::topLevel
	GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * ___topLevel_0;
	// UnityEngineInternal.GenericStack UnityEngine.GUILayoutUtility_LayoutCache::layoutGroups
	GenericStack_tC59D21E8DBC50F3C608479C942200AC44CA2D5BC * ___layoutGroups_1;
	// UnityEngine.GUILayoutGroup UnityEngine.GUILayoutUtility_LayoutCache::windows
	GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * ___windows_2;

public:
	inline static int32_t get_offset_of_topLevel_0() { return static_cast<int32_t>(offsetof(LayoutCache_t0D14FE6139444D164ECA5D31E39E625D80077468, ___topLevel_0)); }
	inline GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * get_topLevel_0() const { return ___topLevel_0; }
	inline GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 ** get_address_of_topLevel_0() { return &___topLevel_0; }
	inline void set_topLevel_0(GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * value)
	{
		___topLevel_0 = value;
		Il2CppCodeGenWriteBarrier((&___topLevel_0), value);
	}

	inline static int32_t get_offset_of_layoutGroups_1() { return static_cast<int32_t>(offsetof(LayoutCache_t0D14FE6139444D164ECA5D31E39E625D80077468, ___layoutGroups_1)); }
	inline GenericStack_tC59D21E8DBC50F3C608479C942200AC44CA2D5BC * get_layoutGroups_1() const { return ___layoutGroups_1; }
	inline GenericStack_tC59D21E8DBC50F3C608479C942200AC44CA2D5BC ** get_address_of_layoutGroups_1() { return &___layoutGroups_1; }
	inline void set_layoutGroups_1(GenericStack_tC59D21E8DBC50F3C608479C942200AC44CA2D5BC * value)
	{
		___layoutGroups_1 = value;
		Il2CppCodeGenWriteBarrier((&___layoutGroups_1), value);
	}

	inline static int32_t get_offset_of_windows_2() { return static_cast<int32_t>(offsetof(LayoutCache_t0D14FE6139444D164ECA5D31E39E625D80077468, ___windows_2)); }
	inline GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * get_windows_2() const { return ___windows_2; }
	inline GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 ** get_address_of_windows_2() { return &___windows_2; }
	inline void set_windows_2(GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * value)
	{
		___windows_2 = value;
		Il2CppCodeGenWriteBarrier((&___windows_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LAYOUTCACHE_T0D14FE6139444D164ECA5D31E39E625D80077468_H
#ifndef GUIUTILITY_T943494CC50E876A4A08ECD471C06E23D52E5E5BA_H
#define GUIUTILITY_T943494CC50E876A4A08ECD471C06E23D52E5E5BA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUIUtility
struct  GUIUtility_t943494CC50E876A4A08ECD471C06E23D52E5E5BA  : public RuntimeObject
{
public:

public:
};

struct GUIUtility_t943494CC50E876A4A08ECD471C06E23D52E5E5BA_StaticFields
{
public:
	// System.Int32 UnityEngine.GUIUtility::s_SkinMode
	int32_t ___s_SkinMode_0;
	// System.Int32 UnityEngine.GUIUtility::s_OriginalID
	int32_t ___s_OriginalID_1;
	// System.Action UnityEngine.GUIUtility::takeCapture
	Action_tC9F24EBA5075EA0322C6E0DC6BE2C7BDF962FB21 * ___takeCapture_2;
	// System.Action UnityEngine.GUIUtility::releaseCapture
	Action_tC9F24EBA5075EA0322C6E0DC6BE2C7BDF962FB21 * ___releaseCapture_3;
	// System.Func`3<System.Int32,System.IntPtr,System.Boolean> UnityEngine.GUIUtility::processEvent
	Func_3_tBD99633D8A18C43CC528ECE3F77E2F69900048A7 * ___processEvent_4;
	// System.Func`2<System.Exception,System.Boolean> UnityEngine.GUIUtility::endContainerGUIFromException
	Func_2_tC816C5FDED4A7372C449E7660CAB9F94E2AC12F8 * ___endContainerGUIFromException_5;
	// System.Action UnityEngine.GUIUtility::enabledStateChanged
	Action_tC9F24EBA5075EA0322C6E0DC6BE2C7BDF962FB21 * ___enabledStateChanged_6;
	// System.Boolean UnityEngine.GUIUtility::<guiIsExiting>k__BackingField
	bool ___U3CguiIsExitingU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_s_SkinMode_0() { return static_cast<int32_t>(offsetof(GUIUtility_t943494CC50E876A4A08ECD471C06E23D52E5E5BA_StaticFields, ___s_SkinMode_0)); }
	inline int32_t get_s_SkinMode_0() const { return ___s_SkinMode_0; }
	inline int32_t* get_address_of_s_SkinMode_0() { return &___s_SkinMode_0; }
	inline void set_s_SkinMode_0(int32_t value)
	{
		___s_SkinMode_0 = value;
	}

	inline static int32_t get_offset_of_s_OriginalID_1() { return static_cast<int32_t>(offsetof(GUIUtility_t943494CC50E876A4A08ECD471C06E23D52E5E5BA_StaticFields, ___s_OriginalID_1)); }
	inline int32_t get_s_OriginalID_1() const { return ___s_OriginalID_1; }
	inline int32_t* get_address_of_s_OriginalID_1() { return &___s_OriginalID_1; }
	inline void set_s_OriginalID_1(int32_t value)
	{
		___s_OriginalID_1 = value;
	}

	inline static int32_t get_offset_of_takeCapture_2() { return static_cast<int32_t>(offsetof(GUIUtility_t943494CC50E876A4A08ECD471C06E23D52E5E5BA_StaticFields, ___takeCapture_2)); }
	inline Action_tC9F24EBA5075EA0322C6E0DC6BE2C7BDF962FB21 * get_takeCapture_2() const { return ___takeCapture_2; }
	inline Action_tC9F24EBA5075EA0322C6E0DC6BE2C7BDF962FB21 ** get_address_of_takeCapture_2() { return &___takeCapture_2; }
	inline void set_takeCapture_2(Action_tC9F24EBA5075EA0322C6E0DC6BE2C7BDF962FB21 * value)
	{
		___takeCapture_2 = value;
		Il2CppCodeGenWriteBarrier((&___takeCapture_2), value);
	}

	inline static int32_t get_offset_of_releaseCapture_3() { return static_cast<int32_t>(offsetof(GUIUtility_t943494CC50E876A4A08ECD471C06E23D52E5E5BA_StaticFields, ___releaseCapture_3)); }
	inline Action_tC9F24EBA5075EA0322C6E0DC6BE2C7BDF962FB21 * get_releaseCapture_3() const { return ___releaseCapture_3; }
	inline Action_tC9F24EBA5075EA0322C6E0DC6BE2C7BDF962FB21 ** get_address_of_releaseCapture_3() { return &___releaseCapture_3; }
	inline void set_releaseCapture_3(Action_tC9F24EBA5075EA0322C6E0DC6BE2C7BDF962FB21 * value)
	{
		___releaseCapture_3 = value;
		Il2CppCodeGenWriteBarrier((&___releaseCapture_3), value);
	}

	inline static int32_t get_offset_of_processEvent_4() { return static_cast<int32_t>(offsetof(GUIUtility_t943494CC50E876A4A08ECD471C06E23D52E5E5BA_StaticFields, ___processEvent_4)); }
	inline Func_3_tBD99633D8A18C43CC528ECE3F77E2F69900048A7 * get_processEvent_4() const { return ___processEvent_4; }
	inline Func_3_tBD99633D8A18C43CC528ECE3F77E2F69900048A7 ** get_address_of_processEvent_4() { return &___processEvent_4; }
	inline void set_processEvent_4(Func_3_tBD99633D8A18C43CC528ECE3F77E2F69900048A7 * value)
	{
		___processEvent_4 = value;
		Il2CppCodeGenWriteBarrier((&___processEvent_4), value);
	}

	inline static int32_t get_offset_of_endContainerGUIFromException_5() { return static_cast<int32_t>(offsetof(GUIUtility_t943494CC50E876A4A08ECD471C06E23D52E5E5BA_StaticFields, ___endContainerGUIFromException_5)); }
	inline Func_2_tC816C5FDED4A7372C449E7660CAB9F94E2AC12F8 * get_endContainerGUIFromException_5() const { return ___endContainerGUIFromException_5; }
	inline Func_2_tC816C5FDED4A7372C449E7660CAB9F94E2AC12F8 ** get_address_of_endContainerGUIFromException_5() { return &___endContainerGUIFromException_5; }
	inline void set_endContainerGUIFromException_5(Func_2_tC816C5FDED4A7372C449E7660CAB9F94E2AC12F8 * value)
	{
		___endContainerGUIFromException_5 = value;
		Il2CppCodeGenWriteBarrier((&___endContainerGUIFromException_5), value);
	}

	inline static int32_t get_offset_of_enabledStateChanged_6() { return static_cast<int32_t>(offsetof(GUIUtility_t943494CC50E876A4A08ECD471C06E23D52E5E5BA_StaticFields, ___enabledStateChanged_6)); }
	inline Action_tC9F24EBA5075EA0322C6E0DC6BE2C7BDF962FB21 * get_enabledStateChanged_6() const { return ___enabledStateChanged_6; }
	inline Action_tC9F24EBA5075EA0322C6E0DC6BE2C7BDF962FB21 ** get_address_of_enabledStateChanged_6() { return &___enabledStateChanged_6; }
	inline void set_enabledStateChanged_6(Action_tC9F24EBA5075EA0322C6E0DC6BE2C7BDF962FB21 * value)
	{
		___enabledStateChanged_6 = value;
		Il2CppCodeGenWriteBarrier((&___enabledStateChanged_6), value);
	}

	inline static int32_t get_offset_of_U3CguiIsExitingU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(GUIUtility_t943494CC50E876A4A08ECD471C06E23D52E5E5BA_StaticFields, ___U3CguiIsExitingU3Ek__BackingField_7)); }
	inline bool get_U3CguiIsExitingU3Ek__BackingField_7() const { return ___U3CguiIsExitingU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CguiIsExitingU3Ek__BackingField_7() { return &___U3CguiIsExitingU3Ek__BackingField_7; }
	inline void set_U3CguiIsExitingU3Ek__BackingField_7(bool value)
	{
		___U3CguiIsExitingU3Ek__BackingField_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUIUTILITY_T943494CC50E876A4A08ECD471C06E23D52E5E5BA_H
#ifndef SCROLLVIEWSTATE_T738AAD89973B4E764B6F977945263C24A881428E_H
#define SCROLLVIEWSTATE_T738AAD89973B4E764B6F977945263C24A881428E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScrollViewState
struct  ScrollViewState_t738AAD89973B4E764B6F977945263C24A881428E  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCROLLVIEWSTATE_T738AAD89973B4E764B6F977945263C24A881428E_H
#ifndef SLIDERSTATE_T6081D6F2CF6D0F1A13B2A2D255671B4053EC52CB_H
#define SLIDERSTATE_T6081D6F2CF6D0F1A13B2A2D255671B4053EC52CB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SliderState
struct  SliderState_t6081D6F2CF6D0F1A13B2A2D255671B4053EC52CB  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SLIDERSTATE_T6081D6F2CF6D0F1A13B2A2D255671B4053EC52CB_H
#ifndef BOOLEAN_T92E4792324DA9B716F339A3B965A14965E99A4EF_H
#define BOOLEAN_T92E4792324DA9B716F339A3B965A14965E99A4EF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t92E4792324DA9B716F339A3B965A14965E99A4EF 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t92E4792324DA9B716F339A3B965A14965E99A4EF, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t92E4792324DA9B716F339A3B965A14965E99A4EF_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t92E4792324DA9B716F339A3B965A14965E99A4EF_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t92E4792324DA9B716F339A3B965A14965E99A4EF_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T92E4792324DA9B716F339A3B965A14965E99A4EF_H
#ifndef CHAR_T2AF4E0DF8B57497BF49A6A8822F574113ADA8432_H
#define CHAR_T2AF4E0DF8B57497BF49A6A8822F574113ADA8432_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Char
struct  Char_t2AF4E0DF8B57497BF49A6A8822F574113ADA8432 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Char_t2AF4E0DF8B57497BF49A6A8822F574113ADA8432, ___m_value_2)); }
	inline Il2CppChar get_m_value_2() const { return ___m_value_2; }
	inline Il2CppChar* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(Il2CppChar value)
	{
		___m_value_2 = value;
	}
};

struct Char_t2AF4E0DF8B57497BF49A6A8822F574113ADA8432_StaticFields
{
public:
	// System.Byte* System.Char::category_data
	uint8_t* ___category_data_3;
	// System.Byte* System.Char::numeric_data
	uint8_t* ___numeric_data_4;
	// System.Double* System.Char::numeric_data_values
	double* ___numeric_data_values_5;
	// System.UInt16* System.Char::to_lower_data_low
	uint16_t* ___to_lower_data_low_6;
	// System.UInt16* System.Char::to_lower_data_high
	uint16_t* ___to_lower_data_high_7;
	// System.UInt16* System.Char::to_upper_data_low
	uint16_t* ___to_upper_data_low_8;
	// System.UInt16* System.Char::to_upper_data_high
	uint16_t* ___to_upper_data_high_9;

public:
	inline static int32_t get_offset_of_category_data_3() { return static_cast<int32_t>(offsetof(Char_t2AF4E0DF8B57497BF49A6A8822F574113ADA8432_StaticFields, ___category_data_3)); }
	inline uint8_t* get_category_data_3() const { return ___category_data_3; }
	inline uint8_t** get_address_of_category_data_3() { return &___category_data_3; }
	inline void set_category_data_3(uint8_t* value)
	{
		___category_data_3 = value;
	}

	inline static int32_t get_offset_of_numeric_data_4() { return static_cast<int32_t>(offsetof(Char_t2AF4E0DF8B57497BF49A6A8822F574113ADA8432_StaticFields, ___numeric_data_4)); }
	inline uint8_t* get_numeric_data_4() const { return ___numeric_data_4; }
	inline uint8_t** get_address_of_numeric_data_4() { return &___numeric_data_4; }
	inline void set_numeric_data_4(uint8_t* value)
	{
		___numeric_data_4 = value;
	}

	inline static int32_t get_offset_of_numeric_data_values_5() { return static_cast<int32_t>(offsetof(Char_t2AF4E0DF8B57497BF49A6A8822F574113ADA8432_StaticFields, ___numeric_data_values_5)); }
	inline double* get_numeric_data_values_5() const { return ___numeric_data_values_5; }
	inline double** get_address_of_numeric_data_values_5() { return &___numeric_data_values_5; }
	inline void set_numeric_data_values_5(double* value)
	{
		___numeric_data_values_5 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_low_6() { return static_cast<int32_t>(offsetof(Char_t2AF4E0DF8B57497BF49A6A8822F574113ADA8432_StaticFields, ___to_lower_data_low_6)); }
	inline uint16_t* get_to_lower_data_low_6() const { return ___to_lower_data_low_6; }
	inline uint16_t** get_address_of_to_lower_data_low_6() { return &___to_lower_data_low_6; }
	inline void set_to_lower_data_low_6(uint16_t* value)
	{
		___to_lower_data_low_6 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_high_7() { return static_cast<int32_t>(offsetof(Char_t2AF4E0DF8B57497BF49A6A8822F574113ADA8432_StaticFields, ___to_lower_data_high_7)); }
	inline uint16_t* get_to_lower_data_high_7() const { return ___to_lower_data_high_7; }
	inline uint16_t** get_address_of_to_lower_data_high_7() { return &___to_lower_data_high_7; }
	inline void set_to_lower_data_high_7(uint16_t* value)
	{
		___to_lower_data_high_7 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_low_8() { return static_cast<int32_t>(offsetof(Char_t2AF4E0DF8B57497BF49A6A8822F574113ADA8432_StaticFields, ___to_upper_data_low_8)); }
	inline uint16_t* get_to_upper_data_low_8() const { return ___to_upper_data_low_8; }
	inline uint16_t** get_address_of_to_upper_data_low_8() { return &___to_upper_data_low_8; }
	inline void set_to_upper_data_low_8(uint16_t* value)
	{
		___to_upper_data_low_8 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_high_9() { return static_cast<int32_t>(offsetof(Char_t2AF4E0DF8B57497BF49A6A8822F574113ADA8432_StaticFields, ___to_upper_data_high_9)); }
	inline uint16_t* get_to_upper_data_high_9() const { return ___to_upper_data_high_9; }
	inline uint16_t** get_address_of_to_upper_data_high_9() { return &___to_upper_data_high_9; }
	inline void set_to_upper_data_high_9(uint16_t* value)
	{
		___to_upper_data_high_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHAR_T2AF4E0DF8B57497BF49A6A8822F574113ADA8432_H
#ifndef KEYVALUEPAIR_2_T484F6F63FB83FDEB87DD414D94C67300D48FA9F1_H
#define KEYVALUEPAIR_2_T484F6F63FB83FDEB87DD414D94C67300D48FA9F1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct  KeyValuePair_2_t484F6F63FB83FDEB87DD414D94C67300D48FA9F1 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t484F6F63FB83FDEB87DD414D94C67300D48FA9F1, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t484F6F63FB83FDEB87DD414D94C67300D48FA9F1, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T484F6F63FB83FDEB87DD414D94C67300D48FA9F1_H
#ifndef KEYVALUEPAIR_2_TFD277F4001D1BEEF060A76E716CBEDBAE5258F2C_H
#define KEYVALUEPAIR_2_TFD277F4001D1BEEF060A76E716CBEDBAE5258F2C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>
struct  KeyValuePair_2_tFD277F4001D1BEEF060A76E716CBEDBAE5258F2C 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFD277F4001D1BEEF060A76E716CBEDBAE5258F2C, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFD277F4001D1BEEF060A76E716CBEDBAE5258F2C, ___value_1)); }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * get_value_1() const { return ___value_1; }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_TFD277F4001D1BEEF060A76E716CBEDBAE5258F2C_H
#ifndef ENUMERATOR_T7069929711A56B20B09076697B86D7BEE647C7DC_H
#define ENUMERATOR_T7069929711A56B20B09076697B86D7BEE647C7DC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1_Enumerator<System.Object>
struct  Enumerator_t7069929711A56B20B09076697B86D7BEE647C7DC 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::l
	List_1_tE72A517BD14F52539FF78EA90F58D1387FEED660 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t7069929711A56B20B09076697B86D7BEE647C7DC, ___l_0)); }
	inline List_1_tE72A517BD14F52539FF78EA90F58D1387FEED660 * get_l_0() const { return ___l_0; }
	inline List_1_tE72A517BD14F52539FF78EA90F58D1387FEED660 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_tE72A517BD14F52539FF78EA90F58D1387FEED660 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t7069929711A56B20B09076697B86D7BEE647C7DC, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t7069929711A56B20B09076697B86D7BEE647C7DC, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t7069929711A56B20B09076697B86D7BEE647C7DC, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T7069929711A56B20B09076697B86D7BEE647C7DC_H
#ifndef ENUMERATOR_T4D01DB2C4CF53D79BD58A10640F59CBCF1354587_H
#define ENUMERATOR_T4D01DB2C4CF53D79BD58A10640F59CBCF1354587_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1_Enumerator<UnityEngine.GUILayoutEntry>
struct  Enumerator_t4D01DB2C4CF53D79BD58A10640F59CBCF1354587 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::l
	List_1_t046427F3923444CF746C550FD96A3D0E4189D273 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t4D01DB2C4CF53D79BD58A10640F59CBCF1354587, ___l_0)); }
	inline List_1_t046427F3923444CF746C550FD96A3D0E4189D273 * get_l_0() const { return ___l_0; }
	inline List_1_t046427F3923444CF746C550FD96A3D0E4189D273 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t046427F3923444CF746C550FD96A3D0E4189D273 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t4D01DB2C4CF53D79BD58A10640F59CBCF1354587, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t4D01DB2C4CF53D79BD58A10640F59CBCF1354587, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t4D01DB2C4CF53D79BD58A10640F59CBCF1354587, ___current_3)); }
	inline GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * get_current_3() const { return ___current_3; }
	inline GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T4D01DB2C4CF53D79BD58A10640F59CBCF1354587_H
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
#ifndef INT32_TC16F64335CE8B56D99229DE94BB3A876ED55FE87_H
#define INT32_TC16F64335CE8B56D99229DE94BB3A876ED55FE87_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_tC16F64335CE8B56D99229DE94BB3A876ED55FE87 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_tC16F64335CE8B56D99229DE94BB3A876ED55FE87, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_TC16F64335CE8B56D99229DE94BB3A876ED55FE87_H
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
#ifndef METHODBASE_T_H
#define METHODBASE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodBase
struct  MethodBase_t  : public MemberInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODBASE_T_H
#ifndef TARGETINVOCATIONEXCEPTION_T23A3E9F5590EAF5E9831C51F9E3A5EF4CE868077_H
#define TARGETINVOCATIONEXCEPTION_T23A3E9F5590EAF5E9831C51F9E3A5EF4CE868077_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.TargetInvocationException
struct  TargetInvocationException_t23A3E9F5590EAF5E9831C51F9E3A5EF4CE868077  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TARGETINVOCATIONEXCEPTION_T23A3E9F5590EAF5E9831C51F9E3A5EF4CE868077_H
#ifndef SINGLE_TF2613CF3F3AF0E8BEBC3CE8AD41479C44E6075DB_H
#define SINGLE_TF2613CF3F3AF0E8BEBC3CE8AD41479C44E6075DB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_tF2613CF3F3AF0E8BEBC3CE8AD41479C44E6075DB 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_tF2613CF3F3AF0E8BEBC3CE8AD41479C44E6075DB, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_TF2613CF3F3AF0E8BEBC3CE8AD41479C44E6075DB_H
#ifndef SYSTEMEXCEPTION_T81A06ADD519539D252788D75E44AFFBE6580E301_H
#define SYSTEMEXCEPTION_T81A06ADD519539D252788D75E44AFFBE6580E301_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t81A06ADD519539D252788D75E44AFFBE6580E301  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T81A06ADD519539D252788D75E44AFFBE6580E301_H
#ifndef TIMESPAN_T26DE4373EA745C072A5FBDEAD8373348955FC374_H
#define TIMESPAN_T26DE4373EA745C072A5FBDEAD8373348955FC374_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t26DE4373EA745C072A5FBDEAD8373348955FC374 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t26DE4373EA745C072A5FBDEAD8373348955FC374, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t26DE4373EA745C072A5FBDEAD8373348955FC374_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t26DE4373EA745C072A5FBDEAD8373348955FC374  ___MaxValue_0;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t26DE4373EA745C072A5FBDEAD8373348955FC374  ___MinValue_1;
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t26DE4373EA745C072A5FBDEAD8373348955FC374  ___Zero_2;

public:
	inline static int32_t get_offset_of_MaxValue_0() { return static_cast<int32_t>(offsetof(TimeSpan_t26DE4373EA745C072A5FBDEAD8373348955FC374_StaticFields, ___MaxValue_0)); }
	inline TimeSpan_t26DE4373EA745C072A5FBDEAD8373348955FC374  get_MaxValue_0() const { return ___MaxValue_0; }
	inline TimeSpan_t26DE4373EA745C072A5FBDEAD8373348955FC374 * get_address_of_MaxValue_0() { return &___MaxValue_0; }
	inline void set_MaxValue_0(TimeSpan_t26DE4373EA745C072A5FBDEAD8373348955FC374  value)
	{
		___MaxValue_0 = value;
	}

	inline static int32_t get_offset_of_MinValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t26DE4373EA745C072A5FBDEAD8373348955FC374_StaticFields, ___MinValue_1)); }
	inline TimeSpan_t26DE4373EA745C072A5FBDEAD8373348955FC374  get_MinValue_1() const { return ___MinValue_1; }
	inline TimeSpan_t26DE4373EA745C072A5FBDEAD8373348955FC374 * get_address_of_MinValue_1() { return &___MinValue_1; }
	inline void set_MinValue_1(TimeSpan_t26DE4373EA745C072A5FBDEAD8373348955FC374  value)
	{
		___MinValue_1 = value;
	}

	inline static int32_t get_offset_of_Zero_2() { return static_cast<int32_t>(offsetof(TimeSpan_t26DE4373EA745C072A5FBDEAD8373348955FC374_StaticFields, ___Zero_2)); }
	inline TimeSpan_t26DE4373EA745C072A5FBDEAD8373348955FC374  get_Zero_2() const { return ___Zero_2; }
	inline TimeSpan_t26DE4373EA745C072A5FBDEAD8373348955FC374 * get_address_of_Zero_2() { return &___Zero_2; }
	inline void set_Zero_2(TimeSpan_t26DE4373EA745C072A5FBDEAD8373348955FC374  value)
	{
		___Zero_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T26DE4373EA745C072A5FBDEAD8373348955FC374_H
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
#ifndef COLOR_T119BCA590009762C7223FDD3AF9706653AC84ED2_H
#define COLOR_T119BCA590009762C7223FDD3AF9706653AC84ED2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T119BCA590009762C7223FDD3AF9706653AC84ED2_H
#ifndef EXITGUIEXCEPTION_T6AD1987AE1D23E0E774F9BEA41F30AE4CE378F07_H
#define EXITGUIEXCEPTION_T6AD1987AE1D23E0E774F9BEA41F30AE4CE378F07_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ExitGUIException
struct  ExitGUIException_t6AD1987AE1D23E0E774F9BEA41F30AE4CE378F07  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXITGUIEXCEPTION_T6AD1987AE1D23E0E774F9BEA41F30AE4CE378F07_H
#ifndef GUITARGETATTRIBUTE_TA23DD43B1D91AF11499A0320EBAAC900A35FC4B8_H
#define GUITARGETATTRIBUTE_TA23DD43B1D91AF11499A0320EBAAC900A35FC4B8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUITargetAttribute
struct  GUITargetAttribute_tA23DD43B1D91AF11499A0320EBAAC900A35FC4B8  : public Attribute_t60F25EB48D5935E4C6C2BAF7F90F57A43528E469
{
public:
	// System.Int32 UnityEngine.GUITargetAttribute::displayMask
	int32_t ___displayMask_0;

public:
	inline static int32_t get_offset_of_displayMask_0() { return static_cast<int32_t>(offsetof(GUITargetAttribute_tA23DD43B1D91AF11499A0320EBAAC900A35FC4B8, ___displayMask_0)); }
	inline int32_t get_displayMask_0() const { return ___displayMask_0; }
	inline int32_t* get_address_of_displayMask_0() { return &___displayMask_0; }
	inline void set_displayMask_0(int32_t value)
	{
		___displayMask_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUITARGETATTRIBUTE_TA23DD43B1D91AF11499A0320EBAAC900A35FC4B8_H
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
#ifndef VECTOR2_TA85D2DD88578276CA8A8796756458277E72D073D_H
#define VECTOR2_TA85D2DD88578276CA8A8796756458277E72D073D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_TA85D2DD88578276CA8A8796756458277E72D073D_H
#ifndef GENERICSTACK_TC59D21E8DBC50F3C608479C942200AC44CA2D5BC_H
#define GENERICSTACK_TC59D21E8DBC50F3C608479C942200AC44CA2D5BC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.GenericStack
struct  GenericStack_tC59D21E8DBC50F3C608479C942200AC44CA2D5BC  : public Stack_t7384B3BC16406A09DCD2C2D2EA591D34ACBFDBA5
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GENERICSTACK_TC59D21E8DBC50F3C608479C942200AC44CA2D5BC_H
#ifndef ARGUMENTEXCEPTION_T62D3E79ABA478354E3BFBA10C9BF16549AF82D60_H
#define ARGUMENTEXCEPTION_T62D3E79ABA478354E3BFBA10C9BF16549AF82D60_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60  : public SystemException_t81A06ADD519539D252788D75E44AFFBE6580E301
{
public:
	// System.String System.ArgumentException::param_name
	String_t* ___param_name_12;

public:
	inline static int32_t get_offset_of_param_name_12() { return static_cast<int32_t>(offsetof(ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60, ___param_name_12)); }
	inline String_t* get_param_name_12() const { return ___param_name_12; }
	inline String_t** get_address_of_param_name_12() { return &___param_name_12; }
	inline void set_param_name_12(String_t* value)
	{
		___param_name_12 = value;
		Il2CppCodeGenWriteBarrier((&___param_name_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_T62D3E79ABA478354E3BFBA10C9BF16549AF82D60_H
#ifndef ENUMERATOR_T5DE3D636A6596D8B2CAB473CE8F848FC269A03A3_H
#define ENUMERATOR_T5DE3D636A6596D8B2CAB473CE8F848FC269A03A3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2_Enumerator<System.Object,System.Object>
struct  Enumerator_t5DE3D636A6596D8B2CAB473CE8F848FC269A03A3 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2_Enumerator::dictionary
	Dictionary_2_tCF455EEDBEB1050374511D3875D3A1F51AF8889C * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::stamp
	int32_t ___stamp_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2_Enumerator::current
	KeyValuePair_2_t484F6F63FB83FDEB87DD414D94C67300D48FA9F1  ___current_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t5DE3D636A6596D8B2CAB473CE8F848FC269A03A3, ___dictionary_0)); }
	inline Dictionary_2_tCF455EEDBEB1050374511D3875D3A1F51AF8889C * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tCF455EEDBEB1050374511D3875D3A1F51AF8889C ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tCF455EEDBEB1050374511D3875D3A1F51AF8889C * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t5DE3D636A6596D8B2CAB473CE8F848FC269A03A3, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_stamp_2() { return static_cast<int32_t>(offsetof(Enumerator_t5DE3D636A6596D8B2CAB473CE8F848FC269A03A3, ___stamp_2)); }
	inline int32_t get_stamp_2() const { return ___stamp_2; }
	inline int32_t* get_address_of_stamp_2() { return &___stamp_2; }
	inline void set_stamp_2(int32_t value)
	{
		___stamp_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t5DE3D636A6596D8B2CAB473CE8F848FC269A03A3, ___current_3)); }
	inline KeyValuePair_2_t484F6F63FB83FDEB87DD414D94C67300D48FA9F1  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t484F6F63FB83FDEB87DD414D94C67300D48FA9F1 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t484F6F63FB83FDEB87DD414D94C67300D48FA9F1  value)
	{
		___current_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T5DE3D636A6596D8B2CAB473CE8F848FC269A03A3_H
#ifndef ENUMERATOR_TDAB90A611C9EC34B660F1645FCE7D1CBA4923FE1_H
#define ENUMERATOR_TDAB90A611C9EC34B660F1645FCE7D1CBA4923FE1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2_Enumerator<System.String,UnityEngine.GUIStyle>
struct  Enumerator_tDAB90A611C9EC34B660F1645FCE7D1CBA4923FE1 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2_Enumerator::dictionary
	Dictionary_2_tF2F04E1BE233EE6C4A6E90261E463B2A67A3FB6A * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::stamp
	int32_t ___stamp_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2_Enumerator::current
	KeyValuePair_2_tFD277F4001D1BEEF060A76E716CBEDBAE5258F2C  ___current_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tDAB90A611C9EC34B660F1645FCE7D1CBA4923FE1, ___dictionary_0)); }
	inline Dictionary_2_tF2F04E1BE233EE6C4A6E90261E463B2A67A3FB6A * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tF2F04E1BE233EE6C4A6E90261E463B2A67A3FB6A ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tF2F04E1BE233EE6C4A6E90261E463B2A67A3FB6A * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_tDAB90A611C9EC34B660F1645FCE7D1CBA4923FE1, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_stamp_2() { return static_cast<int32_t>(offsetof(Enumerator_tDAB90A611C9EC34B660F1645FCE7D1CBA4923FE1, ___stamp_2)); }
	inline int32_t get_stamp_2() const { return ___stamp_2; }
	inline int32_t* get_address_of_stamp_2() { return &___stamp_2; }
	inline void set_stamp_2(int32_t value)
	{
		___stamp_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tDAB90A611C9EC34B660F1645FCE7D1CBA4923FE1, ___current_3)); }
	inline KeyValuePair_2_tFD277F4001D1BEEF060A76E716CBEDBAE5258F2C  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_tFD277F4001D1BEEF060A76E716CBEDBAE5258F2C * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_tFD277F4001D1BEEF060A76E716CBEDBAE5258F2C  value)
	{
		___current_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_TDAB90A611C9EC34B660F1645FCE7D1CBA4923FE1_H
#ifndef DATETIMEKIND_T922DC40070B8AD59CB650E3FE023C4A58ED4568A_H
#define DATETIMEKIND_T922DC40070B8AD59CB650E3FE023C4A58ED4568A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeKind
struct  DateTimeKind_t922DC40070B8AD59CB650E3FE023C4A58ED4568A 
{
public:
	// System.Int32 System.DateTimeKind::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DateTimeKind_t922DC40070B8AD59CB650E3FE023C4A58ED4568A, ___value___1)); }
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
#endif // DATETIMEKIND_T922DC40070B8AD59CB650E3FE023C4A58ED4568A_H
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
#ifndef BINDINGFLAGS_T7FD4941D9115FF77D5F573F63A93BFBC5D1F63B2_H
#define BINDINGFLAGS_T7FD4941D9115FF77D5F573F63A93BFBC5D1F63B2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t7FD4941D9115FF77D5F573F63A93BFBC5D1F63B2 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindingFlags_t7FD4941D9115FF77D5F573F63A93BFBC5D1F63B2, ___value___1)); }
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
#endif // BINDINGFLAGS_T7FD4941D9115FF77D5F573F63A93BFBC5D1F63B2_H
#ifndef METHODINFO_T_H
#define METHODINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodInfo
struct  MethodInfo_t  : public MethodBase_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODINFO_T_H
#ifndef RUNTIMETYPEHANDLE_T58BB862EF56F46A9518F8ACA413EF7D70238F1AD_H
#define RUNTIMETYPEHANDLE_T58BB862EF56F46A9518F8ACA413EF7D70238F1AD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t58BB862EF56F46A9518F8ACA413EF7D70238F1AD 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t58BB862EF56F46A9518F8ACA413EF7D70238F1AD, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T58BB862EF56F46A9518F8ACA413EF7D70238F1AD_H
#ifndef EVENT_T187FF6A6B357447B83EC2064823EE0AEC5263210_H
#define EVENT_T187FF6A6B357447B83EC2064823EE0AEC5263210_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Event
struct  Event_t187FF6A6B357447B83EC2064823EE0AEC5263210  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Event::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Event_t187FF6A6B357447B83EC2064823EE0AEC5263210, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

struct Event_t187FF6A6B357447B83EC2064823EE0AEC5263210_StaticFields
{
public:
	// UnityEngine.Event UnityEngine.Event::s_Current
	Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * ___s_Current_1;
	// UnityEngine.Event UnityEngine.Event::s_MasterEvent
	Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * ___s_MasterEvent_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> UnityEngine.Event::<>f__switchU24map0
	Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * ___U3CU3Ef__switchU24map0_3;

public:
	inline static int32_t get_offset_of_s_Current_1() { return static_cast<int32_t>(offsetof(Event_t187FF6A6B357447B83EC2064823EE0AEC5263210_StaticFields, ___s_Current_1)); }
	inline Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * get_s_Current_1() const { return ___s_Current_1; }
	inline Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 ** get_address_of_s_Current_1() { return &___s_Current_1; }
	inline void set_s_Current_1(Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * value)
	{
		___s_Current_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_Current_1), value);
	}

	inline static int32_t get_offset_of_s_MasterEvent_2() { return static_cast<int32_t>(offsetof(Event_t187FF6A6B357447B83EC2064823EE0AEC5263210_StaticFields, ___s_MasterEvent_2)); }
	inline Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * get_s_MasterEvent_2() const { return ___s_MasterEvent_2; }
	inline Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 ** get_address_of_s_MasterEvent_2() { return &___s_MasterEvent_2; }
	inline void set_s_MasterEvent_2(Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * value)
	{
		___s_MasterEvent_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_MasterEvent_2), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map0_3() { return static_cast<int32_t>(offsetof(Event_t187FF6A6B357447B83EC2064823EE0AEC5263210_StaticFields, ___U3CU3Ef__switchU24map0_3)); }
	inline Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * get_U3CU3Ef__switchU24map0_3() const { return ___U3CU3Ef__switchU24map0_3; }
	inline Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 ** get_address_of_U3CU3Ef__switchU24map0_3() { return &___U3CU3Ef__switchU24map0_3; }
	inline void set_U3CU3Ef__switchU24map0_3(Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * value)
	{
		___U3CU3Ef__switchU24map0_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map0_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Event
struct Event_t187FF6A6B357447B83EC2064823EE0AEC5263210_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Event
struct Event_t187FF6A6B357447B83EC2064823EE0AEC5263210_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // EVENT_T187FF6A6B357447B83EC2064823EE0AEC5263210_H
#ifndef EVENTMODIFIERS_TC34E3018F3697001F894187AF6E9E63D7E203061_H
#define EVENTMODIFIERS_TC34E3018F3697001F894187AF6E9E63D7E203061_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventModifiers
struct  EventModifiers_tC34E3018F3697001F894187AF6E9E63D7E203061 
{
public:
	// System.Int32 UnityEngine.EventModifiers::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(EventModifiers_tC34E3018F3697001F894187AF6E9E63D7E203061, ___value___1)); }
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
#endif // EVENTMODIFIERS_TC34E3018F3697001F894187AF6E9E63D7E203061_H
#ifndef EVENTTYPE_T3D3937E705A4506226002DAB22071B7B181DA57B_H
#define EVENTTYPE_T3D3937E705A4506226002DAB22071B7B181DA57B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventType
struct  EventType_t3D3937E705A4506226002DAB22071B7B181DA57B 
{
public:
	// System.Int32 UnityEngine.EventType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(EventType_t3D3937E705A4506226002DAB22071B7B181DA57B, ___value___1)); }
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
#endif // EVENTTYPE_T3D3937E705A4506226002DAB22071B7B181DA57B_H
#ifndef FOCUSTYPE_T8242637722FC265816544B73BC14E4293A78FD85_H
#define FOCUSTYPE_T8242637722FC265816544B73BC14E4293A78FD85_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.FocusType
struct  FocusType_t8242637722FC265816544B73BC14E4293A78FD85 
{
public:
	// System.Int32 UnityEngine.FocusType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FocusType_t8242637722FC265816544B73BC14E4293A78FD85, ___value___1)); }
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
#endif // FOCUSTYPE_T8242637722FC265816544B73BC14E4293A78FD85_H
#ifndef GUILAYOUTENTRY_T84827D72E8F6B673B1DB9F9FD91C9991007C9845_H
#define GUILAYOUTENTRY_T84827D72E8F6B673B1DB9F9FD91C9991007C9845_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUILayoutEntry
struct  GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845  : public RuntimeObject
{
public:
	// System.Single UnityEngine.GUILayoutEntry::minWidth
	float ___minWidth_0;
	// System.Single UnityEngine.GUILayoutEntry::maxWidth
	float ___maxWidth_1;
	// System.Single UnityEngine.GUILayoutEntry::minHeight
	float ___minHeight_2;
	// System.Single UnityEngine.GUILayoutEntry::maxHeight
	float ___maxHeight_3;
	// UnityEngine.Rect UnityEngine.GUILayoutEntry::rect
	Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___rect_4;
	// System.Int32 UnityEngine.GUILayoutEntry::stretchWidth
	int32_t ___stretchWidth_5;
	// System.Int32 UnityEngine.GUILayoutEntry::stretchHeight
	int32_t ___stretchHeight_6;
	// System.Boolean UnityEngine.GUILayoutEntry::consideredForMargin
	bool ___consideredForMargin_7;
	// UnityEngine.GUIStyle UnityEngine.GUILayoutEntry::m_Style
	GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___m_Style_8;

public:
	inline static int32_t get_offset_of_minWidth_0() { return static_cast<int32_t>(offsetof(GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845, ___minWidth_0)); }
	inline float get_minWidth_0() const { return ___minWidth_0; }
	inline float* get_address_of_minWidth_0() { return &___minWidth_0; }
	inline void set_minWidth_0(float value)
	{
		___minWidth_0 = value;
	}

	inline static int32_t get_offset_of_maxWidth_1() { return static_cast<int32_t>(offsetof(GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845, ___maxWidth_1)); }
	inline float get_maxWidth_1() const { return ___maxWidth_1; }
	inline float* get_address_of_maxWidth_1() { return &___maxWidth_1; }
	inline void set_maxWidth_1(float value)
	{
		___maxWidth_1 = value;
	}

	inline static int32_t get_offset_of_minHeight_2() { return static_cast<int32_t>(offsetof(GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845, ___minHeight_2)); }
	inline float get_minHeight_2() const { return ___minHeight_2; }
	inline float* get_address_of_minHeight_2() { return &___minHeight_2; }
	inline void set_minHeight_2(float value)
	{
		___minHeight_2 = value;
	}

	inline static int32_t get_offset_of_maxHeight_3() { return static_cast<int32_t>(offsetof(GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845, ___maxHeight_3)); }
	inline float get_maxHeight_3() const { return ___maxHeight_3; }
	inline float* get_address_of_maxHeight_3() { return &___maxHeight_3; }
	inline void set_maxHeight_3(float value)
	{
		___maxHeight_3 = value;
	}

	inline static int32_t get_offset_of_rect_4() { return static_cast<int32_t>(offsetof(GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845, ___rect_4)); }
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE  get_rect_4() const { return ___rect_4; }
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE * get_address_of_rect_4() { return &___rect_4; }
	inline void set_rect_4(Rect_t35B976DE901B5423C11705E156938EA27AB402CE  value)
	{
		___rect_4 = value;
	}

	inline static int32_t get_offset_of_stretchWidth_5() { return static_cast<int32_t>(offsetof(GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845, ___stretchWidth_5)); }
	inline int32_t get_stretchWidth_5() const { return ___stretchWidth_5; }
	inline int32_t* get_address_of_stretchWidth_5() { return &___stretchWidth_5; }
	inline void set_stretchWidth_5(int32_t value)
	{
		___stretchWidth_5 = value;
	}

	inline static int32_t get_offset_of_stretchHeight_6() { return static_cast<int32_t>(offsetof(GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845, ___stretchHeight_6)); }
	inline int32_t get_stretchHeight_6() const { return ___stretchHeight_6; }
	inline int32_t* get_address_of_stretchHeight_6() { return &___stretchHeight_6; }
	inline void set_stretchHeight_6(int32_t value)
	{
		___stretchHeight_6 = value;
	}

	inline static int32_t get_offset_of_consideredForMargin_7() { return static_cast<int32_t>(offsetof(GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845, ___consideredForMargin_7)); }
	inline bool get_consideredForMargin_7() const { return ___consideredForMargin_7; }
	inline bool* get_address_of_consideredForMargin_7() { return &___consideredForMargin_7; }
	inline void set_consideredForMargin_7(bool value)
	{
		___consideredForMargin_7 = value;
	}

	inline static int32_t get_offset_of_m_Style_8() { return static_cast<int32_t>(offsetof(GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845, ___m_Style_8)); }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * get_m_Style_8() const { return ___m_Style_8; }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 ** get_address_of_m_Style_8() { return &___m_Style_8; }
	inline void set_m_Style_8(GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * value)
	{
		___m_Style_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_Style_8), value);
	}
};

struct GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845_StaticFields
{
public:
	// UnityEngine.Rect UnityEngine.GUILayoutEntry::kDummyRect
	Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___kDummyRect_9;
	// System.Int32 UnityEngine.GUILayoutEntry::indent
	int32_t ___indent_10;

public:
	inline static int32_t get_offset_of_kDummyRect_9() { return static_cast<int32_t>(offsetof(GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845_StaticFields, ___kDummyRect_9)); }
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE  get_kDummyRect_9() const { return ___kDummyRect_9; }
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE * get_address_of_kDummyRect_9() { return &___kDummyRect_9; }
	inline void set_kDummyRect_9(Rect_t35B976DE901B5423C11705E156938EA27AB402CE  value)
	{
		___kDummyRect_9 = value;
	}

	inline static int32_t get_offset_of_indent_10() { return static_cast<int32_t>(offsetof(GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845_StaticFields, ___indent_10)); }
	inline int32_t get_indent_10() const { return ___indent_10; }
	inline int32_t* get_address_of_indent_10() { return &___indent_10; }
	inline void set_indent_10(int32_t value)
	{
		___indent_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUILAYOUTENTRY_T84827D72E8F6B673B1DB9F9FD91C9991007C9845_H
#ifndef TYPE_T1060D19522CDA0F7C9A26733BE1E8C8E20AC1278_H
#define TYPE_T1060D19522CDA0F7C9A26733BE1E8C8E20AC1278_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUILayoutOption_Type
struct  Type_t1060D19522CDA0F7C9A26733BE1E8C8E20AC1278 
{
public:
	// System.Int32 UnityEngine.GUILayoutOption_Type::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Type_t1060D19522CDA0F7C9A26733BE1E8C8E20AC1278, ___value___1)); }
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
#endif // TYPE_T1060D19522CDA0F7C9A26733BE1E8C8E20AC1278_H
#ifndef GUILAYOUTUTILITY_TFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_H
#define GUILAYOUTUTILITY_TFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUILayoutUtility
struct  GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E  : public RuntimeObject
{
public:

public:
};

struct GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility_LayoutCache> UnityEngine.GUILayoutUtility::s_StoredLayouts
	Dictionary_2_t0F1A21E14D53E05B0F1D474060AC4B36995FBCA1 * ___s_StoredLayouts_0;
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility_LayoutCache> UnityEngine.GUILayoutUtility::s_StoredWindows
	Dictionary_2_t0F1A21E14D53E05B0F1D474060AC4B36995FBCA1 * ___s_StoredWindows_1;
	// UnityEngine.GUILayoutUtility_LayoutCache UnityEngine.GUILayoutUtility::current
	LayoutCache_t0D14FE6139444D164ECA5D31E39E625D80077468 * ___current_2;
	// UnityEngine.Rect UnityEngine.GUILayoutUtility::kDummyRect
	Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___kDummyRect_3;

public:
	inline static int32_t get_offset_of_s_StoredLayouts_0() { return static_cast<int32_t>(offsetof(GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_StaticFields, ___s_StoredLayouts_0)); }
	inline Dictionary_2_t0F1A21E14D53E05B0F1D474060AC4B36995FBCA1 * get_s_StoredLayouts_0() const { return ___s_StoredLayouts_0; }
	inline Dictionary_2_t0F1A21E14D53E05B0F1D474060AC4B36995FBCA1 ** get_address_of_s_StoredLayouts_0() { return &___s_StoredLayouts_0; }
	inline void set_s_StoredLayouts_0(Dictionary_2_t0F1A21E14D53E05B0F1D474060AC4B36995FBCA1 * value)
	{
		___s_StoredLayouts_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_StoredLayouts_0), value);
	}

	inline static int32_t get_offset_of_s_StoredWindows_1() { return static_cast<int32_t>(offsetof(GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_StaticFields, ___s_StoredWindows_1)); }
	inline Dictionary_2_t0F1A21E14D53E05B0F1D474060AC4B36995FBCA1 * get_s_StoredWindows_1() const { return ___s_StoredWindows_1; }
	inline Dictionary_2_t0F1A21E14D53E05B0F1D474060AC4B36995FBCA1 ** get_address_of_s_StoredWindows_1() { return &___s_StoredWindows_1; }
	inline void set_s_StoredWindows_1(Dictionary_2_t0F1A21E14D53E05B0F1D474060AC4B36995FBCA1 * value)
	{
		___s_StoredWindows_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_StoredWindows_1), value);
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_StaticFields, ___current_2)); }
	inline LayoutCache_t0D14FE6139444D164ECA5D31E39E625D80077468 * get_current_2() const { return ___current_2; }
	inline LayoutCache_t0D14FE6139444D164ECA5D31E39E625D80077468 ** get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(LayoutCache_t0D14FE6139444D164ECA5D31E39E625D80077468 * value)
	{
		___current_2 = value;
		Il2CppCodeGenWriteBarrier((&___current_2), value);
	}

	inline static int32_t get_offset_of_kDummyRect_3() { return static_cast<int32_t>(offsetof(GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_StaticFields, ___kDummyRect_3)); }
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE  get_kDummyRect_3() const { return ___kDummyRect_3; }
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE * get_address_of_kDummyRect_3() { return &___kDummyRect_3; }
	inline void set_kDummyRect_3(Rect_t35B976DE901B5423C11705E156938EA27AB402CE  value)
	{
		___kDummyRect_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUILAYOUTUTILITY_TFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_H
#ifndef GUISETTINGS_TA863524720A3C984BAE56598D922F2C04DC80EF4_H
#define GUISETTINGS_TA863524720A3C984BAE56598D922F2C04DC80EF4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUISettings
struct  GUISettings_tA863524720A3C984BAE56598D922F2C04DC80EF4  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.GUISettings::m_DoubleClickSelectsWord
	bool ___m_DoubleClickSelectsWord_0;
	// System.Boolean UnityEngine.GUISettings::m_TripleClickSelectsLine
	bool ___m_TripleClickSelectsLine_1;
	// UnityEngine.Color UnityEngine.GUISettings::m_CursorColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_CursorColor_2;
	// System.Single UnityEngine.GUISettings::m_CursorFlashSpeed
	float ___m_CursorFlashSpeed_3;
	// UnityEngine.Color UnityEngine.GUISettings::m_SelectionColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_SelectionColor_4;

public:
	inline static int32_t get_offset_of_m_DoubleClickSelectsWord_0() { return static_cast<int32_t>(offsetof(GUISettings_tA863524720A3C984BAE56598D922F2C04DC80EF4, ___m_DoubleClickSelectsWord_0)); }
	inline bool get_m_DoubleClickSelectsWord_0() const { return ___m_DoubleClickSelectsWord_0; }
	inline bool* get_address_of_m_DoubleClickSelectsWord_0() { return &___m_DoubleClickSelectsWord_0; }
	inline void set_m_DoubleClickSelectsWord_0(bool value)
	{
		___m_DoubleClickSelectsWord_0 = value;
	}

	inline static int32_t get_offset_of_m_TripleClickSelectsLine_1() { return static_cast<int32_t>(offsetof(GUISettings_tA863524720A3C984BAE56598D922F2C04DC80EF4, ___m_TripleClickSelectsLine_1)); }
	inline bool get_m_TripleClickSelectsLine_1() const { return ___m_TripleClickSelectsLine_1; }
	inline bool* get_address_of_m_TripleClickSelectsLine_1() { return &___m_TripleClickSelectsLine_1; }
	inline void set_m_TripleClickSelectsLine_1(bool value)
	{
		___m_TripleClickSelectsLine_1 = value;
	}

	inline static int32_t get_offset_of_m_CursorColor_2() { return static_cast<int32_t>(offsetof(GUISettings_tA863524720A3C984BAE56598D922F2C04DC80EF4, ___m_CursorColor_2)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_CursorColor_2() const { return ___m_CursorColor_2; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_CursorColor_2() { return &___m_CursorColor_2; }
	inline void set_m_CursorColor_2(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_CursorColor_2 = value;
	}

	inline static int32_t get_offset_of_m_CursorFlashSpeed_3() { return static_cast<int32_t>(offsetof(GUISettings_tA863524720A3C984BAE56598D922F2C04DC80EF4, ___m_CursorFlashSpeed_3)); }
	inline float get_m_CursorFlashSpeed_3() const { return ___m_CursorFlashSpeed_3; }
	inline float* get_address_of_m_CursorFlashSpeed_3() { return &___m_CursorFlashSpeed_3; }
	inline void set_m_CursorFlashSpeed_3(float value)
	{
		___m_CursorFlashSpeed_3 = value;
	}

	inline static int32_t get_offset_of_m_SelectionColor_4() { return static_cast<int32_t>(offsetof(GUISettings_tA863524720A3C984BAE56598D922F2C04DC80EF4, ___m_SelectionColor_4)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_SelectionColor_4() const { return ___m_SelectionColor_4; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_SelectionColor_4() { return &___m_SelectionColor_4; }
	inline void set_m_SelectionColor_4(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_SelectionColor_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUISETTINGS_TA863524720A3C984BAE56598D922F2C04DC80EF4_H
#ifndef GUISTYLESTATE_T2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_H
#define GUISTYLESTATE_T2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUIStyleState
struct  GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.GUIStyleState::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyle UnityEngine.GUIStyleState::m_SourceStyle
	GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___m_SourceStyle_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceStyle_1() { return static_cast<int32_t>(offsetof(GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5, ___m_SourceStyle_1)); }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * get_m_SourceStyle_1() const { return ___m_SourceStyle_1; }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 ** get_address_of_m_SourceStyle_1() { return &___m_SourceStyle_1; }
	inline void set_m_SourceStyle_1(GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * value)
	{
		___m_SourceStyle_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_SourceStyle_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.GUIStyleState
struct GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyle_t671F175A201A19166385EE3392292A5F50070572_marshaled_pinvoke* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.GUIStyleState
struct GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyle_t671F175A201A19166385EE3392292A5F50070572_marshaled_com* ___m_SourceStyle_1;
};
#endif // GUISTYLESTATE_T2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_H
#ifndef KEYCODE_TC93EA87C5A6901160B583ADFCD3EF6726570DC3C_H
#define KEYCODE_TC93EA87C5A6901160B583ADFCD3EF6726570DC3C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.KeyCode
struct  KeyCode_tC93EA87C5A6901160B583ADFCD3EF6726570DC3C 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(KeyCode_tC93EA87C5A6901160B583ADFCD3EF6726570DC3C, ___value___1)); }
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
#endif // KEYCODE_TC93EA87C5A6901160B583ADFCD3EF6726570DC3C_H
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
#ifndef RECTOFFSET_TED44B1176E93501050480416699D1F11BAE8C87A_H
#define RECTOFFSET_TED44B1176E93501050480416699D1F11BAE8C87A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectOffset
struct  RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.RectOffset::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Object UnityEngine.RectOffset::m_SourceStyle
	RuntimeObject * ___m_SourceStyle_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceStyle_1() { return static_cast<int32_t>(offsetof(RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A, ___m_SourceStyle_1)); }
	inline RuntimeObject * get_m_SourceStyle_1() const { return ___m_SourceStyle_1; }
	inline RuntimeObject ** get_address_of_m_SourceStyle_1() { return &___m_SourceStyle_1; }
	inline void set_m_SourceStyle_1(RuntimeObject * value)
	{
		___m_SourceStyle_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_SourceStyle_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.RectOffset
struct RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.RectOffset
struct RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
#endif // RECTOFFSET_TED44B1176E93501050480416699D1F11BAE8C87A_H
#ifndef DBLCLICKSNAPPING_T82D31F14587749755F9CB1FF9E975DDBEF7630CE_H
#define DBLCLICKSNAPPING_T82D31F14587749755F9CB1FF9E975DDBEF7630CE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextEditor_DblClickSnapping
struct  DblClickSnapping_t82D31F14587749755F9CB1FF9E975DDBEF7630CE 
{
public:
	// System.Byte UnityEngine.TextEditor_DblClickSnapping::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DblClickSnapping_t82D31F14587749755F9CB1FF9E975DDBEF7630CE, ___value___1)); }
	inline uint8_t get_value___1() const { return ___value___1; }
	inline uint8_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint8_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DBLCLICKSNAPPING_T82D31F14587749755F9CB1FF9E975DDBEF7630CE_H
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
#ifndef ENUMERATOR_TEAA30391AD3B522BB475B8C0E5FA9974F0E2386F_H
#define ENUMERATOR_TEAA30391AD3B522BB475B8C0E5FA9974F0E2386F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2_ValueCollection_Enumerator<System.Object,System.Object>
struct  Enumerator_tEAA30391AD3B522BB475B8C0E5FA9974F0E2386F 
{
public:
	// System.Collections.Generic.Dictionary`2_Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2_ValueCollection_Enumerator::host_enumerator
	Enumerator_t5DE3D636A6596D8B2CAB473CE8F848FC269A03A3  ___host_enumerator_0;

public:
	inline static int32_t get_offset_of_host_enumerator_0() { return static_cast<int32_t>(offsetof(Enumerator_tEAA30391AD3B522BB475B8C0E5FA9974F0E2386F, ___host_enumerator_0)); }
	inline Enumerator_t5DE3D636A6596D8B2CAB473CE8F848FC269A03A3  get_host_enumerator_0() const { return ___host_enumerator_0; }
	inline Enumerator_t5DE3D636A6596D8B2CAB473CE8F848FC269A03A3 * get_address_of_host_enumerator_0() { return &___host_enumerator_0; }
	inline void set_host_enumerator_0(Enumerator_t5DE3D636A6596D8B2CAB473CE8F848FC269A03A3  value)
	{
		___host_enumerator_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_TEAA30391AD3B522BB475B8C0E5FA9974F0E2386F_H
#ifndef ENUMERATOR_T7CFB6C06FEABB756D0C0A1BA202A13F5091958A6_H
#define ENUMERATOR_T7CFB6C06FEABB756D0C0A1BA202A13F5091958A6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2_ValueCollection_Enumerator<System.String,UnityEngine.GUIStyle>
struct  Enumerator_t7CFB6C06FEABB756D0C0A1BA202A13F5091958A6 
{
public:
	// System.Collections.Generic.Dictionary`2_Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2_ValueCollection_Enumerator::host_enumerator
	Enumerator_tDAB90A611C9EC34B660F1645FCE7D1CBA4923FE1  ___host_enumerator_0;

public:
	inline static int32_t get_offset_of_host_enumerator_0() { return static_cast<int32_t>(offsetof(Enumerator_t7CFB6C06FEABB756D0C0A1BA202A13F5091958A6, ___host_enumerator_0)); }
	inline Enumerator_tDAB90A611C9EC34B660F1645FCE7D1CBA4923FE1  get_host_enumerator_0() const { return ___host_enumerator_0; }
	inline Enumerator_tDAB90A611C9EC34B660F1645FCE7D1CBA4923FE1 * get_address_of_host_enumerator_0() { return &___host_enumerator_0; }
	inline void set_host_enumerator_0(Enumerator_tDAB90A611C9EC34B660F1645FCE7D1CBA4923FE1  value)
	{
		___host_enumerator_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T7CFB6C06FEABB756D0C0A1BA202A13F5091958A6_H
#ifndef DATETIME_T816BBD9125EA02B42B87CB07643FC5F803391DA2_H
#define DATETIME_T816BBD9125EA02B42B87CB07643FC5F803391DA2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t816BBD9125EA02B42B87CB07643FC5F803391DA2 
{
public:
	// System.TimeSpan System.DateTime::ticks
	TimeSpan_t26DE4373EA745C072A5FBDEAD8373348955FC374  ___ticks_0;
	// System.DateTimeKind System.DateTime::kind
	int32_t ___kind_1;

public:
	inline static int32_t get_offset_of_ticks_0() { return static_cast<int32_t>(offsetof(DateTime_t816BBD9125EA02B42B87CB07643FC5F803391DA2, ___ticks_0)); }
	inline TimeSpan_t26DE4373EA745C072A5FBDEAD8373348955FC374  get_ticks_0() const { return ___ticks_0; }
	inline TimeSpan_t26DE4373EA745C072A5FBDEAD8373348955FC374 * get_address_of_ticks_0() { return &___ticks_0; }
	inline void set_ticks_0(TimeSpan_t26DE4373EA745C072A5FBDEAD8373348955FC374  value)
	{
		___ticks_0 = value;
	}

	inline static int32_t get_offset_of_kind_1() { return static_cast<int32_t>(offsetof(DateTime_t816BBD9125EA02B42B87CB07643FC5F803391DA2, ___kind_1)); }
	inline int32_t get_kind_1() const { return ___kind_1; }
	inline int32_t* get_address_of_kind_1() { return &___kind_1; }
	inline void set_kind_1(int32_t value)
	{
		___kind_1 = value;
	}
};

struct DateTime_t816BBD9125EA02B42B87CB07643FC5F803391DA2_StaticFields
{
public:
	// System.DateTime System.DateTime::MaxValue
	DateTime_t816BBD9125EA02B42B87CB07643FC5F803391DA2  ___MaxValue_2;
	// System.DateTime System.DateTime::MinValue
	DateTime_t816BBD9125EA02B42B87CB07643FC5F803391DA2  ___MinValue_3;
	// System.String[] System.DateTime::ParseTimeFormats
	StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* ___ParseTimeFormats_4;
	// System.String[] System.DateTime::ParseYearDayMonthFormats
	StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* ___ParseYearDayMonthFormats_5;
	// System.String[] System.DateTime::ParseYearMonthDayFormats
	StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* ___ParseYearMonthDayFormats_6;
	// System.String[] System.DateTime::ParseDayMonthYearFormats
	StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* ___ParseDayMonthYearFormats_7;
	// System.String[] System.DateTime::ParseMonthDayYearFormats
	StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* ___ParseMonthDayYearFormats_8;
	// System.String[] System.DateTime::MonthDayShortFormats
	StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* ___MonthDayShortFormats_9;
	// System.String[] System.DateTime::DayMonthShortFormats
	StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* ___DayMonthShortFormats_10;
	// System.Int32[] System.DateTime::daysmonth
	Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074* ___daysmonth_11;
	// System.Int32[] System.DateTime::daysmonthleap
	Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074* ___daysmonthleap_12;
	// System.Object System.DateTime::to_local_time_span_object
	RuntimeObject * ___to_local_time_span_object_13;
	// System.Int64 System.DateTime::last_now
	int64_t ___last_now_14;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(DateTime_t816BBD9125EA02B42B87CB07643FC5F803391DA2_StaticFields, ___MaxValue_2)); }
	inline DateTime_t816BBD9125EA02B42B87CB07643FC5F803391DA2  get_MaxValue_2() const { return ___MaxValue_2; }
	inline DateTime_t816BBD9125EA02B42B87CB07643FC5F803391DA2 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(DateTime_t816BBD9125EA02B42B87CB07643FC5F803391DA2  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(DateTime_t816BBD9125EA02B42B87CB07643FC5F803391DA2_StaticFields, ___MinValue_3)); }
	inline DateTime_t816BBD9125EA02B42B87CB07643FC5F803391DA2  get_MinValue_3() const { return ___MinValue_3; }
	inline DateTime_t816BBD9125EA02B42B87CB07643FC5F803391DA2 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(DateTime_t816BBD9125EA02B42B87CB07643FC5F803391DA2  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_ParseTimeFormats_4() { return static_cast<int32_t>(offsetof(DateTime_t816BBD9125EA02B42B87CB07643FC5F803391DA2_StaticFields, ___ParseTimeFormats_4)); }
	inline StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* get_ParseTimeFormats_4() const { return ___ParseTimeFormats_4; }
	inline StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B** get_address_of_ParseTimeFormats_4() { return &___ParseTimeFormats_4; }
	inline void set_ParseTimeFormats_4(StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* value)
	{
		___ParseTimeFormats_4 = value;
		Il2CppCodeGenWriteBarrier((&___ParseTimeFormats_4), value);
	}

	inline static int32_t get_offset_of_ParseYearDayMonthFormats_5() { return static_cast<int32_t>(offsetof(DateTime_t816BBD9125EA02B42B87CB07643FC5F803391DA2_StaticFields, ___ParseYearDayMonthFormats_5)); }
	inline StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* get_ParseYearDayMonthFormats_5() const { return ___ParseYearDayMonthFormats_5; }
	inline StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B** get_address_of_ParseYearDayMonthFormats_5() { return &___ParseYearDayMonthFormats_5; }
	inline void set_ParseYearDayMonthFormats_5(StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* value)
	{
		___ParseYearDayMonthFormats_5 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearDayMonthFormats_5), value);
	}

	inline static int32_t get_offset_of_ParseYearMonthDayFormats_6() { return static_cast<int32_t>(offsetof(DateTime_t816BBD9125EA02B42B87CB07643FC5F803391DA2_StaticFields, ___ParseYearMonthDayFormats_6)); }
	inline StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* get_ParseYearMonthDayFormats_6() const { return ___ParseYearMonthDayFormats_6; }
	inline StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B** get_address_of_ParseYearMonthDayFormats_6() { return &___ParseYearMonthDayFormats_6; }
	inline void set_ParseYearMonthDayFormats_6(StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* value)
	{
		___ParseYearMonthDayFormats_6 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearMonthDayFormats_6), value);
	}

	inline static int32_t get_offset_of_ParseDayMonthYearFormats_7() { return static_cast<int32_t>(offsetof(DateTime_t816BBD9125EA02B42B87CB07643FC5F803391DA2_StaticFields, ___ParseDayMonthYearFormats_7)); }
	inline StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* get_ParseDayMonthYearFormats_7() const { return ___ParseDayMonthYearFormats_7; }
	inline StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B** get_address_of_ParseDayMonthYearFormats_7() { return &___ParseDayMonthYearFormats_7; }
	inline void set_ParseDayMonthYearFormats_7(StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* value)
	{
		___ParseDayMonthYearFormats_7 = value;
		Il2CppCodeGenWriteBarrier((&___ParseDayMonthYearFormats_7), value);
	}

	inline static int32_t get_offset_of_ParseMonthDayYearFormats_8() { return static_cast<int32_t>(offsetof(DateTime_t816BBD9125EA02B42B87CB07643FC5F803391DA2_StaticFields, ___ParseMonthDayYearFormats_8)); }
	inline StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* get_ParseMonthDayYearFormats_8() const { return ___ParseMonthDayYearFormats_8; }
	inline StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B** get_address_of_ParseMonthDayYearFormats_8() { return &___ParseMonthDayYearFormats_8; }
	inline void set_ParseMonthDayYearFormats_8(StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* value)
	{
		___ParseMonthDayYearFormats_8 = value;
		Il2CppCodeGenWriteBarrier((&___ParseMonthDayYearFormats_8), value);
	}

	inline static int32_t get_offset_of_MonthDayShortFormats_9() { return static_cast<int32_t>(offsetof(DateTime_t816BBD9125EA02B42B87CB07643FC5F803391DA2_StaticFields, ___MonthDayShortFormats_9)); }
	inline StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* get_MonthDayShortFormats_9() const { return ___MonthDayShortFormats_9; }
	inline StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B** get_address_of_MonthDayShortFormats_9() { return &___MonthDayShortFormats_9; }
	inline void set_MonthDayShortFormats_9(StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* value)
	{
		___MonthDayShortFormats_9 = value;
		Il2CppCodeGenWriteBarrier((&___MonthDayShortFormats_9), value);
	}

	inline static int32_t get_offset_of_DayMonthShortFormats_10() { return static_cast<int32_t>(offsetof(DateTime_t816BBD9125EA02B42B87CB07643FC5F803391DA2_StaticFields, ___DayMonthShortFormats_10)); }
	inline StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* get_DayMonthShortFormats_10() const { return ___DayMonthShortFormats_10; }
	inline StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B** get_address_of_DayMonthShortFormats_10() { return &___DayMonthShortFormats_10; }
	inline void set_DayMonthShortFormats_10(StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* value)
	{
		___DayMonthShortFormats_10 = value;
		Il2CppCodeGenWriteBarrier((&___DayMonthShortFormats_10), value);
	}

	inline static int32_t get_offset_of_daysmonth_11() { return static_cast<int32_t>(offsetof(DateTime_t816BBD9125EA02B42B87CB07643FC5F803391DA2_StaticFields, ___daysmonth_11)); }
	inline Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074* get_daysmonth_11() const { return ___daysmonth_11; }
	inline Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074** get_address_of_daysmonth_11() { return &___daysmonth_11; }
	inline void set_daysmonth_11(Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074* value)
	{
		___daysmonth_11 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonth_11), value);
	}

	inline static int32_t get_offset_of_daysmonthleap_12() { return static_cast<int32_t>(offsetof(DateTime_t816BBD9125EA02B42B87CB07643FC5F803391DA2_StaticFields, ___daysmonthleap_12)); }
	inline Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074* get_daysmonthleap_12() const { return ___daysmonthleap_12; }
	inline Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074** get_address_of_daysmonthleap_12() { return &___daysmonthleap_12; }
	inline void set_daysmonthleap_12(Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074* value)
	{
		___daysmonthleap_12 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonthleap_12), value);
	}

	inline static int32_t get_offset_of_to_local_time_span_object_13() { return static_cast<int32_t>(offsetof(DateTime_t816BBD9125EA02B42B87CB07643FC5F803391DA2_StaticFields, ___to_local_time_span_object_13)); }
	inline RuntimeObject * get_to_local_time_span_object_13() const { return ___to_local_time_span_object_13; }
	inline RuntimeObject ** get_address_of_to_local_time_span_object_13() { return &___to_local_time_span_object_13; }
	inline void set_to_local_time_span_object_13(RuntimeObject * value)
	{
		___to_local_time_span_object_13 = value;
		Il2CppCodeGenWriteBarrier((&___to_local_time_span_object_13), value);
	}

	inline static int32_t get_offset_of_last_now_14() { return static_cast<int32_t>(offsetof(DateTime_t816BBD9125EA02B42B87CB07643FC5F803391DA2_StaticFields, ___last_now_14)); }
	inline int64_t get_last_now_14() const { return ___last_now_14; }
	inline int64_t* get_address_of_last_now_14() { return &___last_now_14; }
	inline void set_last_now_14(int64_t value)
	{
		___last_now_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T816BBD9125EA02B42B87CB07643FC5F803391DA2_H
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
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t58BB862EF56F46A9518F8ACA413EF7D70238F1AD  ____impl_1;

public:
	inline static int32_t get_offset_of__impl_1() { return static_cast<int32_t>(offsetof(Type_t, ____impl_1)); }
	inline RuntimeTypeHandle_t58BB862EF56F46A9518F8ACA413EF7D70238F1AD  get__impl_1() const { return ____impl_1; }
	inline RuntimeTypeHandle_t58BB862EF56F46A9518F8ACA413EF7D70238F1AD * get_address_of__impl_1() { return &____impl_1; }
	inline void set__impl_1(RuntimeTypeHandle_t58BB862EF56F46A9518F8ACA413EF7D70238F1AD  value)
	{
		____impl_1 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_2;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_tEF927658123F6CD4274B971442504A42AB6DE532* ___EmptyTypes_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t0471813A7FF5255D21A8EA144C5CCF3325274CDE * ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t0471813A7FF5255D21A8EA144C5CCF3325274CDE * ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t0471813A7FF5255D21A8EA144C5CCF3325274CDE * ___FilterNameIgnoreCase_6;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_7;

public:
	inline static int32_t get_offset_of_Delimiter_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_2)); }
	inline Il2CppChar get_Delimiter_2() const { return ___Delimiter_2; }
	inline Il2CppChar* get_address_of_Delimiter_2() { return &___Delimiter_2; }
	inline void set_Delimiter_2(Il2CppChar value)
	{
		___Delimiter_2 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_3)); }
	inline TypeU5BU5D_tEF927658123F6CD4274B971442504A42AB6DE532* get_EmptyTypes_3() const { return ___EmptyTypes_3; }
	inline TypeU5BU5D_tEF927658123F6CD4274B971442504A42AB6DE532** get_address_of_EmptyTypes_3() { return &___EmptyTypes_3; }
	inline void set_EmptyTypes_3(TypeU5BU5D_tEF927658123F6CD4274B971442504A42AB6DE532* value)
	{
		___EmptyTypes_3 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_3), value);
	}

	inline static int32_t get_offset_of_FilterAttribute_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_4)); }
	inline MemberFilter_t0471813A7FF5255D21A8EA144C5CCF3325274CDE * get_FilterAttribute_4() const { return ___FilterAttribute_4; }
	inline MemberFilter_t0471813A7FF5255D21A8EA144C5CCF3325274CDE ** get_address_of_FilterAttribute_4() { return &___FilterAttribute_4; }
	inline void set_FilterAttribute_4(MemberFilter_t0471813A7FF5255D21A8EA144C5CCF3325274CDE * value)
	{
		___FilterAttribute_4 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_4), value);
	}

	inline static int32_t get_offset_of_FilterName_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_5)); }
	inline MemberFilter_t0471813A7FF5255D21A8EA144C5CCF3325274CDE * get_FilterName_5() const { return ___FilterName_5; }
	inline MemberFilter_t0471813A7FF5255D21A8EA144C5CCF3325274CDE ** get_address_of_FilterName_5() { return &___FilterName_5; }
	inline void set_FilterName_5(MemberFilter_t0471813A7FF5255D21A8EA144C5CCF3325274CDE * value)
	{
		___FilterName_5 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_5), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_6)); }
	inline MemberFilter_t0471813A7FF5255D21A8EA144C5CCF3325274CDE * get_FilterNameIgnoreCase_6() const { return ___FilterNameIgnoreCase_6; }
	inline MemberFilter_t0471813A7FF5255D21A8EA144C5CCF3325274CDE ** get_address_of_FilterNameIgnoreCase_6() { return &___FilterNameIgnoreCase_6; }
	inline void set_FilterNameIgnoreCase_6(MemberFilter_t0471813A7FF5255D21A8EA144C5CCF3325274CDE * value)
	{
		___FilterNameIgnoreCase_6 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_6), value);
	}

	inline static int32_t get_offset_of_Missing_7() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_7)); }
	inline RuntimeObject * get_Missing_7() const { return ___Missing_7; }
	inline RuntimeObject ** get_address_of_Missing_7() { return &___Missing_7; }
	inline void set_Missing_7(RuntimeObject * value)
	{
		___Missing_7 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef FONT_T1EDE54AF557272BE314EB4B40EFA50CEB353CA26_H
#define FONT_T1EDE54AF557272BE314EB4B40EFA50CEB353CA26_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Font
struct  Font_t1EDE54AF557272BE314EB4B40EFA50CEB353CA26  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:
	// UnityEngine.Font_FontTextureRebuildCallback UnityEngine.Font::m_FontTextureRebuildCallback
	FontTextureRebuildCallback_tD700C63BB1A449E3A0464C81701E981677D3021C * ___m_FontTextureRebuildCallback_5;

public:
	inline static int32_t get_offset_of_m_FontTextureRebuildCallback_5() { return static_cast<int32_t>(offsetof(Font_t1EDE54AF557272BE314EB4B40EFA50CEB353CA26, ___m_FontTextureRebuildCallback_5)); }
	inline FontTextureRebuildCallback_tD700C63BB1A449E3A0464C81701E981677D3021C * get_m_FontTextureRebuildCallback_5() const { return ___m_FontTextureRebuildCallback_5; }
	inline FontTextureRebuildCallback_tD700C63BB1A449E3A0464C81701E981677D3021C ** get_address_of_m_FontTextureRebuildCallback_5() { return &___m_FontTextureRebuildCallback_5; }
	inline void set_m_FontTextureRebuildCallback_5(FontTextureRebuildCallback_tD700C63BB1A449E3A0464C81701E981677D3021C * value)
	{
		___m_FontTextureRebuildCallback_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_FontTextureRebuildCallback_5), value);
	}
};

struct Font_t1EDE54AF557272BE314EB4B40EFA50CEB353CA26_StaticFields
{
public:
	// System.Action`1<UnityEngine.Font> UnityEngine.Font::textureRebuilt
	Action_1_t795662E553415ECF2DD0F8EEB9BA170C3670F37C * ___textureRebuilt_4;

public:
	inline static int32_t get_offset_of_textureRebuilt_4() { return static_cast<int32_t>(offsetof(Font_t1EDE54AF557272BE314EB4B40EFA50CEB353CA26_StaticFields, ___textureRebuilt_4)); }
	inline Action_1_t795662E553415ECF2DD0F8EEB9BA170C3670F37C * get_textureRebuilt_4() const { return ___textureRebuilt_4; }
	inline Action_1_t795662E553415ECF2DD0F8EEB9BA170C3670F37C ** get_address_of_textureRebuilt_4() { return &___textureRebuilt_4; }
	inline void set_textureRebuilt_4(Action_1_t795662E553415ECF2DD0F8EEB9BA170C3670F37C * value)
	{
		___textureRebuilt_4 = value;
		Il2CppCodeGenWriteBarrier((&___textureRebuilt_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FONT_T1EDE54AF557272BE314EB4B40EFA50CEB353CA26_H
#ifndef GUILAYOUTGROUP_TCC791055AD03074C1257B699304E4B45C97DE601_H
#define GUILAYOUTGROUP_TCC791055AD03074C1257B699304E4B45C97DE601_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUILayoutGroup
struct  GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601  : public GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845
{
public:
	// System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry> UnityEngine.GUILayoutGroup::entries
	List_1_t046427F3923444CF746C550FD96A3D0E4189D273 * ___entries_11;
	// System.Boolean UnityEngine.GUILayoutGroup::isVertical
	bool ___isVertical_12;
	// System.Boolean UnityEngine.GUILayoutGroup::resetCoords
	bool ___resetCoords_13;
	// System.Single UnityEngine.GUILayoutGroup::spacing
	float ___spacing_14;
	// System.Boolean UnityEngine.GUILayoutGroup::sameSize
	bool ___sameSize_15;
	// System.Boolean UnityEngine.GUILayoutGroup::isWindow
	bool ___isWindow_16;
	// System.Int32 UnityEngine.GUILayoutGroup::windowID
	int32_t ___windowID_17;
	// System.Int32 UnityEngine.GUILayoutGroup::m_Cursor
	int32_t ___m_Cursor_18;
	// System.Int32 UnityEngine.GUILayoutGroup::m_StretchableCountX
	int32_t ___m_StretchableCountX_19;
	// System.Int32 UnityEngine.GUILayoutGroup::m_StretchableCountY
	int32_t ___m_StretchableCountY_20;
	// System.Boolean UnityEngine.GUILayoutGroup::m_UserSpecifiedWidth
	bool ___m_UserSpecifiedWidth_21;
	// System.Boolean UnityEngine.GUILayoutGroup::m_UserSpecifiedHeight
	bool ___m_UserSpecifiedHeight_22;
	// System.Single UnityEngine.GUILayoutGroup::m_ChildMinWidth
	float ___m_ChildMinWidth_23;
	// System.Single UnityEngine.GUILayoutGroup::m_ChildMaxWidth
	float ___m_ChildMaxWidth_24;
	// System.Single UnityEngine.GUILayoutGroup::m_ChildMinHeight
	float ___m_ChildMinHeight_25;
	// System.Single UnityEngine.GUILayoutGroup::m_ChildMaxHeight
	float ___m_ChildMaxHeight_26;
	// System.Int32 UnityEngine.GUILayoutGroup::m_MarginLeft
	int32_t ___m_MarginLeft_27;
	// System.Int32 UnityEngine.GUILayoutGroup::m_MarginRight
	int32_t ___m_MarginRight_28;
	// System.Int32 UnityEngine.GUILayoutGroup::m_MarginTop
	int32_t ___m_MarginTop_29;
	// System.Int32 UnityEngine.GUILayoutGroup::m_MarginBottom
	int32_t ___m_MarginBottom_30;

public:
	inline static int32_t get_offset_of_entries_11() { return static_cast<int32_t>(offsetof(GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601, ___entries_11)); }
	inline List_1_t046427F3923444CF746C550FD96A3D0E4189D273 * get_entries_11() const { return ___entries_11; }
	inline List_1_t046427F3923444CF746C550FD96A3D0E4189D273 ** get_address_of_entries_11() { return &___entries_11; }
	inline void set_entries_11(List_1_t046427F3923444CF746C550FD96A3D0E4189D273 * value)
	{
		___entries_11 = value;
		Il2CppCodeGenWriteBarrier((&___entries_11), value);
	}

	inline static int32_t get_offset_of_isVertical_12() { return static_cast<int32_t>(offsetof(GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601, ___isVertical_12)); }
	inline bool get_isVertical_12() const { return ___isVertical_12; }
	inline bool* get_address_of_isVertical_12() { return &___isVertical_12; }
	inline void set_isVertical_12(bool value)
	{
		___isVertical_12 = value;
	}

	inline static int32_t get_offset_of_resetCoords_13() { return static_cast<int32_t>(offsetof(GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601, ___resetCoords_13)); }
	inline bool get_resetCoords_13() const { return ___resetCoords_13; }
	inline bool* get_address_of_resetCoords_13() { return &___resetCoords_13; }
	inline void set_resetCoords_13(bool value)
	{
		___resetCoords_13 = value;
	}

	inline static int32_t get_offset_of_spacing_14() { return static_cast<int32_t>(offsetof(GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601, ___spacing_14)); }
	inline float get_spacing_14() const { return ___spacing_14; }
	inline float* get_address_of_spacing_14() { return &___spacing_14; }
	inline void set_spacing_14(float value)
	{
		___spacing_14 = value;
	}

	inline static int32_t get_offset_of_sameSize_15() { return static_cast<int32_t>(offsetof(GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601, ___sameSize_15)); }
	inline bool get_sameSize_15() const { return ___sameSize_15; }
	inline bool* get_address_of_sameSize_15() { return &___sameSize_15; }
	inline void set_sameSize_15(bool value)
	{
		___sameSize_15 = value;
	}

	inline static int32_t get_offset_of_isWindow_16() { return static_cast<int32_t>(offsetof(GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601, ___isWindow_16)); }
	inline bool get_isWindow_16() const { return ___isWindow_16; }
	inline bool* get_address_of_isWindow_16() { return &___isWindow_16; }
	inline void set_isWindow_16(bool value)
	{
		___isWindow_16 = value;
	}

	inline static int32_t get_offset_of_windowID_17() { return static_cast<int32_t>(offsetof(GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601, ___windowID_17)); }
	inline int32_t get_windowID_17() const { return ___windowID_17; }
	inline int32_t* get_address_of_windowID_17() { return &___windowID_17; }
	inline void set_windowID_17(int32_t value)
	{
		___windowID_17 = value;
	}

	inline static int32_t get_offset_of_m_Cursor_18() { return static_cast<int32_t>(offsetof(GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601, ___m_Cursor_18)); }
	inline int32_t get_m_Cursor_18() const { return ___m_Cursor_18; }
	inline int32_t* get_address_of_m_Cursor_18() { return &___m_Cursor_18; }
	inline void set_m_Cursor_18(int32_t value)
	{
		___m_Cursor_18 = value;
	}

	inline static int32_t get_offset_of_m_StretchableCountX_19() { return static_cast<int32_t>(offsetof(GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601, ___m_StretchableCountX_19)); }
	inline int32_t get_m_StretchableCountX_19() const { return ___m_StretchableCountX_19; }
	inline int32_t* get_address_of_m_StretchableCountX_19() { return &___m_StretchableCountX_19; }
	inline void set_m_StretchableCountX_19(int32_t value)
	{
		___m_StretchableCountX_19 = value;
	}

	inline static int32_t get_offset_of_m_StretchableCountY_20() { return static_cast<int32_t>(offsetof(GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601, ___m_StretchableCountY_20)); }
	inline int32_t get_m_StretchableCountY_20() const { return ___m_StretchableCountY_20; }
	inline int32_t* get_address_of_m_StretchableCountY_20() { return &___m_StretchableCountY_20; }
	inline void set_m_StretchableCountY_20(int32_t value)
	{
		___m_StretchableCountY_20 = value;
	}

	inline static int32_t get_offset_of_m_UserSpecifiedWidth_21() { return static_cast<int32_t>(offsetof(GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601, ___m_UserSpecifiedWidth_21)); }
	inline bool get_m_UserSpecifiedWidth_21() const { return ___m_UserSpecifiedWidth_21; }
	inline bool* get_address_of_m_UserSpecifiedWidth_21() { return &___m_UserSpecifiedWidth_21; }
	inline void set_m_UserSpecifiedWidth_21(bool value)
	{
		___m_UserSpecifiedWidth_21 = value;
	}

	inline static int32_t get_offset_of_m_UserSpecifiedHeight_22() { return static_cast<int32_t>(offsetof(GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601, ___m_UserSpecifiedHeight_22)); }
	inline bool get_m_UserSpecifiedHeight_22() const { return ___m_UserSpecifiedHeight_22; }
	inline bool* get_address_of_m_UserSpecifiedHeight_22() { return &___m_UserSpecifiedHeight_22; }
	inline void set_m_UserSpecifiedHeight_22(bool value)
	{
		___m_UserSpecifiedHeight_22 = value;
	}

	inline static int32_t get_offset_of_m_ChildMinWidth_23() { return static_cast<int32_t>(offsetof(GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601, ___m_ChildMinWidth_23)); }
	inline float get_m_ChildMinWidth_23() const { return ___m_ChildMinWidth_23; }
	inline float* get_address_of_m_ChildMinWidth_23() { return &___m_ChildMinWidth_23; }
	inline void set_m_ChildMinWidth_23(float value)
	{
		___m_ChildMinWidth_23 = value;
	}

	inline static int32_t get_offset_of_m_ChildMaxWidth_24() { return static_cast<int32_t>(offsetof(GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601, ___m_ChildMaxWidth_24)); }
	inline float get_m_ChildMaxWidth_24() const { return ___m_ChildMaxWidth_24; }
	inline float* get_address_of_m_ChildMaxWidth_24() { return &___m_ChildMaxWidth_24; }
	inline void set_m_ChildMaxWidth_24(float value)
	{
		___m_ChildMaxWidth_24 = value;
	}

	inline static int32_t get_offset_of_m_ChildMinHeight_25() { return static_cast<int32_t>(offsetof(GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601, ___m_ChildMinHeight_25)); }
	inline float get_m_ChildMinHeight_25() const { return ___m_ChildMinHeight_25; }
	inline float* get_address_of_m_ChildMinHeight_25() { return &___m_ChildMinHeight_25; }
	inline void set_m_ChildMinHeight_25(float value)
	{
		___m_ChildMinHeight_25 = value;
	}

	inline static int32_t get_offset_of_m_ChildMaxHeight_26() { return static_cast<int32_t>(offsetof(GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601, ___m_ChildMaxHeight_26)); }
	inline float get_m_ChildMaxHeight_26() const { return ___m_ChildMaxHeight_26; }
	inline float* get_address_of_m_ChildMaxHeight_26() { return &___m_ChildMaxHeight_26; }
	inline void set_m_ChildMaxHeight_26(float value)
	{
		___m_ChildMaxHeight_26 = value;
	}

	inline static int32_t get_offset_of_m_MarginLeft_27() { return static_cast<int32_t>(offsetof(GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601, ___m_MarginLeft_27)); }
	inline int32_t get_m_MarginLeft_27() const { return ___m_MarginLeft_27; }
	inline int32_t* get_address_of_m_MarginLeft_27() { return &___m_MarginLeft_27; }
	inline void set_m_MarginLeft_27(int32_t value)
	{
		___m_MarginLeft_27 = value;
	}

	inline static int32_t get_offset_of_m_MarginRight_28() { return static_cast<int32_t>(offsetof(GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601, ___m_MarginRight_28)); }
	inline int32_t get_m_MarginRight_28() const { return ___m_MarginRight_28; }
	inline int32_t* get_address_of_m_MarginRight_28() { return &___m_MarginRight_28; }
	inline void set_m_MarginRight_28(int32_t value)
	{
		___m_MarginRight_28 = value;
	}

	inline static int32_t get_offset_of_m_MarginTop_29() { return static_cast<int32_t>(offsetof(GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601, ___m_MarginTop_29)); }
	inline int32_t get_m_MarginTop_29() const { return ___m_MarginTop_29; }
	inline int32_t* get_address_of_m_MarginTop_29() { return &___m_MarginTop_29; }
	inline void set_m_MarginTop_29(int32_t value)
	{
		___m_MarginTop_29 = value;
	}

	inline static int32_t get_offset_of_m_MarginBottom_30() { return static_cast<int32_t>(offsetof(GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601, ___m_MarginBottom_30)); }
	inline int32_t get_m_MarginBottom_30() const { return ___m_MarginBottom_30; }
	inline int32_t* get_address_of_m_MarginBottom_30() { return &___m_MarginBottom_30; }
	inline void set_m_MarginBottom_30(int32_t value)
	{
		___m_MarginBottom_30 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUILAYOUTGROUP_TCC791055AD03074C1257B699304E4B45C97DE601_H
#ifndef GUILAYOUTOPTION_T27A0221AC2F6F53E7B89310FD19F51C565D835A6_H
#define GUILAYOUTOPTION_T27A0221AC2F6F53E7B89310FD19F51C565D835A6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUILayoutOption
struct  GUILayoutOption_t27A0221AC2F6F53E7B89310FD19F51C565D835A6  : public RuntimeObject
{
public:
	// UnityEngine.GUILayoutOption_Type UnityEngine.GUILayoutOption::type
	int32_t ___type_0;
	// System.Object UnityEngine.GUILayoutOption::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(GUILayoutOption_t27A0221AC2F6F53E7B89310FD19F51C565D835A6, ___type_0)); }
	inline int32_t get_type_0() const { return ___type_0; }
	inline int32_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int32_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(GUILayoutOption_t27A0221AC2F6F53E7B89310FD19F51C565D835A6, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUILAYOUTOPTION_T27A0221AC2F6F53E7B89310FD19F51C565D835A6_H
#ifndef GUISTYLE_T671F175A201A19166385EE3392292A5F50070572_H
#define GUISTYLE_T671F175A201A19166385EE3392292A5F50070572_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUIStyle
struct  GUIStyle_t671F175A201A19166385EE3392292A5F50070572  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.GUIStyle::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Normal
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * ___m_Normal_1;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Hover
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * ___m_Hover_2;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Active
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * ___m_Active_3;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Focused
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * ___m_Focused_4;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnNormal
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * ___m_OnNormal_5;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnHover
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * ___m_OnHover_6;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnActive
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * ___m_OnActive_7;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnFocused
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * ___m_OnFocused_8;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Border
	RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * ___m_Border_9;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Padding
	RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * ___m_Padding_10;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Margin
	RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * ___m_Margin_11;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Overflow
	RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * ___m_Overflow_12;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(GUIStyle_t671F175A201A19166385EE3392292A5F50070572, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(GUIStyle_t671F175A201A19166385EE3392292A5F50070572, ___m_Normal_1)); }
	inline GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * get_m_Normal_1() const { return ___m_Normal_1; }
	inline GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 ** get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * value)
	{
		___m_Normal_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Normal_1), value);
	}

	inline static int32_t get_offset_of_m_Hover_2() { return static_cast<int32_t>(offsetof(GUIStyle_t671F175A201A19166385EE3392292A5F50070572, ___m_Hover_2)); }
	inline GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * get_m_Hover_2() const { return ___m_Hover_2; }
	inline GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 ** get_address_of_m_Hover_2() { return &___m_Hover_2; }
	inline void set_m_Hover_2(GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * value)
	{
		___m_Hover_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Hover_2), value);
	}

	inline static int32_t get_offset_of_m_Active_3() { return static_cast<int32_t>(offsetof(GUIStyle_t671F175A201A19166385EE3392292A5F50070572, ___m_Active_3)); }
	inline GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * get_m_Active_3() const { return ___m_Active_3; }
	inline GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 ** get_address_of_m_Active_3() { return &___m_Active_3; }
	inline void set_m_Active_3(GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * value)
	{
		___m_Active_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Active_3), value);
	}

	inline static int32_t get_offset_of_m_Focused_4() { return static_cast<int32_t>(offsetof(GUIStyle_t671F175A201A19166385EE3392292A5F50070572, ___m_Focused_4)); }
	inline GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * get_m_Focused_4() const { return ___m_Focused_4; }
	inline GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 ** get_address_of_m_Focused_4() { return &___m_Focused_4; }
	inline void set_m_Focused_4(GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * value)
	{
		___m_Focused_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Focused_4), value);
	}

	inline static int32_t get_offset_of_m_OnNormal_5() { return static_cast<int32_t>(offsetof(GUIStyle_t671F175A201A19166385EE3392292A5F50070572, ___m_OnNormal_5)); }
	inline GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * get_m_OnNormal_5() const { return ___m_OnNormal_5; }
	inline GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 ** get_address_of_m_OnNormal_5() { return &___m_OnNormal_5; }
	inline void set_m_OnNormal_5(GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * value)
	{
		___m_OnNormal_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnNormal_5), value);
	}

	inline static int32_t get_offset_of_m_OnHover_6() { return static_cast<int32_t>(offsetof(GUIStyle_t671F175A201A19166385EE3392292A5F50070572, ___m_OnHover_6)); }
	inline GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * get_m_OnHover_6() const { return ___m_OnHover_6; }
	inline GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 ** get_address_of_m_OnHover_6() { return &___m_OnHover_6; }
	inline void set_m_OnHover_6(GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * value)
	{
		___m_OnHover_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnHover_6), value);
	}

	inline static int32_t get_offset_of_m_OnActive_7() { return static_cast<int32_t>(offsetof(GUIStyle_t671F175A201A19166385EE3392292A5F50070572, ___m_OnActive_7)); }
	inline GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * get_m_OnActive_7() const { return ___m_OnActive_7; }
	inline GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 ** get_address_of_m_OnActive_7() { return &___m_OnActive_7; }
	inline void set_m_OnActive_7(GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * value)
	{
		___m_OnActive_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnActive_7), value);
	}

	inline static int32_t get_offset_of_m_OnFocused_8() { return static_cast<int32_t>(offsetof(GUIStyle_t671F175A201A19166385EE3392292A5F50070572, ___m_OnFocused_8)); }
	inline GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * get_m_OnFocused_8() const { return ___m_OnFocused_8; }
	inline GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 ** get_address_of_m_OnFocused_8() { return &___m_OnFocused_8; }
	inline void set_m_OnFocused_8(GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * value)
	{
		___m_OnFocused_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnFocused_8), value);
	}

	inline static int32_t get_offset_of_m_Border_9() { return static_cast<int32_t>(offsetof(GUIStyle_t671F175A201A19166385EE3392292A5F50070572, ___m_Border_9)); }
	inline RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * get_m_Border_9() const { return ___m_Border_9; }
	inline RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A ** get_address_of_m_Border_9() { return &___m_Border_9; }
	inline void set_m_Border_9(RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * value)
	{
		___m_Border_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_Border_9), value);
	}

	inline static int32_t get_offset_of_m_Padding_10() { return static_cast<int32_t>(offsetof(GUIStyle_t671F175A201A19166385EE3392292A5F50070572, ___m_Padding_10)); }
	inline RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * get_m_Padding_10() const { return ___m_Padding_10; }
	inline RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A ** get_address_of_m_Padding_10() { return &___m_Padding_10; }
	inline void set_m_Padding_10(RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * value)
	{
		___m_Padding_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_Padding_10), value);
	}

	inline static int32_t get_offset_of_m_Margin_11() { return static_cast<int32_t>(offsetof(GUIStyle_t671F175A201A19166385EE3392292A5F50070572, ___m_Margin_11)); }
	inline RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * get_m_Margin_11() const { return ___m_Margin_11; }
	inline RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A ** get_address_of_m_Margin_11() { return &___m_Margin_11; }
	inline void set_m_Margin_11(RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * value)
	{
		___m_Margin_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_Margin_11), value);
	}

	inline static int32_t get_offset_of_m_Overflow_12() { return static_cast<int32_t>(offsetof(GUIStyle_t671F175A201A19166385EE3392292A5F50070572, ___m_Overflow_12)); }
	inline RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * get_m_Overflow_12() const { return ___m_Overflow_12; }
	inline RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A ** get_address_of_m_Overflow_12() { return &___m_Overflow_12; }
	inline void set_m_Overflow_12(RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * value)
	{
		___m_Overflow_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_Overflow_12), value);
	}
};

struct GUIStyle_t671F175A201A19166385EE3392292A5F50070572_StaticFields
{
public:
	// System.Boolean UnityEngine.GUIStyle::showKeyboardFocus
	bool ___showKeyboardFocus_13;
	// UnityEngine.GUIStyle UnityEngine.GUIStyle::s_None
	GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___s_None_14;

public:
	inline static int32_t get_offset_of_showKeyboardFocus_13() { return static_cast<int32_t>(offsetof(GUIStyle_t671F175A201A19166385EE3392292A5F50070572_StaticFields, ___showKeyboardFocus_13)); }
	inline bool get_showKeyboardFocus_13() const { return ___showKeyboardFocus_13; }
	inline bool* get_address_of_showKeyboardFocus_13() { return &___showKeyboardFocus_13; }
	inline void set_showKeyboardFocus_13(bool value)
	{
		___showKeyboardFocus_13 = value;
	}

	inline static int32_t get_offset_of_s_None_14() { return static_cast<int32_t>(offsetof(GUIStyle_t671F175A201A19166385EE3392292A5F50070572_StaticFields, ___s_None_14)); }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * get_s_None_14() const { return ___s_None_14; }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 ** get_address_of_s_None_14() { return &___s_None_14; }
	inline void set_s_None_14(GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * value)
	{
		___s_None_14 = value;
		Il2CppCodeGenWriteBarrier((&___s_None_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.GUIStyle
struct GUIStyle_t671F175A201A19166385EE3392292A5F50070572_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshaled_pinvoke* ___m_Normal_1;
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshaled_pinvoke* ___m_Hover_2;
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshaled_pinvoke* ___m_Active_3;
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshaled_pinvoke* ___m_Focused_4;
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshaled_pinvoke* ___m_OnNormal_5;
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshaled_pinvoke* ___m_OnHover_6;
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshaled_pinvoke* ___m_OnActive_7;
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshaled_pinvoke* ___m_OnFocused_8;
	RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A_marshaled_pinvoke ___m_Border_9;
	RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A_marshaled_pinvoke ___m_Padding_10;
	RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A_marshaled_pinvoke ___m_Margin_11;
	RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A_marshaled_pinvoke ___m_Overflow_12;
};
// Native definition for COM marshalling of UnityEngine.GUIStyle
struct GUIStyle_t671F175A201A19166385EE3392292A5F50070572_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshaled_com* ___m_Normal_1;
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshaled_com* ___m_Hover_2;
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshaled_com* ___m_Active_3;
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshaled_com* ___m_Focused_4;
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshaled_com* ___m_OnNormal_5;
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshaled_com* ___m_OnHover_6;
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshaled_com* ___m_OnActive_7;
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshaled_com* ___m_OnFocused_8;
	RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A_marshaled_com* ___m_Border_9;
	RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A_marshaled_com* ___m_Padding_10;
	RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A_marshaled_com* ___m_Margin_11;
	RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A_marshaled_com* ___m_Overflow_12;
};
#endif // GUISTYLE_T671F175A201A19166385EE3392292A5F50070572_H
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
#ifndef TEXTEDITOR_T72CB6095A5C38226E08CD8073D5B6AD98579D440_H
#define TEXTEDITOR_T72CB6095A5C38226E08CD8073D5B6AD98579D440_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextEditor
struct  TextEditor_t72CB6095A5C38226E08CD8073D5B6AD98579D440  : public RuntimeObject
{
public:
	// UnityEngine.TouchScreenKeyboard UnityEngine.TextEditor::keyboardOnScreen
	TouchScreenKeyboard_t2A69F85698E9780470181532D3F2BC903623FD90 * ___keyboardOnScreen_0;
	// System.Int32 UnityEngine.TextEditor::controlID
	int32_t ___controlID_1;
	// UnityEngine.GUIStyle UnityEngine.TextEditor::style
	GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___style_2;
	// System.Boolean UnityEngine.TextEditor::multiline
	bool ___multiline_3;
	// System.Boolean UnityEngine.TextEditor::hasHorizontalCursorPos
	bool ___hasHorizontalCursorPos_4;
	// System.Boolean UnityEngine.TextEditor::isPasswordField
	bool ___isPasswordField_5;
	// UnityEngine.Vector2 UnityEngine.TextEditor::scrollOffset
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___scrollOffset_6;
	// UnityEngine.GUIContent UnityEngine.TextEditor::m_Content
	GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * ___m_Content_7;
	// System.Int32 UnityEngine.TextEditor::m_CursorIndex
	int32_t ___m_CursorIndex_8;
	// System.Int32 UnityEngine.TextEditor::m_SelectIndex
	int32_t ___m_SelectIndex_9;
	// System.Boolean UnityEngine.TextEditor::m_RevealCursor
	bool ___m_RevealCursor_10;
	// System.Boolean UnityEngine.TextEditor::m_MouseDragSelectsWholeWords
	bool ___m_MouseDragSelectsWholeWords_11;
	// System.Int32 UnityEngine.TextEditor::m_DblClickInitPos
	int32_t ___m_DblClickInitPos_12;
	// UnityEngine.TextEditor_DblClickSnapping UnityEngine.TextEditor::m_DblClickSnap
	uint8_t ___m_DblClickSnap_13;
	// System.Boolean UnityEngine.TextEditor::m_bJustSelected
	bool ___m_bJustSelected_14;
	// System.Int32 UnityEngine.TextEditor::m_iAltCursorPos
	int32_t ___m_iAltCursorPos_15;

public:
	inline static int32_t get_offset_of_keyboardOnScreen_0() { return static_cast<int32_t>(offsetof(TextEditor_t72CB6095A5C38226E08CD8073D5B6AD98579D440, ___keyboardOnScreen_0)); }
	inline TouchScreenKeyboard_t2A69F85698E9780470181532D3F2BC903623FD90 * get_keyboardOnScreen_0() const { return ___keyboardOnScreen_0; }
	inline TouchScreenKeyboard_t2A69F85698E9780470181532D3F2BC903623FD90 ** get_address_of_keyboardOnScreen_0() { return &___keyboardOnScreen_0; }
	inline void set_keyboardOnScreen_0(TouchScreenKeyboard_t2A69F85698E9780470181532D3F2BC903623FD90 * value)
	{
		___keyboardOnScreen_0 = value;
		Il2CppCodeGenWriteBarrier((&___keyboardOnScreen_0), value);
	}

	inline static int32_t get_offset_of_controlID_1() { return static_cast<int32_t>(offsetof(TextEditor_t72CB6095A5C38226E08CD8073D5B6AD98579D440, ___controlID_1)); }
	inline int32_t get_controlID_1() const { return ___controlID_1; }
	inline int32_t* get_address_of_controlID_1() { return &___controlID_1; }
	inline void set_controlID_1(int32_t value)
	{
		___controlID_1 = value;
	}

	inline static int32_t get_offset_of_style_2() { return static_cast<int32_t>(offsetof(TextEditor_t72CB6095A5C38226E08CD8073D5B6AD98579D440, ___style_2)); }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * get_style_2() const { return ___style_2; }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 ** get_address_of_style_2() { return &___style_2; }
	inline void set_style_2(GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * value)
	{
		___style_2 = value;
		Il2CppCodeGenWriteBarrier((&___style_2), value);
	}

	inline static int32_t get_offset_of_multiline_3() { return static_cast<int32_t>(offsetof(TextEditor_t72CB6095A5C38226E08CD8073D5B6AD98579D440, ___multiline_3)); }
	inline bool get_multiline_3() const { return ___multiline_3; }
	inline bool* get_address_of_multiline_3() { return &___multiline_3; }
	inline void set_multiline_3(bool value)
	{
		___multiline_3 = value;
	}

	inline static int32_t get_offset_of_hasHorizontalCursorPos_4() { return static_cast<int32_t>(offsetof(TextEditor_t72CB6095A5C38226E08CD8073D5B6AD98579D440, ___hasHorizontalCursorPos_4)); }
	inline bool get_hasHorizontalCursorPos_4() const { return ___hasHorizontalCursorPos_4; }
	inline bool* get_address_of_hasHorizontalCursorPos_4() { return &___hasHorizontalCursorPos_4; }
	inline void set_hasHorizontalCursorPos_4(bool value)
	{
		___hasHorizontalCursorPos_4 = value;
	}

	inline static int32_t get_offset_of_isPasswordField_5() { return static_cast<int32_t>(offsetof(TextEditor_t72CB6095A5C38226E08CD8073D5B6AD98579D440, ___isPasswordField_5)); }
	inline bool get_isPasswordField_5() const { return ___isPasswordField_5; }
	inline bool* get_address_of_isPasswordField_5() { return &___isPasswordField_5; }
	inline void set_isPasswordField_5(bool value)
	{
		___isPasswordField_5 = value;
	}

	inline static int32_t get_offset_of_scrollOffset_6() { return static_cast<int32_t>(offsetof(TextEditor_t72CB6095A5C38226E08CD8073D5B6AD98579D440, ___scrollOffset_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_scrollOffset_6() const { return ___scrollOffset_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_scrollOffset_6() { return &___scrollOffset_6; }
	inline void set_scrollOffset_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___scrollOffset_6 = value;
	}

	inline static int32_t get_offset_of_m_Content_7() { return static_cast<int32_t>(offsetof(TextEditor_t72CB6095A5C38226E08CD8073D5B6AD98579D440, ___m_Content_7)); }
	inline GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * get_m_Content_7() const { return ___m_Content_7; }
	inline GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 ** get_address_of_m_Content_7() { return &___m_Content_7; }
	inline void set_m_Content_7(GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * value)
	{
		___m_Content_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_Content_7), value);
	}

	inline static int32_t get_offset_of_m_CursorIndex_8() { return static_cast<int32_t>(offsetof(TextEditor_t72CB6095A5C38226E08CD8073D5B6AD98579D440, ___m_CursorIndex_8)); }
	inline int32_t get_m_CursorIndex_8() const { return ___m_CursorIndex_8; }
	inline int32_t* get_address_of_m_CursorIndex_8() { return &___m_CursorIndex_8; }
	inline void set_m_CursorIndex_8(int32_t value)
	{
		___m_CursorIndex_8 = value;
	}

	inline static int32_t get_offset_of_m_SelectIndex_9() { return static_cast<int32_t>(offsetof(TextEditor_t72CB6095A5C38226E08CD8073D5B6AD98579D440, ___m_SelectIndex_9)); }
	inline int32_t get_m_SelectIndex_9() const { return ___m_SelectIndex_9; }
	inline int32_t* get_address_of_m_SelectIndex_9() { return &___m_SelectIndex_9; }
	inline void set_m_SelectIndex_9(int32_t value)
	{
		___m_SelectIndex_9 = value;
	}

	inline static int32_t get_offset_of_m_RevealCursor_10() { return static_cast<int32_t>(offsetof(TextEditor_t72CB6095A5C38226E08CD8073D5B6AD98579D440, ___m_RevealCursor_10)); }
	inline bool get_m_RevealCursor_10() const { return ___m_RevealCursor_10; }
	inline bool* get_address_of_m_RevealCursor_10() { return &___m_RevealCursor_10; }
	inline void set_m_RevealCursor_10(bool value)
	{
		___m_RevealCursor_10 = value;
	}

	inline static int32_t get_offset_of_m_MouseDragSelectsWholeWords_11() { return static_cast<int32_t>(offsetof(TextEditor_t72CB6095A5C38226E08CD8073D5B6AD98579D440, ___m_MouseDragSelectsWholeWords_11)); }
	inline bool get_m_MouseDragSelectsWholeWords_11() const { return ___m_MouseDragSelectsWholeWords_11; }
	inline bool* get_address_of_m_MouseDragSelectsWholeWords_11() { return &___m_MouseDragSelectsWholeWords_11; }
	inline void set_m_MouseDragSelectsWholeWords_11(bool value)
	{
		___m_MouseDragSelectsWholeWords_11 = value;
	}

	inline static int32_t get_offset_of_m_DblClickInitPos_12() { return static_cast<int32_t>(offsetof(TextEditor_t72CB6095A5C38226E08CD8073D5B6AD98579D440, ___m_DblClickInitPos_12)); }
	inline int32_t get_m_DblClickInitPos_12() const { return ___m_DblClickInitPos_12; }
	inline int32_t* get_address_of_m_DblClickInitPos_12() { return &___m_DblClickInitPos_12; }
	inline void set_m_DblClickInitPos_12(int32_t value)
	{
		___m_DblClickInitPos_12 = value;
	}

	inline static int32_t get_offset_of_m_DblClickSnap_13() { return static_cast<int32_t>(offsetof(TextEditor_t72CB6095A5C38226E08CD8073D5B6AD98579D440, ___m_DblClickSnap_13)); }
	inline uint8_t get_m_DblClickSnap_13() const { return ___m_DblClickSnap_13; }
	inline uint8_t* get_address_of_m_DblClickSnap_13() { return &___m_DblClickSnap_13; }
	inline void set_m_DblClickSnap_13(uint8_t value)
	{
		___m_DblClickSnap_13 = value;
	}

	inline static int32_t get_offset_of_m_bJustSelected_14() { return static_cast<int32_t>(offsetof(TextEditor_t72CB6095A5C38226E08CD8073D5B6AD98579D440, ___m_bJustSelected_14)); }
	inline bool get_m_bJustSelected_14() const { return ___m_bJustSelected_14; }
	inline bool* get_address_of_m_bJustSelected_14() { return &___m_bJustSelected_14; }
	inline void set_m_bJustSelected_14(bool value)
	{
		___m_bJustSelected_14 = value;
	}

	inline static int32_t get_offset_of_m_iAltCursorPos_15() { return static_cast<int32_t>(offsetof(TextEditor_t72CB6095A5C38226E08CD8073D5B6AD98579D440, ___m_iAltCursorPos_15)); }
	inline int32_t get_m_iAltCursorPos_15() const { return ___m_iAltCursorPos_15; }
	inline int32_t* get_address_of_m_iAltCursorPos_15() { return &___m_iAltCursorPos_15; }
	inline void set_m_iAltCursorPos_15(int32_t value)
	{
		___m_iAltCursorPos_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTEDITOR_T72CB6095A5C38226E08CD8073D5B6AD98579D440_H
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
#ifndef TOUCHSCREENKEYBOARD_T2A69F85698E9780470181532D3F2BC903623FD90_H
#define TOUCHSCREENKEYBOARD_T2A69F85698E9780470181532D3F2BC903623FD90_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TouchScreenKeyboard
struct  TouchScreenKeyboard_t2A69F85698E9780470181532D3F2BC903623FD90  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.TouchScreenKeyboard::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Boolean UnityEngine.TouchScreenKeyboard::<canGetSelection>k__BackingField
	bool ___U3CcanGetSelectionU3Ek__BackingField_1;
	// System.Boolean UnityEngine.TouchScreenKeyboard::<canSetSelection>k__BackingField
	bool ___U3CcanSetSelectionU3Ek__BackingField_2;
	// UnityEngine.TouchScreenKeyboardType UnityEngine.TouchScreenKeyboard::<type>k__BackingField
	int32_t ___U3CtypeU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(TouchScreenKeyboard_t2A69F85698E9780470181532D3F2BC903623FD90, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_U3CcanGetSelectionU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(TouchScreenKeyboard_t2A69F85698E9780470181532D3F2BC903623FD90, ___U3CcanGetSelectionU3Ek__BackingField_1)); }
	inline bool get_U3CcanGetSelectionU3Ek__BackingField_1() const { return ___U3CcanGetSelectionU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CcanGetSelectionU3Ek__BackingField_1() { return &___U3CcanGetSelectionU3Ek__BackingField_1; }
	inline void set_U3CcanGetSelectionU3Ek__BackingField_1(bool value)
	{
		___U3CcanGetSelectionU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CcanSetSelectionU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(TouchScreenKeyboard_t2A69F85698E9780470181532D3F2BC903623FD90, ___U3CcanSetSelectionU3Ek__BackingField_2)); }
	inline bool get_U3CcanSetSelectionU3Ek__BackingField_2() const { return ___U3CcanSetSelectionU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CcanSetSelectionU3Ek__BackingField_2() { return &___U3CcanSetSelectionU3Ek__BackingField_2; }
	inline void set_U3CcanSetSelectionU3Ek__BackingField_2(bool value)
	{
		___U3CcanSetSelectionU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CtypeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(TouchScreenKeyboard_t2A69F85698E9780470181532D3F2BC903623FD90, ___U3CtypeU3Ek__BackingField_3)); }
	inline int32_t get_U3CtypeU3Ek__BackingField_3() const { return ___U3CtypeU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CtypeU3Ek__BackingField_3() { return &___U3CtypeU3Ek__BackingField_3; }
	inline void set_U3CtypeU3Ek__BackingField_3(int32_t value)
	{
		___U3CtypeU3Ek__BackingField_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOUCHSCREENKEYBOARD_T2A69F85698E9780470181532D3F2BC903623FD90_H
#ifndef ACTION_TC9F24EBA5075EA0322C6E0DC6BE2C7BDF962FB21_H
#define ACTION_TC9F24EBA5075EA0322C6E0DC6BE2C7BDF962FB21_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action
struct  Action_tC9F24EBA5075EA0322C6E0DC6BE2C7BDF962FB21  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_TC9F24EBA5075EA0322C6E0DC6BE2C7BDF962FB21_H
#ifndef ASYNCCALLBACK_T74ABD1277F711E7FBDCB00E169A63DEFD39E86A2_H
#define ASYNCCALLBACK_T74ABD1277F711E7FBDCB00E169A63DEFD39E86A2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct  AsyncCallback_t74ABD1277F711E7FBDCB00E169A63DEFD39E86A2  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T74ABD1277F711E7FBDCB00E169A63DEFD39E86A2_H
#ifndef FUNC_2_TC816C5FDED4A7372C449E7660CAB9F94E2AC12F8_H
#define FUNC_2_TC816C5FDED4A7372C449E7660CAB9F94E2AC12F8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`2<System.Exception,System.Boolean>
struct  Func_2_tC816C5FDED4A7372C449E7660CAB9F94E2AC12F8  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_2_TC816C5FDED4A7372C449E7660CAB9F94E2AC12F8_H
#ifndef FUNC_3_TBD99633D8A18C43CC528ECE3F77E2F69900048A7_H
#define FUNC_3_TBD99633D8A18C43CC528ECE3F77E2F69900048A7_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`3<System.Int32,System.IntPtr,System.Boolean>
struct  Func_3_tBD99633D8A18C43CC528ECE3F77E2F69900048A7  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_3_TBD99633D8A18C43CC528ECE3F77E2F69900048A7_H
#ifndef GUI_T3E5CBC6B113E392EBBE1453DEF2B7CD020F345AA_H
#define GUI_T3E5CBC6B113E392EBBE1453DEF2B7CD020F345AA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUI
struct  GUI_t3E5CBC6B113E392EBBE1453DEF2B7CD020F345AA  : public RuntimeObject
{
public:

public:
};

struct GUI_t3E5CBC6B113E392EBBE1453DEF2B7CD020F345AA_StaticFields
{
public:
	// System.Int32 UnityEngine.GUI::s_HotTextField
	int32_t ___s_HotTextField_0;
	// System.Int32 UnityEngine.GUI::s_BoxHash
	int32_t ___s_BoxHash_1;
	// System.Int32 UnityEngine.GUI::s_ButonHash
	int32_t ___s_ButonHash_2;
	// System.Int32 UnityEngine.GUI::s_RepeatButtonHash
	int32_t ___s_RepeatButtonHash_3;
	// System.Int32 UnityEngine.GUI::s_ToggleHash
	int32_t ___s_ToggleHash_4;
	// System.Int32 UnityEngine.GUI::s_ButtonGridHash
	int32_t ___s_ButtonGridHash_5;
	// System.Int32 UnityEngine.GUI::s_SliderHash
	int32_t ___s_SliderHash_6;
	// System.Int32 UnityEngine.GUI::s_BeginGroupHash
	int32_t ___s_BeginGroupHash_7;
	// System.Int32 UnityEngine.GUI::s_ScrollviewHash
	int32_t ___s_ScrollviewHash_8;
	// System.DateTime UnityEngine.GUI::<nextScrollStepTime>k__BackingField
	DateTime_t816BBD9125EA02B42B87CB07643FC5F803391DA2  ___U3CnextScrollStepTimeU3Ek__BackingField_9;
	// UnityEngine.GUISkin UnityEngine.GUI::s_Skin
	GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7 * ___s_Skin_10;
	// UnityEngineInternal.GenericStack UnityEngine.GUI::s_ScrollViewStates
	GenericStack_tC59D21E8DBC50F3C608479C942200AC44CA2D5BC * ___s_ScrollViewStates_11;

public:
	inline static int32_t get_offset_of_s_HotTextField_0() { return static_cast<int32_t>(offsetof(GUI_t3E5CBC6B113E392EBBE1453DEF2B7CD020F345AA_StaticFields, ___s_HotTextField_0)); }
	inline int32_t get_s_HotTextField_0() const { return ___s_HotTextField_0; }
	inline int32_t* get_address_of_s_HotTextField_0() { return &___s_HotTextField_0; }
	inline void set_s_HotTextField_0(int32_t value)
	{
		___s_HotTextField_0 = value;
	}

	inline static int32_t get_offset_of_s_BoxHash_1() { return static_cast<int32_t>(offsetof(GUI_t3E5CBC6B113E392EBBE1453DEF2B7CD020F345AA_StaticFields, ___s_BoxHash_1)); }
	inline int32_t get_s_BoxHash_1() const { return ___s_BoxHash_1; }
	inline int32_t* get_address_of_s_BoxHash_1() { return &___s_BoxHash_1; }
	inline void set_s_BoxHash_1(int32_t value)
	{
		___s_BoxHash_1 = value;
	}

	inline static int32_t get_offset_of_s_ButonHash_2() { return static_cast<int32_t>(offsetof(GUI_t3E5CBC6B113E392EBBE1453DEF2B7CD020F345AA_StaticFields, ___s_ButonHash_2)); }
	inline int32_t get_s_ButonHash_2() const { return ___s_ButonHash_2; }
	inline int32_t* get_address_of_s_ButonHash_2() { return &___s_ButonHash_2; }
	inline void set_s_ButonHash_2(int32_t value)
	{
		___s_ButonHash_2 = value;
	}

	inline static int32_t get_offset_of_s_RepeatButtonHash_3() { return static_cast<int32_t>(offsetof(GUI_t3E5CBC6B113E392EBBE1453DEF2B7CD020F345AA_StaticFields, ___s_RepeatButtonHash_3)); }
	inline int32_t get_s_RepeatButtonHash_3() const { return ___s_RepeatButtonHash_3; }
	inline int32_t* get_address_of_s_RepeatButtonHash_3() { return &___s_RepeatButtonHash_3; }
	inline void set_s_RepeatButtonHash_3(int32_t value)
	{
		___s_RepeatButtonHash_3 = value;
	}

	inline static int32_t get_offset_of_s_ToggleHash_4() { return static_cast<int32_t>(offsetof(GUI_t3E5CBC6B113E392EBBE1453DEF2B7CD020F345AA_StaticFields, ___s_ToggleHash_4)); }
	inline int32_t get_s_ToggleHash_4() const { return ___s_ToggleHash_4; }
	inline int32_t* get_address_of_s_ToggleHash_4() { return &___s_ToggleHash_4; }
	inline void set_s_ToggleHash_4(int32_t value)
	{
		___s_ToggleHash_4 = value;
	}

	inline static int32_t get_offset_of_s_ButtonGridHash_5() { return static_cast<int32_t>(offsetof(GUI_t3E5CBC6B113E392EBBE1453DEF2B7CD020F345AA_StaticFields, ___s_ButtonGridHash_5)); }
	inline int32_t get_s_ButtonGridHash_5() const { return ___s_ButtonGridHash_5; }
	inline int32_t* get_address_of_s_ButtonGridHash_5() { return &___s_ButtonGridHash_5; }
	inline void set_s_ButtonGridHash_5(int32_t value)
	{
		___s_ButtonGridHash_5 = value;
	}

	inline static int32_t get_offset_of_s_SliderHash_6() { return static_cast<int32_t>(offsetof(GUI_t3E5CBC6B113E392EBBE1453DEF2B7CD020F345AA_StaticFields, ___s_SliderHash_6)); }
	inline int32_t get_s_SliderHash_6() const { return ___s_SliderHash_6; }
	inline int32_t* get_address_of_s_SliderHash_6() { return &___s_SliderHash_6; }
	inline void set_s_SliderHash_6(int32_t value)
	{
		___s_SliderHash_6 = value;
	}

	inline static int32_t get_offset_of_s_BeginGroupHash_7() { return static_cast<int32_t>(offsetof(GUI_t3E5CBC6B113E392EBBE1453DEF2B7CD020F345AA_StaticFields, ___s_BeginGroupHash_7)); }
	inline int32_t get_s_BeginGroupHash_7() const { return ___s_BeginGroupHash_7; }
	inline int32_t* get_address_of_s_BeginGroupHash_7() { return &___s_BeginGroupHash_7; }
	inline void set_s_BeginGroupHash_7(int32_t value)
	{
		___s_BeginGroupHash_7 = value;
	}

	inline static int32_t get_offset_of_s_ScrollviewHash_8() { return static_cast<int32_t>(offsetof(GUI_t3E5CBC6B113E392EBBE1453DEF2B7CD020F345AA_StaticFields, ___s_ScrollviewHash_8)); }
	inline int32_t get_s_ScrollviewHash_8() const { return ___s_ScrollviewHash_8; }
	inline int32_t* get_address_of_s_ScrollviewHash_8() { return &___s_ScrollviewHash_8; }
	inline void set_s_ScrollviewHash_8(int32_t value)
	{
		___s_ScrollviewHash_8 = value;
	}

	inline static int32_t get_offset_of_U3CnextScrollStepTimeU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(GUI_t3E5CBC6B113E392EBBE1453DEF2B7CD020F345AA_StaticFields, ___U3CnextScrollStepTimeU3Ek__BackingField_9)); }
	inline DateTime_t816BBD9125EA02B42B87CB07643FC5F803391DA2  get_U3CnextScrollStepTimeU3Ek__BackingField_9() const { return ___U3CnextScrollStepTimeU3Ek__BackingField_9; }
	inline DateTime_t816BBD9125EA02B42B87CB07643FC5F803391DA2 * get_address_of_U3CnextScrollStepTimeU3Ek__BackingField_9() { return &___U3CnextScrollStepTimeU3Ek__BackingField_9; }
	inline void set_U3CnextScrollStepTimeU3Ek__BackingField_9(DateTime_t816BBD9125EA02B42B87CB07643FC5F803391DA2  value)
	{
		___U3CnextScrollStepTimeU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_s_Skin_10() { return static_cast<int32_t>(offsetof(GUI_t3E5CBC6B113E392EBBE1453DEF2B7CD020F345AA_StaticFields, ___s_Skin_10)); }
	inline GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7 * get_s_Skin_10() const { return ___s_Skin_10; }
	inline GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7 ** get_address_of_s_Skin_10() { return &___s_Skin_10; }
	inline void set_s_Skin_10(GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7 * value)
	{
		___s_Skin_10 = value;
		Il2CppCodeGenWriteBarrier((&___s_Skin_10), value);
	}

	inline static int32_t get_offset_of_s_ScrollViewStates_11() { return static_cast<int32_t>(offsetof(GUI_t3E5CBC6B113E392EBBE1453DEF2B7CD020F345AA_StaticFields, ___s_ScrollViewStates_11)); }
	inline GenericStack_tC59D21E8DBC50F3C608479C942200AC44CA2D5BC * get_s_ScrollViewStates_11() const { return ___s_ScrollViewStates_11; }
	inline GenericStack_tC59D21E8DBC50F3C608479C942200AC44CA2D5BC ** get_address_of_s_ScrollViewStates_11() { return &___s_ScrollViewStates_11; }
	inline void set_s_ScrollViewStates_11(GenericStack_tC59D21E8DBC50F3C608479C942200AC44CA2D5BC * value)
	{
		___s_ScrollViewStates_11 = value;
		Il2CppCodeGenWriteBarrier((&___s_ScrollViewStates_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUI_T3E5CBC6B113E392EBBE1453DEF2B7CD020F345AA_H
#ifndef WINDOWFUNCTION_T9AF05117863D95AA9F85D497A3B9B53216708100_H
#define WINDOWFUNCTION_T9AF05117863D95AA9F85D497A3B9B53216708100_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUI_WindowFunction
struct  WindowFunction_t9AF05117863D95AA9F85D497A3B9B53216708100  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WINDOWFUNCTION_T9AF05117863D95AA9F85D497A3B9B53216708100_H
#ifndef GUISCROLLGROUP_TF7FE45226FB28968F68A8D2428FE9EA7DC5B18EE_H
#define GUISCROLLGROUP_TF7FE45226FB28968F68A8D2428FE9EA7DC5B18EE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUIScrollGroup
struct  GUIScrollGroup_tF7FE45226FB28968F68A8D2428FE9EA7DC5B18EE  : public GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601
{
public:
	// System.Single UnityEngine.GUIScrollGroup::calcMinWidth
	float ___calcMinWidth_31;
	// System.Single UnityEngine.GUIScrollGroup::calcMaxWidth
	float ___calcMaxWidth_32;
	// System.Single UnityEngine.GUIScrollGroup::calcMinHeight
	float ___calcMinHeight_33;
	// System.Single UnityEngine.GUIScrollGroup::calcMaxHeight
	float ___calcMaxHeight_34;
	// System.Single UnityEngine.GUIScrollGroup::clientWidth
	float ___clientWidth_35;
	// System.Single UnityEngine.GUIScrollGroup::clientHeight
	float ___clientHeight_36;
	// System.Boolean UnityEngine.GUIScrollGroup::allowHorizontalScroll
	bool ___allowHorizontalScroll_37;
	// System.Boolean UnityEngine.GUIScrollGroup::allowVerticalScroll
	bool ___allowVerticalScroll_38;
	// System.Boolean UnityEngine.GUIScrollGroup::needsHorizontalScrollbar
	bool ___needsHorizontalScrollbar_39;
	// System.Boolean UnityEngine.GUIScrollGroup::needsVerticalScrollbar
	bool ___needsVerticalScrollbar_40;
	// UnityEngine.GUIStyle UnityEngine.GUIScrollGroup::horizontalScrollbar
	GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___horizontalScrollbar_41;
	// UnityEngine.GUIStyle UnityEngine.GUIScrollGroup::verticalScrollbar
	GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___verticalScrollbar_42;

public:
	inline static int32_t get_offset_of_calcMinWidth_31() { return static_cast<int32_t>(offsetof(GUIScrollGroup_tF7FE45226FB28968F68A8D2428FE9EA7DC5B18EE, ___calcMinWidth_31)); }
	inline float get_calcMinWidth_31() const { return ___calcMinWidth_31; }
	inline float* get_address_of_calcMinWidth_31() { return &___calcMinWidth_31; }
	inline void set_calcMinWidth_31(float value)
	{
		___calcMinWidth_31 = value;
	}

	inline static int32_t get_offset_of_calcMaxWidth_32() { return static_cast<int32_t>(offsetof(GUIScrollGroup_tF7FE45226FB28968F68A8D2428FE9EA7DC5B18EE, ___calcMaxWidth_32)); }
	inline float get_calcMaxWidth_32() const { return ___calcMaxWidth_32; }
	inline float* get_address_of_calcMaxWidth_32() { return &___calcMaxWidth_32; }
	inline void set_calcMaxWidth_32(float value)
	{
		___calcMaxWidth_32 = value;
	}

	inline static int32_t get_offset_of_calcMinHeight_33() { return static_cast<int32_t>(offsetof(GUIScrollGroup_tF7FE45226FB28968F68A8D2428FE9EA7DC5B18EE, ___calcMinHeight_33)); }
	inline float get_calcMinHeight_33() const { return ___calcMinHeight_33; }
	inline float* get_address_of_calcMinHeight_33() { return &___calcMinHeight_33; }
	inline void set_calcMinHeight_33(float value)
	{
		___calcMinHeight_33 = value;
	}

	inline static int32_t get_offset_of_calcMaxHeight_34() { return static_cast<int32_t>(offsetof(GUIScrollGroup_tF7FE45226FB28968F68A8D2428FE9EA7DC5B18EE, ___calcMaxHeight_34)); }
	inline float get_calcMaxHeight_34() const { return ___calcMaxHeight_34; }
	inline float* get_address_of_calcMaxHeight_34() { return &___calcMaxHeight_34; }
	inline void set_calcMaxHeight_34(float value)
	{
		___calcMaxHeight_34 = value;
	}

	inline static int32_t get_offset_of_clientWidth_35() { return static_cast<int32_t>(offsetof(GUIScrollGroup_tF7FE45226FB28968F68A8D2428FE9EA7DC5B18EE, ___clientWidth_35)); }
	inline float get_clientWidth_35() const { return ___clientWidth_35; }
	inline float* get_address_of_clientWidth_35() { return &___clientWidth_35; }
	inline void set_clientWidth_35(float value)
	{
		___clientWidth_35 = value;
	}

	inline static int32_t get_offset_of_clientHeight_36() { return static_cast<int32_t>(offsetof(GUIScrollGroup_tF7FE45226FB28968F68A8D2428FE9EA7DC5B18EE, ___clientHeight_36)); }
	inline float get_clientHeight_36() const { return ___clientHeight_36; }
	inline float* get_address_of_clientHeight_36() { return &___clientHeight_36; }
	inline void set_clientHeight_36(float value)
	{
		___clientHeight_36 = value;
	}

	inline static int32_t get_offset_of_allowHorizontalScroll_37() { return static_cast<int32_t>(offsetof(GUIScrollGroup_tF7FE45226FB28968F68A8D2428FE9EA7DC5B18EE, ___allowHorizontalScroll_37)); }
	inline bool get_allowHorizontalScroll_37() const { return ___allowHorizontalScroll_37; }
	inline bool* get_address_of_allowHorizontalScroll_37() { return &___allowHorizontalScroll_37; }
	inline void set_allowHorizontalScroll_37(bool value)
	{
		___allowHorizontalScroll_37 = value;
	}

	inline static int32_t get_offset_of_allowVerticalScroll_38() { return static_cast<int32_t>(offsetof(GUIScrollGroup_tF7FE45226FB28968F68A8D2428FE9EA7DC5B18EE, ___allowVerticalScroll_38)); }
	inline bool get_allowVerticalScroll_38() const { return ___allowVerticalScroll_38; }
	inline bool* get_address_of_allowVerticalScroll_38() { return &___allowVerticalScroll_38; }
	inline void set_allowVerticalScroll_38(bool value)
	{
		___allowVerticalScroll_38 = value;
	}

	inline static int32_t get_offset_of_needsHorizontalScrollbar_39() { return static_cast<int32_t>(offsetof(GUIScrollGroup_tF7FE45226FB28968F68A8D2428FE9EA7DC5B18EE, ___needsHorizontalScrollbar_39)); }
	inline bool get_needsHorizontalScrollbar_39() const { return ___needsHorizontalScrollbar_39; }
	inline bool* get_address_of_needsHorizontalScrollbar_39() { return &___needsHorizontalScrollbar_39; }
	inline void set_needsHorizontalScrollbar_39(bool value)
	{
		___needsHorizontalScrollbar_39 = value;
	}

	inline static int32_t get_offset_of_needsVerticalScrollbar_40() { return static_cast<int32_t>(offsetof(GUIScrollGroup_tF7FE45226FB28968F68A8D2428FE9EA7DC5B18EE, ___needsVerticalScrollbar_40)); }
	inline bool get_needsVerticalScrollbar_40() const { return ___needsVerticalScrollbar_40; }
	inline bool* get_address_of_needsVerticalScrollbar_40() { return &___needsVerticalScrollbar_40; }
	inline void set_needsVerticalScrollbar_40(bool value)
	{
		___needsVerticalScrollbar_40 = value;
	}

	inline static int32_t get_offset_of_horizontalScrollbar_41() { return static_cast<int32_t>(offsetof(GUIScrollGroup_tF7FE45226FB28968F68A8D2428FE9EA7DC5B18EE, ___horizontalScrollbar_41)); }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * get_horizontalScrollbar_41() const { return ___horizontalScrollbar_41; }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 ** get_address_of_horizontalScrollbar_41() { return &___horizontalScrollbar_41; }
	inline void set_horizontalScrollbar_41(GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * value)
	{
		___horizontalScrollbar_41 = value;
		Il2CppCodeGenWriteBarrier((&___horizontalScrollbar_41), value);
	}

	inline static int32_t get_offset_of_verticalScrollbar_42() { return static_cast<int32_t>(offsetof(GUIScrollGroup_tF7FE45226FB28968F68A8D2428FE9EA7DC5B18EE, ___verticalScrollbar_42)); }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * get_verticalScrollbar_42() const { return ___verticalScrollbar_42; }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 ** get_address_of_verticalScrollbar_42() { return &___verticalScrollbar_42; }
	inline void set_verticalScrollbar_42(GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * value)
	{
		___verticalScrollbar_42 = value;
		Il2CppCodeGenWriteBarrier((&___verticalScrollbar_42), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUISCROLLGROUP_TF7FE45226FB28968F68A8D2428FE9EA7DC5B18EE_H
#ifndef GUISKIN_TE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7_H
#define GUISKIN_TE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUISkin
struct  GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:
	// UnityEngine.Font UnityEngine.GUISkin::m_Font
	Font_t1EDE54AF557272BE314EB4B40EFA50CEB353CA26 * ___m_Font_4;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_box
	GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___m_box_5;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_button
	GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___m_button_6;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_toggle
	GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___m_toggle_7;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_label
	GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___m_label_8;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_textField
	GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___m_textField_9;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_textArea
	GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___m_textArea_10;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_window
	GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___m_window_11;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSlider
	GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___m_horizontalSlider_12;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSliderThumb
	GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___m_horizontalSliderThumb_13;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSlider
	GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___m_verticalSlider_14;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSliderThumb
	GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___m_verticalSliderThumb_15;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbar
	GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___m_horizontalScrollbar_16;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarThumb
	GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___m_horizontalScrollbarThumb_17;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarLeftButton
	GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___m_horizontalScrollbarLeftButton_18;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarRightButton
	GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___m_horizontalScrollbarRightButton_19;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbar
	GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___m_verticalScrollbar_20;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarThumb
	GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___m_verticalScrollbarThumb_21;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarUpButton
	GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___m_verticalScrollbarUpButton_22;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarDownButton
	GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___m_verticalScrollbarDownButton_23;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_ScrollView
	GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___m_ScrollView_24;
	// UnityEngine.GUIStyle[] UnityEngine.GUISkin::m_CustomStyles
	GUIStyleU5BU5D_t2F343713D6ADFF41BBCF1D17BAE79F51BD745DBB* ___m_CustomStyles_25;
	// UnityEngine.GUISettings UnityEngine.GUISkin::m_Settings
	GUISettings_tA863524720A3C984BAE56598D922F2C04DC80EF4 * ___m_Settings_26;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle> UnityEngine.GUISkin::m_Styles
	Dictionary_2_tF2F04E1BE233EE6C4A6E90261E463B2A67A3FB6A * ___m_Styles_28;

public:
	inline static int32_t get_offset_of_m_Font_4() { return static_cast<int32_t>(offsetof(GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7, ___m_Font_4)); }
	inline Font_t1EDE54AF557272BE314EB4B40EFA50CEB353CA26 * get_m_Font_4() const { return ___m_Font_4; }
	inline Font_t1EDE54AF557272BE314EB4B40EFA50CEB353CA26 ** get_address_of_m_Font_4() { return &___m_Font_4; }
	inline void set_m_Font_4(Font_t1EDE54AF557272BE314EB4B40EFA50CEB353CA26 * value)
	{
		___m_Font_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Font_4), value);
	}

	inline static int32_t get_offset_of_m_box_5() { return static_cast<int32_t>(offsetof(GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7, ___m_box_5)); }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * get_m_box_5() const { return ___m_box_5; }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 ** get_address_of_m_box_5() { return &___m_box_5; }
	inline void set_m_box_5(GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * value)
	{
		___m_box_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_box_5), value);
	}

	inline static int32_t get_offset_of_m_button_6() { return static_cast<int32_t>(offsetof(GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7, ___m_button_6)); }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * get_m_button_6() const { return ___m_button_6; }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 ** get_address_of_m_button_6() { return &___m_button_6; }
	inline void set_m_button_6(GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * value)
	{
		___m_button_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_button_6), value);
	}

	inline static int32_t get_offset_of_m_toggle_7() { return static_cast<int32_t>(offsetof(GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7, ___m_toggle_7)); }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * get_m_toggle_7() const { return ___m_toggle_7; }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 ** get_address_of_m_toggle_7() { return &___m_toggle_7; }
	inline void set_m_toggle_7(GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * value)
	{
		___m_toggle_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_toggle_7), value);
	}

	inline static int32_t get_offset_of_m_label_8() { return static_cast<int32_t>(offsetof(GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7, ___m_label_8)); }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * get_m_label_8() const { return ___m_label_8; }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 ** get_address_of_m_label_8() { return &___m_label_8; }
	inline void set_m_label_8(GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * value)
	{
		___m_label_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_label_8), value);
	}

	inline static int32_t get_offset_of_m_textField_9() { return static_cast<int32_t>(offsetof(GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7, ___m_textField_9)); }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * get_m_textField_9() const { return ___m_textField_9; }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 ** get_address_of_m_textField_9() { return &___m_textField_9; }
	inline void set_m_textField_9(GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * value)
	{
		___m_textField_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_textField_9), value);
	}

	inline static int32_t get_offset_of_m_textArea_10() { return static_cast<int32_t>(offsetof(GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7, ___m_textArea_10)); }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * get_m_textArea_10() const { return ___m_textArea_10; }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 ** get_address_of_m_textArea_10() { return &___m_textArea_10; }
	inline void set_m_textArea_10(GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * value)
	{
		___m_textArea_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_textArea_10), value);
	}

	inline static int32_t get_offset_of_m_window_11() { return static_cast<int32_t>(offsetof(GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7, ___m_window_11)); }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * get_m_window_11() const { return ___m_window_11; }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 ** get_address_of_m_window_11() { return &___m_window_11; }
	inline void set_m_window_11(GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * value)
	{
		___m_window_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_window_11), value);
	}

	inline static int32_t get_offset_of_m_horizontalSlider_12() { return static_cast<int32_t>(offsetof(GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7, ___m_horizontalSlider_12)); }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * get_m_horizontalSlider_12() const { return ___m_horizontalSlider_12; }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 ** get_address_of_m_horizontalSlider_12() { return &___m_horizontalSlider_12; }
	inline void set_m_horizontalSlider_12(GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * value)
	{
		___m_horizontalSlider_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_horizontalSlider_12), value);
	}

	inline static int32_t get_offset_of_m_horizontalSliderThumb_13() { return static_cast<int32_t>(offsetof(GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7, ___m_horizontalSliderThumb_13)); }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * get_m_horizontalSliderThumb_13() const { return ___m_horizontalSliderThumb_13; }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 ** get_address_of_m_horizontalSliderThumb_13() { return &___m_horizontalSliderThumb_13; }
	inline void set_m_horizontalSliderThumb_13(GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * value)
	{
		___m_horizontalSliderThumb_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_horizontalSliderThumb_13), value);
	}

	inline static int32_t get_offset_of_m_verticalSlider_14() { return static_cast<int32_t>(offsetof(GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7, ___m_verticalSlider_14)); }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * get_m_verticalSlider_14() const { return ___m_verticalSlider_14; }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 ** get_address_of_m_verticalSlider_14() { return &___m_verticalSlider_14; }
	inline void set_m_verticalSlider_14(GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * value)
	{
		___m_verticalSlider_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_verticalSlider_14), value);
	}

	inline static int32_t get_offset_of_m_verticalSliderThumb_15() { return static_cast<int32_t>(offsetof(GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7, ___m_verticalSliderThumb_15)); }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * get_m_verticalSliderThumb_15() const { return ___m_verticalSliderThumb_15; }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 ** get_address_of_m_verticalSliderThumb_15() { return &___m_verticalSliderThumb_15; }
	inline void set_m_verticalSliderThumb_15(GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * value)
	{
		___m_verticalSliderThumb_15 = value;
		Il2CppCodeGenWriteBarrier((&___m_verticalSliderThumb_15), value);
	}

	inline static int32_t get_offset_of_m_horizontalScrollbar_16() { return static_cast<int32_t>(offsetof(GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7, ___m_horizontalScrollbar_16)); }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * get_m_horizontalScrollbar_16() const { return ___m_horizontalScrollbar_16; }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 ** get_address_of_m_horizontalScrollbar_16() { return &___m_horizontalScrollbar_16; }
	inline void set_m_horizontalScrollbar_16(GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * value)
	{
		___m_horizontalScrollbar_16 = value;
		Il2CppCodeGenWriteBarrier((&___m_horizontalScrollbar_16), value);
	}

	inline static int32_t get_offset_of_m_horizontalScrollbarThumb_17() { return static_cast<int32_t>(offsetof(GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7, ___m_horizontalScrollbarThumb_17)); }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * get_m_horizontalScrollbarThumb_17() const { return ___m_horizontalScrollbarThumb_17; }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 ** get_address_of_m_horizontalScrollbarThumb_17() { return &___m_horizontalScrollbarThumb_17; }
	inline void set_m_horizontalScrollbarThumb_17(GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * value)
	{
		___m_horizontalScrollbarThumb_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_horizontalScrollbarThumb_17), value);
	}

	inline static int32_t get_offset_of_m_horizontalScrollbarLeftButton_18() { return static_cast<int32_t>(offsetof(GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7, ___m_horizontalScrollbarLeftButton_18)); }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * get_m_horizontalScrollbarLeftButton_18() const { return ___m_horizontalScrollbarLeftButton_18; }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 ** get_address_of_m_horizontalScrollbarLeftButton_18() { return &___m_horizontalScrollbarLeftButton_18; }
	inline void set_m_horizontalScrollbarLeftButton_18(GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * value)
	{
		___m_horizontalScrollbarLeftButton_18 = value;
		Il2CppCodeGenWriteBarrier((&___m_horizontalScrollbarLeftButton_18), value);
	}

	inline static int32_t get_offset_of_m_horizontalScrollbarRightButton_19() { return static_cast<int32_t>(offsetof(GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7, ___m_horizontalScrollbarRightButton_19)); }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * get_m_horizontalScrollbarRightButton_19() const { return ___m_horizontalScrollbarRightButton_19; }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 ** get_address_of_m_horizontalScrollbarRightButton_19() { return &___m_horizontalScrollbarRightButton_19; }
	inline void set_m_horizontalScrollbarRightButton_19(GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * value)
	{
		___m_horizontalScrollbarRightButton_19 = value;
		Il2CppCodeGenWriteBarrier((&___m_horizontalScrollbarRightButton_19), value);
	}

	inline static int32_t get_offset_of_m_verticalScrollbar_20() { return static_cast<int32_t>(offsetof(GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7, ___m_verticalScrollbar_20)); }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * get_m_verticalScrollbar_20() const { return ___m_verticalScrollbar_20; }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 ** get_address_of_m_verticalScrollbar_20() { return &___m_verticalScrollbar_20; }
	inline void set_m_verticalScrollbar_20(GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * value)
	{
		___m_verticalScrollbar_20 = value;
		Il2CppCodeGenWriteBarrier((&___m_verticalScrollbar_20), value);
	}

	inline static int32_t get_offset_of_m_verticalScrollbarThumb_21() { return static_cast<int32_t>(offsetof(GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7, ___m_verticalScrollbarThumb_21)); }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * get_m_verticalScrollbarThumb_21() const { return ___m_verticalScrollbarThumb_21; }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 ** get_address_of_m_verticalScrollbarThumb_21() { return &___m_verticalScrollbarThumb_21; }
	inline void set_m_verticalScrollbarThumb_21(GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * value)
	{
		___m_verticalScrollbarThumb_21 = value;
		Il2CppCodeGenWriteBarrier((&___m_verticalScrollbarThumb_21), value);
	}

	inline static int32_t get_offset_of_m_verticalScrollbarUpButton_22() { return static_cast<int32_t>(offsetof(GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7, ___m_verticalScrollbarUpButton_22)); }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * get_m_verticalScrollbarUpButton_22() const { return ___m_verticalScrollbarUpButton_22; }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 ** get_address_of_m_verticalScrollbarUpButton_22() { return &___m_verticalScrollbarUpButton_22; }
	inline void set_m_verticalScrollbarUpButton_22(GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * value)
	{
		___m_verticalScrollbarUpButton_22 = value;
		Il2CppCodeGenWriteBarrier((&___m_verticalScrollbarUpButton_22), value);
	}

	inline static int32_t get_offset_of_m_verticalScrollbarDownButton_23() { return static_cast<int32_t>(offsetof(GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7, ___m_verticalScrollbarDownButton_23)); }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * get_m_verticalScrollbarDownButton_23() const { return ___m_verticalScrollbarDownButton_23; }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 ** get_address_of_m_verticalScrollbarDownButton_23() { return &___m_verticalScrollbarDownButton_23; }
	inline void set_m_verticalScrollbarDownButton_23(GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * value)
	{
		___m_verticalScrollbarDownButton_23 = value;
		Il2CppCodeGenWriteBarrier((&___m_verticalScrollbarDownButton_23), value);
	}

	inline static int32_t get_offset_of_m_ScrollView_24() { return static_cast<int32_t>(offsetof(GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7, ___m_ScrollView_24)); }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * get_m_ScrollView_24() const { return ___m_ScrollView_24; }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 ** get_address_of_m_ScrollView_24() { return &___m_ScrollView_24; }
	inline void set_m_ScrollView_24(GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * value)
	{
		___m_ScrollView_24 = value;
		Il2CppCodeGenWriteBarrier((&___m_ScrollView_24), value);
	}

	inline static int32_t get_offset_of_m_CustomStyles_25() { return static_cast<int32_t>(offsetof(GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7, ___m_CustomStyles_25)); }
	inline GUIStyleU5BU5D_t2F343713D6ADFF41BBCF1D17BAE79F51BD745DBB* get_m_CustomStyles_25() const { return ___m_CustomStyles_25; }
	inline GUIStyleU5BU5D_t2F343713D6ADFF41BBCF1D17BAE79F51BD745DBB** get_address_of_m_CustomStyles_25() { return &___m_CustomStyles_25; }
	inline void set_m_CustomStyles_25(GUIStyleU5BU5D_t2F343713D6ADFF41BBCF1D17BAE79F51BD745DBB* value)
	{
		___m_CustomStyles_25 = value;
		Il2CppCodeGenWriteBarrier((&___m_CustomStyles_25), value);
	}

	inline static int32_t get_offset_of_m_Settings_26() { return static_cast<int32_t>(offsetof(GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7, ___m_Settings_26)); }
	inline GUISettings_tA863524720A3C984BAE56598D922F2C04DC80EF4 * get_m_Settings_26() const { return ___m_Settings_26; }
	inline GUISettings_tA863524720A3C984BAE56598D922F2C04DC80EF4 ** get_address_of_m_Settings_26() { return &___m_Settings_26; }
	inline void set_m_Settings_26(GUISettings_tA863524720A3C984BAE56598D922F2C04DC80EF4 * value)
	{
		___m_Settings_26 = value;
		Il2CppCodeGenWriteBarrier((&___m_Settings_26), value);
	}

	inline static int32_t get_offset_of_m_Styles_28() { return static_cast<int32_t>(offsetof(GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7, ___m_Styles_28)); }
	inline Dictionary_2_tF2F04E1BE233EE6C4A6E90261E463B2A67A3FB6A * get_m_Styles_28() const { return ___m_Styles_28; }
	inline Dictionary_2_tF2F04E1BE233EE6C4A6E90261E463B2A67A3FB6A ** get_address_of_m_Styles_28() { return &___m_Styles_28; }
	inline void set_m_Styles_28(Dictionary_2_tF2F04E1BE233EE6C4A6E90261E463B2A67A3FB6A * value)
	{
		___m_Styles_28 = value;
		Il2CppCodeGenWriteBarrier((&___m_Styles_28), value);
	}
};

struct GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7_StaticFields
{
public:
	// UnityEngine.GUIStyle UnityEngine.GUISkin::ms_Error
	GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___ms_Error_27;
	// UnityEngine.GUISkin_SkinChangedDelegate UnityEngine.GUISkin::m_SkinChanged
	SkinChangedDelegate_tAB4CEEA8C8A0BDCFD51C9624AE173C46A40135D8 * ___m_SkinChanged_29;
	// UnityEngine.GUISkin UnityEngine.GUISkin::current
	GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7 * ___current_30;

public:
	inline static int32_t get_offset_of_ms_Error_27() { return static_cast<int32_t>(offsetof(GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7_StaticFields, ___ms_Error_27)); }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * get_ms_Error_27() const { return ___ms_Error_27; }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 ** get_address_of_ms_Error_27() { return &___ms_Error_27; }
	inline void set_ms_Error_27(GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * value)
	{
		___ms_Error_27 = value;
		Il2CppCodeGenWriteBarrier((&___ms_Error_27), value);
	}

	inline static int32_t get_offset_of_m_SkinChanged_29() { return static_cast<int32_t>(offsetof(GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7_StaticFields, ___m_SkinChanged_29)); }
	inline SkinChangedDelegate_tAB4CEEA8C8A0BDCFD51C9624AE173C46A40135D8 * get_m_SkinChanged_29() const { return ___m_SkinChanged_29; }
	inline SkinChangedDelegate_tAB4CEEA8C8A0BDCFD51C9624AE173C46A40135D8 ** get_address_of_m_SkinChanged_29() { return &___m_SkinChanged_29; }
	inline void set_m_SkinChanged_29(SkinChangedDelegate_tAB4CEEA8C8A0BDCFD51C9624AE173C46A40135D8 * value)
	{
		___m_SkinChanged_29 = value;
		Il2CppCodeGenWriteBarrier((&___m_SkinChanged_29), value);
	}

	inline static int32_t get_offset_of_current_30() { return static_cast<int32_t>(offsetof(GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7_StaticFields, ___current_30)); }
	inline GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7 * get_current_30() const { return ___current_30; }
	inline GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7 ** get_address_of_current_30() { return &___current_30; }
	inline void set_current_30(GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7 * value)
	{
		___current_30 = value;
		Il2CppCodeGenWriteBarrier((&___current_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUISKIN_TE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7_H
#ifndef SKINCHANGEDDELEGATE_TAB4CEEA8C8A0BDCFD51C9624AE173C46A40135D8_H
#define SKINCHANGEDDELEGATE_TAB4CEEA8C8A0BDCFD51C9624AE173C46A40135D8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUISkin_SkinChangedDelegate
struct  SkinChangedDelegate_tAB4CEEA8C8A0BDCFD51C9624AE173C46A40135D8  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SKINCHANGEDDELEGATE_TAB4CEEA8C8A0BDCFD51C9624AE173C46A40135D8_H
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
// System.Object[]
struct ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_tAB2AD0A365DBD2277A04E397AE8E1430A022AF1B  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GUILayoutOption_t27A0221AC2F6F53E7B89310FD19F51C565D835A6 * m_Items[1];

public:
	inline GUILayoutOption_t27A0221AC2F6F53E7B89310FD19F51C565D835A6 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GUILayoutOption_t27A0221AC2F6F53E7B89310FD19F51C565D835A6 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GUILayoutOption_t27A0221AC2F6F53E7B89310FD19F51C565D835A6 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline GUILayoutOption_t27A0221AC2F6F53E7B89310FD19F51C565D835A6 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GUILayoutOption_t27A0221AC2F6F53E7B89310FD19F51C565D835A6 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GUILayoutOption_t27A0221AC2F6F53E7B89310FD19F51C565D835A6 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.GUIStyle[]
struct GUIStyleU5BU5D_t2F343713D6ADFF41BBCF1D17BAE79F51BD745DBB  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * m_Items[1];

public:
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.String[]
struct StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};

extern "C" void GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshal_pinvoke(const GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5& unmarshaled, GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshaled_pinvoke& marshaled);
extern "C" void GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshal_pinvoke_back(const GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshaled_pinvoke& marshaled, GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5& unmarshaled);
extern "C" void GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshal_pinvoke_cleanup(GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshaled_pinvoke& marshaled);
extern "C" void RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A_marshal_pinvoke(const RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A& unmarshaled, RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A_marshaled_pinvoke& marshaled);
extern "C" void RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A_marshal_pinvoke_back(const RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A_marshaled_pinvoke& marshaled, RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A& unmarshaled);
extern "C" void RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A_marshal_pinvoke_cleanup(RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A_marshaled_pinvoke& marshaled);
extern "C" void GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshal_com(const GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5& unmarshaled, GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshaled_com& marshaled);
extern "C" void GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshal_com_back(const GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshaled_com& marshaled, GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5& unmarshaled);
extern "C" void GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshal_com_cleanup(GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshaled_com& marshaled);
extern "C" void RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A_marshal_com(const RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A& unmarshaled, RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A_marshaled_com& marshaled);
extern "C" void RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A_marshal_com_back(const RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A_marshaled_com& marshaled, RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A& unmarshaled);
extern "C" void RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A_marshal_com_cleanup(RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A_marshaled_com& marshaled);
extern "C" void GUIStyle_t671F175A201A19166385EE3392292A5F50070572_marshal_pinvoke(const GUIStyle_t671F175A201A19166385EE3392292A5F50070572& unmarshaled, GUIStyle_t671F175A201A19166385EE3392292A5F50070572_marshaled_pinvoke& marshaled);
extern "C" void GUIStyle_t671F175A201A19166385EE3392292A5F50070572_marshal_pinvoke_back(const GUIStyle_t671F175A201A19166385EE3392292A5F50070572_marshaled_pinvoke& marshaled, GUIStyle_t671F175A201A19166385EE3392292A5F50070572& unmarshaled);
extern "C" void GUIStyle_t671F175A201A19166385EE3392292A5F50070572_marshal_pinvoke_cleanup(GUIStyle_t671F175A201A19166385EE3392292A5F50070572_marshaled_pinvoke& marshaled);
extern "C" void GUIStyle_t671F175A201A19166385EE3392292A5F50070572_marshal_com(const GUIStyle_t671F175A201A19166385EE3392292A5F50070572& unmarshaled, GUIStyle_t671F175A201A19166385EE3392292A5F50070572_marshaled_com& marshaled);
extern "C" void GUIStyle_t671F175A201A19166385EE3392292A5F50070572_marshal_com_back(const GUIStyle_t671F175A201A19166385EE3392292A5F50070572_marshaled_com& marshaled, GUIStyle_t671F175A201A19166385EE3392292A5F50070572& unmarshaled);
extern "C" void GUIStyle_t671F175A201A19166385EE3392292A5F50070572_marshal_com_cleanup(GUIStyle_t671F175A201A19166385EE3392292A5F50070572_marshaled_com& marshaled);

// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m3EE2218014A615CBBF70592A7E92CC83BF59AEF9_gshared (List_1_tE72A517BD14F52539FF78EA90F58D1387FEED660 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m6CFE90D3D00714BB4C64A2931AFD03D5874D6007_gshared (List_1_tE72A517BD14F52539FF78EA90F58D1387FEED660 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR Enumerator_t7069929711A56B20B09076697B86D7BEE647C7DC  List_1_GetEnumerator_m00315869290B2B3EA4FCADE6FC323577EED0813D_gshared (List_1_tE72A517BD14F52539FF78EA90F58D1387FEED660 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m0EB38CF3F39639D66B501AE149795A3D14591CF0_gshared (Enumerator_t7069929711A56B20B09076697B86D7BEE647C7DC * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m0E742AAB7856E7A01F363EF296E59EFE93A47CAE_gshared (Enumerator_t7069929711A56B20B09076697B86D7BEE647C7DC * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
extern "C" IL2CPP_METHOD_ATTR void Enumerator_Dispose_m70AEC38F82BAB3295F58CCD00DFD4683760B7BC2_gshared (Enumerator_t7069929711A56B20B09076697B86D7BEE647C7DC * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_m577B976D78F1DACF68D429257CC0FE38FC9DD8BF_gshared (List_1_tE72A517BD14F52539FF78EA90F58D1387FEED660 * __this, int32_t p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(!0,!1&)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m06770268256D37043BD7D05961BDC28ACAEF7795_gshared (Dictionary_2_tF5BA1D0A4DCFDBD8F491243C61DDF399DB893D78 * __this, int32_t p0, RuntimeObject ** p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m8888E8956F71035CB8050FD355A28372A67FFC0E_gshared (Dictionary_2_tF5BA1D0A4DCFDBD8F491243C61DDF399DB893D78 * __this, int32_t p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mBFF4C9B146607B7C65AC7E902422A69E86DEB4C4_gshared (Dictionary_2_tF5BA1D0A4DCFDBD8F491243C61DDF399DB893D78 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<!0>)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m79F5CBCBE8B57D01162B5DA75116F739EC7CEBD4_gshared (Dictionary_2_tCF455EEDBEB1050374511D3875D3A1F51AF8889C * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mC705E93760444EDBD2D2AE51F4F37342FDF684BF_gshared (Dictionary_2_tCF455EEDBEB1050374511D3875D3A1F51AF8889C * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m1DD3722BF4BB2080516165A517EB10BB996B18EB_gshared (Dictionary_2_tCF455EEDBEB1050374511D3875D3A1F51AF8889C * __this, RuntimeObject * p0, RuntimeObject ** p1, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/ValueCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
extern "C" IL2CPP_METHOD_ATTR ValueCollection_tB118C56BE90A8B19D389651BC1B14D98E5384B14 * Dictionary_2_get_Values_m49493F3D593D9A54BF98337EED925790CF8B7701_gshared (Dictionary_2_tCF455EEDBEB1050374511D3875D3A1F51AF8889C * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR Enumerator_tEAA30391AD3B522BB475B8C0E5FA9974F0E2386F  ValueCollection_GetEnumerator_m1E74DB08E152E1556F9FEF63554A21A4A06D2E58_gshared (ValueCollection_tB118C56BE90A8B19D389651BC1B14D98E5384B14 * __this, const RuntimeMethod* method);
// !2 System.Func`3<System.Int32,System.IntPtr,System.Boolean>::Invoke(!0,!1)
extern "C" IL2CPP_METHOD_ATTR bool Func_3_Invoke_mCD6DEEC09B4F1B42DD0FD4A8F58632B08EC66737_gshared (Func_3_tBD99633D8A18C43CC528ECE3F77E2F69900048A7 * __this, int32_t p0, intptr_t p1, const RuntimeMethod* method);
// !1 System.Func`2<System.Object,System.Boolean>::Invoke(!0)
extern "C" IL2CPP_METHOD_ATTR bool Func_2_Invoke_mC085D88039B698D8980E1490CA9C90FF9C85E36B_gshared (Func_2_tDEF023F672D996A8F3621B1D60289785EBC389F2 * __this, RuntimeObject * p0, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m8BA07445967EE2CC15961AD3C16F25DB74506EA0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.IntPtr UnityEngine.Event::Internal_Create(System.Int32)
extern "C" IL2CPP_METHOD_ATTR intptr_t Event_Internal_Create_m93F047D4FC3B4B76FD4F80439D0F7EE131EE1E6B (int32_t ___displayIndex0, const RuntimeMethod* method);
// System.Void UnityEngine.Event::get_mousePosition_Injected(UnityEngine.Vector2&)
extern "C" IL2CPP_METHOD_ATTR void Event_get_mousePosition_Injected_mE71FE88F6E27190A534BD5862941E5887D6BE632 (Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * ___ret0, const RuntimeMethod* method);
// System.Void UnityEngine.Event::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Event__ctor_mF8E4029007206A6CAAB28422355BA208C0728FB9 (Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * __this, int32_t ___displayIndex0, const RuntimeMethod* method);
// System.Void UnityEngine.Event::set_displayIndex(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Event_set_displayIndex_mF73CEED3B26A4BCADB099E5E6685FE6AC2CF7289 (Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Event::Internal_SetNativeEvent(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Event_Internal_SetNativeEvent_mDD8C9E3F062FD112ED996FA4E45C1BFBB8C4E950 (intptr_t ___ptr0, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_mDA2D3B8121240D007DB220F422397AEBB37CEE91 (intptr_t p0, intptr_t p1, const RuntimeMethod* method);
// System.Void UnityEngine.Event::Internal_Destroy(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Event_Internal_Destroy_m30C46F30A51ABAC5EC270FB75A9856676AA3515C (intptr_t ___ptr0, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
extern "C" IL2CPP_METHOD_ATTR void Object_Finalize_mF771ED4CD6EB17CF862AA2B705F0E2CC0B4ADBED (RuntimeObject * __this, const RuntimeMethod* method);
// UnityEngine.EventType UnityEngine.Event::get_type()
extern "C" IL2CPP_METHOD_ATTR int32_t Event_get_type_mAABE4A35E5658E0079A1518D318AF2592F51D6FA (Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Event::get_isKey()
extern "C" IL2CPP_METHOD_ATTR bool Event_get_isKey_m17D185B6CD336242BC5FB9BAB025EE8FA7771E90 (Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * __this, const RuntimeMethod* method);
// UnityEngine.KeyCode UnityEngine.Event::get_keyCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Event_get_keyCode_m8B0AAD347861E322E91D2B7320A99E04D39575CF (Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Event::get_isMouse()
extern "C" IL2CPP_METHOD_ATTR bool Event_get_isMouse_m5923637C4A5E3BD642C3E88A428D5B39F0A85AB6 (Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Event::get_mousePosition()
extern "C" IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Event_get_mousePosition_m92AD98489A626864E9B179273270802EB1D2C085 (Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector2::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Vector2_GetHashCode_m028AB6B14EBC6D668CFA45BF6EDEF17E2C44EA54 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, const RuntimeMethod* method);
// UnityEngine.EventModifiers UnityEngine.Event::get_modifiers()
extern "C" IL2CPP_METHOD_ATTR int32_t Event_get_modifiers_m4D1BDE843A9379F50C3F32CB78CCDAD84B779108 (Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * __this, const RuntimeMethod* method);
// System.Type System.Object::GetType()
extern "C" IL2CPP_METHOD_ATTR Type_t * Object_GetType_m993E65F4E4457CE1761C49B188A6CF858597BDDE (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector2::op_Equality(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR bool Vector2_op_Equality_m0E86E1B1038DDB8554A8A0D58729A7788D989588 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  p0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  p1, const RuntimeMethod* method);
// System.Char UnityEngine.Event::get_character()
extern "C" IL2CPP_METHOD_ATTR Il2CppChar Event_get_character_m78B46D412357B71233F3D41842928A19B290915C (Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * __this, const RuntimeMethod* method);
// System.String UnityEngine.UnityString::Format(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR String_t* UnityString_Format_m415056ECF8DA7B3EC6A8456E299D0C2002177387 (String_t* p0, ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* p1, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m2BD818C1A31996400987A990DD23C8629549A2B1 (ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* p0, const RuntimeMethod* method);
// System.String UnityEngine.Event::get_commandName()
extern "C" IL2CPP_METHOD_ATTR String_t* Event_get_commandName_m119D9F8B0A7BA18B849B958CFAF249C970C00BF1 (Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m284DDEFEC7A010140004A73DE74DF4BB93685BEC (RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568 (RuntimeObject * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Event::Internal_Use()
extern "C" IL2CPP_METHOD_ATTR void Event_Internal_Use_m44762004F3C1C23EEC79F1B9250433A581EC6538 (Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * __this, const RuntimeMethod* method);
// System.Void UnityEngineInternal.GenericStack::.ctor()
extern "C" IL2CPP_METHOD_ATTR void GenericStack__ctor_m0659B84DB6B093AF1F01F566686C510DDEEAE848 (GenericStack_tC59D21E8DBC50F3C608479C942200AC44CA2D5BC * __this, const RuntimeMethod* method);
// System.DateTime System.DateTime::get_Now()
extern "C" IL2CPP_METHOD_ATTR DateTime_t816BBD9125EA02B42B87CB07643FC5F803391DA2  DateTime_get_Now_m59C0E4D8C02A258EF9DFF4A2DE7B7F32AAD79E51 (const RuntimeMethod* method);
// System.Void UnityEngine.GUI::set_nextScrollStepTime(System.DateTime)
extern "C" IL2CPP_METHOD_ATTR void GUI_set_nextScrollStepTime_m0EBE9A3F5960CD23334E4678D9CF6F5E15CBDE23 (DateTime_t816BBD9125EA02B42B87CB07643FC5F803391DA2  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.GUIUtility::CheckOnGUI()
extern "C" IL2CPP_METHOD_ATTR void GUIUtility_CheckOnGUI_mBFC764B475683BC50E40BD249248CE43DA754873 (const RuntimeMethod* method);
// System.Void UnityEngine.GUI::DoSetSkin(UnityEngine.GUISkin)
extern "C" IL2CPP_METHOD_ATTR void GUI_DoSetSkin_mC72F1980793E86E8F33D641A207D2AAB409A71F7 (GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7 * ___newSkin0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, const RuntimeMethod* method);
// UnityEngine.GUISkin UnityEngine.GUIUtility::GetDefaultSkin()
extern "C" IL2CPP_METHOD_ATTR GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7 * GUIUtility_GetDefaultSkin_m2F1B580445522074FF41CF9906531DBEAB034365 (const RuntimeMethod* method);
// System.Void UnityEngine.GUISkin::MakeCurrent()
extern "C" IL2CPP_METHOD_ATTR void GUISkin_MakeCurrent_m42FAF8090F6B57648678704D86A6451DB917CF2D (GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7 * __this, const RuntimeMethod* method);
// UnityEngine.GUIContent UnityEngine.GUIContent::Temp(System.String)
extern "C" IL2CPP_METHOD_ATTR GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * GUIContent_Temp_m29B9E688E5EA09D12FDFAC6096B8762F7E84688D (String_t* ___t0, const RuntimeMethod* method);
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C" IL2CPP_METHOD_ATTR bool GUI_Button_m9315927732E13236FFCE020D2444CF08C26927F5 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___position0, GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * ___content1, GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___style2, const RuntimeMethod* method);
// System.Int32 UnityEngine.GUIUtility::GetControlID(System.Int32,UnityEngine.FocusType,UnityEngine.Rect)
extern "C" IL2CPP_METHOD_ATTR int32_t GUIUtility_GetControlID_mBD1C39E03666F072AFB3022603E2FD37D87EB13F (int32_t ___hint0, int32_t ___focusType1, Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___rect2, const RuntimeMethod* method);
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,System.Int32,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C" IL2CPP_METHOD_ATTR bool GUI_Button_m28E3F256D52839EBB502B3A6C5DA2E556FF45BC1 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___position0, int32_t ___id1, GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * ___content2, GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___style3, const RuntimeMethod* method);
// System.Boolean UnityEngine.GUI::DoButton(UnityEngine.Rect,System.Int32,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C" IL2CPP_METHOD_ATTR bool GUI_DoButton_m3DA80A30ABFA7F00B48683498AEB28ACAAA404ED (Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___position0, int32_t ___id1, GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * ___content2, GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___style3, const RuntimeMethod* method);
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_toggle()
extern "C" IL2CPP_METHOD_ATTR GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * GUISkin_get_toggle_mB5459058B1C84826D47FA9BFE9CC9D05BB074030 (GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.GUI::Toggle(UnityEngine.Rect,System.Boolean,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C" IL2CPP_METHOD_ATTR bool GUI_Toggle_m0EB6DC4DF9F9CB8AC07A66BFD05542CA5AC210A2 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___position0, bool ___value1, GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * ___content2, GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___style3, const RuntimeMethod* method);
// System.Boolean UnityEngine.GUI::DoToggle(UnityEngine.Rect,System.Int32,System.Boolean,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C" IL2CPP_METHOD_ATTR bool GUI_DoToggle_mBD68645E78C5056965D0C1799F360635C27D1376 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___position0, int32_t ___id1, bool ___value2, GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * ___content3, GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___style4, const RuntimeMethod* method);
// UnityEngine.Event UnityEngine.Event::get_current()
extern "C" IL2CPP_METHOD_ATTR Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * Event_get_current_m072CEE599D11B8A9A916697E57C0F561188CDB2B (const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::Draw(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void GUIStyle_Draw_m7979DC59FA2B5B6200764FC208F8104FE4F886E3 (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * __this, Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___position0, GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * ___content1, int32_t ___controlID2, bool ___on3, const RuntimeMethod* method);
// System.Boolean UnityEngine.Rect::Contains(UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR bool Rect_Contains_mAD3D41C88795960F177088F847509C9DDA23B682 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  p0, const RuntimeMethod* method);
// System.Void UnityEngine.GUI::GrabMouseControl(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void GUI_GrabMouseControl_mEE35B3F6529614CC25241C27B03D8595C61E533F (int32_t ___id0, const RuntimeMethod* method);
// System.Void UnityEngine.Event::Use()
extern "C" IL2CPP_METHOD_ATTR void Event_Use_m2328ACD6C711742273C1321F5F79C6D3CEB08AC5 (Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.GUIUtility::get_keyboardControl()
extern "C" IL2CPP_METHOD_ATTR int32_t GUIUtility_get_keyboardControl_mB580042A41CB6E9D3AB2E2CF0CEC00F64B2FC55F (const RuntimeMethod* method);
// System.Void UnityEngine.GUI::set_changed(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void GUI_set_changed_m8BDF5085BBFDF8E61C12926C8E51C67B22B629AE (bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.GUI::HasMouseControl(System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool GUI_HasMouseControl_m66CD5558529BEFFD84D4CAB8B1BC6349F12DF4B1 (int32_t ___id0, const RuntimeMethod* method);
// System.Void UnityEngine.GUI::ReleaseMouseControl()
extern "C" IL2CPP_METHOD_ATTR void GUI_ReleaseMouseControl_m4F0C7D33663DEC8BC1D8C04C2417899C8AB4462B (const RuntimeMethod* method);
// System.Boolean UnityEngine.GUI::DoControl(UnityEngine.Rect,System.Int32,System.Boolean,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C" IL2CPP_METHOD_ATTR bool GUI_DoControl_m8D0ED253ABE2776E91274FD814F72D2FB43E8557 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___position0, int32_t ___id1, bool ___on2, GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * ___content3, GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___style4, const RuntimeMethod* method);
// UnityEngine.GUILayoutUtility/LayoutCache UnityEngine.GUILayoutUtility::SelectIDList(System.Int32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR LayoutCache_t0D14FE6139444D164ECA5D31E39E625D80077468 * GUILayoutUtility_SelectIDList_m230ED9206897C92C5B090B3BBFC9B408603E56FD (int32_t ___instanceID0, bool ___isWindow1, const RuntimeMethod* method);
// UnityEngine.GUISkin UnityEngine.GUI::get_skin()
extern "C" IL2CPP_METHOD_ATTR GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7 * GUI_get_skin_mF6804BE33CFD74FF0665C1185AC7B5C1687AE866 (const RuntimeMethod* method);
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Width(System.Single)
extern "C" IL2CPP_METHOD_ATTR GUILayoutOption_t27A0221AC2F6F53E7B89310FD19F51C565D835A6 * GUILayout_Width_mDA8F26D92E788474E09AECA1541E8C920C72DA10 (float ___width0, const RuntimeMethod* method);
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Height(System.Single)
extern "C" IL2CPP_METHOD_ATTR GUILayoutOption_t27A0221AC2F6F53E7B89310FD19F51C565D835A6 * GUILayout_Height_mA5A24D5490022AC6449BBAED9C5A1647184B4026 (float ___height0, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayoutUtility::BeginWindow(System.Int32,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" IL2CPP_METHOD_ATTR void GUILayoutUtility_BeginWindow_mB3475D9BE89CF26AB0E6F0D46B1930F1874EB132 (int32_t ___windowID0, GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___style1, GUILayoutOptionU5BU5D_tAB2AD0A365DBD2277A04E397AE8E1430A022AF1B* ___options2, const RuntimeMethod* method);
// UnityEngine.GUIStyle UnityEngine.GUIStyle::get_none()
extern "C" IL2CPP_METHOD_ATTR GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * GUIStyle_get_none_m2B48FA4E2FA2B9BB7A458DF25B1391F9C7BB8B7B (const RuntimeMethod* method);
// System.Void UnityEngine.GUI::set_skin(UnityEngine.GUISkin)
extern "C" IL2CPP_METHOD_ATTR void GUI_set_skin_mFC9EC2E88A46A7F42664C6C41D8CCD9B9BA4DBA0 (GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.GUI/WindowFunction::Invoke(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void WindowFunction_Invoke_m08350FBFB60BC55246725A4840931AED2CAFF9AD (WindowFunction_t9AF05117863D95AA9F85D497A3B9B53216708100 * __this, int32_t ___id0, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayoutUtility::Layout()
extern "C" IL2CPP_METHOD_ATTR void GUILayoutUtility_Layout_mB01F00635FD538214B47A545C53E4F8C682491B5 (const RuntimeMethod* method);
// System.Void UnityEngine.GUIContent::.ctor(System.String,UnityEngine.Texture,System.String)
extern "C" IL2CPP_METHOD_ATTR void GUIContent__ctor_m2805872C5E7E66C3ABF83607DC02BEB1BEFA82DA (GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * __this, String_t* ___text0, Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * ___image1, String_t* ___tooltip2, const RuntimeMethod* method);
// System.Void UnityEngine.GUIContent::set_text(System.String)
extern "C" IL2CPP_METHOD_ATTR void GUIContent_set_text_m866E0C5690119816D87D83124C81BDC0A0ED4316 (GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.GUIContent::set_image(UnityEngine.Texture)
extern "C" IL2CPP_METHOD_ATTR void GUIContent_set_image_m85ABAF5AE045BDD9C09EA75243094D16222DB38C (GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * __this, Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.GUIContent::set_tooltip(System.String)
extern "C" IL2CPP_METHOD_ATTR void GUIContent_set_tooltip_mDFC634B0DF68DB6A02F294106BC261EFC0FD0A67 (GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.GUIContent::.ctor()
extern "C" IL2CPP_METHOD_ATTR void GUIContent__ctor_m939CDEFF44061020E997A0F0640ADDF2740B0C38 (GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GUIContent::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void GUIContent__ctor_m8EE36BB9048C2A279E7EAD258D63F2A1BDEA8A81 (GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * __this, String_t* ___text0, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayoutOption::.ctor(UnityEngine.GUILayoutOption/Type,System.Object)
extern "C" IL2CPP_METHOD_ATTR void GUILayoutOption__ctor_m965FDA1345FD7146596EFA90F03D0C645FB3FD5D (GUILayoutOption_t27A0221AC2F6F53E7B89310FD19F51C565D835A6 * __this, int32_t ___type0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Rect__ctor_m50B92C75005C9C5A0D05E6E0EBB43AFAF7C66280 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayoutEntry::set_style(UnityEngine.GUIStyle)
extern "C" IL2CPP_METHOD_ATTR void GUILayoutEntry_set_style_mEDD232A6CDB1B76ABC33EA06A05235316A180E2D (GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * __this, GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___value0, const RuntimeMethod* method);
// UnityEngine.GUIStyle UnityEngine.GUILayoutEntry::get_style()
extern "C" IL2CPP_METHOD_ATTR GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * GUILayoutEntry_get_style_m70E386A3289ACFEC515B1358827AB2FBF6314BA4 (GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * __this, const RuntimeMethod* method);
// UnityEngine.RectOffset UnityEngine.GUIStyle::get_margin()
extern "C" IL2CPP_METHOD_ATTR RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * GUIStyle_get_margin_mFC3EA0FA030A6334AC03BDDFA4AC80419C9E5BAA (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.RectOffset::get_left()
extern "C" IL2CPP_METHOD_ATTR int32_t RectOffset_get_left_mA86EC00866C1940134873E3A1565A1F700DE67AD (RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.RectOffset::get_right()
extern "C" IL2CPP_METHOD_ATTR int32_t RectOffset_get_right_m9B05958C3C1B31F1FAB8675834A492C7208F6C96 (RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.RectOffset::get_top()
extern "C" IL2CPP_METHOD_ATTR int32_t RectOffset_get_top_mBA813D4147BFBC079933054018437F411B6B41E1 (RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.RectOffset::get_bottom()
extern "C" IL2CPP_METHOD_ATTR int32_t RectOffset_get_bottom_mE5162CADD266B59539E3EE1967EE9A74705E5632 (RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::set_x(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Rect_set_x_m49EFE25263C03A48D52499C3E9C097298E0EA3A6 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, float p0, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::set_width(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Rect_set_width_mC81EF602AC91E0C615C12FCE060254A461A152B8 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, float p0, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::set_y(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Rect_set_y_mCFDB9BD77334EF9CD896F64BE63C755777D7CCD5 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, float p0, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::set_height(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Rect_set_height_mF4CB5A97D4706696F1C9EA31A5D8C466E48050D6 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, float p0, const RuntimeMethod* method);
// System.Single UnityEngine.GUIStyle::get_fixedWidth()
extern "C" IL2CPP_METHOD_ATTR float GUIStyle_get_fixedWidth_mEACB70758F83DCD64CE363143849CC40E49B8D8D (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.GUIStyle::get_stretchWidth()
extern "C" IL2CPP_METHOD_ATTR bool GUIStyle_get_stretchWidth_m4513B313AABE48E1D10424844DC186405BC8A677 (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.GUIStyle::get_fixedHeight()
extern "C" IL2CPP_METHOD_ATTR float GUIStyle_get_fixedHeight_m9B5589C95B27C5590219413E8D7E9E1E95EB7708 (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.GUIStyle::get_stretchHeight()
extern "C" IL2CPP_METHOD_ATTR bool GUIStyle_get_stretchHeight_m264308B18FA5F0A8400CF49945BAE1B9EFDC934F (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m3826EAA4F567A88037F77DAA4CA280E199698DC8 (String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.String UnityEngine.GUIStyle::get_name()
extern "C" IL2CPP_METHOD_ATTR String_t* GUIStyle_get_name_m111D8AB0173E1EBA46A9664EBABBC82AFE3ED71E (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_x()
extern "C" IL2CPP_METHOD_ATTR float Rect_get_x_mC51A461F546D14832EB96B11A7198DADDE2597B7 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_xMax()
extern "C" IL2CPP_METHOD_ATTR float Rect_get_xMax_mA16D7C3C2F30F8608719073ED79028C11CE90983 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_y()
extern "C" IL2CPP_METHOD_ATTR float Rect_get_y_m53E3E4F62D9840FBEA751A66293038F1F5D1D45C (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_yMax()
extern "C" IL2CPP_METHOD_ATTR float Rect_get_yMax_m8AA5E92C322AF3FF571330F00579DA864F33341B (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::.ctor()
inline void List_1__ctor_m8334B758D374FE266FFF49329936203BCE3A3770 (List_1_t046427F3923444CF746C550FD96A3D0E4189D273 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t046427F3923444CF746C550FD96A3D0E4189D273 *, const RuntimeMethod*))List_1__ctor_m3EE2218014A615CBBF70592A7E92CC83BF59AEF9_gshared)(__this, method);
}
// System.Void UnityEngine.GUILayoutEntry::.ctor(System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle)
extern "C" IL2CPP_METHOD_ATTR void GUILayoutEntry__ctor_mC640CA08AEBCC7E479DB6AF5B208436A98AB75B2 (GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * __this, float ____minWidth0, float ____maxWidth1, float ____minHeight2, float ____maxHeight3, GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ____style4, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayoutEntry::ApplyOptions(UnityEngine.GUILayoutOption[])
extern "C" IL2CPP_METHOD_ATTR void GUILayoutEntry_ApplyOptions_m2002EBD9FE42B9787544D204A71C8BEF3F671F5B (GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * __this, GUILayoutOptionU5BU5D_tAB2AD0A365DBD2277A04E397AE8E1430A022AF1B* ___options0, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayoutEntry::ApplyStyleSettings(UnityEngine.GUIStyle)
extern "C" IL2CPP_METHOD_ATTR void GUILayoutEntry_ApplyStyleSettings_m5516B497544317E3B720CE7867CA960076E2AF47 (GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * __this, GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___style0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Count()
inline int32_t List_1_get_Count_m2995506A297520F84CBD9AD421D8672D5755E115 (List_1_t046427F3923444CF746C550FD96A3D0E4189D273 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t046427F3923444CF746C550FD96A3D0E4189D273 *, const RuntimeMethod*))List_1_get_Count_m6CFE90D3D00714BB4C64A2931AFD03D5874D6007_gshared)(__this, method);
}
// UnityEngine.RectOffset UnityEngine.GUIStyle::get_padding()
extern "C" IL2CPP_METHOD_ATTR RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * GUIStyle_get_padding_m5DF76AA03A313366D0DD8D577731DAC4FB83053A (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.RectOffset::get_horizontal()
extern "C" IL2CPP_METHOD_ATTR int32_t RectOffset_get_horizontal_m9274B965D5D388F6F750D127B3E57F70DF0D89C1 (RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::GetEnumerator()
inline Enumerator_t4D01DB2C4CF53D79BD58A10640F59CBCF1354587  List_1_GetEnumerator_mA457B3CB61E2B7BAFB0F7D0ADEFD25237B4429DF (List_1_t046427F3923444CF746C550FD96A3D0E4189D273 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t4D01DB2C4CF53D79BD58A10640F59CBCF1354587  (*) (List_1_t046427F3923444CF746C550FD96A3D0E4189D273 *, const RuntimeMethod*))List_1_GetEnumerator_m00315869290B2B3EA4FCADE6FC323577EED0813D_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.GUILayoutEntry>::get_Current()
inline GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * Enumerator_get_Current_m9422C22943D0E9900CDB7DF407D9EBE215B2A6B6 (Enumerator_t4D01DB2C4CF53D79BD58A10640F59CBCF1354587 * __this, const RuntimeMethod* method)
{
	return ((  GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * (*) (Enumerator_t4D01DB2C4CF53D79BD58A10640F59CBCF1354587 *, const RuntimeMethod*))Enumerator_get_Current_m0EB38CF3F39639D66B501AE149795A3D14591CF0_gshared)(__this, method);
}
// System.Int32 UnityEngine.Mathf::Min(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Mathf_Min_m1A2CC204E361AE13C329B6535165179798D3313A (int32_t p0, int32_t p1, const RuntimeMethod* method);
// System.Int32 UnityEngine.GUILayoutEntry::get_marginHorizontal()
extern "C" IL2CPP_METHOD_ATTR int32_t GUILayoutEntry_get_marginHorizontal_m1FB1B936E7C702BAD92FE4CA1EEC529A2BECCEC4 (GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR float Mathf_Max_m670AE0EC1B09ED1A56FF9606B0F954670319CB65 (float p0, float p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.GUILayoutEntry>::MoveNext()
inline bool Enumerator_MoveNext_m3A0A0A98E9378A32A74EC51C4CAB6C564001CAC7 (Enumerator_t4D01DB2C4CF53D79BD58A10640F59CBCF1354587 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t4D01DB2C4CF53D79BD58A10640F59CBCF1354587 *, const RuntimeMethod*))Enumerator_MoveNext_m0E742AAB7856E7A01F363EF296E59EFE93A47CAE_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.GUILayoutEntry>::Dispose()
inline void Enumerator_Dispose_mC263356C16A1948C299607F9A77AAFAEB7C55A38 (Enumerator_t4D01DB2C4CF53D79BD58A10640F59CBCF1354587 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t4D01DB2C4CF53D79BD58A10640F59CBCF1354587 *, const RuntimeMethod*))Enumerator_Dispose_m70AEC38F82BAB3295F58CCD00DFD4683760B7BC2_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Item(System.Int32)
inline GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * List_1_get_Item_m96FCB482CBADC5AD4AD5F01B7A0B822AF619D388 (List_1_t046427F3923444CF746C550FD96A3D0E4189D273 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * (*) (List_1_t046427F3923444CF746C550FD96A3D0E4189D273 *, int32_t, const RuntimeMethod*))List_1_get_Item_m577B976D78F1DACF68D429257CC0FE38FC9DD8BF_gshared)(__this, p0, method);
}
// System.Int32 UnityEngine.Mathf::Max(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Mathf_Max_mBDE4C6F1883EE3215CD7AE62550B2AC90592BC3F (int32_t p0, int32_t p1, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayoutEntry::SetHorizontal(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void GUILayoutEntry_SetHorizontal_m46A5D9344EE72AF9AA7D07C77C30745F9FE97DE8 (GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * __this, float ___x0, float ___width1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR float Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507 (float p0, float p1, float p2, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR float Mathf_Lerp_m9A74C5A0C37D0CDF45EE66E7774D12A9B93B1364 (float p0, float p1, float p2, const RuntimeMethod* method);
// System.Int32 UnityEngine.RectOffset::get_vertical()
extern "C" IL2CPP_METHOD_ATTR int32_t RectOffset_get_vertical_m89ED337C8D303C8994B2B056C05368E4286CFC5E (RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayoutEntry::SetVertical(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void GUILayoutEntry_SetVertical_mC0E71E5E431907DD1900C707BD3E2E1D0795DDD0 (GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * __this, float ___y0, float ___height1, const RuntimeMethod* method);
// System.Int32 UnityEngine.GUILayoutEntry::get_marginVertical()
extern "C" IL2CPP_METHOD_ATTR int32_t GUILayoutEntry_get_marginVertical_mBFB3FD56025F4627378E5A339379CFF720196EB0 (GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * __this, const RuntimeMethod* method);
// System.String UnityEngine.GUILayoutEntry::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* GUILayoutEntry_ToString_mCDA5CD14A39ADAD29F6B450B98FDB80E37AC95D5 (GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_mDF3A55D4269A0D2D7969D90C6D38B472E24DD445 (String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayoutUtility::Internal_GetWindowRect_Injected(System.Int32,UnityEngine.Rect&)
extern "C" IL2CPP_METHOD_ATTR void GUILayoutUtility_Internal_GetWindowRect_Injected_mE78DA4F8B25471CEFFCB6F43E37C7966FE436EEE (int32_t ___windowID0, Rect_t35B976DE901B5423C11705E156938EA27AB402CE * ___ret1, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayoutUtility::Internal_MoveWindow_Injected(System.Int32,UnityEngine.Rect&)
extern "C" IL2CPP_METHOD_ATTR void GUILayoutUtility_Internal_MoveWindow_Injected_mD80D56182A5684AC3BDA2B50AC8191974A064ABE (int32_t ___windowID0, Rect_t35B976DE901B5423C11705E156938EA27AB402CE * ___r1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m0E6D1EEC81E6A904B99EEC04DB95C1CC0E4A0B31 (Dictionary_2_t0F1A21E14D53E05B0F1D474060AC4B36995FBCA1 * __this, int32_t p0, LayoutCache_t0D14FE6139444D164ECA5D31E39E625D80077468 ** p1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t0F1A21E14D53E05B0F1D474060AC4B36995FBCA1 *, int32_t, LayoutCache_t0D14FE6139444D164ECA5D31E39E625D80077468 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m06770268256D37043BD7D05961BDC28ACAEF7795_gshared)(__this, p0, p1, method);
}
// System.Void UnityEngine.GUILayoutUtility/LayoutCache::.ctor()
extern "C" IL2CPP_METHOD_ATTR void LayoutCache__ctor_mF66D53540321BFD98CA89285D2E8FFDA5014A9CE (LayoutCache_t0D14FE6139444D164ECA5D31E39E625D80077468 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mB2CFA325B47C43C9E27C606844FE1AED4CD344A2 (Dictionary_2_t0F1A21E14D53E05B0F1D474060AC4B36995FBCA1 * __this, int32_t p0, LayoutCache_t0D14FE6139444D164ECA5D31E39E625D80077468 * p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t0F1A21E14D53E05B0F1D474060AC4B36995FBCA1 *, int32_t, LayoutCache_t0D14FE6139444D164ECA5D31E39E625D80077468 *, const RuntimeMethod*))Dictionary_2_set_Item_m8888E8956F71035CB8050FD355A28372A67FFC0E_gshared)(__this, p0, p1, method);
}
// System.Void UnityEngine.GUILayoutGroup::.ctor()
extern "C" IL2CPP_METHOD_ATTR void GUILayoutGroup__ctor_m14D8B35B4A89F6688D354A534ED871860905BA3B (GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_width()
extern "C" IL2CPP_METHOD_ATTR int32_t Screen_get_width_m8ECCEF7FF17395D1237BC0193D7A6640A3FEEAD3 (const RuntimeMethod* method);
// System.Single UnityEngine.GUIUtility::get_pixelsPerPoint()
extern "C" IL2CPP_METHOD_ATTR float GUIUtility_get_pixelsPerPoint_m6B4AB38F60A0AC54034A62043F74E06A613E4D56 (const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR float Mathf_Min_mCF9BE0E9CAC9F18D207692BB2DAC7F3E1D4E1CB7 (float p0, float p1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_height()
extern "C" IL2CPP_METHOD_ATTR int32_t Screen_get_height_mF5B64EBC4CDE0EAAA5713C1452ED2CE475F25150 (const RuntimeMethod* method);
// System.Void UnityEngine.GUILayoutUtility::LayoutFreeGroup(UnityEngine.GUILayoutGroup)
extern "C" IL2CPP_METHOD_ATTR void GUILayoutUtility_LayoutFreeGroup_m890E6BD9614C48B151D61F197251E3DBAC637967 (GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * ___toplevel0, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayoutUtility::LayoutSingleGroup(UnityEngine.GUILayoutGroup)
extern "C" IL2CPP_METHOD_ATTR void GUILayoutUtility_LayoutSingleGroup_m0BE91E195E4E2FC8B5B491783AFACBD1310F15A1 (GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * ___i0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29 (RuntimeObject * p0, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayoutGroup::ResetCursor()
extern "C" IL2CPP_METHOD_ATTR void GUILayoutGroup_ResetCursor_mD159DD9E101F6F348249D27D95709E1DC5C0A13F (GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * __this, const RuntimeMethod* method);
// UnityEngine.Rect UnityEngine.GUILayoutUtility::Internal_GetWindowRect(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Rect_t35B976DE901B5423C11705E156938EA27AB402CE  GUILayoutUtility_Internal_GetWindowRect_mE35BED0433EE8BD928CD52681620519E647A1DA9 (int32_t ___windowID0, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_width()
extern "C" IL2CPP_METHOD_ATTR float Rect_get_width_m54FF69FC2C086E2DC349ED091FD0D6576BFB1484 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_height()
extern "C" IL2CPP_METHOD_ATTR float Rect_get_height_m088C36990E0A255C5D7DCE36575DCE23ABB364B5 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayoutUtility::Internal_MoveWindow(System.Int32,UnityEngine.Rect)
extern "C" IL2CPP_METHOD_ATTR void GUILayoutUtility_Internal_MoveWindow_mFCB2DFE399B833D263138CF0A57626AFF52CB037 (int32_t ___windowID0, Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___r1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::.ctor()
inline void Dictionary_2__ctor_mD9286F4A0EF1BEC0B6BC4BD72D8D6A246B994EBF (Dictionary_2_t0F1A21E14D53E05B0F1D474060AC4B36995FBCA1 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t0F1A21E14D53E05B0F1D474060AC4B36995FBCA1 *, const RuntimeMethod*))Dictionary_2__ctor_mBFF4C9B146607B7C65AC7E902422A69E86DEB4C4_gshared)(__this, method);
}
// System.Void UnityEngine.GUILayoutGroup::CalcWidth()
extern "C" IL2CPP_METHOD_ATTR void GUILayoutGroup_CalcWidth_m0D2819C659392B14175C2B163DD889AD35794A9B (GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayoutGroup::SetHorizontal(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void GUILayoutGroup_SetHorizontal_m0AFB617E7BB6B32431BA65873B27660E6E5C9E51 (GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * __this, float ___x0, float ___width1, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayoutGroup::CalcHeight()
extern "C" IL2CPP_METHOD_ATTR void GUILayoutGroup_CalcHeight_m0511BD2172BC13D54ABC8DB5887A91C17E9F21BB (GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayoutGroup::SetVertical(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void GUILayoutGroup_SetVertical_m29D8744D2D1464EF4E6E4008CD21F5E44D6CB146 (GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * __this, float ___y0, float ___height1, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_white()
extern "C" IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_get_white_mE7F3AC4FF0D6F35E48049C73116A222CBE96D905 (const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Color__ctor_mC9AEEB3931D5B8C37483A884DD8EB40DC8946369 (Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * __this, float p0, float p1, float p2, const RuntimeMethod* method);
// System.Void UnityEngine.GUISettings::.ctor()
extern "C" IL2CPP_METHOD_ATTR void GUISettings__ctor_m6D2D6608CE04A741235BF0C8E134195B196F116D (GUISettings_tA863524720A3C984BAE56598D922F2C04DC80EF4 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.ScriptableObject::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ScriptableObject__ctor_m6E2B3821A4A361556FC12E9B1C71E1D5DC002C5B (ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GUISkin::Apply()
extern "C" IL2CPP_METHOD_ATTR void GUISkin_Apply_mA93B0EEE3C2DE1F8D867A472130CDA98814C8A49 (GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p1, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::SetDefaultFont(UnityEngine.Font)
extern "C" IL2CPP_METHOD_ATTR void GUIStyle_SetDefaultFont_m09D149F682E885D7058E3C48EB42C9E62363E381 (Font_t1EDE54AF557272BE314EB4B40EFA50CEB353CA26 * ___font0, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::.ctor()
extern "C" IL2CPP_METHOD_ATTR void GUIStyle__ctor_m8AA3D5AA506A252687923D0DA80741862AA83805 (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::set_name(System.String)
extern "C" IL2CPP_METHOD_ATTR void GUIStyle_set_name_m3D232D5A8EAD7B29F1F2DA3ADD01B99EFF83F1D7 (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708 (RuntimeObject * p0, const RuntimeMethod* method);
// System.Void UnityEngine.GUISkin::BuildStyleCache()
extern "C" IL2CPP_METHOD_ATTR void GUISkin_BuildStyleCache_m2C68BB5521EAF11FC98C86D7E60008901D61866A (GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7 * __this, const RuntimeMethod* method);
// System.StringComparer System.StringComparer::get_OrdinalIgnoreCase()
extern "C" IL2CPP_METHOD_ATTR StringComparer_t2BD4D768665C1290582CAD7439D03599B59ACCCF * StringComparer_get_OrdinalIgnoreCase_m677FEC81BD905EFF476133F3472B883C8EC5714D (const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::.ctor(System.Collections.Generic.IEqualityComparer`1<!0>)
inline void Dictionary_2__ctor_mE7D4915AD1A64B140D2C412B197D4D43B016074E (Dictionary_2_tF2F04E1BE233EE6C4A6E90261E463B2A67A3FB6A * __this, RuntimeObject* p0, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tF2F04E1BE233EE6C4A6E90261E463B2A67A3FB6A *, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m79F5CBCBE8B57D01162B5DA75116F739EC7CEBD4_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m24E725BAB2853FE434C3D507858296BA81733DC5 (Dictionary_2_tF2F04E1BE233EE6C4A6E90261E463B2A67A3FB6A * __this, String_t* p0, GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tF2F04E1BE233EE6C4A6E90261E463B2A67A3FB6A *, String_t*, GUIStyle_t671F175A201A19166385EE3392292A5F50070572 *, const RuntimeMethod*))Dictionary_2_set_Item_mC705E93760444EDBD2D2AE51F4F37342FDF684BF_gshared)(__this, p0, p1, method);
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_error()
extern "C" IL2CPP_METHOD_ATTR GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * GUISkin_get_error_m40FBD0C57353CBFD8EE75B796E3EADBF9033C47F (const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::set_stretchHeight(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void GUIStyle_set_stretchHeight_mE11B46969A8498FB3B7443B4C54254F0C9A71A6E (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_normal()
extern "C" IL2CPP_METHOD_ATTR GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * GUIStyle_get_normal_mC5CB22EED8113DEC86C54FB42F757B635D09DD2F (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * __this, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_red()
extern "C" IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_get_red_m5562DD438931CF0D1FBBBB29BF7F8B752AF38957 (const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyleState::set_textColor(UnityEngine.Color)
extern "C" IL2CPP_METHOD_ATTR void GUIStyleState_set_textColor_m2B235845A292C22ABEDEFBB2FD798DEB4E104983 (GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * __this, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___value0, const RuntimeMethod* method);
// UnityEngine.GUIStyle UnityEngine.GUISkin::FindStyle(System.String)
extern "C" IL2CPP_METHOD_ATTR GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * GUISkin_FindStyle_m977BAAD9DE35AC43C9FA2DB52C6C0BDF83EE4706 (GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7 * __this, String_t* ___styleName0, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
extern "C" IL2CPP_METHOD_ATTR String_t* Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m05C8664677D30AF8CD22529864D444E87E1CC148 (StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m72452D4223AA3313BF658BFBDFC1B417CA40EC18 (Dictionary_2_tF2F04E1BE233EE6C4A6E90261E463B2A67A3FB6A * __this, String_t* p0, GUIStyle_t671F175A201A19166385EE3392292A5F50070572 ** p1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tF2F04E1BE233EE6C4A6E90261E463B2A67A3FB6A *, String_t*, GUIStyle_t671F175A201A19166385EE3392292A5F50070572 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m1DD3722BF4BB2080516165A517EB10BB996B18EB_gshared)(__this, p0, p1, method);
}
// UnityEngine.Font UnityEngine.GUISkin::get_font()
extern "C" IL2CPP_METHOD_ATTR Font_t1EDE54AF557272BE314EB4B40EFA50CEB353CA26 * GUISkin_get_font_m54200DFAF834B835CE6598E1BA5B41382BC33AD5 (GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GUISkin/SkinChangedDelegate::Invoke()
extern "C" IL2CPP_METHOD_ATTR void SkinChangedDelegate_Invoke_mE18CA4219F24151D8FC8A8A8B261F3FD860B007F (SkinChangedDelegate_tAB4CEEA8C8A0BDCFD51C9624AE173C46A40135D8 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/ValueCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::get_Values()
inline ValueCollection_t0C6A26D50A89F916DF2650A7C132FFB1992070B9 * Dictionary_2_get_Values_mBCCD4E4C93C5E4DF2E0A07934040870B3662866F (Dictionary_2_tF2F04E1BE233EE6C4A6E90261E463B2A67A3FB6A * __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_t0C6A26D50A89F916DF2650A7C132FFB1992070B9 * (*) (Dictionary_2_tF2F04E1BE233EE6C4A6E90261E463B2A67A3FB6A *, const RuntimeMethod*))Dictionary_2_get_Values_m49493F3D593D9A54BF98337EED925790CF8B7701_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.GUIStyle>::GetEnumerator()
inline Enumerator_t7CFB6C06FEABB756D0C0A1BA202A13F5091958A6  ValueCollection_GetEnumerator_m56252F012AAECD0BFFC3729A87D60BF2945499C2 (ValueCollection_t0C6A26D50A89F916DF2650A7C132FFB1992070B9 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t7CFB6C06FEABB756D0C0A1BA202A13F5091958A6  (*) (ValueCollection_t0C6A26D50A89F916DF2650A7C132FFB1992070B9 *, const RuntimeMethod*))ValueCollection_GetEnumerator_m1E74DB08E152E1556F9FEF63554A21A4A06D2E58_gshared)(__this, method);
}
// System.IntPtr UnityEngine.GUIStyle::Internal_Create(UnityEngine.GUIStyle)
extern "C" IL2CPP_METHOD_ATTR intptr_t GUIStyle_Internal_Create_m9641BC84B2A6E34A801EED919EF412E4A1C444C8 (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___self0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.GUIStyle::Internal_Copy(UnityEngine.GUIStyle,UnityEngine.GUIStyle)
extern "C" IL2CPP_METHOD_ATTR intptr_t GUIStyle_Internal_Copy_m9F0B548973DA4B7992A7B74734736DDBAD3E8325 (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___self0, GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___other1, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::Internal_Draw_Injected(UnityEngine.Rect&,UnityEngine.GUIContent,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void GUIStyle_Internal_Draw_Injected_m96268CFD8003682366C5416A373F06C862B2785C (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * __this, Rect_t35B976DE901B5423C11705E156938EA27AB402CE * ___screenRect0, GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * ___content1, bool ___isHover2, bool ___isActive3, bool ___on4, bool ___hasKeyboardFocus5, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::Internal_Draw2_Injected(UnityEngine.Rect&,UnityEngine.GUIContent,System.Int32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void GUIStyle_Internal_Draw2_Injected_m76127AEB314B7227EED6CD90639B918394686872 (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * __this, Rect_t35B976DE901B5423C11705E156938EA27AB402CE * ___position0, GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * ___content1, int32_t ___controlID2, bool ___on3, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::Internal_Destroy(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void GUIStyle_Internal_Destroy_mFA13F1C8E929FB9429825F2F176D4E3DE9C131E2 (intptr_t ___self0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.GUIStyle::GetStyleStatePtr(System.Int32)
extern "C" IL2CPP_METHOD_ATTR intptr_t GUIStyle_GetStyleStatePtr_m9EB2842B5EDEC03D6F7A0050A4E9DBB7103EA5C5 (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * __this, int32_t ___idx0, const RuntimeMethod* method);
// UnityEngine.GUIStyleState UnityEngine.GUIStyleState::GetGUIStyleState(UnityEngine.GUIStyle,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * GUIStyleState_GetGUIStyleState_m207443170D2CA9E48BAB05FF74B30C76C6D63F68 (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___sourceStyle0, intptr_t ___source1, const RuntimeMethod* method);
// System.IntPtr UnityEngine.GUIStyle::GetRectOffsetPtr(System.Int32)
extern "C" IL2CPP_METHOD_ATTR intptr_t GUIStyle_GetRectOffsetPtr_m780608811770308EFDE095993756D8AA0BD37BF8 (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * __this, int32_t ___idx0, const RuntimeMethod* method);
// System.Void UnityEngine.RectOffset::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void RectOffset__ctor_m23620FE61AAF476219462230C6839B86736B80BA (RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::Draw(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void GUIStyle_Draw_mAC1BB37A9DA0C304A5A70A9CFDB097C8D9C90FFF (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * __this, Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___position0, GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * ___content1, int32_t ___controlId2, bool ___isHover3, bool ___isActive4, bool ___on5, bool ___hasKeyboardFocus6, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::Internal_Draw(UnityEngine.Rect,UnityEngine.GUIContent,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void GUIStyle_Internal_Draw_m8DAE8DEA36131D287E8E8DF5D1EF5E9788A672A9 (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * __this, Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___screenRect0, GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * ___content1, bool ___isHover2, bool ___isActive3, bool ___on4, bool ___hasKeyboardFocus5, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::Internal_Draw2(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void GUIStyle_Internal_Draw2_m0F79CA39E2A55437E2E918BE915E594BC303D13D (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * __this, Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___position0, GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * ___content1, int32_t ___controlID2, bool ___on3, const RuntimeMethod* method);
// System.IntPtr UnityEngine.GUIStyleState::Init()
extern "C" IL2CPP_METHOD_ATTR intptr_t GUIStyleState_Init_m24D7A3BD60709BA6C36D21F86E8FBCA3AD7756D9 (const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyleState::set_textColor_Injected(UnityEngine.Color&)
extern "C" IL2CPP_METHOD_ATTR void GUIStyleState_set_textColor_Injected_m09DA402A33A2E28F9B8BB37AEF6EA05B58F7C475 (GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * __this, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyleState::.ctor(UnityEngine.GUIStyle,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void GUIStyleState__ctor_m88DEBFEA9F9D54F4E6732A6ACE729079A79833B8 (GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * __this, GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___sourceStyle0, intptr_t ___source1, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyleState::Cleanup()
extern "C" IL2CPP_METHOD_ATTR void GUIStyleState_Cleanup_mB92C1A0564E1D841A37DD43D6B6E1AD27BAD5A49 (GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * __this, const RuntimeMethod* method);
// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags)
extern "C" IL2CPP_METHOD_ATTR MethodInfo_t * Type_GetMethod_m1E54485E8A7411A2C3F9A864C2EB064D20C593B1 (Type_t * __this, String_t* p0, int32_t p1, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C" IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8326E3405B647C99882C2E411C459944B0598D73 (RuntimeTypeHandle_t58BB862EF56F46A9518F8ACA413EF7D70238F1AD  p0, const RuntimeMethod* method);
// System.Int32 UnityEngine.GUIUtility::GetControlID_Injected(System.Int32,UnityEngine.FocusType,UnityEngine.Rect&)
extern "C" IL2CPP_METHOD_ATTR int32_t GUIUtility_GetControlID_Injected_m0B621090C90D8A821A2D334199EDB3CB2ED42DA1 (int32_t ___hint0, int32_t ___focusType1, Rect_t35B976DE901B5423C11705E156938EA27AB402CE * ___rect2, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
extern "C" IL2CPP_METHOD_ATTR void Action_Invoke_m2DA0C32440A1530B77ABC5C8DDAC1805A652C953 (Action_tC9F24EBA5075EA0322C6E0DC6BE2C7BDF962FB21 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.GUIUtility::Internal_GetKeyboardControl()
extern "C" IL2CPP_METHOD_ATTR int32_t GUIUtility_Internal_GetKeyboardControl_m198D8D057F49AEC00E1FEC40A116E61E9A48CAED (const RuntimeMethod* method);
// System.Object UnityEngine.GUIUtility::Internal_GetDefaultSkin(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GUIUtility_Internal_GetDefaultSkin_m1D4A53896309F1A4A54AF15D7E5F4DC61451276E (int32_t ___skinMode0, const RuntimeMethod* method);
// !2 System.Func`3<System.Int32,System.IntPtr,System.Boolean>::Invoke(!0,!1)
inline bool Func_3_Invoke_mCD6DEEC09B4F1B42DD0FD4A8F58632B08EC66737 (Func_3_tBD99633D8A18C43CC528ECE3F77E2F69900048A7 * __this, int32_t p0, intptr_t p1, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_3_tBD99633D8A18C43CC528ECE3F77E2F69900048A7 *, int32_t, intptr_t, const RuntimeMethod*))Func_3_Invoke_mCD6DEEC09B4F1B42DD0FD4A8F58632B08EC66737_gshared)(__this, p0, p1, method);
}
// System.Void UnityEngine.GUIUtility::ResetGlobalState()
extern "C" IL2CPP_METHOD_ATTR void GUIUtility_ResetGlobalState_m192C9FAE2A4B87F34CB051C4967B8A919A902A5C (const RuntimeMethod* method);
// System.Void UnityEngine.GUILayoutUtility::Begin(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void GUILayoutUtility_Begin_m6876A33199599688408A4AD364069090E833B237 (int32_t ___instanceID0, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayoutUtility::LayoutFromEditorWindow()
extern "C" IL2CPP_METHOD_ATTR void GUILayoutUtility_LayoutFromEditorWindow_mBE82BE965B54F68E7090952684C86BFF0538AB52 (const RuntimeMethod* method);
// System.Void UnityEngine.GUIContent::ClearStaticCache()
extern "C" IL2CPP_METHOD_ATTR void GUIContent_ClearStaticCache_m567DA736612F9E6E66262CC630952AB2E22BC933 (const RuntimeMethod* method);
// System.Void UnityEngine.GUIUtility::Internal_ExitGUI()
extern "C" IL2CPP_METHOD_ATTR void GUIUtility_Internal_ExitGUI_mC6B22D4CC318E08171B3565919458F337351ACCC (const RuntimeMethod* method);
// System.Boolean UnityEngine.GUIUtility::ShouldRethrowException(System.Exception)
extern "C" IL2CPP_METHOD_ATTR bool GUIUtility_ShouldRethrowException_mCF3B04493727D6A40ED50AC2414D5617455339B6 (Exception_t * ___exception0, const RuntimeMethod* method);
// !1 System.Func`2<System.Exception,System.Boolean>::Invoke(!0)
inline bool Func_2_Invoke_m9621506610C10C9E735B305E826ACEFF914422CD (Func_2_tC816C5FDED4A7372C449E7660CAB9F94E2AC12F8 * __this, Exception_t * p0, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_2_tC816C5FDED4A7372C449E7660CAB9F94E2AC12F8 *, Exception_t *, const RuntimeMethod*))Func_2_Invoke_mC085D88039B698D8980E1490CA9C90FF9C85E36B_gshared)(__this, p0, method);
}
// System.Void UnityEngine.GUIUtility::set_guiIsExiting(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void GUIUtility_set_guiIsExiting_m16D5DFFB64483BC588CA6BEA0FAA618E4A227960 (bool ___value0, const RuntimeMethod* method);
// System.Exception System.Exception::get_InnerException()
extern "C" IL2CPP_METHOD_ATTR Exception_t * Exception_get_InnerException_mE12CB95A830CA7AE2655B32D3BAD6F9B8E22DF79 (Exception_t * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.GUIUtility::IsExitGUIException(System.Exception)
extern "C" IL2CPP_METHOD_ATTR bool GUIUtility_IsExitGUIException_mBCCE6118666769B8B767D74496E44D2ECC7AFDD2 (Exception_t * ___exception0, const RuntimeMethod* method);
// System.Int32 UnityEngine.GUIUtility::get_guiDepth()
extern "C" IL2CPP_METHOD_ATTR int32_t GUIUtility_get_guiDepth_m927893DDBCD8D8F88CA9F70A7D1A7BDB59B4F395 (const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8917650A5D8F2F36C6B623A720DF2D2A630D3533 (ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60 * __this, String_t* p0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
extern "C" IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_get_zero_mFE0C3213BB698130D6C5247AB4B887A59074D0A8 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.Event
extern "C" void Event_t187FF6A6B357447B83EC2064823EE0AEC5263210_marshal_pinvoke(const Event_t187FF6A6B357447B83EC2064823EE0AEC5263210& unmarshaled, Event_t187FF6A6B357447B83EC2064823EE0AEC5263210_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
extern "C" void Event_t187FF6A6B357447B83EC2064823EE0AEC5263210_marshal_pinvoke_back(const Event_t187FF6A6B357447B83EC2064823EE0AEC5263210_marshaled_pinvoke& marshaled, Event_t187FF6A6B357447B83EC2064823EE0AEC5263210& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset(&unmarshaled_m_Ptr_temp_0, 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Event
extern "C" void Event_t187FF6A6B357447B83EC2064823EE0AEC5263210_marshal_pinvoke_cleanup(Event_t187FF6A6B357447B83EC2064823EE0AEC5263210_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Event
extern "C" void Event_t187FF6A6B357447B83EC2064823EE0AEC5263210_marshal_com(const Event_t187FF6A6B357447B83EC2064823EE0AEC5263210& unmarshaled, Event_t187FF6A6B357447B83EC2064823EE0AEC5263210_marshaled_com& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
extern "C" void Event_t187FF6A6B357447B83EC2064823EE0AEC5263210_marshal_com_back(const Event_t187FF6A6B357447B83EC2064823EE0AEC5263210_marshaled_com& marshaled, Event_t187FF6A6B357447B83EC2064823EE0AEC5263210& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset(&unmarshaled_m_Ptr_temp_0, 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Event
extern "C" void Event_t187FF6A6B357447B83EC2064823EE0AEC5263210_marshal_com_cleanup(Event_t187FF6A6B357447B83EC2064823EE0AEC5263210_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.Event::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Event__ctor_m7226316A4024A3C5EBAE7BB7975194CE2B766A3B (Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m8BA07445967EE2CC15961AD3C16F25DB74506EA0(__this, /*hidden argument*/NULL);
		intptr_t L_0 = Event_Internal_Create_m93F047D4FC3B4B76FD4F80439D0F7EE131EE1E6B(0, /*hidden argument*/NULL);
		__this->set_m_Ptr_0((intptr_t)L_0);
		return;
	}
}
// System.Void UnityEngine.Event::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Event__ctor_mF8E4029007206A6CAAB28422355BA208C0728FB9 (Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * __this, int32_t ___displayIndex0, const RuntimeMethod* method)
{
	{
		Object__ctor_m8BA07445967EE2CC15961AD3C16F25DB74506EA0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___displayIndex0;
		intptr_t L_1 = Event_Internal_Create_m93F047D4FC3B4B76FD4F80439D0F7EE131EE1E6B(L_0, /*hidden argument*/NULL);
		__this->set_m_Ptr_0((intptr_t)L_1);
		return;
	}
}
// UnityEngine.EventType UnityEngine.Event::get_rawType()
extern "C" IL2CPP_METHOD_ATTR int32_t Event_get_rawType_m4139BB74440F552F5FD31F56215938E227EF0CD9 (Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * __this, const RuntimeMethod* method)
{
	typedef int32_t (*Event_get_rawType_m4139BB74440F552F5FD31F56215938E227EF0CD9_ftn) (Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *);
	static Event_get_rawType_m4139BB74440F552F5FD31F56215938E227EF0CD9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_get_rawType_m4139BB74440F552F5FD31F56215938E227EF0CD9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_rawType()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// UnityEngine.Vector2 UnityEngine.Event::get_mousePosition()
extern "C" IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Event_get_mousePosition_m92AD98489A626864E9B179273270802EB1D2C085 (Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * __this, const RuntimeMethod* method)
{
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Event_get_mousePosition_Injected_mE71FE88F6E27190A534BD5862941E5887D6BE632(__this, (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)(&V_0), /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = V_0;
		return L_0;
	}
}
// UnityEngine.EventModifiers UnityEngine.Event::get_modifiers()
extern "C" IL2CPP_METHOD_ATTR int32_t Event_get_modifiers_m4D1BDE843A9379F50C3F32CB78CCDAD84B779108 (Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * __this, const RuntimeMethod* method)
{
	typedef int32_t (*Event_get_modifiers_m4D1BDE843A9379F50C3F32CB78CCDAD84B779108_ftn) (Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *);
	static Event_get_modifiers_m4D1BDE843A9379F50C3F32CB78CCDAD84B779108_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_get_modifiers_m4D1BDE843A9379F50C3F32CB78CCDAD84B779108_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_modifiers()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Char UnityEngine.Event::get_character()
extern "C" IL2CPP_METHOD_ATTR Il2CppChar Event_get_character_m78B46D412357B71233F3D41842928A19B290915C (Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * __this, const RuntimeMethod* method)
{
	typedef Il2CppChar (*Event_get_character_m78B46D412357B71233F3D41842928A19B290915C_ftn) (Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *);
	static Event_get_character_m78B46D412357B71233F3D41842928A19B290915C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_get_character_m78B46D412357B71233F3D41842928A19B290915C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_character()");
	Il2CppChar retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// UnityEngine.KeyCode UnityEngine.Event::get_keyCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Event_get_keyCode_m8B0AAD347861E322E91D2B7320A99E04D39575CF (Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * __this, const RuntimeMethod* method)
{
	typedef int32_t (*Event_get_keyCode_m8B0AAD347861E322E91D2B7320A99E04D39575CF_ftn) (Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *);
	static Event_get_keyCode_m8B0AAD347861E322E91D2B7320A99E04D39575CF_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_get_keyCode_m8B0AAD347861E322E91D2B7320A99E04D39575CF_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_keyCode()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Event::set_displayIndex(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Event_set_displayIndex_mF73CEED3B26A4BCADB099E5E6685FE6AC2CF7289 (Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*Event_set_displayIndex_mF73CEED3B26A4BCADB099E5E6685FE6AC2CF7289_ftn) (Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *, int32_t);
	static Event_set_displayIndex_mF73CEED3B26A4BCADB099E5E6685FE6AC2CF7289_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_set_displayIndex_mF73CEED3B26A4BCADB099E5E6685FE6AC2CF7289_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::set_displayIndex(System.Int32)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.EventType UnityEngine.Event::get_type()
extern "C" IL2CPP_METHOD_ATTR int32_t Event_get_type_mAABE4A35E5658E0079A1518D318AF2592F51D6FA (Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * __this, const RuntimeMethod* method)
{
	typedef int32_t (*Event_get_type_mAABE4A35E5658E0079A1518D318AF2592F51D6FA_ftn) (Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *);
	static Event_get_type_mAABE4A35E5658E0079A1518D318AF2592F51D6FA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_get_type_mAABE4A35E5658E0079A1518D318AF2592F51D6FA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_type()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.String UnityEngine.Event::get_commandName()
extern "C" IL2CPP_METHOD_ATTR String_t* Event_get_commandName_m119D9F8B0A7BA18B849B958CFAF249C970C00BF1 (Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * __this, const RuntimeMethod* method)
{
	typedef String_t* (*Event_get_commandName_m119D9F8B0A7BA18B849B958CFAF249C970C00BF1_ftn) (Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *);
	static Event_get_commandName_m119D9F8B0A7BA18B849B958CFAF249C970C00BF1_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_get_commandName_m119D9F8B0A7BA18B849B958CFAF249C970C00BF1_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_commandName()");
	String_t* retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Event::Internal_Use()
extern "C" IL2CPP_METHOD_ATTR void Event_Internal_Use_m44762004F3C1C23EEC79F1B9250433A581EC6538 (Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * __this, const RuntimeMethod* method)
{
	typedef void (*Event_Internal_Use_m44762004F3C1C23EEC79F1B9250433A581EC6538_ftn) (Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *);
	static Event_Internal_Use_m44762004F3C1C23EEC79F1B9250433A581EC6538_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_Internal_Use_m44762004F3C1C23EEC79F1B9250433A581EC6538_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::Internal_Use()");
	_il2cpp_icall_func(__this);
}
// System.IntPtr UnityEngine.Event::Internal_Create(System.Int32)
extern "C" IL2CPP_METHOD_ATTR intptr_t Event_Internal_Create_m93F047D4FC3B4B76FD4F80439D0F7EE131EE1E6B (int32_t ___displayIndex0, const RuntimeMethod* method)
{
	typedef intptr_t (*Event_Internal_Create_m93F047D4FC3B4B76FD4F80439D0F7EE131EE1E6B_ftn) (int32_t);
	static Event_Internal_Create_m93F047D4FC3B4B76FD4F80439D0F7EE131EE1E6B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_Internal_Create_m93F047D4FC3B4B76FD4F80439D0F7EE131EE1E6B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::Internal_Create(System.Int32)");
	intptr_t retVal = _il2cpp_icall_func(___displayIndex0);
	return retVal;
}
// System.Void UnityEngine.Event::Internal_Destroy(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Event_Internal_Destroy_m30C46F30A51ABAC5EC270FB75A9856676AA3515C (intptr_t ___ptr0, const RuntimeMethod* method)
{
	typedef void (*Event_Internal_Destroy_m30C46F30A51ABAC5EC270FB75A9856676AA3515C_ftn) (intptr_t);
	static Event_Internal_Destroy_m30C46F30A51ABAC5EC270FB75A9856676AA3515C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_Internal_Destroy_m30C46F30A51ABAC5EC270FB75A9856676AA3515C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::Internal_Destroy(System.IntPtr)");
	_il2cpp_icall_func(___ptr0);
}
// System.Boolean UnityEngine.Event::PopEvent(UnityEngine.Event)
extern "C" IL2CPP_METHOD_ATTR bool Event_PopEvent_m8D01FDDC4C7423FCCD7EF3F1B13340C857BE4E4F (Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * ___outEvent0, const RuntimeMethod* method)
{
	typedef bool (*Event_PopEvent_m8D01FDDC4C7423FCCD7EF3F1B13340C857BE4E4F_ftn) (Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *);
	static Event_PopEvent_m8D01FDDC4C7423FCCD7EF3F1B13340C857BE4E4F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_PopEvent_m8D01FDDC4C7423FCCD7EF3F1B13340C857BE4E4F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::PopEvent(UnityEngine.Event)");
	bool retVal = _il2cpp_icall_func(___outEvent0);
	return retVal;
}
// System.Void UnityEngine.Event::Internal_SetNativeEvent(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Event_Internal_SetNativeEvent_mDD8C9E3F062FD112ED996FA4E45C1BFBB8C4E950 (intptr_t ___ptr0, const RuntimeMethod* method)
{
	typedef void (*Event_Internal_SetNativeEvent_mDD8C9E3F062FD112ED996FA4E45C1BFBB8C4E950_ftn) (intptr_t);
	static Event_Internal_SetNativeEvent_mDD8C9E3F062FD112ED996FA4E45C1BFBB8C4E950_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_Internal_SetNativeEvent_mDD8C9E3F062FD112ED996FA4E45C1BFBB8C4E950_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::Internal_SetNativeEvent(System.IntPtr)");
	_il2cpp_icall_func(___ptr0);
}
// System.Void UnityEngine.Event::Internal_MakeMasterEventCurrent(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Event_Internal_MakeMasterEventCurrent_mAD78377C8BB08EFB5DF3D3E3A4F1089F2FC2BA48 (int32_t ___displayIndex0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Event_Internal_MakeMasterEventCurrent_mAD78377C8BB08EFB5DF3D3E3A4F1089F2FC2BA48_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_0 = ((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210_StaticFields*)il2cpp_codegen_static_fields_for(Event_t187FF6A6B357447B83EC2064823EE0AEC5263210_il2cpp_TypeInfo_var))->get_s_MasterEvent_2();
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___displayIndex0;
		Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_2 = (Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)il2cpp_codegen_object_new(Event_t187FF6A6B357447B83EC2064823EE0AEC5263210_il2cpp_TypeInfo_var);
		Event__ctor_mF8E4029007206A6CAAB28422355BA208C0728FB9(L_2, L_1, /*hidden argument*/NULL);
		((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210_StaticFields*)il2cpp_codegen_static_fields_for(Event_t187FF6A6B357447B83EC2064823EE0AEC5263210_il2cpp_TypeInfo_var))->set_s_MasterEvent_2(L_2);
	}

IL_0016:
	{
		Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_3 = ((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210_StaticFields*)il2cpp_codegen_static_fields_for(Event_t187FF6A6B357447B83EC2064823EE0AEC5263210_il2cpp_TypeInfo_var))->get_s_MasterEvent_2();
		int32_t L_4 = ___displayIndex0;
		NullCheck(L_3);
		Event_set_displayIndex_mF73CEED3B26A4BCADB099E5E6685FE6AC2CF7289(L_3, L_4, /*hidden argument*/NULL);
		Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_5 = ((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210_StaticFields*)il2cpp_codegen_static_fields_for(Event_t187FF6A6B357447B83EC2064823EE0AEC5263210_il2cpp_TypeInfo_var))->get_s_MasterEvent_2();
		((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210_StaticFields*)il2cpp_codegen_static_fields_for(Event_t187FF6A6B357447B83EC2064823EE0AEC5263210_il2cpp_TypeInfo_var))->set_s_Current_1(L_5);
		Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_6 = ((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210_StaticFields*)il2cpp_codegen_static_fields_for(Event_t187FF6A6B357447B83EC2064823EE0AEC5263210_il2cpp_TypeInfo_var))->get_s_MasterEvent_2();
		NullCheck(L_6);
		intptr_t L_7 = L_6->get_m_Ptr_0();
		Event_Internal_SetNativeEvent_mDD8C9E3F062FD112ED996FA4E45C1BFBB8C4E950((intptr_t)L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Event::Finalize()
extern "C" IL2CPP_METHOD_ATTR void Event_Finalize_m71EE3F6BC6C0A99F849EC39C0E47B7305BB9EB3D (Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Event_Finalize_m71EE3F6BC6C0A99F849EC39C0E47B7305BB9EB3D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		{
			intptr_t L_0 = __this->get_m_Ptr_0();
			bool L_1 = IntPtr_op_Inequality_mDA2D3B8121240D007DB220F422397AEBB37CEE91((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
			if (!L_1)
			{
				goto IL_002e;
			}
		}

IL_0016:
		{
			intptr_t L_2 = __this->get_m_Ptr_0();
			Event_Internal_Destroy_m30C46F30A51ABAC5EC270FB75A9856676AA3515C((intptr_t)L_2, /*hidden argument*/NULL);
			__this->set_m_Ptr_0((intptr_t)(0));
		}

IL_002e:
		{
			IL2CPP_LEAVE(0x3A, FINALLY_0033);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0033;
	}

FINALLY_0033:
	{ // begin finally (depth: 1)
		Object_Finalize_mF771ED4CD6EB17CF862AA2B705F0E2CC0B4ADBED(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(51)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(51)
	{
		IL2CPP_JUMP_TBL(0x3A, IL_003a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_003a:
	{
		return;
	}
}
// UnityEngine.Event UnityEngine.Event::get_current()
extern "C" IL2CPP_METHOD_ATTR Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * Event_get_current_m072CEE599D11B8A9A916697E57C0F561188CDB2B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Event_get_current_m072CEE599D11B8A9A916697E57C0F561188CDB2B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * V_0 = NULL;
	{
		Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_0 = ((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210_StaticFields*)il2cpp_codegen_static_fields_for(Event_t187FF6A6B357447B83EC2064823EE0AEC5263210_il2cpp_TypeInfo_var))->get_s_Current_1();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UnityEngine.Event::get_isKey()
extern "C" IL2CPP_METHOD_ATTR bool Event_get_isKey_m17D185B6CD336242BC5FB9BAB025EE8FA7771E90 (Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = Event_get_type_mAABE4A35E5658E0079A1518D318AF2592F51D6FA(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)4)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_2 = V_0;
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)5))? 1 : 0);
		goto IL_0016;
	}

IL_0015:
	{
		G_B3_0 = 1;
	}

IL_0016:
	{
		V_1 = (bool)G_B3_0;
		goto IL_001c;
	}

IL_001c:
	{
		bool L_3 = V_1;
		return L_3;
	}
}
// System.Boolean UnityEngine.Event::get_isMouse()
extern "C" IL2CPP_METHOD_ATTR bool Event_get_isMouse_m5923637C4A5E3BD642C3E88A428D5B39F0A85AB6 (Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t G_B8_0 = 0;
	{
		int32_t L_0 = Event_get_type_mAABE4A35E5658E0079A1518D318AF2592F51D6FA(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)3)))
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)16))))
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)20))))
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_7 = V_0;
		G_B8_0 = ((((int32_t)L_7) == ((int32_t)((int32_t)21)))? 1 : 0);
		goto IL_003b;
	}

IL_003a:
	{
		G_B8_0 = 1;
	}

IL_003b:
	{
		V_1 = (bool)G_B8_0;
		goto IL_0041;
	}

IL_0041:
	{
		bool L_8 = V_1;
		return L_8;
	}
}
// System.Int32 UnityEngine.Event::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Event_GetHashCode_m043035C02793F794E13286466579F09F87D7AA9D (Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_1;
	memset(&V_1, 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		V_0 = 1;
		bool L_0 = Event_get_isKey_m17D185B6CD336242BC5FB9BAB025EE8FA7771E90(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = Event_get_keyCode_m8B0AAD347861E322E91D2B7320A99E04D39575CF(__this, /*hidden argument*/NULL);
		V_0 = (((int32_t)((uint16_t)L_1)));
	}

IL_0016:
	{
		bool L_2 = Event_get_isMouse_m5923637C4A5E3BD642C3E88A428D5B39F0A85AB6(__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0036;
		}
	}
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_3 = Event_get_mousePosition_m92AD98489A626864E9B179273270802EB1D2C085(__this, /*hidden argument*/NULL);
		V_1 = L_3;
		int32_t L_4 = Vector2_GetHashCode_m028AB6B14EBC6D668CFA45BF6EDEF17E2C44EA54((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_4;
	}

IL_0036:
	{
		int32_t L_5 = V_0;
		int32_t L_6 = Event_get_modifiers_m4D1BDE843A9379F50C3F32CB78CCDAD84B779108(__this, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_5, (int32_t)((int32_t)37)))|(int32_t)L_6));
		int32_t L_7 = V_0;
		V_2 = L_7;
		goto IL_0049;
	}

IL_0049:
	{
		int32_t L_8 = V_2;
		return L_8;
	}
}
// System.Boolean UnityEngine.Event::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool Event_Equals_m1DEF4FB843B631FC437B1366F0F78CEF7A739070 (Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Event_Equals_m1DEF4FB843B631FC437B1366F0F78CEF7A739070_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * V_1 = NULL;
	{
		RuntimeObject * L_0 = ___obj0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		V_0 = (bool)0;
		goto IL_00b7;
	}

IL_000e:
	{
		RuntimeObject * L_1 = ___obj0;
		bool L_2 = il2cpp_codegen_object_reference_equals(__this, L_1);
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		V_0 = (bool)1;
		goto IL_00b7;
	}

IL_0021:
	{
		RuntimeObject * L_3 = ___obj0;
		NullCheck(L_3);
		Type_t * L_4 = Object_GetType_m993E65F4E4457CE1761C49B188A6CF858597BDDE(L_3, /*hidden argument*/NULL);
		Type_t * L_5 = Object_GetType_m993E65F4E4457CE1761C49B188A6CF858597BDDE(__this, /*hidden argument*/NULL);
		if ((((RuntimeObject*)(Type_t *)L_4) == ((RuntimeObject*)(Type_t *)L_5)))
		{
			goto IL_0039;
		}
	}
	{
		V_0 = (bool)0;
		goto IL_00b7;
	}

IL_0039:
	{
		RuntimeObject * L_6 = ___obj0;
		V_1 = ((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)CastclassSealed((RuntimeObject*)L_6, Event_t187FF6A6B357447B83EC2064823EE0AEC5263210_il2cpp_TypeInfo_var));
		int32_t L_7 = Event_get_type_mAABE4A35E5658E0079A1518D318AF2592F51D6FA(__this, /*hidden argument*/NULL);
		Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_8 = V_1;
		NullCheck(L_8);
		int32_t L_9 = Event_get_type_mAABE4A35E5658E0079A1518D318AF2592F51D6FA(L_8, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)L_9))))
		{
			goto IL_0068;
		}
	}
	{
		int32_t L_10 = Event_get_modifiers_m4D1BDE843A9379F50C3F32CB78CCDAD84B779108(__this, /*hidden argument*/NULL);
		Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_11 = V_1;
		NullCheck(L_11);
		int32_t L_12 = Event_get_modifiers_m4D1BDE843A9379F50C3F32CB78CCDAD84B779108(L_11, /*hidden argument*/NULL);
		if ((((int32_t)((int32_t)((int32_t)L_10&(int32_t)((int32_t)-33)))) == ((int32_t)((int32_t)((int32_t)L_12&(int32_t)((int32_t)-33))))))
		{
			goto IL_006f;
		}
	}

IL_0068:
	{
		V_0 = (bool)0;
		goto IL_00b7;
	}

IL_006f:
	{
		bool L_13 = Event_get_isKey_m17D185B6CD336242BC5FB9BAB025EE8FA7771E90(__this, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_14 = Event_get_keyCode_m8B0AAD347861E322E91D2B7320A99E04D39575CF(__this, /*hidden argument*/NULL);
		Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_15 = V_1;
		NullCheck(L_15);
		int32_t L_16 = Event_get_keyCode_m8B0AAD347861E322E91D2B7320A99E04D39575CF(L_15, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_14) == ((int32_t)L_16))? 1 : 0);
		goto IL_00b7;
	}

IL_008e:
	{
		bool L_17 = Event_get_isMouse_m5923637C4A5E3BD642C3E88A428D5B39F0A85AB6(__this, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_00b0;
		}
	}
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_18 = Event_get_mousePosition_m92AD98489A626864E9B179273270802EB1D2C085(__this, /*hidden argument*/NULL);
		Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_19 = V_1;
		NullCheck(L_19);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_20 = Event_get_mousePosition_m92AD98489A626864E9B179273270802EB1D2C085(L_19, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		bool L_21 = Vector2_op_Equality_m0E86E1B1038DDB8554A8A0D58729A7788D989588(L_18, L_20, /*hidden argument*/NULL);
		V_0 = L_21;
		goto IL_00b7;
	}

IL_00b0:
	{
		V_0 = (bool)0;
		goto IL_00b7;
	}

IL_00b7:
	{
		bool L_22 = V_0;
		return L_22;
	}
}
// System.String UnityEngine.Event::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Event_ToString_m2843623B66F30AC141175B1D16F1B112D3835A65 (Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Event_ToString_m2843623B66F30AC141175B1D16F1B112D3835A65_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		bool L_0 = Event_get_isKey_m17D185B6CD336242BC5FB9BAB025EE8FA7771E90(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_00c1;
		}
	}
	{
		Il2CppChar L_1 = Event_get_character_m78B46D412357B71233F3D41842928A19B290915C(__this, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0058;
		}
	}
	{
		ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* L_2 = (ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D*)SZArrayNew(ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* L_3 = L_2;
		int32_t L_4 = Event_get_type_mAABE4A35E5658E0079A1518D318AF2592F51D6FA(__this, /*hidden argument*/NULL);
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = Box(EventType_t3D3937E705A4506226002DAB22071B7B181DA57B_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_6);
		ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* L_7 = L_3;
		int32_t L_8 = Event_get_modifiers_m4D1BDE843A9379F50C3F32CB78CCDAD84B779108(__this, /*hidden argument*/NULL);
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = Box(EventModifiers_tC34E3018F3697001F894187AF6E9E63D7E203061_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_10);
		ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* L_11 = L_7;
		int32_t L_12 = Event_get_keyCode_m8B0AAD347861E322E91D2B7320A99E04D39575CF(__this, /*hidden argument*/NULL);
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = Box(KeyCode_tC93EA87C5A6901160B583ADFCD3EF6726570DC3C_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_14);
		String_t* L_15 = UnityString_Format_m415056ECF8DA7B3EC6A8456E299D0C2002177387(_stringLiteral645983D981B058C71B234B4EF85974E83DF46C36, L_11, /*hidden argument*/NULL);
		V_0 = L_15;
		goto IL_016e;
	}

IL_0058:
	{
		ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* L_16 = (ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D*)SZArrayNew(ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D_il2cpp_TypeInfo_var, (uint32_t)8);
		ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* L_17 = L_16;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, _stringLiteralE1D1873098D32108BBEF9FD4C21B888ED8659C49);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteralE1D1873098D32108BBEF9FD4C21B888ED8659C49);
		ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* L_18 = L_17;
		int32_t L_19 = Event_get_type_mAABE4A35E5658E0079A1518D318AF2592F51D6FA(__this, /*hidden argument*/NULL);
		int32_t L_20 = L_19;
		RuntimeObject * L_21 = Box(EventType_t3D3937E705A4506226002DAB22071B7B181DA57B_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_21);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_21);
		ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* L_22 = L_18;
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, _stringLiteral5C99F2EA0C681082AA59B6CD687CA19041028B63);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral5C99F2EA0C681082AA59B6CD687CA19041028B63);
		ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* L_23 = L_22;
		Il2CppChar L_24 = Event_get_character_m78B46D412357B71233F3D41842928A19B290915C(__this, /*hidden argument*/NULL);
		int32_t L_25 = ((int32_t)L_24);
		RuntimeObject * L_26 = Box(Int32_tC16F64335CE8B56D99229DE94BB3A876ED55FE87_il2cpp_TypeInfo_var, &L_25);
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_26);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_26);
		ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* L_27 = L_23;
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, _stringLiteral00CE3E1623671A834728138CD689D176F0000CEB);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteral00CE3E1623671A834728138CD689D176F0000CEB);
		ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* L_28 = L_27;
		int32_t L_29 = Event_get_modifiers_m4D1BDE843A9379F50C3F32CB78CCDAD84B779108(__this, /*hidden argument*/NULL);
		int32_t L_30 = L_29;
		RuntimeObject * L_31 = Box(EventModifiers_tC34E3018F3697001F894187AF6E9E63D7E203061_il2cpp_TypeInfo_var, &L_30);
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_31);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_31);
		ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* L_32 = L_28;
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, _stringLiteralD3280C579ECC78E7C99A42607D1529992F9DD5F3);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)_stringLiteralD3280C579ECC78E7C99A42607D1529992F9DD5F3);
		ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* L_33 = L_32;
		int32_t L_34 = Event_get_keyCode_m8B0AAD347861E322E91D2B7320A99E04D39575CF(__this, /*hidden argument*/NULL);
		int32_t L_35 = L_34;
		RuntimeObject * L_36 = Box(KeyCode_tC93EA87C5A6901160B583ADFCD3EF6726570DC3C_il2cpp_TypeInfo_var, &L_35);
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, L_36);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject *)L_36);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_37 = String_Concat_m2BD818C1A31996400987A990DD23C8629549A2B1(L_33, /*hidden argument*/NULL);
		V_0 = L_37;
		goto IL_016e;
	}

IL_00c1:
	{
		bool L_38 = Event_get_isMouse_m5923637C4A5E3BD642C3E88A428D5B39F0A85AB6(__this, /*hidden argument*/NULL);
		if (!L_38)
		{
			goto IL_010c;
		}
	}
	{
		ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* L_39 = (ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D*)SZArrayNew(ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* L_40 = L_39;
		int32_t L_41 = Event_get_type_mAABE4A35E5658E0079A1518D318AF2592F51D6FA(__this, /*hidden argument*/NULL);
		int32_t L_42 = L_41;
		RuntimeObject * L_43 = Box(EventType_t3D3937E705A4506226002DAB22071B7B181DA57B_il2cpp_TypeInfo_var, &L_42);
		NullCheck(L_40);
		ArrayElementTypeCheck (L_40, L_43);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_43);
		ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* L_44 = L_40;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_45 = Event_get_mousePosition_m92AD98489A626864E9B179273270802EB1D2C085(__this, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_46 = L_45;
		RuntimeObject * L_47 = Box(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var, &L_46);
		NullCheck(L_44);
		ArrayElementTypeCheck (L_44, L_47);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_47);
		ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* L_48 = L_44;
		int32_t L_49 = Event_get_modifiers_m4D1BDE843A9379F50C3F32CB78CCDAD84B779108(__this, /*hidden argument*/NULL);
		int32_t L_50 = L_49;
		RuntimeObject * L_51 = Box(EventModifiers_tC34E3018F3697001F894187AF6E9E63D7E203061_il2cpp_TypeInfo_var, &L_50);
		NullCheck(L_48);
		ArrayElementTypeCheck (L_48, L_51);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_51);
		String_t* L_52 = UnityString_Format_m415056ECF8DA7B3EC6A8456E299D0C2002177387(_stringLiteralBFAF5DB045B9BE61FE1BC19E0486B8287028A876, L_48, /*hidden argument*/NULL);
		V_0 = L_52;
		goto IL_016e;
	}

IL_010c:
	{
		int32_t L_53 = Event_get_type_mAABE4A35E5658E0079A1518D318AF2592F51D6FA(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_53) == ((int32_t)((int32_t)14))))
		{
			goto IL_0126;
		}
	}
	{
		int32_t L_54 = Event_get_type_mAABE4A35E5658E0079A1518D318AF2592F51D6FA(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_54) == ((uint32_t)((int32_t)13)))))
		{
			goto IL_0153;
		}
	}

IL_0126:
	{
		ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* L_55 = (ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D*)SZArrayNew(ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* L_56 = L_55;
		int32_t L_57 = Event_get_type_mAABE4A35E5658E0079A1518D318AF2592F51D6FA(__this, /*hidden argument*/NULL);
		int32_t L_58 = L_57;
		RuntimeObject * L_59 = Box(EventType_t3D3937E705A4506226002DAB22071B7B181DA57B_il2cpp_TypeInfo_var, &L_58);
		NullCheck(L_56);
		ArrayElementTypeCheck (L_56, L_59);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_59);
		ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* L_60 = L_56;
		String_t* L_61 = Event_get_commandName_m119D9F8B0A7BA18B849B958CFAF249C970C00BF1(__this, /*hidden argument*/NULL);
		NullCheck(L_60);
		ArrayElementTypeCheck (L_60, L_61);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_61);
		String_t* L_62 = UnityString_Format_m415056ECF8DA7B3EC6A8456E299D0C2002177387(_stringLiteral43038A7293A88F58900A924007043B16F5DF3840, L_60, /*hidden argument*/NULL);
		V_0 = L_62;
		goto IL_016e;
	}

IL_0153:
	{
		int32_t L_63 = Event_get_type_mAABE4A35E5658E0079A1518D318AF2592F51D6FA(__this, /*hidden argument*/NULL);
		int32_t L_64 = L_63;
		RuntimeObject * L_65 = Box(EventType_t3D3937E705A4506226002DAB22071B7B181DA57B_il2cpp_TypeInfo_var, &L_64);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_66 = String_Concat_m284DDEFEC7A010140004A73DE74DF4BB93685BEC(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, L_65, /*hidden argument*/NULL);
		V_0 = L_66;
		goto IL_016e;
	}

IL_016e:
	{
		String_t* L_67 = V_0;
		return L_67;
	}
}
// System.Void UnityEngine.Event::Use()
extern "C" IL2CPP_METHOD_ATTR void Event_Use_m2328ACD6C711742273C1321F5F79C6D3CEB08AC5 (Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Event_Use_m2328ACD6C711742273C1321F5F79C6D3CEB08AC5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = Event_get_type_mAABE4A35E5658E0079A1518D318AF2592F51D6FA(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) == ((int32_t)7)))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_1 = Event_get_type_mAABE4A35E5658E0079A1518D318AF2592F51D6FA(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)8))))
		{
			goto IL_003c;
		}
	}

IL_0019:
	{
		ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* L_2 = (ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D*)SZArrayNew(ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* L_3 = L_2;
		int32_t L_4 = Event_get_type_mAABE4A35E5658E0079A1518D318AF2592F51D6FA(__this, /*hidden argument*/NULL);
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = Box(EventType_t3D3937E705A4506226002DAB22071B7B181DA57B_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_6);
		String_t* L_7 = UnityString_Format_m415056ECF8DA7B3EC6A8456E299D0C2002177387(_stringLiteral9A5E2F5BDDFCF829F248A8C91E5AACBBDFEE7223, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(L_7, /*hidden argument*/NULL);
	}

IL_003c:
	{
		Event_Internal_Use_m44762004F3C1C23EEC79F1B9250433A581EC6538(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Event::get_mousePosition_Injected(UnityEngine.Vector2U26)
extern "C" IL2CPP_METHOD_ATTR void Event_get_mousePosition_Injected_mE71FE88F6E27190A534BD5862941E5887D6BE632 (Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * ___ret0, const RuntimeMethod* method)
{
	typedef void (*Event_get_mousePosition_Injected_mE71FE88F6E27190A534BD5862941E5887D6BE632_ftn) (Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *);
	static Event_get_mousePosition_Injected_mE71FE88F6E27190A534BD5862941E5887D6BE632_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_get_mousePosition_Injected_mE71FE88F6E27190A534BD5862941E5887D6BE632_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_mousePosition_Injected(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___ret0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.GUI::.cctor()
extern "C" IL2CPP_METHOD_ATTR void GUI__cctor_m9A902CA13649D04BFB54D86C051A09AC5301ED63 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUI__cctor_m9A902CA13649D04BFB54D86C051A09AC5301ED63_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((GUI_t3E5CBC6B113E392EBBE1453DEF2B7CD020F345AA_StaticFields*)il2cpp_codegen_static_fields_for(GUI_t3E5CBC6B113E392EBBE1453DEF2B7CD020F345AA_il2cpp_TypeInfo_var))->set_s_HotTextField_0((-1));
		NullCheck(_stringLiteral239CA5767AFAC9641593464CE02BC454D6AC07A9);
		int32_t L_0 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, _stringLiteral239CA5767AFAC9641593464CE02BC454D6AC07A9);
		((GUI_t3E5CBC6B113E392EBBE1453DEF2B7CD020F345AA_StaticFields*)il2cpp_codegen_static_fields_for(GUI_t3E5CBC6B113E392EBBE1453DEF2B7CD020F345AA_il2cpp_TypeInfo_var))->set_s_BoxHash_1(L_0);
		NullCheck(_stringLiteral794145F030FF721599A0353A9B2E59E9A92B9BF1);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, _stringLiteral794145F030FF721599A0353A9B2E59E9A92B9BF1);
		((GUI_t3E5CBC6B113E392EBBE1453DEF2B7CD020F345AA_StaticFields*)il2cpp_codegen_static_fields_for(GUI_t3E5CBC6B113E392EBBE1453DEF2B7CD020F345AA_il2cpp_TypeInfo_var))->set_s_ButonHash_2(L_1);
		NullCheck(_stringLiteralE647442EAD89630DC43D2047D097508AD66D2618);
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, _stringLiteralE647442EAD89630DC43D2047D097508AD66D2618);
		((GUI_t3E5CBC6B113E392EBBE1453DEF2B7CD020F345AA_StaticFields*)il2cpp_codegen_static_fields_for(GUI_t3E5CBC6B113E392EBBE1453DEF2B7CD020F345AA_il2cpp_TypeInfo_var))->set_s_RepeatButtonHash_3(L_2);
		NullCheck(_stringLiteralD5E14B063514CB6630E55F0AEB0AD3B37897EFCA);
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, _stringLiteralD5E14B063514CB6630E55F0AEB0AD3B37897EFCA);
		((GUI_t3E5CBC6B113E392EBBE1453DEF2B7CD020F345AA_StaticFields*)il2cpp_codegen_static_fields_for(GUI_t3E5CBC6B113E392EBBE1453DEF2B7CD020F345AA_il2cpp_TypeInfo_var))->set_s_ToggleHash_4(L_3);
		NullCheck(_stringLiteralE8603CA0394240FFC435FB8A9A44A0B8ADFDB19F);
		int32_t L_4 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, _stringLiteralE8603CA0394240FFC435FB8A9A44A0B8ADFDB19F);
		((GUI_t3E5CBC6B113E392EBBE1453DEF2B7CD020F345AA_StaticFields*)il2cpp_codegen_static_fields_for(GUI_t3E5CBC6B113E392EBBE1453DEF2B7CD020F345AA_il2cpp_TypeInfo_var))->set_s_ButtonGridHash_5(L_4);
		NullCheck(_stringLiteralAA5DB7D82232EE34651EB5ADEA59B01C839EB843);
		int32_t L_5 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, _stringLiteralAA5DB7D82232EE34651EB5ADEA59B01C839EB843);
		((GUI_t3E5CBC6B113E392EBBE1453DEF2B7CD020F345AA_StaticFields*)il2cpp_codegen_static_fields_for(GUI_t3E5CBC6B113E392EBBE1453DEF2B7CD020F345AA_il2cpp_TypeInfo_var))->set_s_SliderHash_6(L_5);
		NullCheck(_stringLiteral43B731706EEE5F12E52ED519717DB9572EADF165);
		int32_t L_6 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, _stringLiteral43B731706EEE5F12E52ED519717DB9572EADF165);
		((GUI_t3E5CBC6B113E392EBBE1453DEF2B7CD020F345AA_StaticFields*)il2cpp_codegen_static_fields_for(GUI_t3E5CBC6B113E392EBBE1453DEF2B7CD020F345AA_il2cpp_TypeInfo_var))->set_s_BeginGroupHash_7(L_6);
		NullCheck(_stringLiteral9B93271A1F5C73A7A67E544DD659306E5EE80C4B);
		int32_t L_7 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, _stringLiteral9B93271A1F5C73A7A67E544DD659306E5EE80C4B);
		((GUI_t3E5CBC6B113E392EBBE1453DEF2B7CD020F345AA_StaticFields*)il2cpp_codegen_static_fields_for(GUI_t3E5CBC6B113E392EBBE1453DEF2B7CD020F345AA_il2cpp_TypeInfo_var))->set_s_ScrollviewHash_8(L_7);
		GenericStack_tC59D21E8DBC50F3C608479C942200AC44CA2D5BC * L_8 = (GenericStack_tC59D21E8DBC50F3C608479C942200AC44CA2D5BC *)il2cpp_codegen_object_new(GenericStack_tC59D21E8DBC50F3C608479C942200AC44CA2D5BC_il2cpp_TypeInfo_var);
		GenericStack__ctor_m0659B84DB6B093AF1F01F566686C510DDEEAE848(L_8, /*hidden argument*/NULL);
		((GUI_t3E5CBC6B113E392EBBE1453DEF2B7CD020F345AA_StaticFields*)il2cpp_codegen_static_fields_for(GUI_t3E5CBC6B113E392EBBE1453DEF2B7CD020F345AA_il2cpp_TypeInfo_var))->set_s_ScrollViewStates_11(L_8);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t816BBD9125EA02B42B87CB07643FC5F803391DA2_il2cpp_TypeInfo_var);
		DateTime_t816BBD9125EA02B42B87CB07643FC5F803391DA2  L_9 = DateTime_get_Now_m59C0E4D8C02A258EF9DFF4A2DE7B7F32AAD79E51(/*hidden argument*/NULL);
		GUI_set_nextScrollStepTime_m0EBE9A3F5960CD23334E4678D9CF6F5E15CBDE23(L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUI::set_changed(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void GUI_set_changed_m8BDF5085BBFDF8E61C12926C8E51C67B22B629AE (bool ___value0, const RuntimeMethod* method)
{
	typedef void (*GUI_set_changed_m8BDF5085BBFDF8E61C12926C8E51C67B22B629AE_ftn) (bool);
	static GUI_set_changed_m8BDF5085BBFDF8E61C12926C8E51C67B22B629AE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUI_set_changed_m8BDF5085BBFDF8E61C12926C8E51C67B22B629AE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUI::set_changed(System.Boolean)");
	_il2cpp_icall_func(___value0);
}
// System.Void UnityEngine.GUI::GrabMouseControl(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void GUI_GrabMouseControl_mEE35B3F6529614CC25241C27B03D8595C61E533F (int32_t ___id0, const RuntimeMethod* method)
{
	typedef void (*GUI_GrabMouseControl_mEE35B3F6529614CC25241C27B03D8595C61E533F_ftn) (int32_t);
	static GUI_GrabMouseControl_mEE35B3F6529614CC25241C27B03D8595C61E533F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUI_GrabMouseControl_mEE35B3F6529614CC25241C27B03D8595C61E533F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUI::GrabMouseControl(System.Int32)");
	_il2cpp_icall_func(___id0);
}
// System.Boolean UnityEngine.GUI::HasMouseControl(System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool GUI_HasMouseControl_m66CD5558529BEFFD84D4CAB8B1BC6349F12DF4B1 (int32_t ___id0, const RuntimeMethod* method)
{
	typedef bool (*GUI_HasMouseControl_m66CD5558529BEFFD84D4CAB8B1BC6349F12DF4B1_ftn) (int32_t);
	static GUI_HasMouseControl_m66CD5558529BEFFD84D4CAB8B1BC6349F12DF4B1_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUI_HasMouseControl_m66CD5558529BEFFD84D4CAB8B1BC6349F12DF4B1_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUI::HasMouseControl(System.Int32)");
	bool retVal = _il2cpp_icall_func(___id0);
	return retVal;
}
// System.Void UnityEngine.GUI::ReleaseMouseControl()
extern "C" IL2CPP_METHOD_ATTR void GUI_ReleaseMouseControl_m4F0C7D33663DEC8BC1D8C04C2417899C8AB4462B (const RuntimeMethod* method)
{
	typedef void (*GUI_ReleaseMouseControl_m4F0C7D33663DEC8BC1D8C04C2417899C8AB4462B_ftn) ();
	static GUI_ReleaseMouseControl_m4F0C7D33663DEC8BC1D8C04C2417899C8AB4462B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUI_ReleaseMouseControl_m4F0C7D33663DEC8BC1D8C04C2417899C8AB4462B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUI::ReleaseMouseControl()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.GUI::set_nextScrollStepTime(System.DateTime)
extern "C" IL2CPP_METHOD_ATTR void GUI_set_nextScrollStepTime_m0EBE9A3F5960CD23334E4678D9CF6F5E15CBDE23 (DateTime_t816BBD9125EA02B42B87CB07643FC5F803391DA2  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUI_set_nextScrollStepTime_m0EBE9A3F5960CD23334E4678D9CF6F5E15CBDE23_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		DateTime_t816BBD9125EA02B42B87CB07643FC5F803391DA2  L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t3E5CBC6B113E392EBBE1453DEF2B7CD020F345AA_il2cpp_TypeInfo_var);
		((GUI_t3E5CBC6B113E392EBBE1453DEF2B7CD020F345AA_StaticFields*)il2cpp_codegen_static_fields_for(GUI_t3E5CBC6B113E392EBBE1453DEF2B7CD020F345AA_il2cpp_TypeInfo_var))->set_U3CnextScrollStepTimeU3Ek__BackingField_9(L_0);
		return;
	}
}
// System.Void UnityEngine.GUI::set_skin(UnityEngine.GUISkin)
extern "C" IL2CPP_METHOD_ATTR void GUI_set_skin_mFC9EC2E88A46A7F42664C6C41D8CCD9B9BA4DBA0 (GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUI_set_skin_mFC9EC2E88A46A7F42664C6C41D8CCD9B9BA4DBA0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GUIUtility_CheckOnGUI_mBFC764B475683BC50E40BD249248CE43DA754873(/*hidden argument*/NULL);
		GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7 * L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t3E5CBC6B113E392EBBE1453DEF2B7CD020F345AA_il2cpp_TypeInfo_var);
		GUI_DoSetSkin_mC72F1980793E86E8F33D641A207D2AAB409A71F7(L_0, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUISkin UnityEngine.GUI::get_skin()
extern "C" IL2CPP_METHOD_ATTR GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7 * GUI_get_skin_mF6804BE33CFD74FF0665C1185AC7B5C1687AE866 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUI_get_skin_mF6804BE33CFD74FF0665C1185AC7B5C1687AE866_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7 * V_0 = NULL;
	{
		GUIUtility_CheckOnGUI_mBFC764B475683BC50E40BD249248CE43DA754873(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t3E5CBC6B113E392EBBE1453DEF2B7CD020F345AA_il2cpp_TypeInfo_var);
		GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7 * L_0 = ((GUI_t3E5CBC6B113E392EBBE1453DEF2B7CD020F345AA_StaticFields*)il2cpp_codegen_static_fields_for(GUI_t3E5CBC6B113E392EBBE1453DEF2B7CD020F345AA_il2cpp_TypeInfo_var))->get_s_Skin_10();
		V_0 = L_0;
		goto IL_0011;
	}

IL_0011:
	{
		GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUI::DoSetSkin(UnityEngine.GUISkin)
extern "C" IL2CPP_METHOD_ATTR void GUI_DoSetSkin_mC72F1980793E86E8F33D641A207D2AAB409A71F7 (GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7 * ___newSkin0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUI_DoSetSkin_mC72F1980793E86E8F33D641A207D2AAB409A71F7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7 * L_0 = ___newSkin0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7 * L_2 = GUIUtility_GetDefaultSkin_m2F1B580445522074FF41CF9906531DBEAB034365(/*hidden argument*/NULL);
		___newSkin0 = L_2;
	}

IL_0013:
	{
		GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7 * L_3 = ___newSkin0;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t3E5CBC6B113E392EBBE1453DEF2B7CD020F345AA_il2cpp_TypeInfo_var);
		((GUI_t3E5CBC6B113E392EBBE1453DEF2B7CD020F345AA_StaticFields*)il2cpp_codegen_static_fields_for(GUI_t3E5CBC6B113E392EBBE1453DEF2B7CD020F345AA_il2cpp_TypeInfo_var))->set_s_Skin_10(L_3);
		GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7 * L_4 = ___newSkin0;
		NullCheck(L_4);
		GUISkin_MakeCurrent_m42FAF8090F6B57648678704D86A6451DB917CF2D(L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,System.String,UnityEngine.GUIStyle)
extern "C" IL2CPP_METHOD_ATTR bool GUI_Button_mC39C9F8426A10930825737A6D63B7C8DDF24748B (Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___position0, String_t* ___text1, GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___style2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUI_Button_mC39C9F8426A10930825737A6D63B7C8DDF24748B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_0 = ___position0;
		String_t* L_1 = ___text1;
		IL2CPP_RUNTIME_CLASS_INIT(GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0_il2cpp_TypeInfo_var);
		GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * L_2 = GUIContent_Temp_m29B9E688E5EA09D12FDFAC6096B8762F7E84688D(L_1, /*hidden argument*/NULL);
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_3 = ___style2;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t3E5CBC6B113E392EBBE1453DEF2B7CD020F345AA_il2cpp_TypeInfo_var);
		bool L_4 = GUI_Button_m9315927732E13236FFCE020D2444CF08C26927F5(L_0, L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0014;
	}

IL_0014:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C" IL2CPP_METHOD_ATTR bool GUI_Button_m9315927732E13236FFCE020D2444CF08C26927F5 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___position0, GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * ___content1, GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___style2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUI_Button_m9315927732E13236FFCE020D2444CF08C26927F5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t3E5CBC6B113E392EBBE1453DEF2B7CD020F345AA_il2cpp_TypeInfo_var);
		int32_t L_0 = ((GUI_t3E5CBC6B113E392EBBE1453DEF2B7CD020F345AA_StaticFields*)il2cpp_codegen_static_fields_for(GUI_t3E5CBC6B113E392EBBE1453DEF2B7CD020F345AA_il2cpp_TypeInfo_var))->get_s_ButonHash_2();
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_1 = ___position0;
		int32_t L_2 = GUIUtility_GetControlID_mBD1C39E03666F072AFB3022603E2FD37D87EB13F(L_0, 2, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_3 = ___position0;
		int32_t L_4 = V_0;
		GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * L_5 = ___content1;
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_6 = ___style2;
		bool L_7 = GUI_Button_m28E3F256D52839EBB502B3A6C5DA2E556FF45BC1(L_3, L_4, L_5, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		goto IL_001d;
	}

IL_001d:
	{
		bool L_8 = V_1;
		return L_8;
	}
}
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,System.Int32,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C" IL2CPP_METHOD_ATTR bool GUI_Button_m28E3F256D52839EBB502B3A6C5DA2E556FF45BC1 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___position0, int32_t ___id1, GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * ___content2, GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___style3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUI_Button_m28E3F256D52839EBB502B3A6C5DA2E556FF45BC1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		GUIUtility_CheckOnGUI_mBFC764B475683BC50E40BD249248CE43DA754873(/*hidden argument*/NULL);
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_0 = ___position0;
		int32_t L_1 = ___id1;
		GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * L_2 = ___content2;
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_3 = ___style3;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t3E5CBC6B113E392EBBE1453DEF2B7CD020F345AA_il2cpp_TypeInfo_var);
		bool L_4 = GUI_DoButton_m3DA80A30ABFA7F00B48683498AEB28ACAAA404ED(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
// System.Boolean UnityEngine.GUI::Toggle(UnityEngine.Rect,System.Boolean,UnityEngine.GUIContent)
extern "C" IL2CPP_METHOD_ATTR bool GUI_Toggle_m9A5D81FC8B341D9183F388E1F7EA9EB22A75F2B1 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___position0, bool ___value1, GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * ___content2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUI_Toggle_m9A5D81FC8B341D9183F388E1F7EA9EB22A75F2B1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_0 = ___position0;
		bool L_1 = ___value1;
		GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * L_2 = ___content2;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t3E5CBC6B113E392EBBE1453DEF2B7CD020F345AA_il2cpp_TypeInfo_var);
		GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7 * L_3 = ((GUI_t3E5CBC6B113E392EBBE1453DEF2B7CD020F345AA_StaticFields*)il2cpp_codegen_static_fields_for(GUI_t3E5CBC6B113E392EBBE1453DEF2B7CD020F345AA_il2cpp_TypeInfo_var))->get_s_Skin_10();
		NullCheck(L_3);
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_4 = GUISkin_get_toggle_mB5459058B1C84826D47FA9BFE9CC9D05BB074030(L_3, /*hidden argument*/NULL);
		bool L_5 = GUI_Toggle_m0EB6DC4DF9F9CB8AC07A66BFD05542CA5AC210A2(L_0, L_1, L_2, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		goto IL_0019;
	}

IL_0019:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
// System.Boolean UnityEngine.GUI::Toggle(UnityEngine.Rect,System.Boolean,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C" IL2CPP_METHOD_ATTR bool GUI_Toggle_m0EB6DC4DF9F9CB8AC07A66BFD05542CA5AC210A2 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___position0, bool ___value1, GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * ___content2, GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___style3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUI_Toggle_m0EB6DC4DF9F9CB8AC07A66BFD05542CA5AC210A2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		GUIUtility_CheckOnGUI_mBFC764B475683BC50E40BD249248CE43DA754873(/*hidden argument*/NULL);
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_0 = ___position0;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t3E5CBC6B113E392EBBE1453DEF2B7CD020F345AA_il2cpp_TypeInfo_var);
		int32_t L_1 = ((GUI_t3E5CBC6B113E392EBBE1453DEF2B7CD020F345AA_StaticFields*)il2cpp_codegen_static_fields_for(GUI_t3E5CBC6B113E392EBBE1453DEF2B7CD020F345AA_il2cpp_TypeInfo_var))->get_s_ToggleHash_4();
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_2 = ___position0;
		int32_t L_3 = GUIUtility_GetControlID_mBD1C39E03666F072AFB3022603E2FD37D87EB13F(L_1, 2, L_2, /*hidden argument*/NULL);
		bool L_4 = ___value1;
		GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * L_5 = ___content2;
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_6 = ___style3;
		bool L_7 = GUI_DoToggle_mBD68645E78C5056965D0C1799F360635C27D1376(L_0, L_3, L_4, L_5, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		goto IL_0021;
	}

IL_0021:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
// System.Boolean UnityEngine.GUI::DoControl(UnityEngine.Rect,System.Int32,System.Boolean,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C" IL2CPP_METHOD_ATTR bool GUI_DoControl_m8D0ED253ABE2776E91274FD814F72D2FB43E8557 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___position0, int32_t ___id1, bool ___on2, GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * ___content3, GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___style4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUI_DoControl_m8D0ED253ABE2776E91274FD814F72D2FB43E8557_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_0 = Event_get_current_m072CEE599D11B8A9A916697E57C0F561188CDB2B(/*hidden argument*/NULL);
		V_0 = L_0;
		Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_1 = V_0;
		NullCheck(L_1);
		int32_t L_2 = Event_get_type_mAABE4A35E5658E0079A1518D318AF2592F51D6FA(L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		int32_t L_3 = V_1;
		switch (L_3)
		{
			case 0:
			{
				goto IL_0049;
			}
			case 1:
			{
				goto IL_00a2;
			}
			case 2:
			{
				goto IL_00f8;
			}
			case 3:
			{
				goto IL_00e2;
			}
			case 4:
			{
				goto IL_006e;
			}
			case 5:
			{
				goto IL_00f8;
			}
			case 6:
			{
				goto IL_00f8;
			}
			case 7:
			{
				goto IL_0039;
			}
		}
	}
	{
		goto IL_00f8;
	}

IL_0039:
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_4 = ___style4;
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_5 = ___position0;
		GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * L_6 = ___content3;
		int32_t L_7 = ___id1;
		bool L_8 = ___on2;
		NullCheck(L_4);
		GUIStyle_Draw_m7979DC59FA2B5B6200764FC208F8104FE4F886E3(L_4, L_5, L_6, L_7, L_8, /*hidden argument*/NULL);
		goto IL_00f8;
	}

IL_0049:
	{
		Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_9 = V_0;
		NullCheck(L_9);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_10 = Event_get_mousePosition_m92AD98489A626864E9B179273270802EB1D2C085(L_9, /*hidden argument*/NULL);
		bool L_11 = Rect_Contains_mAD3D41C88795960F177088F847509C9DDA23B682((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&___position0), L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0069;
		}
	}
	{
		int32_t L_12 = ___id1;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t3E5CBC6B113E392EBBE1453DEF2B7CD020F345AA_il2cpp_TypeInfo_var);
		GUI_GrabMouseControl_mEE35B3F6529614CC25241C27B03D8595C61E533F(L_12, /*hidden argument*/NULL);
		Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_13 = V_0;
		NullCheck(L_13);
		Event_Use_m2328ACD6C711742273C1321F5F79C6D3CEB08AC5(L_13, /*hidden argument*/NULL);
	}

IL_0069:
	{
		goto IL_00f8;
	}

IL_006e:
	{
		Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_14 = V_0;
		NullCheck(L_14);
		Il2CppChar L_15 = Event_get_character_m78B46D412357B71233F3D41842928A19B290915C(L_14, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_15) == ((uint32_t)((int32_t)32)))))
		{
			goto IL_009d;
		}
	}
	{
		int32_t L_16 = GUIUtility_get_keyboardControl_mB580042A41CB6E9D3AB2E2CF0CEC00F64B2FC55F(/*hidden argument*/NULL);
		int32_t L_17 = ___id1;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_009d;
		}
	}
	{
		Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_18 = V_0;
		NullCheck(L_18);
		Event_Use_m2328ACD6C711742273C1321F5F79C6D3CEB08AC5(L_18, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t3E5CBC6B113E392EBBE1453DEF2B7CD020F345AA_il2cpp_TypeInfo_var);
		GUI_set_changed_m8BDF5085BBFDF8E61C12926C8E51C67B22B629AE((bool)1, /*hidden argument*/NULL);
		bool L_19 = ___on2;
		V_2 = (bool)((((int32_t)L_19) == ((int32_t)0))? 1 : 0);
		goto IL_00ff;
	}

IL_009d:
	{
		goto IL_00f8;
	}

IL_00a2:
	{
		int32_t L_20 = ___id1;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t3E5CBC6B113E392EBBE1453DEF2B7CD020F345AA_il2cpp_TypeInfo_var);
		bool L_21 = GUI_HasMouseControl_m66CD5558529BEFFD84D4CAB8B1BC6349F12DF4B1(L_20, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_00dd;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t3E5CBC6B113E392EBBE1453DEF2B7CD020F345AA_il2cpp_TypeInfo_var);
		GUI_ReleaseMouseControl_m4F0C7D33663DEC8BC1D8C04C2417899C8AB4462B(/*hidden argument*/NULL);
		Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_22 = V_0;
		NullCheck(L_22);
		Event_Use_m2328ACD6C711742273C1321F5F79C6D3CEB08AC5(L_22, /*hidden argument*/NULL);
		Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_23 = V_0;
		NullCheck(L_23);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_24 = Event_get_mousePosition_m92AD98489A626864E9B179273270802EB1D2C085(L_23, /*hidden argument*/NULL);
		bool L_25 = Rect_Contains_mAD3D41C88795960F177088F847509C9DDA23B682((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&___position0), L_24, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_00dc;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t3E5CBC6B113E392EBBE1453DEF2B7CD020F345AA_il2cpp_TypeInfo_var);
		GUI_set_changed_m8BDF5085BBFDF8E61C12926C8E51C67B22B629AE((bool)1, /*hidden argument*/NULL);
		bool L_26 = ___on2;
		V_2 = (bool)((((int32_t)L_26) == ((int32_t)0))? 1 : 0);
		goto IL_00ff;
	}

IL_00dc:
	{
	}

IL_00dd:
	{
		goto IL_00f8;
	}

IL_00e2:
	{
		int32_t L_27 = ___id1;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t3E5CBC6B113E392EBBE1453DEF2B7CD020F345AA_il2cpp_TypeInfo_var);
		bool L_28 = GUI_HasMouseControl_m66CD5558529BEFFD84D4CAB8B1BC6349F12DF4B1(L_27, /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_00f3;
		}
	}
	{
		Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_29 = V_0;
		NullCheck(L_29);
		Event_Use_m2328ACD6C711742273C1321F5F79C6D3CEB08AC5(L_29, /*hidden argument*/NULL);
	}

IL_00f3:
	{
		goto IL_00f8;
	}

IL_00f8:
	{
		bool L_30 = ___on2;
		V_2 = L_30;
		goto IL_00ff;
	}

IL_00ff:
	{
		bool L_31 = V_2;
		return L_31;
	}
}
// System.Boolean UnityEngine.GUI::DoToggle(UnityEngine.Rect,System.Int32,System.Boolean,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C" IL2CPP_METHOD_ATTR bool GUI_DoToggle_mBD68645E78C5056965D0C1799F360635C27D1376 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___position0, int32_t ___id1, bool ___value2, GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * ___content3, GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___style4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUI_DoToggle_mBD68645E78C5056965D0C1799F360635C27D1376_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_0 = ___position0;
		int32_t L_1 = ___id1;
		bool L_2 = ___value2;
		GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * L_3 = ___content3;
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_4 = ___style4;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t3E5CBC6B113E392EBBE1453DEF2B7CD020F345AA_il2cpp_TypeInfo_var);
		bool L_5 = GUI_DoControl_m8D0ED253ABE2776E91274FD814F72D2FB43E8557(L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
// System.Boolean UnityEngine.GUI::DoButton(UnityEngine.Rect,System.Int32,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C" IL2CPP_METHOD_ATTR bool GUI_DoButton_m3DA80A30ABFA7F00B48683498AEB28ACAAA404ED (Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___position0, int32_t ___id1, GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * ___content2, GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___style3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUI_DoButton_m3DA80A30ABFA7F00B48683498AEB28ACAAA404ED_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_0 = ___position0;
		int32_t L_1 = ___id1;
		GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * L_2 = ___content2;
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_3 = ___style3;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t3E5CBC6B113E392EBBE1453DEF2B7CD020F345AA_il2cpp_TypeInfo_var);
		bool L_4 = GUI_DoControl_m8D0ED253ABE2776E91274FD814F72D2FB43E8557(L_0, L_1, (bool)0, L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0011;
	}

IL_0011:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
// System.Void UnityEngine.GUI::CallWindowDelegate(UnityEngine.GUI_WindowFunction,System.Int32,System.Int32,UnityEngine.GUISkin,System.Int32,System.Single,System.Single,UnityEngine.GUIStyle)
extern "C" IL2CPP_METHOD_ATTR void GUI_CallWindowDelegate_m49D5A2E2DAEF525772FAAAA9A840244137BB9175 (WindowFunction_t9AF05117863D95AA9F85D497A3B9B53216708100 * ___func0, int32_t ___id1, int32_t ___instanceID2, GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7 * ____skin3, int32_t ___forceRect4, float ___width5, float ___height6, GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___style7, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUI_CallWindowDelegate_m49D5A2E2DAEF525772FAAAA9A840244137BB9175_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7 * V_0 = NULL;
	GUILayoutOptionU5BU5D_tAB2AD0A365DBD2277A04E397AE8E1430A022AF1B* V_1 = NULL;
	{
		int32_t L_0 = ___id1;
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_il2cpp_TypeInfo_var);
		GUILayoutUtility_SelectIDList_m230ED9206897C92C5B090B3BBFC9B408603E56FD(L_0, (bool)1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t3E5CBC6B113E392EBBE1453DEF2B7CD020F345AA_il2cpp_TypeInfo_var);
		GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7 * L_1 = GUI_get_skin_mF6804BE33CFD74FF0665C1185AC7B5C1687AE866(/*hidden argument*/NULL);
		V_0 = L_1;
		Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_2 = Event_get_current_m072CEE599D11B8A9A916697E57C0F561188CDB2B(/*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = Event_get_type_mAABE4A35E5658E0079A1518D318AF2592F51D6FA(L_2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)8))))
		{
			goto IL_0063;
		}
	}
	{
		int32_t L_4 = ___forceRect4;
		if (!L_4)
		{
			goto IL_0052;
		}
	}
	{
		GUILayoutOptionU5BU5D_tAB2AD0A365DBD2277A04E397AE8E1430A022AF1B* L_5 = (GUILayoutOptionU5BU5D_tAB2AD0A365DBD2277A04E397AE8E1430A022AF1B*)SZArrayNew(GUILayoutOptionU5BU5D_tAB2AD0A365DBD2277A04E397AE8E1430A022AF1B_il2cpp_TypeInfo_var, (uint32_t)2);
		GUILayoutOptionU5BU5D_tAB2AD0A365DBD2277A04E397AE8E1430A022AF1B* L_6 = L_5;
		float L_7 = ___width5;
		GUILayoutOption_t27A0221AC2F6F53E7B89310FD19F51C565D835A6 * L_8 = GUILayout_Width_mDA8F26D92E788474E09AECA1541E8C920C72DA10(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (GUILayoutOption_t27A0221AC2F6F53E7B89310FD19F51C565D835A6 *)L_8);
		GUILayoutOptionU5BU5D_tAB2AD0A365DBD2277A04E397AE8E1430A022AF1B* L_9 = L_6;
		float L_10 = ___height6;
		GUILayoutOption_t27A0221AC2F6F53E7B89310FD19F51C565D835A6 * L_11 = GUILayout_Height_mA5A24D5490022AC6449BBAED9C5A1647184B4026(L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (GUILayoutOption_t27A0221AC2F6F53E7B89310FD19F51C565D835A6 *)L_11);
		V_1 = L_9;
		int32_t L_12 = ___id1;
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_13 = ___style7;
		GUILayoutOptionU5BU5D_tAB2AD0A365DBD2277A04E397AE8E1430A022AF1B* L_14 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_il2cpp_TypeInfo_var);
		GUILayoutUtility_BeginWindow_mB3475D9BE89CF26AB0E6F0D46B1930F1874EB132(L_12, L_13, L_14, /*hidden argument*/NULL);
		goto IL_005d;
	}

IL_0052:
	{
		int32_t L_15 = ___id1;
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_16 = ___style7;
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_il2cpp_TypeInfo_var);
		GUILayoutUtility_BeginWindow_mB3475D9BE89CF26AB0E6F0D46B1930F1874EB132(L_15, L_16, (GUILayoutOptionU5BU5D_tAB2AD0A365DBD2277A04E397AE8E1430A022AF1B*)(GUILayoutOptionU5BU5D_tAB2AD0A365DBD2277A04E397AE8E1430A022AF1B*)NULL, /*hidden argument*/NULL);
	}

IL_005d:
	{
		goto IL_0071;
	}

IL_0063:
	{
		int32_t L_17 = ___id1;
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t671F175A201A19166385EE3392292A5F50070572_il2cpp_TypeInfo_var);
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_18 = GUIStyle_get_none_m2B48FA4E2FA2B9BB7A458DF25B1391F9C7BB8B7B(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_il2cpp_TypeInfo_var);
		GUILayoutUtility_BeginWindow_mB3475D9BE89CF26AB0E6F0D46B1930F1874EB132(L_17, L_18, (GUILayoutOptionU5BU5D_tAB2AD0A365DBD2277A04E397AE8E1430A022AF1B*)(GUILayoutOptionU5BU5D_tAB2AD0A365DBD2277A04E397AE8E1430A022AF1B*)NULL, /*hidden argument*/NULL);
	}

IL_0071:
	{
		GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7 * L_19 = ____skin3;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t3E5CBC6B113E392EBBE1453DEF2B7CD020F345AA_il2cpp_TypeInfo_var);
		GUI_set_skin_mFC9EC2E88A46A7F42664C6C41D8CCD9B9BA4DBA0(L_19, /*hidden argument*/NULL);
		WindowFunction_t9AF05117863D95AA9F85D497A3B9B53216708100 * L_20 = ___func0;
		int32_t L_21 = ___id1;
		NullCheck(L_20);
		WindowFunction_Invoke_m08350FBFB60BC55246725A4840931AED2CAFF9AD(L_20, L_21, /*hidden argument*/NULL);
		Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_22 = Event_get_current_m072CEE599D11B8A9A916697E57C0F561188CDB2B(/*hidden argument*/NULL);
		NullCheck(L_22);
		int32_t L_23 = Event_get_type_mAABE4A35E5658E0079A1518D318AF2592F51D6FA(L_22, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_23) == ((uint32_t)8))))
		{
			goto IL_0095;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_il2cpp_TypeInfo_var);
		GUILayoutUtility_Layout_mB01F00635FD538214B47A545C53E4F8C682491B5(/*hidden argument*/NULL);
	}

IL_0095:
	{
		GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7 * L_24 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t3E5CBC6B113E392EBBE1453DEF2B7CD020F345AA_il2cpp_TypeInfo_var);
		GUI_set_skin_mFC9EC2E88A46A7F42664C6C41D8CCD9B9BA4DBA0(L_24, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_WindowFunction_t9AF05117863D95AA9F85D497A3B9B53216708100 (WindowFunction_t9AF05117863D95AA9F85D497A3B9B53216708100 * __this, int32_t ___id0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___id0);

}
// System.Void UnityEngine.GUI_WindowFunction::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void WindowFunction__ctor_m216C357C45DF9A8ABE74056B8BDB1B7F94EE2D81 (WindowFunction_t9AF05117863D95AA9F85D497A3B9B53216708100 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.GUI_WindowFunction::Invoke(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void WindowFunction_Invoke_m08350FBFB60BC55246725A4840931AED2CAFF9AD (WindowFunction_t9AF05117863D95AA9F85D497A3B9B53216708100 * __this, int32_t ___id0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		WindowFunction_Invoke_m08350FBFB60BC55246725A4840931AED2CAFF9AD((WindowFunction_t9AF05117863D95AA9F85D497A3B9B53216708100 *)__this->get_prev_9(), ___id0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	if (!il2cpp_codegen_method_is_virtual(targetMethod))
	{
		il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	}
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
	if (___methodIsStatic)
	{
		if (___parameterCount == 1)
		{
			// open
			typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(___id0, targetMethod);
		}
		else
		{
			// closed
			typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(targetThis, ___id0, targetMethod);
		}
	}
	else
	{
		// closed
		if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
		{
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___id0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___id0);
					else
						GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___id0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___id0);
					else
						VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___id0);
				}
			}
		}
		else
		{
			typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(targetThis, ___id0, targetMethod);
		}
	}
}
// System.IAsyncResult UnityEngine.GUI_WindowFunction::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* WindowFunction_BeginInvoke_m522A6C91248FC9E44284AAB8909F83E5DB2960A2 (WindowFunction_t9AF05117863D95AA9F85D497A3B9B53216708100 * __this, int32_t ___id0, AsyncCallback_t74ABD1277F711E7FBDCB00E169A63DEFD39E86A2 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowFunction_BeginInvoke_m522A6C91248FC9E44284AAB8909F83E5DB2960A2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_tC16F64335CE8B56D99229DE94BB3A876ED55FE87_il2cpp_TypeInfo_var, &___id0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.GUI_WindowFunction::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void WindowFunction_EndInvoke_m66738B73219CEB120C356497204151BCB432B2A2 (WindowFunction_t9AF05117863D95AA9F85D497A3B9B53216708100 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.GUIContent
extern "C" void GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0_marshal_pinvoke(const GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0& unmarshaled, GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Image_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Image' of type 'GUIContent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Image_1Exception, NULL, NULL);
}
extern "C" void GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0_marshal_pinvoke_back(const GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0_marshaled_pinvoke& marshaled, GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0& unmarshaled)
{
	Exception_t* ___m_Image_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Image' of type 'GUIContent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Image_1Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.GUIContent
extern "C" void GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0_marshal_pinvoke_cleanup(GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.GUIContent
extern "C" void GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0_marshal_com(const GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0& unmarshaled, GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0_marshaled_com& marshaled)
{
	Exception_t* ___m_Image_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Image' of type 'GUIContent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Image_1Exception, NULL, NULL);
}
extern "C" void GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0_marshal_com_back(const GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0_marshaled_com& marshaled, GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0& unmarshaled)
{
	Exception_t* ___m_Image_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Image' of type 'GUIContent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Image_1Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.GUIContent
extern "C" void GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0_marshal_com_cleanup(GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.GUIContent::.ctor()
extern "C" IL2CPP_METHOD_ATTR void GUIContent__ctor_m939CDEFF44061020E997A0F0640ADDF2740B0C38 (GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUIContent__ctor_m939CDEFF44061020E997A0F0640ADDF2740B0C38_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		__this->set_m_Text_0(L_0);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		__this->set_m_Tooltip_2(L_1);
		Object__ctor_m8BA07445967EE2CC15961AD3C16F25DB74506EA0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUIContent::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void GUIContent__ctor_m8EE36BB9048C2A279E7EAD258D63F2A1BDEA8A81 (GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * __this, String_t* ___text0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUIContent__ctor_m8EE36BB9048C2A279E7EAD258D63F2A1BDEA8A81_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___text0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		GUIContent__ctor_m2805872C5E7E66C3ABF83607DC02BEB1BEFA82DA(__this, L_0, (Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 *)NULL, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUIContent::.ctor(System.String,UnityEngine.Texture,System.String)
extern "C" IL2CPP_METHOD_ATTR void GUIContent__ctor_m2805872C5E7E66C3ABF83607DC02BEB1BEFA82DA (GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * __this, String_t* ___text0, Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * ___image1, String_t* ___tooltip2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUIContent__ctor_m2805872C5E7E66C3ABF83607DC02BEB1BEFA82DA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		__this->set_m_Text_0(L_0);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		__this->set_m_Tooltip_2(L_1);
		Object__ctor_m8BA07445967EE2CC15961AD3C16F25DB74506EA0(__this, /*hidden argument*/NULL);
		String_t* L_2 = ___text0;
		GUIContent_set_text_m866E0C5690119816D87D83124C81BDC0A0ED4316(__this, L_2, /*hidden argument*/NULL);
		Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * L_3 = ___image1;
		GUIContent_set_image_m85ABAF5AE045BDD9C09EA75243094D16222DB38C(__this, L_3, /*hidden argument*/NULL);
		String_t* L_4 = ___tooltip2;
		GUIContent_set_tooltip_mDFC634B0DF68DB6A02F294106BC261EFC0FD0A67(__this, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUIContent::set_text(System.String)
extern "C" IL2CPP_METHOD_ATTR void GUIContent_set_text_m866E0C5690119816D87D83124C81BDC0A0ED4316 (GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_m_Text_0(L_0);
		return;
	}
}
// System.Void UnityEngine.GUIContent::set_image(UnityEngine.Texture)
extern "C" IL2CPP_METHOD_ATTR void GUIContent_set_image_m85ABAF5AE045BDD9C09EA75243094D16222DB38C (GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * __this, Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * ___value0, const RuntimeMethod* method)
{
	{
		Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * L_0 = ___value0;
		__this->set_m_Image_1(L_0);
		return;
	}
}
// System.Void UnityEngine.GUIContent::set_tooltip(System.String)
extern "C" IL2CPP_METHOD_ATTR void GUIContent_set_tooltip_mDFC634B0DF68DB6A02F294106BC261EFC0FD0A67 (GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_m_Tooltip_2(L_0);
		return;
	}
}
// UnityEngine.GUIContent UnityEngine.GUIContent::Temp(System.String)
extern "C" IL2CPP_METHOD_ATTR GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * GUIContent_Temp_m29B9E688E5EA09D12FDFAC6096B8762F7E84688D (String_t* ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUIContent_Temp_m29B9E688E5EA09D12FDFAC6096B8762F7E84688D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0_il2cpp_TypeInfo_var);
		GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * L_0 = ((GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0_StaticFields*)il2cpp_codegen_static_fields_for(GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0_il2cpp_TypeInfo_var))->get_s_Text_3();
		String_t* L_1 = ___t0;
		NullCheck(L_0);
		L_0->set_m_Text_0(L_1);
		GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * L_2 = ((GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0_StaticFields*)il2cpp_codegen_static_fields_for(GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0_il2cpp_TypeInfo_var))->get_s_Text_3();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		NullCheck(L_2);
		L_2->set_m_Tooltip_2(L_3);
		GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * L_4 = ((GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0_StaticFields*)il2cpp_codegen_static_fields_for(GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0_il2cpp_TypeInfo_var))->get_s_Text_3();
		V_0 = L_4;
		goto IL_0026;
	}

IL_0026:
	{
		GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * L_5 = V_0;
		return L_5;
	}
}
// System.Void UnityEngine.GUIContent::ClearStaticCache()
extern "C" IL2CPP_METHOD_ATTR void GUIContent_ClearStaticCache_m567DA736612F9E6E66262CC630952AB2E22BC933 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUIContent_ClearStaticCache_m567DA736612F9E6E66262CC630952AB2E22BC933_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0_il2cpp_TypeInfo_var);
		GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * L_0 = ((GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0_StaticFields*)il2cpp_codegen_static_fields_for(GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0_il2cpp_TypeInfo_var))->get_s_Text_3();
		NullCheck(L_0);
		L_0->set_m_Text_0((String_t*)NULL);
		GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * L_1 = ((GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0_StaticFields*)il2cpp_codegen_static_fields_for(GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0_il2cpp_TypeInfo_var))->get_s_Text_3();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		NullCheck(L_1);
		L_1->set_m_Tooltip_2(L_2);
		GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * L_3 = ((GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0_StaticFields*)il2cpp_codegen_static_fields_for(GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0_il2cpp_TypeInfo_var))->get_s_Image_4();
		NullCheck(L_3);
		L_3->set_m_Image_1((Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 *)NULL);
		GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * L_4 = ((GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0_StaticFields*)il2cpp_codegen_static_fields_for(GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0_il2cpp_TypeInfo_var))->get_s_Image_4();
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		NullCheck(L_4);
		L_4->set_m_Tooltip_2(L_5);
		GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * L_6 = ((GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0_StaticFields*)il2cpp_codegen_static_fields_for(GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0_il2cpp_TypeInfo_var))->get_s_TextImage_5();
		NullCheck(L_6);
		L_6->set_m_Text_0((String_t*)NULL);
		GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * L_7 = ((GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0_StaticFields*)il2cpp_codegen_static_fields_for(GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0_il2cpp_TypeInfo_var))->get_s_TextImage_5();
		NullCheck(L_7);
		L_7->set_m_Image_1((Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 *)NULL);
		return;
	}
}
// System.Void UnityEngine.GUIContent::.cctor()
extern "C" IL2CPP_METHOD_ATTR void GUIContent__cctor_m5AF68CD5FB2E47506F7FF1A6F46ADAD5C8BC927C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUIContent__cctor_m5AF68CD5FB2E47506F7FF1A6F46ADAD5C8BC927C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * L_0 = (GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 *)il2cpp_codegen_object_new(GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0_il2cpp_TypeInfo_var);
		GUIContent__ctor_m939CDEFF44061020E997A0F0640ADDF2740B0C38(L_0, /*hidden argument*/NULL);
		((GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0_StaticFields*)il2cpp_codegen_static_fields_for(GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0_il2cpp_TypeInfo_var))->set_s_Text_3(L_0);
		GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * L_1 = (GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 *)il2cpp_codegen_object_new(GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0_il2cpp_TypeInfo_var);
		GUIContent__ctor_m939CDEFF44061020E997A0F0640ADDF2740B0C38(L_1, /*hidden argument*/NULL);
		((GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0_StaticFields*)il2cpp_codegen_static_fields_for(GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0_il2cpp_TypeInfo_var))->set_s_Image_4(L_1);
		GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * L_2 = (GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 *)il2cpp_codegen_object_new(GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0_il2cpp_TypeInfo_var);
		GUIContent__ctor_m939CDEFF44061020E997A0F0640ADDF2740B0C38(L_2, /*hidden argument*/NULL);
		((GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0_StaticFields*)il2cpp_codegen_static_fields_for(GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0_il2cpp_TypeInfo_var))->set_s_TextImage_5(L_2);
		GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * L_3 = (GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 *)il2cpp_codegen_object_new(GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0_il2cpp_TypeInfo_var);
		GUIContent__ctor_m8EE36BB9048C2A279E7EAD258D63F2A1BDEA8A81(L_3, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		((GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0_StaticFields*)il2cpp_codegen_static_fields_for(GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0_il2cpp_TypeInfo_var))->set_none_6(L_3);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Width(System.Single)
extern "C" IL2CPP_METHOD_ATTR GUILayoutOption_t27A0221AC2F6F53E7B89310FD19F51C565D835A6 * GUILayout_Width_mDA8F26D92E788474E09AECA1541E8C920C72DA10 (float ___width0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUILayout_Width_mDA8F26D92E788474E09AECA1541E8C920C72DA10_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GUILayoutOption_t27A0221AC2F6F53E7B89310FD19F51C565D835A6 * V_0 = NULL;
	{
		float L_0 = ___width0;
		float L_1 = L_0;
		RuntimeObject * L_2 = Box(Single_tF2613CF3F3AF0E8BEBC3CE8AD41479C44E6075DB_il2cpp_TypeInfo_var, &L_1);
		GUILayoutOption_t27A0221AC2F6F53E7B89310FD19F51C565D835A6 * L_3 = (GUILayoutOption_t27A0221AC2F6F53E7B89310FD19F51C565D835A6 *)il2cpp_codegen_object_new(GUILayoutOption_t27A0221AC2F6F53E7B89310FD19F51C565D835A6_il2cpp_TypeInfo_var);
		GUILayoutOption__ctor_m965FDA1345FD7146596EFA90F03D0C645FB3FD5D(L_3, 0, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0013;
	}

IL_0013:
	{
		GUILayoutOption_t27A0221AC2F6F53E7B89310FD19F51C565D835A6 * L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Height(System.Single)
extern "C" IL2CPP_METHOD_ATTR GUILayoutOption_t27A0221AC2F6F53E7B89310FD19F51C565D835A6 * GUILayout_Height_mA5A24D5490022AC6449BBAED9C5A1647184B4026 (float ___height0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUILayout_Height_mA5A24D5490022AC6449BBAED9C5A1647184B4026_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GUILayoutOption_t27A0221AC2F6F53E7B89310FD19F51C565D835A6 * V_0 = NULL;
	{
		float L_0 = ___height0;
		float L_1 = L_0;
		RuntimeObject * L_2 = Box(Single_tF2613CF3F3AF0E8BEBC3CE8AD41479C44E6075DB_il2cpp_TypeInfo_var, &L_1);
		GUILayoutOption_t27A0221AC2F6F53E7B89310FD19F51C565D835A6 * L_3 = (GUILayoutOption_t27A0221AC2F6F53E7B89310FD19F51C565D835A6 *)il2cpp_codegen_object_new(GUILayoutOption_t27A0221AC2F6F53E7B89310FD19F51C565D835A6_il2cpp_TypeInfo_var);
		GUILayoutOption__ctor_m965FDA1345FD7146596EFA90F03D0C645FB3FD5D(L_3, 1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0013;
	}

IL_0013:
	{
		GUILayoutOption_t27A0221AC2F6F53E7B89310FD19F51C565D835A6 * L_4 = V_0;
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.GUILayoutEntry::.ctor(System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle)
extern "C" IL2CPP_METHOD_ATTR void GUILayoutEntry__ctor_mC640CA08AEBCC7E479DB6AF5B208436A98AB75B2 (GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * __this, float ____minWidth0, float ____maxWidth1, float ____minHeight2, float ____maxHeight3, GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ____style4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUILayoutEntry__ctor_mC640CA08AEBCC7E479DB6AF5B208436A98AB75B2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Rect__ctor_m50B92C75005C9C5A0D05E6E0EBB43AFAF7C66280((&L_0), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_rect_4(L_0);
		__this->set_consideredForMargin_7((bool)1);
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t671F175A201A19166385EE3392292A5F50070572_il2cpp_TypeInfo_var);
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_1 = GUIStyle_get_none_m2B48FA4E2FA2B9BB7A458DF25B1391F9C7BB8B7B(/*hidden argument*/NULL);
		__this->set_m_Style_8(L_1);
		Object__ctor_m8BA07445967EE2CC15961AD3C16F25DB74506EA0(__this, /*hidden argument*/NULL);
		float L_2 = ____minWidth0;
		__this->set_minWidth_0(L_2);
		float L_3 = ____maxWidth1;
		__this->set_maxWidth_1(L_3);
		float L_4 = ____minHeight2;
		__this->set_minHeight_2(L_4);
		float L_5 = ____maxHeight3;
		__this->set_maxHeight_3(L_5);
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_6 = ____style4;
		if (L_6)
		{
			goto IL_0063;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t671F175A201A19166385EE3392292A5F50070572_il2cpp_TypeInfo_var);
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_7 = GUIStyle_get_none_m2B48FA4E2FA2B9BB7A458DF25B1391F9C7BB8B7B(/*hidden argument*/NULL);
		____style4 = L_7;
	}

IL_0063:
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_8 = ____style4;
		GUILayoutEntry_set_style_mEDD232A6CDB1B76ABC33EA06A05235316A180E2D(__this, L_8, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUILayoutEntry::get_style()
extern "C" IL2CPP_METHOD_ATTR GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * GUILayoutEntry_get_style_m70E386A3289ACFEC515B1358827AB2FBF6314BA4 (GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * __this, const RuntimeMethod* method)
{
	GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * V_0 = NULL;
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_0 = __this->get_m_Style_8();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUILayoutEntry::set_style(UnityEngine.GUIStyle)
extern "C" IL2CPP_METHOD_ATTR void GUILayoutEntry_set_style_mEDD232A6CDB1B76ABC33EA06A05235316A180E2D (GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * __this, GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___value0, const RuntimeMethod* method)
{
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_0 = ___value0;
		__this->set_m_Style_8(L_0);
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_1 = ___value0;
		VirtActionInvoker1< GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * >::Invoke(12 /* System.Void UnityEngine.GUILayoutEntry::ApplyStyleSettings(UnityEngine.GUIStyle) */, __this, L_1);
		return;
	}
}
// System.Int32 UnityEngine.GUILayoutEntry::get_marginLeft()
extern "C" IL2CPP_METHOD_ATTR int32_t GUILayoutEntry_get_marginLeft_mD09358867AB85C7555C5F36B21AA8701EBF7A47A (GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_0 = GUILayoutEntry_get_style_m70E386A3289ACFEC515B1358827AB2FBF6314BA4(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * L_1 = GUIStyle_get_margin_mFC3EA0FA030A6334AC03BDDFA4AC80419C9E5BAA(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = RectOffset_get_left_mA86EC00866C1940134873E3A1565A1F700DE67AD(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Int32 UnityEngine.GUILayoutEntry::get_marginRight()
extern "C" IL2CPP_METHOD_ATTR int32_t GUILayoutEntry_get_marginRight_m2449285F6E78BB275246C7382A0F25584A057E83 (GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_0 = GUILayoutEntry_get_style_m70E386A3289ACFEC515B1358827AB2FBF6314BA4(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * L_1 = GUIStyle_get_margin_mFC3EA0FA030A6334AC03BDDFA4AC80419C9E5BAA(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = RectOffset_get_right_m9B05958C3C1B31F1FAB8675834A492C7208F6C96(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Int32 UnityEngine.GUILayoutEntry::get_marginTop()
extern "C" IL2CPP_METHOD_ATTR int32_t GUILayoutEntry_get_marginTop_mA7DC694C92F152BEC3A8CCC470B24E9351338708 (GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_0 = GUILayoutEntry_get_style_m70E386A3289ACFEC515B1358827AB2FBF6314BA4(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * L_1 = GUIStyle_get_margin_mFC3EA0FA030A6334AC03BDDFA4AC80419C9E5BAA(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = RectOffset_get_top_mBA813D4147BFBC079933054018437F411B6B41E1(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Int32 UnityEngine.GUILayoutEntry::get_marginBottom()
extern "C" IL2CPP_METHOD_ATTR int32_t GUILayoutEntry_get_marginBottom_mC821B992F1AA7AF24533D9DAC2E46632950AA1BD (GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_0 = GUILayoutEntry_get_style_m70E386A3289ACFEC515B1358827AB2FBF6314BA4(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * L_1 = GUIStyle_get_margin_mFC3EA0FA030A6334AC03BDDFA4AC80419C9E5BAA(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = RectOffset_get_bottom_mE5162CADD266B59539E3EE1967EE9A74705E5632(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Int32 UnityEngine.GUILayoutEntry::get_marginHorizontal()
extern "C" IL2CPP_METHOD_ATTR int32_t GUILayoutEntry_get_marginHorizontal_m1FB1B936E7C702BAD92FE4CA1EEC529A2BECCEC4 (GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginLeft() */, __this);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginRight() */, __this);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1));
		goto IL_0013;
	}

IL_0013:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 UnityEngine.GUILayoutEntry::get_marginVertical()
extern "C" IL2CPP_METHOD_ATTR int32_t GUILayoutEntry_get_marginVertical_mBFB3FD56025F4627378E5A339379CFF720196EB0 (GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginBottom() */, __this);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginTop() */, __this);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1));
		goto IL_0013;
	}

IL_0013:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.GUILayoutEntry::CalcWidth()
extern "C" IL2CPP_METHOD_ATTR void GUILayoutEntry_CalcWidth_mBBA8647ED6695100D8D41CE12CA4586DBD02D993 (GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutEntry::CalcHeight()
extern "C" IL2CPP_METHOD_ATTR void GUILayoutEntry_CalcHeight_m476C8ECE96A5ACC4AEA6427EA2432F0ED7E3CFF4 (GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutEntry::SetHorizontal(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void GUILayoutEntry_SetHorizontal_m46A5D9344EE72AF9AA7D07C77C30745F9FE97DE8 (GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * __this, float ___x0, float ___width1, const RuntimeMethod* method)
{
	{
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE * L_0 = __this->get_address_of_rect_4();
		float L_1 = ___x0;
		Rect_set_x_m49EFE25263C03A48D52499C3E9C097298E0EA3A6((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)L_0, L_1, /*hidden argument*/NULL);
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE * L_2 = __this->get_address_of_rect_4();
		float L_3 = ___width1;
		Rect_set_width_mC81EF602AC91E0C615C12FCE060254A461A152B8((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUILayoutEntry::SetVertical(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void GUILayoutEntry_SetVertical_mC0E71E5E431907DD1900C707BD3E2E1D0795DDD0 (GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * __this, float ___y0, float ___height1, const RuntimeMethod* method)
{
	{
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE * L_0 = __this->get_address_of_rect_4();
		float L_1 = ___y0;
		Rect_set_y_mCFDB9BD77334EF9CD896F64BE63C755777D7CCD5((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)L_0, L_1, /*hidden argument*/NULL);
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE * L_2 = __this->get_address_of_rect_4();
		float L_3 = ___height1;
		Rect_set_height_mF4CB5A97D4706696F1C9EA31A5D8C466E48050D6((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUILayoutEntry::ApplyStyleSettings(UnityEngine.GUIStyle)
extern "C" IL2CPP_METHOD_ATTR void GUILayoutEntry_ApplyStyleSettings_m5516B497544317E3B720CE7867CA960076E2AF47 (GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * __this, GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___style0, const RuntimeMethod* method)
{
	GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * G_B3_0 = NULL;
	GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * G_B1_0 = NULL;
	GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * G_B4_1 = NULL;
	GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * G_B7_0 = NULL;
	GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * G_B5_0 = NULL;
	GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * G_B6_0 = NULL;
	int32_t G_B8_0 = 0;
	GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * G_B8_1 = NULL;
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_0 = ___style0;
		NullCheck(L_0);
		float L_1 = GUIStyle_get_fixedWidth_mEACB70758F83DCD64CE363143849CC40E49B8D8D(L_0, /*hidden argument*/NULL);
		G_B1_0 = __this;
		if ((!(((float)L_1) == ((float)(0.0f)))))
		{
			G_B3_0 = __this;
			goto IL_0023;
		}
	}
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_2 = ___style0;
		NullCheck(L_2);
		bool L_3 = GUIStyle_get_stretchWidth_m4513B313AABE48E1D10424844DC186405BC8A677(L_2, /*hidden argument*/NULL);
		G_B2_0 = G_B1_0;
		if (!L_3)
		{
			G_B3_0 = G_B1_0;
			goto IL_0023;
		}
	}
	{
		G_B4_0 = 1;
		G_B4_1 = G_B2_0;
		goto IL_0024;
	}

IL_0023:
	{
		G_B4_0 = 0;
		G_B4_1 = G_B3_0;
	}

IL_0024:
	{
		NullCheck(G_B4_1);
		G_B4_1->set_stretchWidth_5(G_B4_0);
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_4 = ___style0;
		NullCheck(L_4);
		float L_5 = GUIStyle_get_fixedHeight_m9B5589C95B27C5590219413E8D7E9E1E95EB7708(L_4, /*hidden argument*/NULL);
		G_B5_0 = __this;
		if ((!(((float)L_5) == ((float)(0.0f)))))
		{
			G_B7_0 = __this;
			goto IL_004b;
		}
	}
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_6 = ___style0;
		NullCheck(L_6);
		bool L_7 = GUIStyle_get_stretchHeight_m264308B18FA5F0A8400CF49945BAE1B9EFDC934F(L_6, /*hidden argument*/NULL);
		G_B6_0 = G_B5_0;
		if (!L_7)
		{
			G_B7_0 = G_B5_0;
			goto IL_004b;
		}
	}
	{
		G_B8_0 = 1;
		G_B8_1 = G_B6_0;
		goto IL_004c;
	}

IL_004b:
	{
		G_B8_0 = 0;
		G_B8_1 = G_B7_0;
	}

IL_004c:
	{
		NullCheck(G_B8_1);
		G_B8_1->set_stretchHeight_6(G_B8_0);
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_8 = ___style0;
		__this->set_m_Style_8(L_8);
		return;
	}
}
// System.Void UnityEngine.GUILayoutEntry::ApplyOptions(UnityEngine.GUILayoutOption[])
extern "C" IL2CPP_METHOD_ATTR void GUILayoutEntry_ApplyOptions_m2002EBD9FE42B9787544D204A71C8BEF3F671F5B (GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * __this, GUILayoutOptionU5BU5D_tAB2AD0A365DBD2277A04E397AE8E1430A022AF1B* ___options0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUILayoutEntry_ApplyOptions_m2002EBD9FE42B9787544D204A71C8BEF3F671F5B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GUILayoutOption_t27A0221AC2F6F53E7B89310FD19F51C565D835A6 * V_0 = NULL;
	GUILayoutOptionU5BU5D_tAB2AD0A365DBD2277A04E397AE8E1430A022AF1B* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	{
		GUILayoutOptionU5BU5D_tAB2AD0A365DBD2277A04E397AE8E1430A022AF1B* L_0 = ___options0;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		goto IL_020b;
	}

IL_000c:
	{
		GUILayoutOptionU5BU5D_tAB2AD0A365DBD2277A04E397AE8E1430A022AF1B* L_1 = ___options0;
		V_1 = L_1;
		V_2 = 0;
		goto IL_01a8;
	}

IL_0016:
	{
		GUILayoutOptionU5BU5D_tAB2AD0A365DBD2277A04E397AE8E1430A022AF1B* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		GUILayoutOption_t27A0221AC2F6F53E7B89310FD19F51C565D835A6 * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_0 = L_5;
		GUILayoutOption_t27A0221AC2F6F53E7B89310FD19F51C565D835A6 * L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = L_6->get_type_0();
		V_3 = L_7;
		int32_t L_8 = V_3;
		switch (L_8)
		{
			case 0:
			{
				goto IL_004d;
			}
			case 1:
			{
				goto IL_0075;
			}
			case 2:
			{
				goto IL_009d;
			}
			case 3:
			{
				goto IL_00d0;
			}
			case 4:
			{
				goto IL_010a;
			}
			case 5:
			{
				goto IL_013d;
			}
			case 6:
			{
				goto IL_0177;
			}
			case 7:
			{
				goto IL_018d;
			}
		}
	}
	{
		goto IL_01a3;
	}

IL_004d:
	{
		GUILayoutOption_t27A0221AC2F6F53E7B89310FD19F51C565D835A6 * L_9 = V_0;
		NullCheck(L_9);
		RuntimeObject * L_10 = L_9->get_value_1();
		float L_11 = ((*(float*)((float*)UnBox(L_10, Single_tF2613CF3F3AF0E8BEBC3CE8AD41479C44E6075DB_il2cpp_TypeInfo_var))));
		V_4 = L_11;
		__this->set_maxWidth_1(L_11);
		float L_12 = V_4;
		__this->set_minWidth_0(L_12);
		__this->set_stretchWidth_5(0);
		goto IL_01a3;
	}

IL_0075:
	{
		GUILayoutOption_t27A0221AC2F6F53E7B89310FD19F51C565D835A6 * L_13 = V_0;
		NullCheck(L_13);
		RuntimeObject * L_14 = L_13->get_value_1();
		float L_15 = ((*(float*)((float*)UnBox(L_14, Single_tF2613CF3F3AF0E8BEBC3CE8AD41479C44E6075DB_il2cpp_TypeInfo_var))));
		V_4 = L_15;
		__this->set_maxHeight_3(L_15);
		float L_16 = V_4;
		__this->set_minHeight_2(L_16);
		__this->set_stretchHeight_6(0);
		goto IL_01a3;
	}

IL_009d:
	{
		GUILayoutOption_t27A0221AC2F6F53E7B89310FD19F51C565D835A6 * L_17 = V_0;
		NullCheck(L_17);
		RuntimeObject * L_18 = L_17->get_value_1();
		__this->set_minWidth_0(((*(float*)((float*)UnBox(L_18, Single_tF2613CF3F3AF0E8BEBC3CE8AD41479C44E6075DB_il2cpp_TypeInfo_var)))));
		float L_19 = __this->get_maxWidth_1();
		float L_20 = __this->get_minWidth_0();
		if ((!(((float)L_19) < ((float)L_20))))
		{
			goto IL_00cb;
		}
	}
	{
		float L_21 = __this->get_minWidth_0();
		__this->set_maxWidth_1(L_21);
	}

IL_00cb:
	{
		goto IL_01a3;
	}

IL_00d0:
	{
		GUILayoutOption_t27A0221AC2F6F53E7B89310FD19F51C565D835A6 * L_22 = V_0;
		NullCheck(L_22);
		RuntimeObject * L_23 = L_22->get_value_1();
		__this->set_maxWidth_1(((*(float*)((float*)UnBox(L_23, Single_tF2613CF3F3AF0E8BEBC3CE8AD41479C44E6075DB_il2cpp_TypeInfo_var)))));
		float L_24 = __this->get_minWidth_0();
		float L_25 = __this->get_maxWidth_1();
		if ((!(((float)L_24) > ((float)L_25))))
		{
			goto IL_00fe;
		}
	}
	{
		float L_26 = __this->get_maxWidth_1();
		__this->set_minWidth_0(L_26);
	}

IL_00fe:
	{
		__this->set_stretchWidth_5(0);
		goto IL_01a3;
	}

IL_010a:
	{
		GUILayoutOption_t27A0221AC2F6F53E7B89310FD19F51C565D835A6 * L_27 = V_0;
		NullCheck(L_27);
		RuntimeObject * L_28 = L_27->get_value_1();
		__this->set_minHeight_2(((*(float*)((float*)UnBox(L_28, Single_tF2613CF3F3AF0E8BEBC3CE8AD41479C44E6075DB_il2cpp_TypeInfo_var)))));
		float L_29 = __this->get_maxHeight_3();
		float L_30 = __this->get_minHeight_2();
		if ((!(((float)L_29) < ((float)L_30))))
		{
			goto IL_0138;
		}
	}
	{
		float L_31 = __this->get_minHeight_2();
		__this->set_maxHeight_3(L_31);
	}

IL_0138:
	{
		goto IL_01a3;
	}

IL_013d:
	{
		GUILayoutOption_t27A0221AC2F6F53E7B89310FD19F51C565D835A6 * L_32 = V_0;
		NullCheck(L_32);
		RuntimeObject * L_33 = L_32->get_value_1();
		__this->set_maxHeight_3(((*(float*)((float*)UnBox(L_33, Single_tF2613CF3F3AF0E8BEBC3CE8AD41479C44E6075DB_il2cpp_TypeInfo_var)))));
		float L_34 = __this->get_minHeight_2();
		float L_35 = __this->get_maxHeight_3();
		if ((!(((float)L_34) > ((float)L_35))))
		{
			goto IL_016b;
		}
	}
	{
		float L_36 = __this->get_maxHeight_3();
		__this->set_minHeight_2(L_36);
	}

IL_016b:
	{
		__this->set_stretchHeight_6(0);
		goto IL_01a3;
	}

IL_0177:
	{
		GUILayoutOption_t27A0221AC2F6F53E7B89310FD19F51C565D835A6 * L_37 = V_0;
		NullCheck(L_37);
		RuntimeObject * L_38 = L_37->get_value_1();
		__this->set_stretchWidth_5(((*(int32_t*)((int32_t*)UnBox(L_38, Int32_tC16F64335CE8B56D99229DE94BB3A876ED55FE87_il2cpp_TypeInfo_var)))));
		goto IL_01a3;
	}

IL_018d:
	{
		GUILayoutOption_t27A0221AC2F6F53E7B89310FD19F51C565D835A6 * L_39 = V_0;
		NullCheck(L_39);
		RuntimeObject * L_40 = L_39->get_value_1();
		__this->set_stretchHeight_6(((*(int32_t*)((int32_t*)UnBox(L_40, Int32_tC16F64335CE8B56D99229DE94BB3A876ED55FE87_il2cpp_TypeInfo_var)))));
		goto IL_01a3;
	}

IL_01a3:
	{
		int32_t L_41 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)1));
	}

IL_01a8:
	{
		int32_t L_42 = V_2;
		GUILayoutOptionU5BU5D_tAB2AD0A365DBD2277A04E397AE8E1430A022AF1B* L_43 = V_1;
		NullCheck(L_43);
		if ((((int32_t)L_42) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_43)->max_length)))))))
		{
			goto IL_0016;
		}
	}
	{
		float L_44 = __this->get_maxWidth_1();
		if ((((float)L_44) == ((float)(0.0f))))
		{
			goto IL_01de;
		}
	}
	{
		float L_45 = __this->get_maxWidth_1();
		float L_46 = __this->get_minWidth_0();
		if ((!(((float)L_45) < ((float)L_46))))
		{
			goto IL_01de;
		}
	}
	{
		float L_47 = __this->get_minWidth_0();
		__this->set_maxWidth_1(L_47);
	}

IL_01de:
	{
		float L_48 = __this->get_maxHeight_3();
		if ((((float)L_48) == ((float)(0.0f))))
		{
			goto IL_020b;
		}
	}
	{
		float L_49 = __this->get_maxHeight_3();
		float L_50 = __this->get_minHeight_2();
		if ((!(((float)L_49) < ((float)L_50))))
		{
			goto IL_020b;
		}
	}
	{
		float L_51 = __this->get_minHeight_2();
		__this->set_maxHeight_3(L_51);
	}

IL_020b:
	{
		return;
	}
}
// System.String UnityEngine.GUILayoutEntry::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* GUILayoutEntry_ToString_mCDA5CD14A39ADAD29F6B450B98FDB80E37AC95D5 (GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUILayoutEntry_ToString_mCDA5CD14A39ADAD29F6B450B98FDB80E37AC95D5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	int32_t G_B5_0 = 0;
	ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* G_B5_1 = NULL;
	ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* G_B5_2 = NULL;
	String_t* G_B5_3 = NULL;
	int32_t G_B5_4 = 0;
	ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* G_B5_5 = NULL;
	ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* G_B5_6 = NULL;
	int32_t G_B4_0 = 0;
	ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* G_B4_1 = NULL;
	ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* G_B4_2 = NULL;
	String_t* G_B4_3 = NULL;
	int32_t G_B4_4 = 0;
	ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* G_B4_5 = NULL;
	ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* G_B4_6 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* G_B6_2 = NULL;
	ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* G_B6_3 = NULL;
	String_t* G_B6_4 = NULL;
	int32_t G_B6_5 = 0;
	ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* G_B6_6 = NULL;
	ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* G_B6_7 = NULL;
	int32_t G_B8_0 = 0;
	ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* G_B8_1 = NULL;
	ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* G_B8_2 = NULL;
	int32_t G_B7_0 = 0;
	ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* G_B7_1 = NULL;
	ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* G_B7_2 = NULL;
	String_t* G_B9_0 = NULL;
	int32_t G_B9_1 = 0;
	ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* G_B9_2 = NULL;
	ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* G_B9_3 = NULL;
	int32_t G_B11_0 = 0;
	ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* G_B11_1 = NULL;
	ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* G_B11_2 = NULL;
	int32_t G_B10_0 = 0;
	ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* G_B10_1 = NULL;
	ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* G_B10_2 = NULL;
	String_t* G_B12_0 = NULL;
	int32_t G_B12_1 = 0;
	ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* G_B12_2 = NULL;
	ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* G_B12_3 = NULL;
	{
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		V_1 = 0;
		goto IL_001e;
	}

IL_000e:
	{
		String_t* L_0 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = String_Concat_m3826EAA4F567A88037F77DAA4CA280E199698DC8(L_0, _stringLiteralB858CB282617FB0956D960215C8E84D1CCF909C6, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
	}

IL_001e:
	{
		int32_t L_3 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845_il2cpp_TypeInfo_var);
		int32_t L_4 = ((GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845_il2cpp_TypeInfo_var))->get_indent_10();
		if ((((int32_t)L_3) < ((int32_t)L_4)))
		{
			goto IL_000e;
		}
	}
	{
		ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* L_5 = (ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D*)SZArrayNew(ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D_il2cpp_TypeInfo_var, (uint32_t)((int32_t)12));
		ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* L_6 = L_5;
		String_t* L_7 = V_0;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_7);
		ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* L_8 = L_6;
		ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* L_9 = (ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D*)SZArrayNew(ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D_il2cpp_TypeInfo_var, (uint32_t)6);
		ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* L_10 = L_9;
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_11 = GUILayoutEntry_get_style_m70E386A3289ACFEC515B1358827AB2FBF6314BA4(__this, /*hidden argument*/NULL);
		G_B4_0 = 0;
		G_B4_1 = L_10;
		G_B4_2 = L_10;
		G_B4_3 = _stringLiteral0C258057D84276FDE292E99D213EB3AA75E8A463;
		G_B4_4 = 1;
		G_B4_5 = L_8;
		G_B4_6 = L_8;
		if (!L_11)
		{
			G_B5_0 = 0;
			G_B5_1 = L_10;
			G_B5_2 = L_10;
			G_B5_3 = _stringLiteral0C258057D84276FDE292E99D213EB3AA75E8A463;
			G_B5_4 = 1;
			G_B5_5 = L_8;
			G_B5_6 = L_8;
			goto IL_005e;
		}
	}
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_12 = GUILayoutEntry_get_style_m70E386A3289ACFEC515B1358827AB2FBF6314BA4(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		String_t* L_13 = GUIStyle_get_name_m111D8AB0173E1EBA46A9664EBABBC82AFE3ED71E(L_12, /*hidden argument*/NULL);
		G_B6_0 = L_13;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		G_B6_4 = G_B4_3;
		G_B6_5 = G_B4_4;
		G_B6_6 = G_B4_5;
		G_B6_7 = G_B4_6;
		goto IL_0063;
	}

IL_005e:
	{
		G_B6_0 = _stringLiteralEEF19C54306DAA69EDA49C0272623BDB5E2B341F;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
		G_B6_4 = G_B5_3;
		G_B6_5 = G_B5_4;
		G_B6_6 = G_B5_5;
		G_B6_7 = G_B5_6;
	}

IL_0063:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (RuntimeObject *)G_B6_0);
		ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* L_14 = G_B6_3;
		Type_t * L_15 = Object_GetType_m993E65F4E4457CE1761C49B188A6CF858597BDDE(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_15);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_15);
		ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* L_16 = L_14;
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE * L_17 = __this->get_address_of_rect_4();
		float L_18 = Rect_get_x_mC51A461F546D14832EB96B11A7198DADDE2597B7((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)L_17, /*hidden argument*/NULL);
		float L_19 = L_18;
		RuntimeObject * L_20 = Box(Single_tF2613CF3F3AF0E8BEBC3CE8AD41479C44E6075DB_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_20);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_20);
		ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* L_21 = L_16;
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE * L_22 = __this->get_address_of_rect_4();
		float L_23 = Rect_get_xMax_mA16D7C3C2F30F8608719073ED79028C11CE90983((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)L_22, /*hidden argument*/NULL);
		float L_24 = L_23;
		RuntimeObject * L_25 = Box(Single_tF2613CF3F3AF0E8BEBC3CE8AD41479C44E6075DB_il2cpp_TypeInfo_var, &L_24);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_25);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_25);
		ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* L_26 = L_21;
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE * L_27 = __this->get_address_of_rect_4();
		float L_28 = Rect_get_y_m53E3E4F62D9840FBEA751A66293038F1F5D1D45C((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)L_27, /*hidden argument*/NULL);
		float L_29 = L_28;
		RuntimeObject * L_30 = Box(Single_tF2613CF3F3AF0E8BEBC3CE8AD41479C44E6075DB_il2cpp_TypeInfo_var, &L_29);
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_30);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_30);
		ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* L_31 = L_26;
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE * L_32 = __this->get_address_of_rect_4();
		float L_33 = Rect_get_yMax_m8AA5E92C322AF3FF571330F00579DA864F33341B((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)L_32, /*hidden argument*/NULL);
		float L_34 = L_33;
		RuntimeObject * L_35 = Box(Single_tF2613CF3F3AF0E8BEBC3CE8AD41479C44E6075DB_il2cpp_TypeInfo_var, &L_34);
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_35);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_35);
		String_t* L_36 = UnityString_Format_m415056ECF8DA7B3EC6A8456E299D0C2002177387(G_B6_4, L_31, /*hidden argument*/NULL);
		NullCheck(G_B6_6);
		ArrayElementTypeCheck (G_B6_6, L_36);
		(G_B6_6)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_5), (RuntimeObject *)L_36);
		ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* L_37 = G_B6_7;
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, _stringLiteralA8D40E8C95571FFC4E4BA4C9CEF0289695BD8057);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteralA8D40E8C95571FFC4E4BA4C9CEF0289695BD8057);
		ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* L_38 = L_37;
		float L_39 = __this->get_minWidth_0();
		float L_40 = L_39;
		RuntimeObject * L_41 = Box(Single_tF2613CF3F3AF0E8BEBC3CE8AD41479C44E6075DB_il2cpp_TypeInfo_var, &L_40);
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, L_41);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_41);
		ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* L_42 = L_38;
		NullCheck(L_42);
		ArrayElementTypeCheck (L_42, _stringLiteral3BC15C8AAE3E4124DD409035F32EA2FD6835EFC9);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteral3BC15C8AAE3E4124DD409035F32EA2FD6835EFC9);
		ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* L_43 = L_42;
		float L_44 = __this->get_maxWidth_1();
		float L_45 = L_44;
		RuntimeObject * L_46 = Box(Single_tF2613CF3F3AF0E8BEBC3CE8AD41479C44E6075DB_il2cpp_TypeInfo_var, &L_45);
		NullCheck(L_43);
		ArrayElementTypeCheck (L_43, L_46);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_46);
		ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* L_47 = L_43;
		int32_t L_48 = __this->get_stretchWidth_5();
		G_B7_0 = 6;
		G_B7_1 = L_47;
		G_B7_2 = L_47;
		if (!L_48)
		{
			G_B8_0 = 6;
			G_B8_1 = L_47;
			G_B8_2 = L_47;
			goto IL_0102;
		}
	}
	{
		G_B9_0 = _stringLiteralA979EF10CC6F6A36DF6B8A323307EE3BB2E2DB9C;
		G_B9_1 = G_B7_0;
		G_B9_2 = G_B7_1;
		G_B9_3 = G_B7_2;
		goto IL_0107;
	}

IL_0102:
	{
		G_B9_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
		G_B9_3 = G_B8_2;
	}

IL_0107:
	{
		NullCheck(G_B9_2);
		ArrayElementTypeCheck (G_B9_2, G_B9_0);
		(G_B9_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B9_1), (RuntimeObject *)G_B9_0);
		ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* L_49 = G_B9_3;
		NullCheck(L_49);
		ArrayElementTypeCheck (L_49, _stringLiteral553F4091D1912B191C8392C610091F6B85B0B6E3);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject *)_stringLiteral553F4091D1912B191C8392C610091F6B85B0B6E3);
		ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* L_50 = L_49;
		float L_51 = __this->get_minHeight_2();
		float L_52 = L_51;
		RuntimeObject * L_53 = Box(Single_tF2613CF3F3AF0E8BEBC3CE8AD41479C44E6075DB_il2cpp_TypeInfo_var, &L_52);
		NullCheck(L_50);
		ArrayElementTypeCheck (L_50, L_53);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(8), (RuntimeObject *)L_53);
		ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* L_54 = L_50;
		NullCheck(L_54);
		ArrayElementTypeCheck (L_54, _stringLiteral3BC15C8AAE3E4124DD409035F32EA2FD6835EFC9);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (RuntimeObject *)_stringLiteral3BC15C8AAE3E4124DD409035F32EA2FD6835EFC9);
		ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* L_55 = L_54;
		float L_56 = __this->get_maxHeight_3();
		float L_57 = L_56;
		RuntimeObject * L_58 = Box(Single_tF2613CF3F3AF0E8BEBC3CE8AD41479C44E6075DB_il2cpp_TypeInfo_var, &L_57);
		NullCheck(L_55);
		ArrayElementTypeCheck (L_55, L_58);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (RuntimeObject *)L_58);
		ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* L_59 = L_55;
		int32_t L_60 = __this->get_stretchHeight_6();
		G_B10_0 = ((int32_t)11);
		G_B10_1 = L_59;
		G_B10_2 = L_59;
		if (!L_60)
		{
			G_B11_0 = ((int32_t)11);
			G_B11_1 = L_59;
			G_B11_2 = L_59;
			goto IL_014e;
		}
	}
	{
		G_B12_0 = _stringLiteralA979EF10CC6F6A36DF6B8A323307EE3BB2E2DB9C;
		G_B12_1 = G_B10_0;
		G_B12_2 = G_B10_1;
		G_B12_3 = G_B10_2;
		goto IL_0153;
	}

IL_014e:
	{
		G_B12_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B12_1 = G_B11_0;
		G_B12_2 = G_B11_1;
		G_B12_3 = G_B11_2;
	}

IL_0153:
	{
		NullCheck(G_B12_2);
		ArrayElementTypeCheck (G_B12_2, G_B12_0);
		(G_B12_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B12_1), (RuntimeObject *)G_B12_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_61 = String_Concat_m2BD818C1A31996400987A990DD23C8629549A2B1(G_B12_3, /*hidden argument*/NULL);
		V_2 = L_61;
		goto IL_015f;
	}

IL_015f:
	{
		String_t* L_62 = V_2;
		return L_62;
	}
}
// System.Void UnityEngine.GUILayoutEntry::.cctor()
extern "C" IL2CPP_METHOD_ATTR void GUILayoutEntry__cctor_m7425E2D0EE5771858B9823BBD024333CE7CAD3F9 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUILayoutEntry__cctor_m7425E2D0EE5771858B9823BBD024333CE7CAD3F9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Rect__ctor_m50B92C75005C9C5A0D05E6E0EBB43AFAF7C66280((&L_0), (0.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		((GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845_il2cpp_TypeInfo_var))->set_kDummyRect_9(L_0);
		((GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845_il2cpp_TypeInfo_var))->set_indent_10(0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.GUILayoutGroup::.ctor()
extern "C" IL2CPP_METHOD_ATTR void GUILayoutGroup__ctor_m14D8B35B4A89F6688D354A534ED871860905BA3B (GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUILayoutGroup__ctor_m14D8B35B4A89F6688D354A534ED871860905BA3B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t046427F3923444CF746C550FD96A3D0E4189D273 * L_0 = (List_1_t046427F3923444CF746C550FD96A3D0E4189D273 *)il2cpp_codegen_object_new(List_1_t046427F3923444CF746C550FD96A3D0E4189D273_il2cpp_TypeInfo_var);
		List_1__ctor_m8334B758D374FE266FFF49329936203BCE3A3770(L_0, /*hidden argument*/List_1__ctor_m8334B758D374FE266FFF49329936203BCE3A3770_RuntimeMethod_var);
		__this->set_entries_11(L_0);
		__this->set_isVertical_12((bool)1);
		__this->set_resetCoords_13((bool)0);
		__this->set_spacing_14((0.0f));
		__this->set_sameSize_15((bool)1);
		__this->set_isWindow_16((bool)0);
		__this->set_windowID_17((-1));
		__this->set_m_Cursor_18(0);
		__this->set_m_StretchableCountX_19(((int32_t)100));
		__this->set_m_StretchableCountY_20(((int32_t)100));
		__this->set_m_UserSpecifiedWidth_21((bool)0);
		__this->set_m_UserSpecifiedHeight_22((bool)0);
		__this->set_m_ChildMinWidth_23((100.0f));
		__this->set_m_ChildMaxWidth_24((100.0f));
		__this->set_m_ChildMinHeight_25((100.0f));
		__this->set_m_ChildMaxHeight_26((100.0f));
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t671F175A201A19166385EE3392292A5F50070572_il2cpp_TypeInfo_var);
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_1 = GUIStyle_get_none_m2B48FA4E2FA2B9BB7A458DF25B1391F9C7BB8B7B(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845_il2cpp_TypeInfo_var);
		GUILayoutEntry__ctor_mC640CA08AEBCC7E479DB6AF5B208436A98AB75B2(__this, (0.0f), (0.0f), (0.0f), (0.0f), L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 UnityEngine.GUILayoutGroup::get_marginLeft()
extern "C" IL2CPP_METHOD_ATTR int32_t GUILayoutGroup_get_marginLeft_m987BDD5E6CE4A143F56120E1953291A27F43AA4F (GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_MarginLeft_27();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 UnityEngine.GUILayoutGroup::get_marginRight()
extern "C" IL2CPP_METHOD_ATTR int32_t GUILayoutGroup_get_marginRight_m12265D01788B2A60664CD21B887AFEC72C6A0855 (GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_MarginRight_28();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 UnityEngine.GUILayoutGroup::get_marginTop()
extern "C" IL2CPP_METHOD_ATTR int32_t GUILayoutGroup_get_marginTop_m5A7ACD924C4728C19C2DE52E3155A1D098646023 (GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_MarginTop_29();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 UnityEngine.GUILayoutGroup::get_marginBottom()
extern "C" IL2CPP_METHOD_ATTR int32_t GUILayoutGroup_get_marginBottom_m47E83C97B7052E8C3A15C11E23C05C7B4FF31460 (GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_MarginBottom_30();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUILayoutGroup::ApplyOptions(UnityEngine.GUILayoutOption[])
extern "C" IL2CPP_METHOD_ATTR void GUILayoutGroup_ApplyOptions_mCBAF4F0DA13F941ABF47886054A3443247767A97 (GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * __this, GUILayoutOptionU5BU5D_tAB2AD0A365DBD2277A04E397AE8E1430A022AF1B* ___options0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUILayoutGroup_ApplyOptions_mCBAF4F0DA13F941ABF47886054A3443247767A97_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GUILayoutOption_t27A0221AC2F6F53E7B89310FD19F51C565D835A6 * V_0 = NULL;
	GUILayoutOptionU5BU5D_tAB2AD0A365DBD2277A04E397AE8E1430A022AF1B* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		GUILayoutOptionU5BU5D_tAB2AD0A365DBD2277A04E397AE8E1430A022AF1B* L_0 = ___options0;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		goto IL_00a9;
	}

IL_000c:
	{
		GUILayoutOptionU5BU5D_tAB2AD0A365DBD2277A04E397AE8E1430A022AF1B* L_1 = ___options0;
		GUILayoutEntry_ApplyOptions_m2002EBD9FE42B9787544D204A71C8BEF3F671F5B(__this, L_1, /*hidden argument*/NULL);
		GUILayoutOptionU5BU5D_tAB2AD0A365DBD2277A04E397AE8E1430A022AF1B* L_2 = ___options0;
		V_1 = L_2;
		V_2 = 0;
		goto IL_00a0;
	}

IL_001d:
	{
		GUILayoutOptionU5BU5D_tAB2AD0A365DBD2277A04E397AE8E1430A022AF1B* L_3 = V_1;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		GUILayoutOption_t27A0221AC2F6F53E7B89310FD19F51C565D835A6 * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_0 = L_6;
		GUILayoutOption_t27A0221AC2F6F53E7B89310FD19F51C565D835A6 * L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = L_7->get_type_0();
		V_3 = L_8;
		int32_t L_9 = V_3;
		switch (L_9)
		{
			case 0:
			{
				goto IL_006c;
			}
			case 1:
			{
				goto IL_0078;
			}
			case 2:
			{
				goto IL_006c;
			}
			case 3:
			{
				goto IL_006c;
			}
			case 4:
			{
				goto IL_0078;
			}
			case 5:
			{
				goto IL_0078;
			}
			case 6:
			{
				goto IL_009b;
			}
			case 7:
			{
				goto IL_009b;
			}
			case 8:
			{
				goto IL_009b;
			}
			case 9:
			{
				goto IL_009b;
			}
			case 10:
			{
				goto IL_009b;
			}
			case 11:
			{
				goto IL_009b;
			}
			case 12:
			{
				goto IL_009b;
			}
			case 13:
			{
				goto IL_0084;
			}
		}
	}
	{
		goto IL_009b;
	}

IL_006c:
	{
		__this->set_m_UserSpecifiedHeight_22((bool)1);
		goto IL_009b;
	}

IL_0078:
	{
		__this->set_m_UserSpecifiedWidth_21((bool)1);
		goto IL_009b;
	}

IL_0084:
	{
		GUILayoutOption_t27A0221AC2F6F53E7B89310FD19F51C565D835A6 * L_10 = V_0;
		NullCheck(L_10);
		RuntimeObject * L_11 = L_10->get_value_1();
		__this->set_spacing_14((((float)((float)((*(int32_t*)((int32_t*)UnBox(L_11, Int32_tC16F64335CE8B56D99229DE94BB3A876ED55FE87_il2cpp_TypeInfo_var))))))));
		goto IL_009b;
	}

IL_009b:
	{
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_00a0:
	{
		int32_t L_13 = V_2;
		GUILayoutOptionU5BU5D_tAB2AD0A365DBD2277A04E397AE8E1430A022AF1B* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_14)->max_length)))))))
		{
			goto IL_001d;
		}
	}

IL_00a9:
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutGroup::ApplyStyleSettings(UnityEngine.GUIStyle)
extern "C" IL2CPP_METHOD_ATTR void GUILayoutGroup_ApplyStyleSettings_mEC5D7325E4DC8993207671A95F6F0ED7D75B7F6C (GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * __this, GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___style0, const RuntimeMethod* method)
{
	RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * V_0 = NULL;
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_0 = ___style0;
		GUILayoutEntry_ApplyStyleSettings_m5516B497544317E3B720CE7867CA960076E2AF47(__this, L_0, /*hidden argument*/NULL);
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_1 = ___style0;
		NullCheck(L_1);
		RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * L_2 = GUIStyle_get_margin_mFC3EA0FA030A6334AC03BDDFA4AC80419C9E5BAA(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = RectOffset_get_left_mA86EC00866C1940134873E3A1565A1F700DE67AD(L_3, /*hidden argument*/NULL);
		__this->set_m_MarginLeft_27(L_4);
		RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = RectOffset_get_right_m9B05958C3C1B31F1FAB8675834A492C7208F6C96(L_5, /*hidden argument*/NULL);
		__this->set_m_MarginRight_28(L_6);
		RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = RectOffset_get_top_mBA813D4147BFBC079933054018437F411B6B41E1(L_7, /*hidden argument*/NULL);
		__this->set_m_MarginTop_29(L_8);
		RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10 = RectOffset_get_bottom_mE5162CADD266B59539E3EE1967EE9A74705E5632(L_9, /*hidden argument*/NULL);
		__this->set_m_MarginBottom_30(L_10);
		return;
	}
}
// System.Void UnityEngine.GUILayoutGroup::ResetCursor()
extern "C" IL2CPP_METHOD_ATTR void GUILayoutGroup_ResetCursor_mD159DD9E101F6F348249D27D95709E1DC5C0A13F (GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_Cursor_18(0);
		return;
	}
}
// System.Void UnityEngine.GUILayoutGroup::CalcWidth()
extern "C" IL2CPP_METHOD_ATTR void GUILayoutGroup_CalcWidth_m0D2819C659392B14175C2B163DD889AD35794A9B (GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUILayoutGroup_CalcWidth_m0D2819C659392B14175C2B163DD889AD35794A9B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * V_4 = NULL;
	Enumerator_t4D01DB2C4CF53D79BD58A10640F59CBCF1354587  V_5;
	memset(&V_5, 0, sizeof(V_5));
	int32_t V_6 = 0;
	GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * V_7 = NULL;
	Enumerator_t4D01DB2C4CF53D79BD58A10640F59CBCF1354587  V_8;
	memset(&V_8, 0, sizeof(V_8));
	int32_t V_9 = 0;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B22_0 = 0;
	int32_t G_B41_0 = 0;
	int32_t G_B41_1 = 0;
	GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * G_B41_2 = NULL;
	int32_t G_B40_0 = 0;
	int32_t G_B40_1 = 0;
	GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * G_B40_2 = NULL;
	int32_t G_B42_0 = 0;
	int32_t G_B42_1 = 0;
	int32_t G_B42_2 = 0;
	GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * G_B42_3 = NULL;
	{
		List_1_t046427F3923444CF746C550FD96A3D0E4189D273 * L_0 = __this->get_entries_11();
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_m2995506A297520F84CBD9AD421D8672D5755E115(L_0, /*hidden argument*/List_1_get_Count_m2995506A297520F84CBD9AD421D8672D5755E115_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0037;
		}
	}
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_2 = GUILayoutEntry_get_style_m70E386A3289ACFEC515B1358827AB2FBF6314BA4(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * L_3 = GUIStyle_get_padding_m5DF76AA03A313366D0DD8D577731DAC4FB83053A(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4 = RectOffset_get_horizontal_m9274B965D5D388F6F750D127B3E57F70DF0D89C1(L_3, /*hidden argument*/NULL);
		float L_5 = (((float)((float)L_4)));
		V_0 = L_5;
		((GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 *)__this)->set_minWidth_0(L_5);
		float L_6 = V_0;
		((GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 *)__this)->set_maxWidth_1(L_6);
		goto IL_0435;
	}

IL_0037:
	{
		V_1 = 0;
		V_2 = 0;
		__this->set_m_ChildMinWidth_23((0.0f));
		__this->set_m_ChildMaxWidth_24((0.0f));
		__this->set_m_StretchableCountX_19(0);
		V_3 = (bool)1;
		bool L_7 = __this->get_isVertical_12();
		if (!L_7)
		{
			goto IL_0173;
		}
	}
	{
		List_1_t046427F3923444CF746C550FD96A3D0E4189D273 * L_8 = __this->get_entries_11();
		NullCheck(L_8);
		Enumerator_t4D01DB2C4CF53D79BD58A10640F59CBCF1354587  L_9 = List_1_GetEnumerator_mA457B3CB61E2B7BAFB0F7D0ADEFD25237B4429DF(L_8, /*hidden argument*/List_1_GetEnumerator_mA457B3CB61E2B7BAFB0F7D0ADEFD25237B4429DF_RuntimeMethod_var);
		V_5 = L_9;
	}

IL_0074:
	try
	{ // begin try (depth: 1)
		{
			goto IL_012c;
		}

IL_0079:
		{
			GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * L_10 = Enumerator_get_Current_m9422C22943D0E9900CDB7DF407D9EBE215B2A6B6((Enumerator_t4D01DB2C4CF53D79BD58A10640F59CBCF1354587 *)(&V_5), /*hidden argument*/Enumerator_get_Current_m9422C22943D0E9900CDB7DF407D9EBE215B2A6B6_RuntimeMethod_var);
			V_4 = L_10;
			GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * L_11 = V_4;
			NullCheck(L_11);
			VirtActionInvoker0::Invoke(8 /* System.Void UnityEngine.GUILayoutEntry::CalcWidth() */, L_11);
			GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * L_12 = V_4;
			NullCheck(L_12);
			bool L_13 = L_12->get_consideredForMargin_7();
			if (!L_13)
			{
				goto IL_0117;
			}
		}

IL_0096:
		{
			bool L_14 = V_3;
			if (L_14)
			{
				goto IL_00c0;
			}
		}

IL_009d:
		{
			GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * L_15 = V_4;
			NullCheck(L_15);
			int32_t L_16 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginLeft() */, L_15);
			int32_t L_17 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
			int32_t L_18 = Mathf_Min_m1A2CC204E361AE13C329B6535165179798D3313A(L_16, L_17, /*hidden argument*/NULL);
			V_1 = L_18;
			GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * L_19 = V_4;
			NullCheck(L_19);
			int32_t L_20 = VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginRight() */, L_19);
			int32_t L_21 = V_2;
			int32_t L_22 = Mathf_Min_m1A2CC204E361AE13C329B6535165179798D3313A(L_20, L_21, /*hidden argument*/NULL);
			V_2 = L_22;
			goto IL_00d4;
		}

IL_00c0:
		{
			GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * L_23 = V_4;
			NullCheck(L_23);
			int32_t L_24 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginLeft() */, L_23);
			V_1 = L_24;
			GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * L_25 = V_4;
			NullCheck(L_25);
			int32_t L_26 = VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginRight() */, L_25);
			V_2 = L_26;
			V_3 = (bool)0;
		}

IL_00d4:
		{
			GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * L_27 = V_4;
			NullCheck(L_27);
			float L_28 = L_27->get_minWidth_0();
			GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * L_29 = V_4;
			NullCheck(L_29);
			int32_t L_30 = GUILayoutEntry_get_marginHorizontal_m1FB1B936E7C702BAD92FE4CA1EEC529A2BECCEC4(L_29, /*hidden argument*/NULL);
			float L_31 = __this->get_m_ChildMinWidth_23();
			IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
			float L_32 = Mathf_Max_m670AE0EC1B09ED1A56FF9606B0F954670319CB65(((float)il2cpp_codegen_add((float)L_28, (float)(((float)((float)L_30))))), L_31, /*hidden argument*/NULL);
			__this->set_m_ChildMinWidth_23(L_32);
			GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * L_33 = V_4;
			NullCheck(L_33);
			float L_34 = L_33->get_maxWidth_1();
			GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * L_35 = V_4;
			NullCheck(L_35);
			int32_t L_36 = GUILayoutEntry_get_marginHorizontal_m1FB1B936E7C702BAD92FE4CA1EEC529A2BECCEC4(L_35, /*hidden argument*/NULL);
			float L_37 = __this->get_m_ChildMaxWidth_24();
			float L_38 = Mathf_Max_m670AE0EC1B09ED1A56FF9606B0F954670319CB65(((float)il2cpp_codegen_add((float)L_34, (float)(((float)((float)L_36))))), L_37, /*hidden argument*/NULL);
			__this->set_m_ChildMaxWidth_24(L_38);
		}

IL_0117:
		{
			int32_t L_39 = __this->get_m_StretchableCountX_19();
			GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * L_40 = V_4;
			NullCheck(L_40);
			int32_t L_41 = L_40->get_stretchWidth_5();
			__this->set_m_StretchableCountX_19(((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)L_41)));
		}

IL_012c:
		{
			bool L_42 = Enumerator_MoveNext_m3A0A0A98E9378A32A74EC51C4CAB6C564001CAC7((Enumerator_t4D01DB2C4CF53D79BD58A10640F59CBCF1354587 *)(&V_5), /*hidden argument*/Enumerator_MoveNext_m3A0A0A98E9378A32A74EC51C4CAB6C564001CAC7_RuntimeMethod_var);
			if (L_42)
			{
				goto IL_0079;
			}
		}

IL_0138:
		{
			IL2CPP_LEAVE(0x14B, FINALLY_013d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_013d;
	}

FINALLY_013d:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mC263356C16A1948C299607F9A77AAFAEB7C55A38((Enumerator_t4D01DB2C4CF53D79BD58A10640F59CBCF1354587 *)(&V_5), /*hidden argument*/Enumerator_Dispose_mC263356C16A1948C299607F9A77AAFAEB7C55A38_RuntimeMethod_var);
		IL2CPP_END_FINALLY(317)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(317)
	{
		IL2CPP_JUMP_TBL(0x14B, IL_014b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_014b:
	{
		float L_43 = __this->get_m_ChildMinWidth_23();
		int32_t L_44 = V_1;
		int32_t L_45 = V_2;
		__this->set_m_ChildMinWidth_23(((float)il2cpp_codegen_subtract((float)L_43, (float)(((float)((float)((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)L_45))))))));
		float L_46 = __this->get_m_ChildMaxWidth_24();
		int32_t L_47 = V_1;
		int32_t L_48 = V_2;
		__this->set_m_ChildMaxWidth_24(((float)il2cpp_codegen_subtract((float)L_46, (float)(((float)((float)((int32_t)il2cpp_codegen_add((int32_t)L_47, (int32_t)L_48))))))));
		goto IL_02f0;
	}

IL_0173:
	{
		V_6 = 0;
		List_1_t046427F3923444CF746C550FD96A3D0E4189D273 * L_49 = __this->get_entries_11();
		NullCheck(L_49);
		Enumerator_t4D01DB2C4CF53D79BD58A10640F59CBCF1354587  L_50 = List_1_GetEnumerator_mA457B3CB61E2B7BAFB0F7D0ADEFD25237B4429DF(L_49, /*hidden argument*/List_1_GetEnumerator_mA457B3CB61E2B7BAFB0F7D0ADEFD25237B4429DF_RuntimeMethod_var);
		V_8 = L_50;
	}

IL_0185:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0278;
		}

IL_018a:
		{
			GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * L_51 = Enumerator_get_Current_m9422C22943D0E9900CDB7DF407D9EBE215B2A6B6((Enumerator_t4D01DB2C4CF53D79BD58A10640F59CBCF1354587 *)(&V_8), /*hidden argument*/Enumerator_get_Current_m9422C22943D0E9900CDB7DF407D9EBE215B2A6B6_RuntimeMethod_var);
			V_7 = L_51;
			GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * L_52 = V_7;
			NullCheck(L_52);
			VirtActionInvoker0::Invoke(8 /* System.Void UnityEngine.GUILayoutEntry::CalcWidth() */, L_52);
			GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * L_53 = V_7;
			NullCheck(L_53);
			bool L_54 = L_53->get_consideredForMargin_7();
			if (!L_54)
			{
				goto IL_0239;
			}
		}

IL_01a7:
		{
			bool L_55 = V_3;
			if (L_55)
			{
				goto IL_01d1;
			}
		}

IL_01ae:
		{
			int32_t L_56 = V_6;
			GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * L_57 = V_7;
			NullCheck(L_57);
			int32_t L_58 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginLeft() */, L_57);
			if ((((int32_t)L_56) <= ((int32_t)L_58)))
			{
				goto IL_01c3;
			}
		}

IL_01bc:
		{
			int32_t L_59 = V_6;
			G_B22_0 = L_59;
			goto IL_01ca;
		}

IL_01c3:
		{
			GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * L_60 = V_7;
			NullCheck(L_60);
			int32_t L_61 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginLeft() */, L_60);
			G_B22_0 = L_61;
		}

IL_01ca:
		{
			V_9 = G_B22_0;
			goto IL_01d8;
		}

IL_01d1:
		{
			V_9 = 0;
			V_3 = (bool)0;
		}

IL_01d8:
		{
			float L_62 = __this->get_m_ChildMinWidth_23();
			GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * L_63 = V_7;
			NullCheck(L_63);
			float L_64 = L_63->get_minWidth_0();
			float L_65 = __this->get_spacing_14();
			int32_t L_66 = V_9;
			__this->set_m_ChildMinWidth_23(((float)il2cpp_codegen_add((float)L_62, (float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_64, (float)L_65)), (float)(((float)((float)L_66))))))));
			float L_67 = __this->get_m_ChildMaxWidth_24();
			GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * L_68 = V_7;
			NullCheck(L_68);
			float L_69 = L_68->get_maxWidth_1();
			float L_70 = __this->get_spacing_14();
			int32_t L_71 = V_9;
			__this->set_m_ChildMaxWidth_24(((float)il2cpp_codegen_add((float)L_67, (float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_69, (float)L_70)), (float)(((float)((float)L_71))))))));
			GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * L_72 = V_7;
			NullCheck(L_72);
			int32_t L_73 = VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginRight() */, L_72);
			V_6 = L_73;
			int32_t L_74 = __this->get_m_StretchableCountX_19();
			GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * L_75 = V_7;
			NullCheck(L_75);
			int32_t L_76 = L_75->get_stretchWidth_5();
			__this->set_m_StretchableCountX_19(((int32_t)il2cpp_codegen_add((int32_t)L_74, (int32_t)L_76)));
			goto IL_0277;
		}

IL_0239:
		{
			float L_77 = __this->get_m_ChildMinWidth_23();
			GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * L_78 = V_7;
			NullCheck(L_78);
			float L_79 = L_78->get_minWidth_0();
			__this->set_m_ChildMinWidth_23(((float)il2cpp_codegen_add((float)L_77, (float)L_79)));
			float L_80 = __this->get_m_ChildMaxWidth_24();
			GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * L_81 = V_7;
			NullCheck(L_81);
			float L_82 = L_81->get_maxWidth_1();
			__this->set_m_ChildMaxWidth_24(((float)il2cpp_codegen_add((float)L_80, (float)L_82)));
			int32_t L_83 = __this->get_m_StretchableCountX_19();
			GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * L_84 = V_7;
			NullCheck(L_84);
			int32_t L_85 = L_84->get_stretchWidth_5();
			__this->set_m_StretchableCountX_19(((int32_t)il2cpp_codegen_add((int32_t)L_83, (int32_t)L_85)));
		}

IL_0277:
		{
		}

IL_0278:
		{
			bool L_86 = Enumerator_MoveNext_m3A0A0A98E9378A32A74EC51C4CAB6C564001CAC7((Enumerator_t4D01DB2C4CF53D79BD58A10640F59CBCF1354587 *)(&V_8), /*hidden argument*/Enumerator_MoveNext_m3A0A0A98E9378A32A74EC51C4CAB6C564001CAC7_RuntimeMethod_var);
			if (L_86)
			{
				goto IL_018a;
			}
		}

IL_0284:
		{
			IL2CPP_LEAVE(0x297, FINALLY_0289);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0289;
	}

FINALLY_0289:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mC263356C16A1948C299607F9A77AAFAEB7C55A38((Enumerator_t4D01DB2C4CF53D79BD58A10640F59CBCF1354587 *)(&V_8), /*hidden argument*/Enumerator_Dispose_mC263356C16A1948C299607F9A77AAFAEB7C55A38_RuntimeMethod_var);
		IL2CPP_END_FINALLY(649)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(649)
	{
		IL2CPP_JUMP_TBL(0x297, IL_0297)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0297:
	{
		float L_87 = __this->get_m_ChildMinWidth_23();
		float L_88 = __this->get_spacing_14();
		__this->set_m_ChildMinWidth_23(((float)il2cpp_codegen_subtract((float)L_87, (float)L_88)));
		float L_89 = __this->get_m_ChildMaxWidth_24();
		float L_90 = __this->get_spacing_14();
		__this->set_m_ChildMaxWidth_24(((float)il2cpp_codegen_subtract((float)L_89, (float)L_90)));
		List_1_t046427F3923444CF746C550FD96A3D0E4189D273 * L_91 = __this->get_entries_11();
		NullCheck(L_91);
		int32_t L_92 = List_1_get_Count_m2995506A297520F84CBD9AD421D8672D5755E115(L_91, /*hidden argument*/List_1_get_Count_m2995506A297520F84CBD9AD421D8672D5755E115_RuntimeMethod_var);
		if (!L_92)
		{
			goto IL_02e9;
		}
	}
	{
		List_1_t046427F3923444CF746C550FD96A3D0E4189D273 * L_93 = __this->get_entries_11();
		NullCheck(L_93);
		GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * L_94 = List_1_get_Item_m96FCB482CBADC5AD4AD5F01B7A0B822AF619D388(L_93, 0, /*hidden argument*/List_1_get_Item_m96FCB482CBADC5AD4AD5F01B7A0B822AF619D388_RuntimeMethod_var);
		NullCheck(L_94);
		int32_t L_95 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginLeft() */, L_94);
		V_1 = L_95;
		int32_t L_96 = V_6;
		V_2 = L_96;
		goto IL_02ef;
	}

IL_02e9:
	{
		int32_t L_97 = 0;
		V_2 = L_97;
		V_1 = L_97;
	}

IL_02ef:
	{
	}

IL_02f0:
	{
		V_10 = (0.0f);
		V_11 = (0.0f);
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_98 = GUILayoutEntry_get_style_m70E386A3289ACFEC515B1358827AB2FBF6314BA4(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t671F175A201A19166385EE3392292A5F50070572_il2cpp_TypeInfo_var);
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_99 = GUIStyle_get_none_m2B48FA4E2FA2B9BB7A458DF25B1391F9C7BB8B7B(/*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(GUIStyle_t671F175A201A19166385EE3392292A5F50070572 *)L_98) == ((RuntimeObject*)(GUIStyle_t671F175A201A19166385EE3392292A5F50070572 *)L_99))))
		{
			goto IL_0319;
		}
	}
	{
		bool L_100 = __this->get_m_UserSpecifiedWidth_21();
		if (!L_100)
		{
			goto IL_0352;
		}
	}

IL_0319:
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_101 = GUILayoutEntry_get_style_m70E386A3289ACFEC515B1358827AB2FBF6314BA4(__this, /*hidden argument*/NULL);
		NullCheck(L_101);
		RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * L_102 = GUIStyle_get_padding_m5DF76AA03A313366D0DD8D577731DAC4FB83053A(L_101, /*hidden argument*/NULL);
		NullCheck(L_102);
		int32_t L_103 = RectOffset_get_left_mA86EC00866C1940134873E3A1565A1F700DE67AD(L_102, /*hidden argument*/NULL);
		int32_t L_104 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		int32_t L_105 = Mathf_Max_mBDE4C6F1883EE3215CD7AE62550B2AC90592BC3F(L_103, L_104, /*hidden argument*/NULL);
		V_10 = (((float)((float)L_105)));
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_106 = GUILayoutEntry_get_style_m70E386A3289ACFEC515B1358827AB2FBF6314BA4(__this, /*hidden argument*/NULL);
		NullCheck(L_106);
		RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * L_107 = GUIStyle_get_padding_m5DF76AA03A313366D0DD8D577731DAC4FB83053A(L_106, /*hidden argument*/NULL);
		NullCheck(L_107);
		int32_t L_108 = RectOffset_get_right_m9B05958C3C1B31F1FAB8675834A492C7208F6C96(L_107, /*hidden argument*/NULL);
		int32_t L_109 = V_2;
		int32_t L_110 = Mathf_Max_mBDE4C6F1883EE3215CD7AE62550B2AC90592BC3F(L_108, L_109, /*hidden argument*/NULL);
		V_11 = (((float)((float)L_110)));
		goto IL_036c;
	}

IL_0352:
	{
		int32_t L_111 = V_1;
		__this->set_m_MarginLeft_27(L_111);
		int32_t L_112 = V_2;
		__this->set_m_MarginRight_28(L_112);
		float L_113 = (0.0f);
		V_11 = L_113;
		V_10 = L_113;
	}

IL_036c:
	{
		float L_114 = ((GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 *)__this)->get_minWidth_0();
		float L_115 = __this->get_m_ChildMinWidth_23();
		float L_116 = V_10;
		float L_117 = V_11;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_118 = Mathf_Max_m670AE0EC1B09ED1A56FF9606B0F954670319CB65(L_114, ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_115, (float)L_116)), (float)L_117)), /*hidden argument*/NULL);
		((GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 *)__this)->set_minWidth_0(L_118);
		float L_119 = ((GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 *)__this)->get_maxWidth_1();
		if ((!(((float)L_119) == ((float)(0.0f)))))
		{
			goto IL_03dd;
		}
	}
	{
		int32_t L_120 = ((GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 *)__this)->get_stretchWidth_5();
		int32_t L_121 = __this->get_m_StretchableCountX_19();
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_122 = GUILayoutEntry_get_style_m70E386A3289ACFEC515B1358827AB2FBF6314BA4(__this, /*hidden argument*/NULL);
		NullCheck(L_122);
		bool L_123 = GUIStyle_get_stretchWidth_m4513B313AABE48E1D10424844DC186405BC8A677(L_122, /*hidden argument*/NULL);
		G_B40_0 = L_121;
		G_B40_1 = L_120;
		G_B40_2 = __this;
		if (!L_123)
		{
			G_B41_0 = L_121;
			G_B41_1 = L_120;
			G_B41_2 = __this;
			goto IL_03bd;
		}
	}
	{
		G_B42_0 = 1;
		G_B42_1 = G_B40_0;
		G_B42_2 = G_B40_1;
		G_B42_3 = G_B40_2;
		goto IL_03be;
	}

IL_03bd:
	{
		G_B42_0 = 0;
		G_B42_1 = G_B41_0;
		G_B42_2 = G_B41_1;
		G_B42_3 = G_B41_2;
	}

IL_03be:
	{
		NullCheck(G_B42_3);
		((GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 *)G_B42_3)->set_stretchWidth_5(((int32_t)il2cpp_codegen_add((int32_t)G_B42_2, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)G_B42_1, (int32_t)G_B42_0)))));
		float L_124 = __this->get_m_ChildMaxWidth_24();
		float L_125 = V_10;
		float L_126 = V_11;
		((GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 *)__this)->set_maxWidth_1(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_124, (float)L_125)), (float)L_126)));
		goto IL_03e6;
	}

IL_03dd:
	{
		((GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 *)__this)->set_stretchWidth_5(0);
	}

IL_03e6:
	{
		float L_127 = ((GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 *)__this)->get_maxWidth_1();
		float L_128 = ((GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 *)__this)->get_minWidth_0();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_129 = Mathf_Max_m670AE0EC1B09ED1A56FF9606B0F954670319CB65(L_127, L_128, /*hidden argument*/NULL);
		((GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 *)__this)->set_maxWidth_1(L_129);
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_130 = GUILayoutEntry_get_style_m70E386A3289ACFEC515B1358827AB2FBF6314BA4(__this, /*hidden argument*/NULL);
		NullCheck(L_130);
		float L_131 = GUIStyle_get_fixedWidth_mEACB70758F83DCD64CE363143849CC40E49B8D8D(L_130, /*hidden argument*/NULL);
		if ((((float)L_131) == ((float)(0.0f))))
		{
			goto IL_0435;
		}
	}
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_132 = GUILayoutEntry_get_style_m70E386A3289ACFEC515B1358827AB2FBF6314BA4(__this, /*hidden argument*/NULL);
		NullCheck(L_132);
		float L_133 = GUIStyle_get_fixedWidth_mEACB70758F83DCD64CE363143849CC40E49B8D8D(L_132, /*hidden argument*/NULL);
		float L_134 = L_133;
		V_0 = L_134;
		((GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 *)__this)->set_minWidth_0(L_134);
		float L_135 = V_0;
		((GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 *)__this)->set_maxWidth_1(L_135);
		((GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 *)__this)->set_stretchWidth_5(0);
	}

IL_0435:
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutGroup::SetHorizontal(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void GUILayoutGroup_SetHorizontal_m0AFB617E7BB6B32431BA65873B27660E6E5C9E51 (GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * __this, float ___x0, float ___width1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUILayoutGroup_SetHorizontal_m0AFB617E7BB6B32431BA65873B27660E6E5C9E51_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * V_0 = NULL;
	GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * V_1 = NULL;
	Enumerator_t4D01DB2C4CF53D79BD58A10640F59CBCF1354587  V_2;
	memset(&V_2, 0, sizeof(V_2));
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * V_8 = NULL;
	Enumerator_t4D01DB2C4CF53D79BD58A10640F59CBCF1354587  V_9;
	memset(&V_9, 0, sizeof(V_9));
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	float V_13 = 0.0f;
	float V_14 = 0.0f;
	int32_t V_15 = 0;
	bool V_16 = false;
	GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * V_17 = NULL;
	Enumerator_t4D01DB2C4CF53D79BD58A10640F59CBCF1354587  V_18;
	memset(&V_18, 0, sizeof(V_18));
	float V_19 = 0.0f;
	int32_t V_20 = 0;
	int32_t V_21 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B43_0 = 0;
	{
		float L_0 = ___x0;
		float L_1 = ___width1;
		GUILayoutEntry_SetHorizontal_m46A5D9344EE72AF9AA7D07C77C30745F9FE97DE8(__this, L_0, L_1, /*hidden argument*/NULL);
		bool L_2 = __this->get_resetCoords_13();
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		___x0 = (0.0f);
	}

IL_001b:
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_3 = GUILayoutEntry_get_style_m70E386A3289ACFEC515B1358827AB2FBF6314BA4(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * L_4 = GUIStyle_get_padding_m5DF76AA03A313366D0DD8D577731DAC4FB83053A(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		bool L_5 = __this->get_isVertical_12();
		if (!L_5)
		{
			goto IL_01a5;
		}
	}
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_6 = GUILayoutEntry_get_style_m70E386A3289ACFEC515B1358827AB2FBF6314BA4(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t671F175A201A19166385EE3392292A5F50070572_il2cpp_TypeInfo_var);
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_7 = GUIStyle_get_none_m2B48FA4E2FA2B9BB7A458DF25B1391F9C7BB8B7B(/*hidden argument*/NULL);
		if ((((RuntimeObject*)(GUIStyle_t671F175A201A19166385EE3392292A5F50070572 *)L_6) == ((RuntimeObject*)(GUIStyle_t671F175A201A19166385EE3392292A5F50070572 *)L_7)))
		{
			goto IL_00ea;
		}
	}
	{
		List_1_t046427F3923444CF746C550FD96A3D0E4189D273 * L_8 = __this->get_entries_11();
		NullCheck(L_8);
		Enumerator_t4D01DB2C4CF53D79BD58A10640F59CBCF1354587  L_9 = List_1_GetEnumerator_mA457B3CB61E2B7BAFB0F7D0ADEFD25237B4429DF(L_8, /*hidden argument*/List_1_GetEnumerator_mA457B3CB61E2B7BAFB0F7D0ADEFD25237B4429DF_RuntimeMethod_var);
		V_2 = L_9;
	}

IL_0051:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00c5;
		}

IL_0056:
		{
			GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * L_10 = Enumerator_get_Current_m9422C22943D0E9900CDB7DF407D9EBE215B2A6B6((Enumerator_t4D01DB2C4CF53D79BD58A10640F59CBCF1354587 *)(&V_2), /*hidden argument*/Enumerator_get_Current_m9422C22943D0E9900CDB7DF407D9EBE215B2A6B6_RuntimeMethod_var);
			V_1 = L_10;
			GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * L_11 = V_1;
			NullCheck(L_11);
			int32_t L_12 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginLeft() */, L_11);
			RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * L_13 = V_0;
			NullCheck(L_13);
			int32_t L_14 = RectOffset_get_left_mA86EC00866C1940134873E3A1565A1F700DE67AD(L_13, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
			int32_t L_15 = Mathf_Max_mBDE4C6F1883EE3215CD7AE62550B2AC90592BC3F(L_12, L_14, /*hidden argument*/NULL);
			V_3 = (((float)((float)L_15)));
			float L_16 = ___x0;
			float L_17 = V_3;
			V_4 = ((float)il2cpp_codegen_add((float)L_16, (float)L_17));
			float L_18 = ___width1;
			GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * L_19 = V_1;
			NullCheck(L_19);
			int32_t L_20 = VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginRight() */, L_19);
			RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * L_21 = V_0;
			NullCheck(L_21);
			int32_t L_22 = RectOffset_get_right_m9B05958C3C1B31F1FAB8675834A492C7208F6C96(L_21, /*hidden argument*/NULL);
			int32_t L_23 = Mathf_Max_mBDE4C6F1883EE3215CD7AE62550B2AC90592BC3F(L_20, L_22, /*hidden argument*/NULL);
			float L_24 = V_3;
			V_5 = ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_subtract((float)L_18, (float)(((float)((float)L_23))))), (float)L_24));
			GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * L_25 = V_1;
			NullCheck(L_25);
			int32_t L_26 = L_25->get_stretchWidth_5();
			if (!L_26)
			{
				goto IL_00a9;
			}
		}

IL_009a:
		{
			GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * L_27 = V_1;
			float L_28 = V_4;
			float L_29 = V_5;
			NullCheck(L_27);
			VirtActionInvoker2< float, float >::Invoke(10 /* System.Void UnityEngine.GUILayoutEntry::SetHorizontal(System.Single,System.Single) */, L_27, L_28, L_29);
			goto IL_00c4;
		}

IL_00a9:
		{
			GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * L_30 = V_1;
			float L_31 = V_4;
			float L_32 = V_5;
			GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * L_33 = V_1;
			NullCheck(L_33);
			float L_34 = L_33->get_minWidth_0();
			GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * L_35 = V_1;
			NullCheck(L_35);
			float L_36 = L_35->get_maxWidth_1();
			IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
			float L_37 = Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507(L_32, L_34, L_36, /*hidden argument*/NULL);
			NullCheck(L_30);
			VirtActionInvoker2< float, float >::Invoke(10 /* System.Void UnityEngine.GUILayoutEntry::SetHorizontal(System.Single,System.Single) */, L_30, L_31, L_37);
		}

IL_00c4:
		{
		}

IL_00c5:
		{
			bool L_38 = Enumerator_MoveNext_m3A0A0A98E9378A32A74EC51C4CAB6C564001CAC7((Enumerator_t4D01DB2C4CF53D79BD58A10640F59CBCF1354587 *)(&V_2), /*hidden argument*/Enumerator_MoveNext_m3A0A0A98E9378A32A74EC51C4CAB6C564001CAC7_RuntimeMethod_var);
			if (L_38)
			{
				goto IL_0056;
			}
		}

IL_00d1:
		{
			IL2CPP_LEAVE(0xE4, FINALLY_00d6);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00d6;
	}

FINALLY_00d6:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mC263356C16A1948C299607F9A77AAFAEB7C55A38((Enumerator_t4D01DB2C4CF53D79BD58A10640F59CBCF1354587 *)(&V_2), /*hidden argument*/Enumerator_Dispose_mC263356C16A1948C299607F9A77AAFAEB7C55A38_RuntimeMethod_var);
		IL2CPP_END_FINALLY(214)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(214)
	{
		IL2CPP_JUMP_TBL(0xE4, IL_00e4)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00e4:
	{
		goto IL_019f;
	}

IL_00ea:
	{
		float L_39 = ___x0;
		int32_t L_40 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginLeft() */, __this);
		V_6 = ((float)il2cpp_codegen_subtract((float)L_39, (float)(((float)((float)L_40)))));
		float L_41 = ___width1;
		int32_t L_42 = GUILayoutEntry_get_marginHorizontal_m1FB1B936E7C702BAD92FE4CA1EEC529A2BECCEC4(__this, /*hidden argument*/NULL);
		V_7 = ((float)il2cpp_codegen_add((float)L_41, (float)(((float)((float)L_42)))));
		List_1_t046427F3923444CF746C550FD96A3D0E4189D273 * L_43 = __this->get_entries_11();
		NullCheck(L_43);
		Enumerator_t4D01DB2C4CF53D79BD58A10640F59CBCF1354587  L_44 = List_1_GetEnumerator_mA457B3CB61E2B7BAFB0F7D0ADEFD25237B4429DF(L_43, /*hidden argument*/List_1_GetEnumerator_mA457B3CB61E2B7BAFB0F7D0ADEFD25237B4429DF_RuntimeMethod_var);
		V_9 = L_44;
	}

IL_010f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_017f;
		}

IL_0114:
		{
			GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * L_45 = Enumerator_get_Current_m9422C22943D0E9900CDB7DF407D9EBE215B2A6B6((Enumerator_t4D01DB2C4CF53D79BD58A10640F59CBCF1354587 *)(&V_9), /*hidden argument*/Enumerator_get_Current_m9422C22943D0E9900CDB7DF407D9EBE215B2A6B6_RuntimeMethod_var);
			V_8 = L_45;
			GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * L_46 = V_8;
			NullCheck(L_46);
			int32_t L_47 = L_46->get_stretchWidth_5();
			if (!L_47)
			{
				goto IL_014e;
			}
		}

IL_012a:
		{
			GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * L_48 = V_8;
			float L_49 = V_6;
			GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * L_50 = V_8;
			NullCheck(L_50);
			int32_t L_51 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginLeft() */, L_50);
			float L_52 = V_7;
			GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * L_53 = V_8;
			NullCheck(L_53);
			int32_t L_54 = GUILayoutEntry_get_marginHorizontal_m1FB1B936E7C702BAD92FE4CA1EEC529A2BECCEC4(L_53, /*hidden argument*/NULL);
			NullCheck(L_48);
			VirtActionInvoker2< float, float >::Invoke(10 /* System.Void UnityEngine.GUILayoutEntry::SetHorizontal(System.Single,System.Single) */, L_48, ((float)il2cpp_codegen_add((float)L_49, (float)(((float)((float)L_51))))), ((float)il2cpp_codegen_subtract((float)L_52, (float)(((float)((float)L_54))))));
			goto IL_017e;
		}

IL_014e:
		{
			GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * L_55 = V_8;
			float L_56 = V_6;
			GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * L_57 = V_8;
			NullCheck(L_57);
			int32_t L_58 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginLeft() */, L_57);
			float L_59 = V_7;
			GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * L_60 = V_8;
			NullCheck(L_60);
			int32_t L_61 = GUILayoutEntry_get_marginHorizontal_m1FB1B936E7C702BAD92FE4CA1EEC529A2BECCEC4(L_60, /*hidden argument*/NULL);
			GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * L_62 = V_8;
			NullCheck(L_62);
			float L_63 = L_62->get_minWidth_0();
			GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * L_64 = V_8;
			NullCheck(L_64);
			float L_65 = L_64->get_maxWidth_1();
			IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
			float L_66 = Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507(((float)il2cpp_codegen_subtract((float)L_59, (float)(((float)((float)L_61))))), L_63, L_65, /*hidden argument*/NULL);
			NullCheck(L_55);
			VirtActionInvoker2< float, float >::Invoke(10 /* System.Void UnityEngine.GUILayoutEntry::SetHorizontal(System.Single,System.Single) */, L_55, ((float)il2cpp_codegen_add((float)L_56, (float)(((float)((float)L_58))))), L_66);
		}

IL_017e:
		{
		}

IL_017f:
		{
			bool L_67 = Enumerator_MoveNext_m3A0A0A98E9378A32A74EC51C4CAB6C564001CAC7((Enumerator_t4D01DB2C4CF53D79BD58A10640F59CBCF1354587 *)(&V_9), /*hidden argument*/Enumerator_MoveNext_m3A0A0A98E9378A32A74EC51C4CAB6C564001CAC7_RuntimeMethod_var);
			if (L_67)
			{
				goto IL_0114;
			}
		}

IL_018b:
		{
			IL2CPP_LEAVE(0x19E, FINALLY_0190);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0190;
	}

FINALLY_0190:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mC263356C16A1948C299607F9A77AAFAEB7C55A38((Enumerator_t4D01DB2C4CF53D79BD58A10640F59CBCF1354587 *)(&V_9), /*hidden argument*/Enumerator_Dispose_mC263356C16A1948C299607F9A77AAFAEB7C55A38_RuntimeMethod_var);
		IL2CPP_END_FINALLY(400)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(400)
	{
		IL2CPP_JUMP_TBL(0x19E, IL_019e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_019e:
	{
	}

IL_019f:
	{
		goto IL_0393;
	}

IL_01a5:
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_68 = GUILayoutEntry_get_style_m70E386A3289ACFEC515B1358827AB2FBF6314BA4(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t671F175A201A19166385EE3392292A5F50070572_il2cpp_TypeInfo_var);
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_69 = GUIStyle_get_none_m2B48FA4E2FA2B9BB7A458DF25B1391F9C7BB8B7B(/*hidden argument*/NULL);
		if ((((RuntimeObject*)(GUIStyle_t671F175A201A19166385EE3392292A5F50070572 *)L_68) == ((RuntimeObject*)(GUIStyle_t671F175A201A19166385EE3392292A5F50070572 *)L_69)))
		{
			goto IL_022d;
		}
	}
	{
		RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * L_70 = V_0;
		NullCheck(L_70);
		int32_t L_71 = RectOffset_get_left_mA86EC00866C1940134873E3A1565A1F700DE67AD(L_70, /*hidden argument*/NULL);
		V_10 = (((float)((float)L_71)));
		RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * L_72 = V_0;
		NullCheck(L_72);
		int32_t L_73 = RectOffset_get_right_m9B05958C3C1B31F1FAB8675834A492C7208F6C96(L_72, /*hidden argument*/NULL);
		V_11 = (((float)((float)L_73)));
		List_1_t046427F3923444CF746C550FD96A3D0E4189D273 * L_74 = __this->get_entries_11();
		NullCheck(L_74);
		int32_t L_75 = List_1_get_Count_m2995506A297520F84CBD9AD421D8672D5755E115(L_74, /*hidden argument*/List_1_get_Count_m2995506A297520F84CBD9AD421D8672D5755E115_RuntimeMethod_var);
		if (!L_75)
		{
			goto IL_021d;
		}
	}
	{
		float L_76 = V_10;
		List_1_t046427F3923444CF746C550FD96A3D0E4189D273 * L_77 = __this->get_entries_11();
		NullCheck(L_77);
		GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * L_78 = List_1_get_Item_m96FCB482CBADC5AD4AD5F01B7A0B822AF619D388(L_77, 0, /*hidden argument*/List_1_get_Item_m96FCB482CBADC5AD4AD5F01B7A0B822AF619D388_RuntimeMethod_var);
		NullCheck(L_78);
		int32_t L_79 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginLeft() */, L_78);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_80 = Mathf_Max_m670AE0EC1B09ED1A56FF9606B0F954670319CB65(L_76, (((float)((float)L_79))), /*hidden argument*/NULL);
		V_10 = L_80;
		float L_81 = V_11;
		List_1_t046427F3923444CF746C550FD96A3D0E4189D273 * L_82 = __this->get_entries_11();
		List_1_t046427F3923444CF746C550FD96A3D0E4189D273 * L_83 = __this->get_entries_11();
		NullCheck(L_83);
		int32_t L_84 = List_1_get_Count_m2995506A297520F84CBD9AD421D8672D5755E115(L_83, /*hidden argument*/List_1_get_Count_m2995506A297520F84CBD9AD421D8672D5755E115_RuntimeMethod_var);
		NullCheck(L_82);
		GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * L_85 = List_1_get_Item_m96FCB482CBADC5AD4AD5F01B7A0B822AF619D388(L_82, ((int32_t)il2cpp_codegen_subtract((int32_t)L_84, (int32_t)1)), /*hidden argument*/List_1_get_Item_m96FCB482CBADC5AD4AD5F01B7A0B822AF619D388_RuntimeMethod_var);
		NullCheck(L_85);
		int32_t L_86 = VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginRight() */, L_85);
		float L_87 = Mathf_Max_m670AE0EC1B09ED1A56FF9606B0F954670319CB65(L_81, (((float)((float)L_86))), /*hidden argument*/NULL);
		V_11 = L_87;
	}

IL_021d:
	{
		float L_88 = ___x0;
		float L_89 = V_10;
		___x0 = ((float)il2cpp_codegen_add((float)L_88, (float)L_89));
		float L_90 = ___width1;
		float L_91 = V_11;
		float L_92 = V_10;
		___width1 = ((float)il2cpp_codegen_subtract((float)L_90, (float)((float)il2cpp_codegen_add((float)L_91, (float)L_92))));
	}

IL_022d:
	{
		float L_93 = ___width1;
		float L_94 = __this->get_spacing_14();
		List_1_t046427F3923444CF746C550FD96A3D0E4189D273 * L_95 = __this->get_entries_11();
		NullCheck(L_95);
		int32_t L_96 = List_1_get_Count_m2995506A297520F84CBD9AD421D8672D5755E115(L_95, /*hidden argument*/List_1_get_Count_m2995506A297520F84CBD9AD421D8672D5755E115_RuntimeMethod_var);
		V_12 = ((float)il2cpp_codegen_subtract((float)L_93, (float)((float)il2cpp_codegen_multiply((float)L_94, (float)(((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_96, (int32_t)1)))))))));
		V_13 = (0.0f);
		float L_97 = __this->get_m_ChildMinWidth_23();
		float L_98 = __this->get_m_ChildMaxWidth_24();
		if ((((float)L_97) == ((float)L_98)))
		{
			goto IL_0286;
		}
	}
	{
		float L_99 = V_12;
		float L_100 = __this->get_m_ChildMinWidth_23();
		float L_101 = __this->get_m_ChildMaxWidth_24();
		float L_102 = __this->get_m_ChildMinWidth_23();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_103 = Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507(((float)((float)((float)il2cpp_codegen_subtract((float)L_99, (float)L_100))/(float)((float)il2cpp_codegen_subtract((float)L_101, (float)L_102)))), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_13 = L_103;
	}

IL_0286:
	{
		V_14 = (0.0f);
		float L_104 = V_12;
		float L_105 = __this->get_m_ChildMaxWidth_24();
		if ((!(((float)L_104) > ((float)L_105))))
		{
			goto IL_02bd;
		}
	}
	{
		int32_t L_106 = __this->get_m_StretchableCountX_19();
		if ((((int32_t)L_106) <= ((int32_t)0)))
		{
			goto IL_02bc;
		}
	}
	{
		float L_107 = V_12;
		float L_108 = __this->get_m_ChildMaxWidth_24();
		int32_t L_109 = __this->get_m_StretchableCountX_19();
		V_14 = ((float)((float)((float)il2cpp_codegen_subtract((float)L_107, (float)L_108))/(float)(((float)((float)L_109)))));
	}

IL_02bc:
	{
	}

IL_02bd:
	{
		V_15 = 0;
		V_16 = (bool)1;
		List_1_t046427F3923444CF746C550FD96A3D0E4189D273 * L_110 = __this->get_entries_11();
		NullCheck(L_110);
		Enumerator_t4D01DB2C4CF53D79BD58A10640F59CBCF1354587  L_111 = List_1_GetEnumerator_mA457B3CB61E2B7BAFB0F7D0ADEFD25237B4429DF(L_110, /*hidden argument*/List_1_GetEnumerator_mA457B3CB61E2B7BAFB0F7D0ADEFD25237B4429DF_RuntimeMethod_var);
		V_18 = L_111;
	}

IL_02d1:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0373;
		}

IL_02d6:
		{
			GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * L_112 = Enumerator_get_Current_m9422C22943D0E9900CDB7DF407D9EBE215B2A6B6((Enumerator_t4D01DB2C4CF53D79BD58A10640F59CBCF1354587 *)(&V_18), /*hidden argument*/Enumerator_get_Current_m9422C22943D0E9900CDB7DF407D9EBE215B2A6B6_RuntimeMethod_var);
			V_17 = L_112;
			GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * L_113 = V_17;
			NullCheck(L_113);
			float L_114 = L_113->get_minWidth_0();
			GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * L_115 = V_17;
			NullCheck(L_115);
			float L_116 = L_115->get_maxWidth_1();
			float L_117 = V_13;
			IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
			float L_118 = Mathf_Lerp_m9A74C5A0C37D0CDF45EE66E7774D12A9B93B1364(L_114, L_116, L_117, /*hidden argument*/NULL);
			V_19 = L_118;
			float L_119 = V_19;
			float L_120 = V_14;
			GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * L_121 = V_17;
			NullCheck(L_121);
			int32_t L_122 = L_121->get_stretchWidth_5();
			V_19 = ((float)il2cpp_codegen_add((float)L_119, (float)((float)il2cpp_codegen_multiply((float)L_120, (float)(((float)((float)L_122)))))));
			GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * L_123 = V_17;
			NullCheck(L_123);
			bool L_124 = L_123->get_consideredForMargin_7();
			if (!L_124)
			{
				goto IL_0351;
			}
		}

IL_0313:
		{
			GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * L_125 = V_17;
			NullCheck(L_125);
			int32_t L_126 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginLeft() */, L_125);
			V_20 = L_126;
			bool L_127 = V_16;
			if (!L_127)
			{
				goto IL_032c;
			}
		}

IL_0324:
		{
			V_20 = 0;
			V_16 = (bool)0;
		}

IL_032c:
		{
			int32_t L_128 = V_15;
			int32_t L_129 = V_20;
			if ((((int32_t)L_128) <= ((int32_t)L_129)))
			{
				goto IL_033c;
			}
		}

IL_0335:
		{
			int32_t L_130 = V_15;
			G_B43_0 = L_130;
			goto IL_033e;
		}

IL_033c:
		{
			int32_t L_131 = V_20;
			G_B43_0 = L_131;
		}

IL_033e:
		{
			V_21 = G_B43_0;
			float L_132 = ___x0;
			int32_t L_133 = V_21;
			___x0 = ((float)il2cpp_codegen_add((float)L_132, (float)(((float)((float)L_133)))));
			GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * L_134 = V_17;
			NullCheck(L_134);
			int32_t L_135 = VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginRight() */, L_134);
			V_15 = L_135;
		}

IL_0351:
		{
			GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * L_136 = V_17;
			float L_137 = ___x0;
			IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
			float L_138 = bankers_roundf(L_137);
			float L_139 = V_19;
			float L_140 = bankers_roundf(L_139);
			NullCheck(L_136);
			VirtActionInvoker2< float, float >::Invoke(10 /* System.Void UnityEngine.GUILayoutEntry::SetHorizontal(System.Single,System.Single) */, L_136, L_138, L_140);
			float L_141 = ___x0;
			float L_142 = V_19;
			float L_143 = __this->get_spacing_14();
			___x0 = ((float)il2cpp_codegen_add((float)L_141, (float)((float)il2cpp_codegen_add((float)L_142, (float)L_143))));
		}

IL_0373:
		{
			bool L_144 = Enumerator_MoveNext_m3A0A0A98E9378A32A74EC51C4CAB6C564001CAC7((Enumerator_t4D01DB2C4CF53D79BD58A10640F59CBCF1354587 *)(&V_18), /*hidden argument*/Enumerator_MoveNext_m3A0A0A98E9378A32A74EC51C4CAB6C564001CAC7_RuntimeMethod_var);
			if (L_144)
			{
				goto IL_02d6;
			}
		}

IL_037f:
		{
			IL2CPP_LEAVE(0x392, FINALLY_0384);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0384;
	}

FINALLY_0384:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mC263356C16A1948C299607F9A77AAFAEB7C55A38((Enumerator_t4D01DB2C4CF53D79BD58A10640F59CBCF1354587 *)(&V_18), /*hidden argument*/Enumerator_Dispose_mC263356C16A1948C299607F9A77AAFAEB7C55A38_RuntimeMethod_var);
		IL2CPP_END_FINALLY(900)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(900)
	{
		IL2CPP_JUMP_TBL(0x392, IL_0392)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0392:
	{
	}

IL_0393:
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutGroup::CalcHeight()
extern "C" IL2CPP_METHOD_ATTR void GUILayoutGroup_CalcHeight_m0511BD2172BC13D54ABC8DB5887A91C17E9F21BB (GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUILayoutGroup_CalcHeight_m0511BD2172BC13D54ABC8DB5887A91C17E9F21BB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * V_5 = NULL;
	Enumerator_t4D01DB2C4CF53D79BD58A10640F59CBCF1354587  V_6;
	memset(&V_6, 0, sizeof(V_6));
	int32_t V_7 = 0;
	bool V_8 = false;
	GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * V_9 = NULL;
	Enumerator_t4D01DB2C4CF53D79BD58A10640F59CBCF1354587  V_10;
	memset(&V_10, 0, sizeof(V_10));
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B38_0 = 0;
	int32_t G_B38_1 = 0;
	GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * G_B38_2 = NULL;
	int32_t G_B37_0 = 0;
	int32_t G_B37_1 = 0;
	GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * G_B37_2 = NULL;
	int32_t G_B39_0 = 0;
	int32_t G_B39_1 = 0;
	int32_t G_B39_2 = 0;
	GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * G_B39_3 = NULL;
	{
		List_1_t046427F3923444CF746C550FD96A3D0E4189D273 * L_0 = __this->get_entries_11();
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_m2995506A297520F84CBD9AD421D8672D5755E115(L_0, /*hidden argument*/List_1_get_Count_m2995506A297520F84CBD9AD421D8672D5755E115_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0037;
		}
	}
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_2 = GUILayoutEntry_get_style_m70E386A3289ACFEC515B1358827AB2FBF6314BA4(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * L_3 = GUIStyle_get_padding_m5DF76AA03A313366D0DD8D577731DAC4FB83053A(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4 = RectOffset_get_vertical_m89ED337C8D303C8994B2B056C05368E4286CFC5E(L_3, /*hidden argument*/NULL);
		float L_5 = (((float)((float)L_4)));
		V_0 = L_5;
		((GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 *)__this)->set_minHeight_2(L_5);
		float L_6 = V_0;
		((GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 *)__this)->set_maxHeight_3(L_6);
		goto IL_03f7;
	}

IL_0037:
	{
		V_1 = 0;
		V_2 = 0;
		__this->set_m_ChildMinHeight_25((0.0f));
		__this->set_m_ChildMaxHeight_26((0.0f));
		__this->set_m_StretchableCountY_20(0);
		bool L_7 = __this->get_isVertical_12();
		if (!L_7)
		{
			goto IL_01d8;
		}
	}
	{
		V_3 = 0;
		V_4 = (bool)1;
		List_1_t046427F3923444CF746C550FD96A3D0E4189D273 * L_8 = __this->get_entries_11();
		NullCheck(L_8);
		Enumerator_t4D01DB2C4CF53D79BD58A10640F59CBCF1354587  L_9 = List_1_GetEnumerator_mA457B3CB61E2B7BAFB0F7D0ADEFD25237B4429DF(L_8, /*hidden argument*/List_1_GetEnumerator_mA457B3CB61E2B7BAFB0F7D0ADEFD25237B4429DF_RuntimeMethod_var);
		V_6 = L_9;
	}

IL_0077:
	try
	{ // begin try (depth: 1)
		{
			goto IL_015c;
		}

IL_007c:
		{
			GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * L_10 = Enumerator_get_Current_m9422C22943D0E9900CDB7DF407D9EBE215B2A6B6((Enumerator_t4D01DB2C4CF53D79BD58A10640F59CBCF1354587 *)(&V_6), /*hidden argument*/Enumerator_get_Current_m9422C22943D0E9900CDB7DF407D9EBE215B2A6B6_RuntimeMethod_var);
			V_5 = L_10;
			GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * L_11 = V_5;
			NullCheck(L_11);
			VirtActionInvoker0::Invoke(9 /* System.Void UnityEngine.GUILayoutEntry::CalcHeight() */, L_11);
			GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * L_12 = V_5;
			NullCheck(L_12);
			bool L_13 = L_12->get_consideredForMargin_7();
			if (!L_13)
			{
				goto IL_011d;
			}
		}

IL_0099:
		{
			bool L_14 = V_4;
			if (L_14)
			{
				goto IL_00b5;
			}
		}

IL_00a1:
		{
			int32_t L_15 = V_3;
			GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * L_16 = V_5;
			NullCheck(L_16);
			int32_t L_17 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginTop() */, L_16);
			IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
			int32_t L_18 = Mathf_Max_mBDE4C6F1883EE3215CD7AE62550B2AC90592BC3F(L_15, L_17, /*hidden argument*/NULL);
			V_7 = L_18;
			goto IL_00bd;
		}

IL_00b5:
		{
			V_7 = 0;
			V_4 = (bool)0;
		}

IL_00bd:
		{
			float L_19 = __this->get_m_ChildMinHeight_25();
			GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * L_20 = V_5;
			NullCheck(L_20);
			float L_21 = L_20->get_minHeight_2();
			float L_22 = __this->get_spacing_14();
			int32_t L_23 = V_7;
			__this->set_m_ChildMinHeight_25(((float)il2cpp_codegen_add((float)L_19, (float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_21, (float)L_22)), (float)(((float)((float)L_23))))))));
			float L_24 = __this->get_m_ChildMaxHeight_26();
			GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * L_25 = V_5;
			NullCheck(L_25);
			float L_26 = L_25->get_maxHeight_3();
			float L_27 = __this->get_spacing_14();
			int32_t L_28 = V_7;
			__this->set_m_ChildMaxHeight_26(((float)il2cpp_codegen_add((float)L_24, (float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_26, (float)L_27)), (float)(((float)((float)L_28))))))));
			GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * L_29 = V_5;
			NullCheck(L_29);
			int32_t L_30 = VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginBottom() */, L_29);
			V_3 = L_30;
			int32_t L_31 = __this->get_m_StretchableCountY_20();
			GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * L_32 = V_5;
			NullCheck(L_32);
			int32_t L_33 = L_32->get_stretchHeight_6();
			__this->set_m_StretchableCountY_20(((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)L_33)));
			goto IL_015b;
		}

IL_011d:
		{
			float L_34 = __this->get_m_ChildMinHeight_25();
			GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * L_35 = V_5;
			NullCheck(L_35);
			float L_36 = L_35->get_minHeight_2();
			__this->set_m_ChildMinHeight_25(((float)il2cpp_codegen_add((float)L_34, (float)L_36)));
			float L_37 = __this->get_m_ChildMaxHeight_26();
			GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * L_38 = V_5;
			NullCheck(L_38);
			float L_39 = L_38->get_maxHeight_3();
			__this->set_m_ChildMaxHeight_26(((float)il2cpp_codegen_add((float)L_37, (float)L_39)));
			int32_t L_40 = __this->get_m_StretchableCountY_20();
			GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * L_41 = V_5;
			NullCheck(L_41);
			int32_t L_42 = L_41->get_stretchHeight_6();
			__this->set_m_StretchableCountY_20(((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)L_42)));
		}

IL_015b:
		{
		}

IL_015c:
		{
			bool L_43 = Enumerator_MoveNext_m3A0A0A98E9378A32A74EC51C4CAB6C564001CAC7((Enumerator_t4D01DB2C4CF53D79BD58A10640F59CBCF1354587 *)(&V_6), /*hidden argument*/Enumerator_MoveNext_m3A0A0A98E9378A32A74EC51C4CAB6C564001CAC7_RuntimeMethod_var);
			if (L_43)
			{
				goto IL_007c;
			}
		}

IL_0168:
		{
			IL2CPP_LEAVE(0x17B, FINALLY_016d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_016d;
	}

FINALLY_016d:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mC263356C16A1948C299607F9A77AAFAEB7C55A38((Enumerator_t4D01DB2C4CF53D79BD58A10640F59CBCF1354587 *)(&V_6), /*hidden argument*/Enumerator_Dispose_mC263356C16A1948C299607F9A77AAFAEB7C55A38_RuntimeMethod_var);
		IL2CPP_END_FINALLY(365)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(365)
	{
		IL2CPP_JUMP_TBL(0x17B, IL_017b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_017b:
	{
		float L_44 = __this->get_m_ChildMinHeight_25();
		float L_45 = __this->get_spacing_14();
		__this->set_m_ChildMinHeight_25(((float)il2cpp_codegen_subtract((float)L_44, (float)L_45)));
		float L_46 = __this->get_m_ChildMaxHeight_26();
		float L_47 = __this->get_spacing_14();
		__this->set_m_ChildMaxHeight_26(((float)il2cpp_codegen_subtract((float)L_46, (float)L_47)));
		List_1_t046427F3923444CF746C550FD96A3D0E4189D273 * L_48 = __this->get_entries_11();
		NullCheck(L_48);
		int32_t L_49 = List_1_get_Count_m2995506A297520F84CBD9AD421D8672D5755E115(L_48, /*hidden argument*/List_1_get_Count_m2995506A297520F84CBD9AD421D8672D5755E115_RuntimeMethod_var);
		if (!L_49)
		{
			goto IL_01cc;
		}
	}
	{
		List_1_t046427F3923444CF746C550FD96A3D0E4189D273 * L_50 = __this->get_entries_11();
		NullCheck(L_50);
		GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * L_51 = List_1_get_Item_m96FCB482CBADC5AD4AD5F01B7A0B822AF619D388(L_50, 0, /*hidden argument*/List_1_get_Item_m96FCB482CBADC5AD4AD5F01B7A0B822AF619D388_RuntimeMethod_var);
		NullCheck(L_51);
		int32_t L_52 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginTop() */, L_51);
		V_1 = L_52;
		int32_t L_53 = V_3;
		V_2 = L_53;
		goto IL_01d2;
	}

IL_01cc:
	{
		int32_t L_54 = 0;
		V_1 = L_54;
		V_2 = L_54;
	}

IL_01d2:
	{
		goto IL_02b2;
	}

IL_01d8:
	{
		V_8 = (bool)1;
		List_1_t046427F3923444CF746C550FD96A3D0E4189D273 * L_55 = __this->get_entries_11();
		NullCheck(L_55);
		Enumerator_t4D01DB2C4CF53D79BD58A10640F59CBCF1354587  L_56 = List_1_GetEnumerator_mA457B3CB61E2B7BAFB0F7D0ADEFD25237B4429DF(L_55, /*hidden argument*/List_1_GetEnumerator_mA457B3CB61E2B7BAFB0F7D0ADEFD25237B4429DF_RuntimeMethod_var);
		V_10 = L_56;
	}

IL_01ea:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0292;
		}

IL_01ef:
		{
			GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * L_57 = Enumerator_get_Current_m9422C22943D0E9900CDB7DF407D9EBE215B2A6B6((Enumerator_t4D01DB2C4CF53D79BD58A10640F59CBCF1354587 *)(&V_10), /*hidden argument*/Enumerator_get_Current_m9422C22943D0E9900CDB7DF407D9EBE215B2A6B6_RuntimeMethod_var);
			V_9 = L_57;
			GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * L_58 = V_9;
			NullCheck(L_58);
			VirtActionInvoker0::Invoke(9 /* System.Void UnityEngine.GUILayoutEntry::CalcHeight() */, L_58);
			GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * L_59 = V_9;
			NullCheck(L_59);
			bool L_60 = L_59->get_consideredForMargin_7();
			if (!L_60)
			{
				goto IL_027d;
			}
		}

IL_020c:
		{
			bool L_61 = V_8;
			if (L_61)
			{
				goto IL_0237;
			}
		}

IL_0214:
		{
			GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * L_62 = V_9;
			NullCheck(L_62);
			int32_t L_63 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginTop() */, L_62);
			int32_t L_64 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
			int32_t L_65 = Mathf_Min_m1A2CC204E361AE13C329B6535165179798D3313A(L_63, L_64, /*hidden argument*/NULL);
			V_1 = L_65;
			GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * L_66 = V_9;
			NullCheck(L_66);
			int32_t L_67 = VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginBottom() */, L_66);
			int32_t L_68 = V_2;
			int32_t L_69 = Mathf_Min_m1A2CC204E361AE13C329B6535165179798D3313A(L_67, L_68, /*hidden argument*/NULL);
			V_2 = L_69;
			goto IL_024c;
		}

IL_0237:
		{
			GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * L_70 = V_9;
			NullCheck(L_70);
			int32_t L_71 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginTop() */, L_70);
			V_1 = L_71;
			GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * L_72 = V_9;
			NullCheck(L_72);
			int32_t L_73 = VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginBottom() */, L_72);
			V_2 = L_73;
			V_8 = (bool)0;
		}

IL_024c:
		{
			GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * L_74 = V_9;
			NullCheck(L_74);
			float L_75 = L_74->get_minHeight_2();
			float L_76 = __this->get_m_ChildMinHeight_25();
			IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
			float L_77 = Mathf_Max_m670AE0EC1B09ED1A56FF9606B0F954670319CB65(L_75, L_76, /*hidden argument*/NULL);
			__this->set_m_ChildMinHeight_25(L_77);
			GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * L_78 = V_9;
			NullCheck(L_78);
			float L_79 = L_78->get_maxHeight_3();
			float L_80 = __this->get_m_ChildMaxHeight_26();
			float L_81 = Mathf_Max_m670AE0EC1B09ED1A56FF9606B0F954670319CB65(L_79, L_80, /*hidden argument*/NULL);
			__this->set_m_ChildMaxHeight_26(L_81);
		}

IL_027d:
		{
			int32_t L_82 = __this->get_m_StretchableCountY_20();
			GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * L_83 = V_9;
			NullCheck(L_83);
			int32_t L_84 = L_83->get_stretchHeight_6();
			__this->set_m_StretchableCountY_20(((int32_t)il2cpp_codegen_add((int32_t)L_82, (int32_t)L_84)));
		}

IL_0292:
		{
			bool L_85 = Enumerator_MoveNext_m3A0A0A98E9378A32A74EC51C4CAB6C564001CAC7((Enumerator_t4D01DB2C4CF53D79BD58A10640F59CBCF1354587 *)(&V_10), /*hidden argument*/Enumerator_MoveNext_m3A0A0A98E9378A32A74EC51C4CAB6C564001CAC7_RuntimeMethod_var);
			if (L_85)
			{
				goto IL_01ef;
			}
		}

IL_029e:
		{
			IL2CPP_LEAVE(0x2B1, FINALLY_02a3);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_02a3;
	}

FINALLY_02a3:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mC263356C16A1948C299607F9A77AAFAEB7C55A38((Enumerator_t4D01DB2C4CF53D79BD58A10640F59CBCF1354587 *)(&V_10), /*hidden argument*/Enumerator_Dispose_mC263356C16A1948C299607F9A77AAFAEB7C55A38_RuntimeMethod_var);
		IL2CPP_END_FINALLY(675)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(675)
	{
		IL2CPP_JUMP_TBL(0x2B1, IL_02b1)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_02b1:
	{
	}

IL_02b2:
	{
		V_11 = (0.0f);
		V_12 = (0.0f);
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_86 = GUILayoutEntry_get_style_m70E386A3289ACFEC515B1358827AB2FBF6314BA4(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t671F175A201A19166385EE3392292A5F50070572_il2cpp_TypeInfo_var);
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_87 = GUIStyle_get_none_m2B48FA4E2FA2B9BB7A458DF25B1391F9C7BB8B7B(/*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(GUIStyle_t671F175A201A19166385EE3392292A5F50070572 *)L_86) == ((RuntimeObject*)(GUIStyle_t671F175A201A19166385EE3392292A5F50070572 *)L_87))))
		{
			goto IL_02db;
		}
	}
	{
		bool L_88 = __this->get_m_UserSpecifiedHeight_22();
		if (!L_88)
		{
			goto IL_0314;
		}
	}

IL_02db:
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_89 = GUILayoutEntry_get_style_m70E386A3289ACFEC515B1358827AB2FBF6314BA4(__this, /*hidden argument*/NULL);
		NullCheck(L_89);
		RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * L_90 = GUIStyle_get_padding_m5DF76AA03A313366D0DD8D577731DAC4FB83053A(L_89, /*hidden argument*/NULL);
		NullCheck(L_90);
		int32_t L_91 = RectOffset_get_top_mBA813D4147BFBC079933054018437F411B6B41E1(L_90, /*hidden argument*/NULL);
		int32_t L_92 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		int32_t L_93 = Mathf_Max_mBDE4C6F1883EE3215CD7AE62550B2AC90592BC3F(L_91, L_92, /*hidden argument*/NULL);
		V_11 = (((float)((float)L_93)));
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_94 = GUILayoutEntry_get_style_m70E386A3289ACFEC515B1358827AB2FBF6314BA4(__this, /*hidden argument*/NULL);
		NullCheck(L_94);
		RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * L_95 = GUIStyle_get_padding_m5DF76AA03A313366D0DD8D577731DAC4FB83053A(L_94, /*hidden argument*/NULL);
		NullCheck(L_95);
		int32_t L_96 = RectOffset_get_bottom_mE5162CADD266B59539E3EE1967EE9A74705E5632(L_95, /*hidden argument*/NULL);
		int32_t L_97 = V_2;
		int32_t L_98 = Mathf_Max_mBDE4C6F1883EE3215CD7AE62550B2AC90592BC3F(L_96, L_97, /*hidden argument*/NULL);
		V_12 = (((float)((float)L_98)));
		goto IL_032e;
	}

IL_0314:
	{
		int32_t L_99 = V_1;
		__this->set_m_MarginTop_29(L_99);
		int32_t L_100 = V_2;
		__this->set_m_MarginBottom_30(L_100);
		float L_101 = (0.0f);
		V_12 = L_101;
		V_11 = L_101;
	}

IL_032e:
	{
		float L_102 = ((GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 *)__this)->get_minHeight_2();
		float L_103 = __this->get_m_ChildMinHeight_25();
		float L_104 = V_11;
		float L_105 = V_12;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_106 = Mathf_Max_m670AE0EC1B09ED1A56FF9606B0F954670319CB65(L_102, ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_103, (float)L_104)), (float)L_105)), /*hidden argument*/NULL);
		((GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 *)__this)->set_minHeight_2(L_106);
		float L_107 = ((GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 *)__this)->get_maxHeight_3();
		if ((!(((float)L_107) == ((float)(0.0f)))))
		{
			goto IL_039f;
		}
	}
	{
		int32_t L_108 = ((GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 *)__this)->get_stretchHeight_6();
		int32_t L_109 = __this->get_m_StretchableCountY_20();
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_110 = GUILayoutEntry_get_style_m70E386A3289ACFEC515B1358827AB2FBF6314BA4(__this, /*hidden argument*/NULL);
		NullCheck(L_110);
		bool L_111 = GUIStyle_get_stretchHeight_m264308B18FA5F0A8400CF49945BAE1B9EFDC934F(L_110, /*hidden argument*/NULL);
		G_B37_0 = L_109;
		G_B37_1 = L_108;
		G_B37_2 = __this;
		if (!L_111)
		{
			G_B38_0 = L_109;
			G_B38_1 = L_108;
			G_B38_2 = __this;
			goto IL_037f;
		}
	}
	{
		G_B39_0 = 1;
		G_B39_1 = G_B37_0;
		G_B39_2 = G_B37_1;
		G_B39_3 = G_B37_2;
		goto IL_0380;
	}

IL_037f:
	{
		G_B39_0 = 0;
		G_B39_1 = G_B38_0;
		G_B39_2 = G_B38_1;
		G_B39_3 = G_B38_2;
	}

IL_0380:
	{
		NullCheck(G_B39_3);
		((GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 *)G_B39_3)->set_stretchHeight_6(((int32_t)il2cpp_codegen_add((int32_t)G_B39_2, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)G_B39_1, (int32_t)G_B39_0)))));
		float L_112 = __this->get_m_ChildMaxHeight_26();
		float L_113 = V_11;
		float L_114 = V_12;
		((GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 *)__this)->set_maxHeight_3(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_112, (float)L_113)), (float)L_114)));
		goto IL_03a8;
	}

IL_039f:
	{
		((GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 *)__this)->set_stretchHeight_6(0);
	}

IL_03a8:
	{
		float L_115 = ((GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 *)__this)->get_maxHeight_3();
		float L_116 = ((GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 *)__this)->get_minHeight_2();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_117 = Mathf_Max_m670AE0EC1B09ED1A56FF9606B0F954670319CB65(L_115, L_116, /*hidden argument*/NULL);
		((GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 *)__this)->set_maxHeight_3(L_117);
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_118 = GUILayoutEntry_get_style_m70E386A3289ACFEC515B1358827AB2FBF6314BA4(__this, /*hidden argument*/NULL);
		NullCheck(L_118);
		float L_119 = GUIStyle_get_fixedHeight_m9B5589C95B27C5590219413E8D7E9E1E95EB7708(L_118, /*hidden argument*/NULL);
		if ((((float)L_119) == ((float)(0.0f))))
		{
			goto IL_03f7;
		}
	}
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_120 = GUILayoutEntry_get_style_m70E386A3289ACFEC515B1358827AB2FBF6314BA4(__this, /*hidden argument*/NULL);
		NullCheck(L_120);
		float L_121 = GUIStyle_get_fixedHeight_m9B5589C95B27C5590219413E8D7E9E1E95EB7708(L_120, /*hidden argument*/NULL);
		float L_122 = L_121;
		V_0 = L_122;
		((GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 *)__this)->set_minHeight_2(L_122);
		float L_123 = V_0;
		((GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 *)__this)->set_maxHeight_3(L_123);
		((GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 *)__this)->set_stretchHeight_6(0);
	}

IL_03f7:
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutGroup::SetVertical(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void GUILayoutGroup_SetVertical_m29D8744D2D1464EF4E6E4008CD21F5E44D6CB146 (GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * __this, float ___y0, float ___height1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUILayoutGroup_SetVertical_m29D8744D2D1464EF4E6E4008CD21F5E44D6CB146_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * V_0 = NULL;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	int32_t V_6 = 0;
	bool V_7 = false;
	GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * V_8 = NULL;
	Enumerator_t4D01DB2C4CF53D79BD58A10640F59CBCF1354587  V_9;
	memset(&V_9, 0, sizeof(V_9));
	float V_10 = 0.0f;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * V_13 = NULL;
	Enumerator_t4D01DB2C4CF53D79BD58A10640F59CBCF1354587  V_14;
	memset(&V_14, 0, sizeof(V_14));
	float V_15 = 0.0f;
	float V_16 = 0.0f;
	float V_17 = 0.0f;
	float V_18 = 0.0f;
	float V_19 = 0.0f;
	GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * V_20 = NULL;
	Enumerator_t4D01DB2C4CF53D79BD58A10640F59CBCF1354587  V_21;
	memset(&V_21, 0, sizeof(V_21));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B23_0 = 0;
	{
		float L_0 = ___y0;
		float L_1 = ___height1;
		GUILayoutEntry_SetVertical_mC0E71E5E431907DD1900C707BD3E2E1D0795DDD0(__this, L_0, L_1, /*hidden argument*/NULL);
		List_1_t046427F3923444CF746C550FD96A3D0E4189D273 * L_2 = __this->get_entries_11();
		NullCheck(L_2);
		int32_t L_3 = List_1_get_Count_m2995506A297520F84CBD9AD421D8672D5755E115(L_2, /*hidden argument*/List_1_get_Count_m2995506A297520F84CBD9AD421D8672D5755E115_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_001e;
		}
	}
	{
		goto IL_03a3;
	}

IL_001e:
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_4 = GUILayoutEntry_get_style_m70E386A3289ACFEC515B1358827AB2FBF6314BA4(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * L_5 = GUIStyle_get_padding_m5DF76AA03A313366D0DD8D577731DAC4FB83053A(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		bool L_6 = __this->get_resetCoords_13();
		if (!L_6)
		{
			goto IL_003c;
		}
	}
	{
		___y0 = (0.0f);
	}

IL_003c:
	{
		bool L_7 = __this->get_isVertical_12();
		if (!L_7)
		{
			goto IL_022b;
		}
	}
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_8 = GUILayoutEntry_get_style_m70E386A3289ACFEC515B1358827AB2FBF6314BA4(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t671F175A201A19166385EE3392292A5F50070572_il2cpp_TypeInfo_var);
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_9 = GUIStyle_get_none_m2B48FA4E2FA2B9BB7A458DF25B1391F9C7BB8B7B(/*hidden argument*/NULL);
		if ((((RuntimeObject*)(GUIStyle_t671F175A201A19166385EE3392292A5F50070572 *)L_8) == ((RuntimeObject*)(GUIStyle_t671F175A201A19166385EE3392292A5F50070572 *)L_9)))
		{
			goto IL_00c6;
		}
	}
	{
		RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = RectOffset_get_top_mBA813D4147BFBC079933054018437F411B6B41E1(L_10, /*hidden argument*/NULL);
		V_1 = (((float)((float)L_11)));
		RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13 = RectOffset_get_bottom_mE5162CADD266B59539E3EE1967EE9A74705E5632(L_12, /*hidden argument*/NULL);
		V_2 = (((float)((float)L_13)));
		List_1_t046427F3923444CF746C550FD96A3D0E4189D273 * L_14 = __this->get_entries_11();
		NullCheck(L_14);
		int32_t L_15 = List_1_get_Count_m2995506A297520F84CBD9AD421D8672D5755E115(L_14, /*hidden argument*/List_1_get_Count_m2995506A297520F84CBD9AD421D8672D5755E115_RuntimeMethod_var);
		if (!L_15)
		{
			goto IL_00b9;
		}
	}
	{
		float L_16 = V_1;
		List_1_t046427F3923444CF746C550FD96A3D0E4189D273 * L_17 = __this->get_entries_11();
		NullCheck(L_17);
		GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * L_18 = List_1_get_Item_m96FCB482CBADC5AD4AD5F01B7A0B822AF619D388(L_17, 0, /*hidden argument*/List_1_get_Item_m96FCB482CBADC5AD4AD5F01B7A0B822AF619D388_RuntimeMethod_var);
		NullCheck(L_18);
		int32_t L_19 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginTop() */, L_18);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_20 = Mathf_Max_m670AE0EC1B09ED1A56FF9606B0F954670319CB65(L_16, (((float)((float)L_19))), /*hidden argument*/NULL);
		V_1 = L_20;
		float L_21 = V_2;
		List_1_t046427F3923444CF746C550FD96A3D0E4189D273 * L_22 = __this->get_entries_11();
		List_1_t046427F3923444CF746C550FD96A3D0E4189D273 * L_23 = __this->get_entries_11();
		NullCheck(L_23);
		int32_t L_24 = List_1_get_Count_m2995506A297520F84CBD9AD421D8672D5755E115(L_23, /*hidden argument*/List_1_get_Count_m2995506A297520F84CBD9AD421D8672D5755E115_RuntimeMethod_var);
		NullCheck(L_22);
		GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * L_25 = List_1_get_Item_m96FCB482CBADC5AD4AD5F01B7A0B822AF619D388(L_22, ((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)1)), /*hidden argument*/List_1_get_Item_m96FCB482CBADC5AD4AD5F01B7A0B822AF619D388_RuntimeMethod_var);
		NullCheck(L_25);
		int32_t L_26 = VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginBottom() */, L_25);
		float L_27 = Mathf_Max_m670AE0EC1B09ED1A56FF9606B0F954670319CB65(L_21, (((float)((float)L_26))), /*hidden argument*/NULL);
		V_2 = L_27;
	}

IL_00b9:
	{
		float L_28 = ___y0;
		float L_29 = V_1;
		___y0 = ((float)il2cpp_codegen_add((float)L_28, (float)L_29));
		float L_30 = ___height1;
		float L_31 = V_2;
		float L_32 = V_1;
		___height1 = ((float)il2cpp_codegen_subtract((float)L_30, (float)((float)il2cpp_codegen_add((float)L_31, (float)L_32))));
	}

IL_00c6:
	{
		float L_33 = ___height1;
		float L_34 = __this->get_spacing_14();
		List_1_t046427F3923444CF746C550FD96A3D0E4189D273 * L_35 = __this->get_entries_11();
		NullCheck(L_35);
		int32_t L_36 = List_1_get_Count_m2995506A297520F84CBD9AD421D8672D5755E115(L_35, /*hidden argument*/List_1_get_Count_m2995506A297520F84CBD9AD421D8672D5755E115_RuntimeMethod_var);
		V_3 = ((float)il2cpp_codegen_subtract((float)L_33, (float)((float)il2cpp_codegen_multiply((float)L_34, (float)(((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_36, (int32_t)1)))))))));
		V_4 = (0.0f);
		float L_37 = __this->get_m_ChildMinHeight_25();
		float L_38 = __this->get_m_ChildMaxHeight_26();
		if ((((float)L_37) == ((float)L_38)))
		{
			goto IL_011d;
		}
	}
	{
		float L_39 = V_3;
		float L_40 = __this->get_m_ChildMinHeight_25();
		float L_41 = __this->get_m_ChildMaxHeight_26();
		float L_42 = __this->get_m_ChildMinHeight_25();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_43 = Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507(((float)((float)((float)il2cpp_codegen_subtract((float)L_39, (float)L_40))/(float)((float)il2cpp_codegen_subtract((float)L_41, (float)L_42)))), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_4 = L_43;
	}

IL_011d:
	{
		V_5 = (0.0f);
		float L_44 = V_3;
		float L_45 = __this->get_m_ChildMaxHeight_26();
		if ((!(((float)L_44) > ((float)L_45))))
		{
			goto IL_0150;
		}
	}
	{
		int32_t L_46 = __this->get_m_StretchableCountY_20();
		if ((((int32_t)L_46) <= ((int32_t)0)))
		{
			goto IL_014f;
		}
	}
	{
		float L_47 = V_3;
		float L_48 = __this->get_m_ChildMaxHeight_26();
		int32_t L_49 = __this->get_m_StretchableCountY_20();
		V_5 = ((float)((float)((float)il2cpp_codegen_subtract((float)L_47, (float)L_48))/(float)(((float)((float)L_49)))));
	}

IL_014f:
	{
	}

IL_0150:
	{
		V_6 = 0;
		V_7 = (bool)1;
		List_1_t046427F3923444CF746C550FD96A3D0E4189D273 * L_50 = __this->get_entries_11();
		NullCheck(L_50);
		Enumerator_t4D01DB2C4CF53D79BD58A10640F59CBCF1354587  L_51 = List_1_GetEnumerator_mA457B3CB61E2B7BAFB0F7D0ADEFD25237B4429DF(L_50, /*hidden argument*/List_1_GetEnumerator_mA457B3CB61E2B7BAFB0F7D0ADEFD25237B4429DF_RuntimeMethod_var);
		V_9 = L_51;
	}

IL_0164:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0206;
		}

IL_0169:
		{
			GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * L_52 = Enumerator_get_Current_m9422C22943D0E9900CDB7DF407D9EBE215B2A6B6((Enumerator_t4D01DB2C4CF53D79BD58A10640F59CBCF1354587 *)(&V_9), /*hidden argument*/Enumerator_get_Current_m9422C22943D0E9900CDB7DF407D9EBE215B2A6B6_RuntimeMethod_var);
			V_8 = L_52;
			GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * L_53 = V_8;
			NullCheck(L_53);
			float L_54 = L_53->get_minHeight_2();
			GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * L_55 = V_8;
			NullCheck(L_55);
			float L_56 = L_55->get_maxHeight_3();
			float L_57 = V_4;
			IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
			float L_58 = Mathf_Lerp_m9A74C5A0C37D0CDF45EE66E7774D12A9B93B1364(L_54, L_56, L_57, /*hidden argument*/NULL);
			V_10 = L_58;
			float L_59 = V_10;
			float L_60 = V_5;
			GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * L_61 = V_8;
			NullCheck(L_61);
			int32_t L_62 = L_61->get_stretchHeight_6();
			V_10 = ((float)il2cpp_codegen_add((float)L_59, (float)((float)il2cpp_codegen_multiply((float)L_60, (float)(((float)((float)L_62)))))));
			GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * L_63 = V_8;
			NullCheck(L_63);
			bool L_64 = L_63->get_consideredForMargin_7();
			if (!L_64)
			{
				goto IL_01e4;
			}
		}

IL_01a6:
		{
			GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * L_65 = V_8;
			NullCheck(L_65);
			int32_t L_66 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginTop() */, L_65);
			V_11 = L_66;
			bool L_67 = V_7;
			if (!L_67)
			{
				goto IL_01bf;
			}
		}

IL_01b7:
		{
			V_11 = 0;
			V_7 = (bool)0;
		}

IL_01bf:
		{
			int32_t L_68 = V_6;
			int32_t L_69 = V_11;
			if ((((int32_t)L_68) <= ((int32_t)L_69)))
			{
				goto IL_01cf;
			}
		}

IL_01c8:
		{
			int32_t L_70 = V_6;
			G_B23_0 = L_70;
			goto IL_01d1;
		}

IL_01cf:
		{
			int32_t L_71 = V_11;
			G_B23_0 = L_71;
		}

IL_01d1:
		{
			V_12 = G_B23_0;
			float L_72 = ___y0;
			int32_t L_73 = V_12;
			___y0 = ((float)il2cpp_codegen_add((float)L_72, (float)(((float)((float)L_73)))));
			GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * L_74 = V_8;
			NullCheck(L_74);
			int32_t L_75 = VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginBottom() */, L_74);
			V_6 = L_75;
		}

IL_01e4:
		{
			GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * L_76 = V_8;
			float L_77 = ___y0;
			IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
			float L_78 = bankers_roundf(L_77);
			float L_79 = V_10;
			float L_80 = bankers_roundf(L_79);
			NullCheck(L_76);
			VirtActionInvoker2< float, float >::Invoke(11 /* System.Void UnityEngine.GUILayoutEntry::SetVertical(System.Single,System.Single) */, L_76, L_78, L_80);
			float L_81 = ___y0;
			float L_82 = V_10;
			float L_83 = __this->get_spacing_14();
			___y0 = ((float)il2cpp_codegen_add((float)L_81, (float)((float)il2cpp_codegen_add((float)L_82, (float)L_83))));
		}

IL_0206:
		{
			bool L_84 = Enumerator_MoveNext_m3A0A0A98E9378A32A74EC51C4CAB6C564001CAC7((Enumerator_t4D01DB2C4CF53D79BD58A10640F59CBCF1354587 *)(&V_9), /*hidden argument*/Enumerator_MoveNext_m3A0A0A98E9378A32A74EC51C4CAB6C564001CAC7_RuntimeMethod_var);
			if (L_84)
			{
				goto IL_0169;
			}
		}

IL_0212:
		{
			IL2CPP_LEAVE(0x225, FINALLY_0217);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0217;
	}

FINALLY_0217:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mC263356C16A1948C299607F9A77AAFAEB7C55A38((Enumerator_t4D01DB2C4CF53D79BD58A10640F59CBCF1354587 *)(&V_9), /*hidden argument*/Enumerator_Dispose_mC263356C16A1948C299607F9A77AAFAEB7C55A38_RuntimeMethod_var);
		IL2CPP_END_FINALLY(535)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(535)
	{
		IL2CPP_JUMP_TBL(0x225, IL_0225)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0225:
	{
		goto IL_03a3;
	}

IL_022b:
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_85 = GUILayoutEntry_get_style_m70E386A3289ACFEC515B1358827AB2FBF6314BA4(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t671F175A201A19166385EE3392292A5F50070572_il2cpp_TypeInfo_var);
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_86 = GUIStyle_get_none_m2B48FA4E2FA2B9BB7A458DF25B1391F9C7BB8B7B(/*hidden argument*/NULL);
		if ((((RuntimeObject*)(GUIStyle_t671F175A201A19166385EE3392292A5F50070572 *)L_85) == ((RuntimeObject*)(GUIStyle_t671F175A201A19166385EE3392292A5F50070572 *)L_86)))
		{
			goto IL_02ef;
		}
	}
	{
		List_1_t046427F3923444CF746C550FD96A3D0E4189D273 * L_87 = __this->get_entries_11();
		NullCheck(L_87);
		Enumerator_t4D01DB2C4CF53D79BD58A10640F59CBCF1354587  L_88 = List_1_GetEnumerator_mA457B3CB61E2B7BAFB0F7D0ADEFD25237B4429DF(L_87, /*hidden argument*/List_1_GetEnumerator_mA457B3CB61E2B7BAFB0F7D0ADEFD25237B4429DF_RuntimeMethod_var);
		V_14 = L_88;
	}

IL_024b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_02ca;
		}

IL_0250:
		{
			GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * L_89 = Enumerator_get_Current_m9422C22943D0E9900CDB7DF407D9EBE215B2A6B6((Enumerator_t4D01DB2C4CF53D79BD58A10640F59CBCF1354587 *)(&V_14), /*hidden argument*/Enumerator_get_Current_m9422C22943D0E9900CDB7DF407D9EBE215B2A6B6_RuntimeMethod_var);
			V_13 = L_89;
			GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * L_90 = V_13;
			NullCheck(L_90);
			int32_t L_91 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginTop() */, L_90);
			RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * L_92 = V_0;
			NullCheck(L_92);
			int32_t L_93 = RectOffset_get_top_mBA813D4147BFBC079933054018437F411B6B41E1(L_92, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
			int32_t L_94 = Mathf_Max_mBDE4C6F1883EE3215CD7AE62550B2AC90592BC3F(L_91, L_93, /*hidden argument*/NULL);
			V_15 = (((float)((float)L_94)));
			float L_95 = ___y0;
			float L_96 = V_15;
			V_16 = ((float)il2cpp_codegen_add((float)L_95, (float)L_96));
			float L_97 = ___height1;
			GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * L_98 = V_13;
			NullCheck(L_98);
			int32_t L_99 = VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginBottom() */, L_98);
			RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * L_100 = V_0;
			NullCheck(L_100);
			int32_t L_101 = RectOffset_get_bottom_mE5162CADD266B59539E3EE1967EE9A74705E5632(L_100, /*hidden argument*/NULL);
			int32_t L_102 = Mathf_Max_mBDE4C6F1883EE3215CD7AE62550B2AC90592BC3F(L_99, L_101, /*hidden argument*/NULL);
			float L_103 = V_15;
			V_17 = ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_subtract((float)L_97, (float)(((float)((float)L_102))))), (float)L_103));
			GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * L_104 = V_13;
			NullCheck(L_104);
			int32_t L_105 = L_104->get_stretchHeight_6();
			if (!L_105)
			{
				goto IL_02ab;
			}
		}

IL_029b:
		{
			GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * L_106 = V_13;
			float L_107 = V_16;
			float L_108 = V_17;
			NullCheck(L_106);
			VirtActionInvoker2< float, float >::Invoke(11 /* System.Void UnityEngine.GUILayoutEntry::SetVertical(System.Single,System.Single) */, L_106, L_107, L_108);
			goto IL_02c9;
		}

IL_02ab:
		{
			GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * L_109 = V_13;
			float L_110 = V_16;
			float L_111 = V_17;
			GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * L_112 = V_13;
			NullCheck(L_112);
			float L_113 = L_112->get_minHeight_2();
			GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * L_114 = V_13;
			NullCheck(L_114);
			float L_115 = L_114->get_maxHeight_3();
			IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
			float L_116 = Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507(L_111, L_113, L_115, /*hidden argument*/NULL);
			NullCheck(L_109);
			VirtActionInvoker2< float, float >::Invoke(11 /* System.Void UnityEngine.GUILayoutEntry::SetVertical(System.Single,System.Single) */, L_109, L_110, L_116);
		}

IL_02c9:
		{
		}

IL_02ca:
		{
			bool L_117 = Enumerator_MoveNext_m3A0A0A98E9378A32A74EC51C4CAB6C564001CAC7((Enumerator_t4D01DB2C4CF53D79BD58A10640F59CBCF1354587 *)(&V_14), /*hidden argument*/Enumerator_MoveNext_m3A0A0A98E9378A32A74EC51C4CAB6C564001CAC7_RuntimeMethod_var);
			if (L_117)
			{
				goto IL_0250;
			}
		}

IL_02d6:
		{
			IL2CPP_LEAVE(0x2E9, FINALLY_02db);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_02db;
	}

FINALLY_02db:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mC263356C16A1948C299607F9A77AAFAEB7C55A38((Enumerator_t4D01DB2C4CF53D79BD58A10640F59CBCF1354587 *)(&V_14), /*hidden argument*/Enumerator_Dispose_mC263356C16A1948C299607F9A77AAFAEB7C55A38_RuntimeMethod_var);
		IL2CPP_END_FINALLY(731)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(731)
	{
		IL2CPP_JUMP_TBL(0x2E9, IL_02e9)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_02e9:
	{
		goto IL_03a2;
	}

IL_02ef:
	{
		float L_118 = ___y0;
		int32_t L_119 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginTop() */, __this);
		V_18 = ((float)il2cpp_codegen_subtract((float)L_118, (float)(((float)((float)L_119)))));
		float L_120 = ___height1;
		int32_t L_121 = GUILayoutEntry_get_marginVertical_mBFB3FD56025F4627378E5A339379CFF720196EB0(__this, /*hidden argument*/NULL);
		V_19 = ((float)il2cpp_codegen_add((float)L_120, (float)(((float)((float)L_121)))));
		List_1_t046427F3923444CF746C550FD96A3D0E4189D273 * L_122 = __this->get_entries_11();
		NullCheck(L_122);
		Enumerator_t4D01DB2C4CF53D79BD58A10640F59CBCF1354587  L_123 = List_1_GetEnumerator_mA457B3CB61E2B7BAFB0F7D0ADEFD25237B4429DF(L_122, /*hidden argument*/List_1_GetEnumerator_mA457B3CB61E2B7BAFB0F7D0ADEFD25237B4429DF_RuntimeMethod_var);
		V_21 = L_123;
	}

IL_0314:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0382;
		}

IL_0319:
		{
			GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * L_124 = Enumerator_get_Current_m9422C22943D0E9900CDB7DF407D9EBE215B2A6B6((Enumerator_t4D01DB2C4CF53D79BD58A10640F59CBCF1354587 *)(&V_21), /*hidden argument*/Enumerator_get_Current_m9422C22943D0E9900CDB7DF407D9EBE215B2A6B6_RuntimeMethod_var);
			V_20 = L_124;
			GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * L_125 = V_20;
			NullCheck(L_125);
			int32_t L_126 = L_125->get_stretchHeight_6();
			if (!L_126)
			{
				goto IL_0351;
			}
		}

IL_032f:
		{
			GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * L_127 = V_20;
			float L_128 = V_18;
			GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * L_129 = V_20;
			NullCheck(L_129);
			int32_t L_130 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginTop() */, L_129);
			float L_131 = V_19;
			GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * L_132 = V_20;
			NullCheck(L_132);
			int32_t L_133 = GUILayoutEntry_get_marginVertical_mBFB3FD56025F4627378E5A339379CFF720196EB0(L_132, /*hidden argument*/NULL);
			NullCheck(L_127);
			VirtActionInvoker2< float, float >::Invoke(11 /* System.Void UnityEngine.GUILayoutEntry::SetVertical(System.Single,System.Single) */, L_127, ((float)il2cpp_codegen_add((float)L_128, (float)(((float)((float)L_130))))), ((float)il2cpp_codegen_subtract((float)L_131, (float)(((float)((float)L_133))))));
			goto IL_0381;
		}

IL_0351:
		{
			GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * L_134 = V_20;
			float L_135 = V_18;
			GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * L_136 = V_20;
			NullCheck(L_136);
			int32_t L_137 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginTop() */, L_136);
			float L_138 = V_19;
			GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * L_139 = V_20;
			NullCheck(L_139);
			int32_t L_140 = GUILayoutEntry_get_marginVertical_mBFB3FD56025F4627378E5A339379CFF720196EB0(L_139, /*hidden argument*/NULL);
			GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * L_141 = V_20;
			NullCheck(L_141);
			float L_142 = L_141->get_minHeight_2();
			GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * L_143 = V_20;
			NullCheck(L_143);
			float L_144 = L_143->get_maxHeight_3();
			IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
			float L_145 = Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507(((float)il2cpp_codegen_subtract((float)L_138, (float)(((float)((float)L_140))))), L_142, L_144, /*hidden argument*/NULL);
			NullCheck(L_134);
			VirtActionInvoker2< float, float >::Invoke(11 /* System.Void UnityEngine.GUILayoutEntry::SetVertical(System.Single,System.Single) */, L_134, ((float)il2cpp_codegen_add((float)L_135, (float)(((float)((float)L_137))))), L_145);
		}

IL_0381:
		{
		}

IL_0382:
		{
			bool L_146 = Enumerator_MoveNext_m3A0A0A98E9378A32A74EC51C4CAB6C564001CAC7((Enumerator_t4D01DB2C4CF53D79BD58A10640F59CBCF1354587 *)(&V_21), /*hidden argument*/Enumerator_MoveNext_m3A0A0A98E9378A32A74EC51C4CAB6C564001CAC7_RuntimeMethod_var);
			if (L_146)
			{
				goto IL_0319;
			}
		}

IL_038e:
		{
			IL2CPP_LEAVE(0x3A1, FINALLY_0393);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0393;
	}

FINALLY_0393:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mC263356C16A1948C299607F9A77AAFAEB7C55A38((Enumerator_t4D01DB2C4CF53D79BD58A10640F59CBCF1354587 *)(&V_21), /*hidden argument*/Enumerator_Dispose_mC263356C16A1948C299607F9A77AAFAEB7C55A38_RuntimeMethod_var);
		IL2CPP_END_FINALLY(915)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(915)
	{
		IL2CPP_JUMP_TBL(0x3A1, IL_03a1)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_03a1:
	{
	}

IL_03a2:
	{
	}

IL_03a3:
	{
		return;
	}
}
// System.String UnityEngine.GUILayoutGroup::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* GUILayoutGroup_ToString_mF66B820B07A33FFA240FBBE20A6F39C492B52372 (GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUILayoutGroup_ToString_mF66B820B07A33FFA240FBBE20A6F39C492B52372_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * V_4 = NULL;
	Enumerator_t4D01DB2C4CF53D79BD58A10640F59CBCF1354587  V_5;
	memset(&V_5, 0, sizeof(V_5));
	String_t* V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		V_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		V_2 = 0;
		goto IL_0024;
	}

IL_0014:
	{
		String_t* L_0 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = String_Concat_m3826EAA4F567A88037F77DAA4CA280E199698DC8(L_0, _stringLiteralB858CB282617FB0956D960215C8E84D1CCF909C6, /*hidden argument*/NULL);
		V_1 = L_1;
		int32_t L_2 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
	}

IL_0024:
	{
		int32_t L_3 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845_il2cpp_TypeInfo_var);
		int32_t L_4 = ((GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845_il2cpp_TypeInfo_var))->get_indent_10();
		if ((((int32_t)L_3) < ((int32_t)L_4)))
		{
			goto IL_0014;
		}
	}
	{
		String_t* L_5 = V_0;
		V_3 = L_5;
		ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* L_6 = (ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D*)SZArrayNew(ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* L_7 = L_6;
		String_t* L_8 = V_3;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_8);
		ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* L_9 = L_7;
		String_t* L_10 = GUILayoutEntry_ToString_mCDA5CD14A39ADAD29F6B450B98FDB80E37AC95D5(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_10);
		ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* L_11 = L_9;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral061CD5E48C5A194C95B561D18FCDC1A57D790069);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral061CD5E48C5A194C95B561D18FCDC1A57D790069);
		ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* L_12 = L_11;
		float L_13 = __this->get_m_ChildMinHeight_25();
		float L_14 = L_13;
		RuntimeObject * L_15 = Box(Single_tF2613CF3F3AF0E8BEBC3CE8AD41479C44E6075DB_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_15);
		ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* L_16 = L_12;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, _stringLiteral4609E730123B8AB7743493DE7E9F350E7DF58440);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteral4609E730123B8AB7743493DE7E9F350E7DF58440);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_17 = String_Concat_m2BD818C1A31996400987A990DD23C8629549A2B1(L_16, /*hidden argument*/NULL);
		V_0 = L_17;
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845_il2cpp_TypeInfo_var);
		int32_t L_18 = ((GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845_il2cpp_TypeInfo_var))->get_indent_10();
		((GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845_il2cpp_TypeInfo_var))->set_indent_10(((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)4)));
		List_1_t046427F3923444CF746C550FD96A3D0E4189D273 * L_19 = __this->get_entries_11();
		NullCheck(L_19);
		Enumerator_t4D01DB2C4CF53D79BD58A10640F59CBCF1354587  L_20 = List_1_GetEnumerator_mA457B3CB61E2B7BAFB0F7D0ADEFD25237B4429DF(L_19, /*hidden argument*/List_1_GetEnumerator_mA457B3CB61E2B7BAFB0F7D0ADEFD25237B4429DF_RuntimeMethod_var);
		V_5 = L_20;
	}

IL_0082:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00a5;
		}

IL_0087:
		{
			GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * L_21 = Enumerator_get_Current_m9422C22943D0E9900CDB7DF407D9EBE215B2A6B6((Enumerator_t4D01DB2C4CF53D79BD58A10640F59CBCF1354587 *)(&V_5), /*hidden argument*/Enumerator_get_Current_m9422C22943D0E9900CDB7DF407D9EBE215B2A6B6_RuntimeMethod_var);
			V_4 = L_21;
			String_t* L_22 = V_0;
			GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * L_23 = V_4;
			NullCheck(L_23);
			String_t* L_24 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_23);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_25 = String_Concat_mDF3A55D4269A0D2D7969D90C6D38B472E24DD445(L_22, L_24, _stringLiteralADC83B19E793491B1C6EA0FD8B46CD9F32E592FC, /*hidden argument*/NULL);
			V_0 = L_25;
		}

IL_00a5:
		{
			bool L_26 = Enumerator_MoveNext_m3A0A0A98E9378A32A74EC51C4CAB6C564001CAC7((Enumerator_t4D01DB2C4CF53D79BD58A10640F59CBCF1354587 *)(&V_5), /*hidden argument*/Enumerator_MoveNext_m3A0A0A98E9378A32A74EC51C4CAB6C564001CAC7_RuntimeMethod_var);
			if (L_26)
			{
				goto IL_0087;
			}
		}

IL_00b1:
		{
			IL2CPP_LEAVE(0xC4, FINALLY_00b6);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00b6;
	}

FINALLY_00b6:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mC263356C16A1948C299607F9A77AAFAEB7C55A38((Enumerator_t4D01DB2C4CF53D79BD58A10640F59CBCF1354587 *)(&V_5), /*hidden argument*/Enumerator_Dispose_mC263356C16A1948C299607F9A77AAFAEB7C55A38_RuntimeMethod_var);
		IL2CPP_END_FINALLY(182)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(182)
	{
		IL2CPP_JUMP_TBL(0xC4, IL_00c4)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00c4:
	{
		String_t* L_27 = V_0;
		String_t* L_28 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_29 = String_Concat_mDF3A55D4269A0D2D7969D90C6D38B472E24DD445(L_27, L_28, _stringLiteralC2B7DF6201FDD3362399091F0A29550DF3505B6A, /*hidden argument*/NULL);
		V_0 = L_29;
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845_il2cpp_TypeInfo_var);
		int32_t L_30 = ((GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845_il2cpp_TypeInfo_var))->get_indent_10();
		((GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845_il2cpp_TypeInfo_var))->set_indent_10(((int32_t)il2cpp_codegen_subtract((int32_t)L_30, (int32_t)4)));
		String_t* L_31 = V_0;
		V_6 = L_31;
		goto IL_00e5;
	}

IL_00e5:
	{
		String_t* L_32 = V_6;
		return L_32;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.GUILayoutOption::.ctor(UnityEngine.GUILayoutOption_Type,System.Object)
extern "C" IL2CPP_METHOD_ATTR void GUILayoutOption__ctor_m965FDA1345FD7146596EFA90F03D0C645FB3FD5D (GUILayoutOption_t27A0221AC2F6F53E7B89310FD19F51C565D835A6 * __this, int32_t ___type0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		Object__ctor_m8BA07445967EE2CC15961AD3C16F25DB74506EA0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___type0;
		__this->set_type_0(L_0);
		RuntimeObject * L_1 = ___value1;
		__this->set_value_1(L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Rect UnityEngine.GUILayoutUtility::Internal_GetWindowRect(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Rect_t35B976DE901B5423C11705E156938EA27AB402CE  GUILayoutUtility_Internal_GetWindowRect_mE35BED0433EE8BD928CD52681620519E647A1DA9 (int32_t ___windowID0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUILayoutUtility_Internal_GetWindowRect_mE35BED0433EE8BD928CD52681620519E647A1DA9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Rect_t35B976DE901B5423C11705E156938EA27AB402CE  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___windowID0;
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_il2cpp_TypeInfo_var);
		GUILayoutUtility_Internal_GetWindowRect_Injected_mE78DA4F8B25471CEFFCB6F43E37C7966FE436EEE(L_0, (Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_0), /*hidden argument*/NULL);
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUILayoutUtility::Internal_MoveWindow(System.Int32,UnityEngine.Rect)
extern "C" IL2CPP_METHOD_ATTR void GUILayoutUtility_Internal_MoveWindow_mFCB2DFE399B833D263138CF0A57626AFF52CB037 (int32_t ___windowID0, Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___r1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUILayoutUtility_Internal_MoveWindow_mFCB2DFE399B833D263138CF0A57626AFF52CB037_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___windowID0;
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_il2cpp_TypeInfo_var);
		GUILayoutUtility_Internal_MoveWindow_Injected_mD80D56182A5684AC3BDA2B50AC8191974A064ABE(L_0, (Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&___r1), /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUILayoutUtility_LayoutCache UnityEngine.GUILayoutUtility::SelectIDList(System.Int32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR LayoutCache_t0D14FE6139444D164ECA5D31E39E625D80077468 * GUILayoutUtility_SelectIDList_m230ED9206897C92C5B090B3BBFC9B408603E56FD (int32_t ___instanceID0, bool ___isWindow1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUILayoutUtility_SelectIDList_m230ED9206897C92C5B090B3BBFC9B408603E56FD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t0F1A21E14D53E05B0F1D474060AC4B36995FBCA1 * V_0 = NULL;
	LayoutCache_t0D14FE6139444D164ECA5D31E39E625D80077468 * V_1 = NULL;
	LayoutCache_t0D14FE6139444D164ECA5D31E39E625D80077468 * V_2 = NULL;
	Dictionary_2_t0F1A21E14D53E05B0F1D474060AC4B36995FBCA1 * G_B3_0 = NULL;
	{
		bool L_0 = ___isWindow1;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_il2cpp_TypeInfo_var);
		Dictionary_2_t0F1A21E14D53E05B0F1D474060AC4B36995FBCA1 * L_1 = ((GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_il2cpp_TypeInfo_var))->get_s_StoredWindows_1();
		G_B3_0 = L_1;
		goto IL_0016;
	}

IL_0011:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_il2cpp_TypeInfo_var);
		Dictionary_2_t0F1A21E14D53E05B0F1D474060AC4B36995FBCA1 * L_2 = ((GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_il2cpp_TypeInfo_var))->get_s_StoredLayouts_0();
		G_B3_0 = L_2;
	}

IL_0016:
	{
		V_0 = G_B3_0;
		Dictionary_2_t0F1A21E14D53E05B0F1D474060AC4B36995FBCA1 * L_3 = V_0;
		int32_t L_4 = ___instanceID0;
		NullCheck(L_3);
		bool L_5 = Dictionary_2_TryGetValue_m0E6D1EEC81E6A904B99EEC04DB95C1CC0E4A0B31(L_3, L_4, (LayoutCache_t0D14FE6139444D164ECA5D31E39E625D80077468 **)(&V_1), /*hidden argument*/Dictionary_2_TryGetValue_m0E6D1EEC81E6A904B99EEC04DB95C1CC0E4A0B31_RuntimeMethod_var);
		if (L_5)
		{
			goto IL_003a;
		}
	}
	{
		LayoutCache_t0D14FE6139444D164ECA5D31E39E625D80077468 * L_6 = (LayoutCache_t0D14FE6139444D164ECA5D31E39E625D80077468 *)il2cpp_codegen_object_new(LayoutCache_t0D14FE6139444D164ECA5D31E39E625D80077468_il2cpp_TypeInfo_var);
		LayoutCache__ctor_mF66D53540321BFD98CA89285D2E8FFDA5014A9CE(L_6, /*hidden argument*/NULL);
		V_1 = L_6;
		Dictionary_2_t0F1A21E14D53E05B0F1D474060AC4B36995FBCA1 * L_7 = V_0;
		int32_t L_8 = ___instanceID0;
		LayoutCache_t0D14FE6139444D164ECA5D31E39E625D80077468 * L_9 = V_1;
		NullCheck(L_7);
		Dictionary_2_set_Item_mB2CFA325B47C43C9E27C606844FE1AED4CD344A2(L_7, L_8, L_9, /*hidden argument*/Dictionary_2_set_Item_mB2CFA325B47C43C9E27C606844FE1AED4CD344A2_RuntimeMethod_var);
		goto IL_003c;
	}

IL_003a:
	{
	}

IL_003c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_il2cpp_TypeInfo_var);
		LayoutCache_t0D14FE6139444D164ECA5D31E39E625D80077468 * L_10 = ((GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_il2cpp_TypeInfo_var))->get_current_2();
		LayoutCache_t0D14FE6139444D164ECA5D31E39E625D80077468 * L_11 = V_1;
		NullCheck(L_11);
		GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * L_12 = L_11->get_topLevel_0();
		NullCheck(L_10);
		L_10->set_topLevel_0(L_12);
		LayoutCache_t0D14FE6139444D164ECA5D31E39E625D80077468 * L_13 = ((GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_il2cpp_TypeInfo_var))->get_current_2();
		LayoutCache_t0D14FE6139444D164ECA5D31E39E625D80077468 * L_14 = V_1;
		NullCheck(L_14);
		GenericStack_tC59D21E8DBC50F3C608479C942200AC44CA2D5BC * L_15 = L_14->get_layoutGroups_1();
		NullCheck(L_13);
		L_13->set_layoutGroups_1(L_15);
		LayoutCache_t0D14FE6139444D164ECA5D31E39E625D80077468 * L_16 = ((GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_il2cpp_TypeInfo_var))->get_current_2();
		LayoutCache_t0D14FE6139444D164ECA5D31E39E625D80077468 * L_17 = V_1;
		NullCheck(L_17);
		GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * L_18 = L_17->get_windows_2();
		NullCheck(L_16);
		L_16->set_windows_2(L_18);
		LayoutCache_t0D14FE6139444D164ECA5D31E39E625D80077468 * L_19 = V_1;
		V_2 = L_19;
		goto IL_0073;
	}

IL_0073:
	{
		LayoutCache_t0D14FE6139444D164ECA5D31E39E625D80077468 * L_20 = V_2;
		return L_20;
	}
}
// System.Void UnityEngine.GUILayoutUtility::Begin(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void GUILayoutUtility_Begin_m6876A33199599688408A4AD364069090E833B237 (int32_t ___instanceID0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUILayoutUtility_Begin_m6876A33199599688408A4AD364069090E833B237_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	LayoutCache_t0D14FE6139444D164ECA5D31E39E625D80077468 * V_0 = NULL;
	GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * V_1 = NULL;
	{
		int32_t L_0 = ___instanceID0;
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_il2cpp_TypeInfo_var);
		LayoutCache_t0D14FE6139444D164ECA5D31E39E625D80077468 * L_1 = GUILayoutUtility_SelectIDList_m230ED9206897C92C5B090B3BBFC9B408603E56FD(L_0, (bool)0, /*hidden argument*/NULL);
		V_0 = L_1;
		Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_2 = Event_get_current_m072CEE599D11B8A9A916697E57C0F561188CDB2B(/*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = Event_get_type_mAABE4A35E5658E0079A1518D318AF2592F51D6FA(L_2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)8))))
		{
			goto IL_0078;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_il2cpp_TypeInfo_var);
		LayoutCache_t0D14FE6139444D164ECA5D31E39E625D80077468 * L_4 = ((GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_il2cpp_TypeInfo_var))->get_current_2();
		LayoutCache_t0D14FE6139444D164ECA5D31E39E625D80077468 * L_5 = V_0;
		GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * L_6 = (GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 *)il2cpp_codegen_object_new(GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601_il2cpp_TypeInfo_var);
		GUILayoutGroup__ctor_m14D8B35B4A89F6688D354A534ED871860905BA3B(L_6, /*hidden argument*/NULL);
		GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * L_7 = L_6;
		V_1 = L_7;
		NullCheck(L_5);
		L_5->set_topLevel_0(L_7);
		GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * L_8 = V_1;
		NullCheck(L_4);
		L_4->set_topLevel_0(L_8);
		LayoutCache_t0D14FE6139444D164ECA5D31E39E625D80077468 * L_9 = ((GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_il2cpp_TypeInfo_var))->get_current_2();
		NullCheck(L_9);
		GenericStack_tC59D21E8DBC50F3C608479C942200AC44CA2D5BC * L_10 = L_9->get_layoutGroups_1();
		NullCheck(L_10);
		VirtActionInvoker0::Invoke(13 /* System.Void System.Collections.Stack::Clear() */, L_10);
		LayoutCache_t0D14FE6139444D164ECA5D31E39E625D80077468 * L_11 = ((GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_il2cpp_TypeInfo_var))->get_current_2();
		NullCheck(L_11);
		GenericStack_tC59D21E8DBC50F3C608479C942200AC44CA2D5BC * L_12 = L_11->get_layoutGroups_1();
		LayoutCache_t0D14FE6139444D164ECA5D31E39E625D80077468 * L_13 = ((GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_il2cpp_TypeInfo_var))->get_current_2();
		NullCheck(L_13);
		GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * L_14 = L_13->get_topLevel_0();
		NullCheck(L_12);
		VirtActionInvoker1< RuntimeObject * >::Invoke(19 /* System.Void System.Collections.Stack::Push(System.Object) */, L_12, L_14);
		LayoutCache_t0D14FE6139444D164ECA5D31E39E625D80077468 * L_15 = ((GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_il2cpp_TypeInfo_var))->get_current_2();
		LayoutCache_t0D14FE6139444D164ECA5D31E39E625D80077468 * L_16 = V_0;
		GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * L_17 = (GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 *)il2cpp_codegen_object_new(GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601_il2cpp_TypeInfo_var);
		GUILayoutGroup__ctor_m14D8B35B4A89F6688D354A534ED871860905BA3B(L_17, /*hidden argument*/NULL);
		GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * L_18 = L_17;
		V_1 = L_18;
		NullCheck(L_16);
		L_16->set_windows_2(L_18);
		GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * L_19 = V_1;
		NullCheck(L_15);
		L_15->set_windows_2(L_19);
		goto IL_00aa;
	}

IL_0078:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_il2cpp_TypeInfo_var);
		LayoutCache_t0D14FE6139444D164ECA5D31E39E625D80077468 * L_20 = ((GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_il2cpp_TypeInfo_var))->get_current_2();
		LayoutCache_t0D14FE6139444D164ECA5D31E39E625D80077468 * L_21 = V_0;
		NullCheck(L_21);
		GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * L_22 = L_21->get_topLevel_0();
		NullCheck(L_20);
		L_20->set_topLevel_0(L_22);
		LayoutCache_t0D14FE6139444D164ECA5D31E39E625D80077468 * L_23 = ((GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_il2cpp_TypeInfo_var))->get_current_2();
		LayoutCache_t0D14FE6139444D164ECA5D31E39E625D80077468 * L_24 = V_0;
		NullCheck(L_24);
		GenericStack_tC59D21E8DBC50F3C608479C942200AC44CA2D5BC * L_25 = L_24->get_layoutGroups_1();
		NullCheck(L_23);
		L_23->set_layoutGroups_1(L_25);
		LayoutCache_t0D14FE6139444D164ECA5D31E39E625D80077468 * L_26 = ((GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_il2cpp_TypeInfo_var))->get_current_2();
		LayoutCache_t0D14FE6139444D164ECA5D31E39E625D80077468 * L_27 = V_0;
		NullCheck(L_27);
		GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * L_28 = L_27->get_windows_2();
		NullCheck(L_26);
		L_26->set_windows_2(L_28);
	}

IL_00aa:
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutUtility::BeginWindow(System.Int32,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" IL2CPP_METHOD_ATTR void GUILayoutUtility_BeginWindow_mB3475D9BE89CF26AB0E6F0D46B1930F1874EB132 (int32_t ___windowID0, GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___style1, GUILayoutOptionU5BU5D_tAB2AD0A365DBD2277A04E397AE8E1430A022AF1B* ___options2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUILayoutUtility_BeginWindow_mB3475D9BE89CF26AB0E6F0D46B1930F1874EB132_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	LayoutCache_t0D14FE6139444D164ECA5D31E39E625D80077468 * V_0 = NULL;
	GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * V_1 = NULL;
	{
		int32_t L_0 = ___windowID0;
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_il2cpp_TypeInfo_var);
		LayoutCache_t0D14FE6139444D164ECA5D31E39E625D80077468 * L_1 = GUILayoutUtility_SelectIDList_m230ED9206897C92C5B090B3BBFC9B408603E56FD(L_0, (bool)1, /*hidden argument*/NULL);
		V_0 = L_1;
		Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_2 = Event_get_current_m072CEE599D11B8A9A916697E57C0F561188CDB2B(/*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = Event_get_type_mAABE4A35E5658E0079A1518D318AF2592F51D6FA(L_2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)8))))
		{
			goto IL_00ae;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_il2cpp_TypeInfo_var);
		LayoutCache_t0D14FE6139444D164ECA5D31E39E625D80077468 * L_4 = ((GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_il2cpp_TypeInfo_var))->get_current_2();
		LayoutCache_t0D14FE6139444D164ECA5D31E39E625D80077468 * L_5 = V_0;
		GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * L_6 = (GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 *)il2cpp_codegen_object_new(GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601_il2cpp_TypeInfo_var);
		GUILayoutGroup__ctor_m14D8B35B4A89F6688D354A534ED871860905BA3B(L_6, /*hidden argument*/NULL);
		GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * L_7 = L_6;
		V_1 = L_7;
		NullCheck(L_5);
		L_5->set_topLevel_0(L_7);
		GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * L_8 = V_1;
		NullCheck(L_4);
		L_4->set_topLevel_0(L_8);
		LayoutCache_t0D14FE6139444D164ECA5D31E39E625D80077468 * L_9 = ((GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_il2cpp_TypeInfo_var))->get_current_2();
		NullCheck(L_9);
		GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * L_10 = L_9->get_topLevel_0();
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_11 = ___style1;
		NullCheck(L_10);
		GUILayoutEntry_set_style_mEDD232A6CDB1B76ABC33EA06A05235316A180E2D(L_10, L_11, /*hidden argument*/NULL);
		LayoutCache_t0D14FE6139444D164ECA5D31E39E625D80077468 * L_12 = ((GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_il2cpp_TypeInfo_var))->get_current_2();
		NullCheck(L_12);
		GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * L_13 = L_12->get_topLevel_0();
		int32_t L_14 = ___windowID0;
		NullCheck(L_13);
		L_13->set_windowID_17(L_14);
		GUILayoutOptionU5BU5D_tAB2AD0A365DBD2277A04E397AE8E1430A022AF1B* L_15 = ___options2;
		if (!L_15)
		{
			goto IL_0068;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_il2cpp_TypeInfo_var);
		LayoutCache_t0D14FE6139444D164ECA5D31E39E625D80077468 * L_16 = ((GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_il2cpp_TypeInfo_var))->get_current_2();
		NullCheck(L_16);
		GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * L_17 = L_16->get_topLevel_0();
		GUILayoutOptionU5BU5D_tAB2AD0A365DBD2277A04E397AE8E1430A022AF1B* L_18 = ___options2;
		NullCheck(L_17);
		VirtActionInvoker1< GUILayoutOptionU5BU5D_tAB2AD0A365DBD2277A04E397AE8E1430A022AF1B* >::Invoke(13 /* System.Void UnityEngine.GUILayoutEntry::ApplyOptions(UnityEngine.GUILayoutOption[]) */, L_17, L_18);
	}

IL_0068:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_il2cpp_TypeInfo_var);
		LayoutCache_t0D14FE6139444D164ECA5D31E39E625D80077468 * L_19 = ((GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_il2cpp_TypeInfo_var))->get_current_2();
		NullCheck(L_19);
		GenericStack_tC59D21E8DBC50F3C608479C942200AC44CA2D5BC * L_20 = L_19->get_layoutGroups_1();
		NullCheck(L_20);
		VirtActionInvoker0::Invoke(13 /* System.Void System.Collections.Stack::Clear() */, L_20);
		LayoutCache_t0D14FE6139444D164ECA5D31E39E625D80077468 * L_21 = ((GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_il2cpp_TypeInfo_var))->get_current_2();
		NullCheck(L_21);
		GenericStack_tC59D21E8DBC50F3C608479C942200AC44CA2D5BC * L_22 = L_21->get_layoutGroups_1();
		LayoutCache_t0D14FE6139444D164ECA5D31E39E625D80077468 * L_23 = ((GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_il2cpp_TypeInfo_var))->get_current_2();
		NullCheck(L_23);
		GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * L_24 = L_23->get_topLevel_0();
		NullCheck(L_22);
		VirtActionInvoker1< RuntimeObject * >::Invoke(19 /* System.Void System.Collections.Stack::Push(System.Object) */, L_22, L_24);
		LayoutCache_t0D14FE6139444D164ECA5D31E39E625D80077468 * L_25 = ((GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_il2cpp_TypeInfo_var))->get_current_2();
		LayoutCache_t0D14FE6139444D164ECA5D31E39E625D80077468 * L_26 = V_0;
		GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * L_27 = (GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 *)il2cpp_codegen_object_new(GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601_il2cpp_TypeInfo_var);
		GUILayoutGroup__ctor_m14D8B35B4A89F6688D354A534ED871860905BA3B(L_27, /*hidden argument*/NULL);
		GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * L_28 = L_27;
		V_1 = L_28;
		NullCheck(L_26);
		L_26->set_windows_2(L_28);
		GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * L_29 = V_1;
		NullCheck(L_25);
		L_25->set_windows_2(L_29);
		goto IL_00e0;
	}

IL_00ae:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_il2cpp_TypeInfo_var);
		LayoutCache_t0D14FE6139444D164ECA5D31E39E625D80077468 * L_30 = ((GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_il2cpp_TypeInfo_var))->get_current_2();
		LayoutCache_t0D14FE6139444D164ECA5D31E39E625D80077468 * L_31 = V_0;
		NullCheck(L_31);
		GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * L_32 = L_31->get_topLevel_0();
		NullCheck(L_30);
		L_30->set_topLevel_0(L_32);
		LayoutCache_t0D14FE6139444D164ECA5D31E39E625D80077468 * L_33 = ((GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_il2cpp_TypeInfo_var))->get_current_2();
		LayoutCache_t0D14FE6139444D164ECA5D31E39E625D80077468 * L_34 = V_0;
		NullCheck(L_34);
		GenericStack_tC59D21E8DBC50F3C608479C942200AC44CA2D5BC * L_35 = L_34->get_layoutGroups_1();
		NullCheck(L_33);
		L_33->set_layoutGroups_1(L_35);
		LayoutCache_t0D14FE6139444D164ECA5D31E39E625D80077468 * L_36 = ((GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_il2cpp_TypeInfo_var))->get_current_2();
		LayoutCache_t0D14FE6139444D164ECA5D31E39E625D80077468 * L_37 = V_0;
		NullCheck(L_37);
		GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * L_38 = L_37->get_windows_2();
		NullCheck(L_36);
		L_36->set_windows_2(L_38);
	}

IL_00e0:
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutUtility::Layout()
extern "C" IL2CPP_METHOD_ATTR void GUILayoutUtility_Layout_mB01F00635FD538214B47A545C53E4F8C682491B5 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUILayoutUtility_Layout_mB01F00635FD538214B47A545C53E4F8C682491B5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_il2cpp_TypeInfo_var);
		LayoutCache_t0D14FE6139444D164ECA5D31E39E625D80077468 * L_0 = ((GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_il2cpp_TypeInfo_var))->get_current_2();
		NullCheck(L_0);
		GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * L_1 = L_0->get_topLevel_0();
		NullCheck(L_1);
		int32_t L_2 = L_1->get_windowID_17();
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_00b2;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_il2cpp_TypeInfo_var);
		LayoutCache_t0D14FE6139444D164ECA5D31E39E625D80077468 * L_3 = ((GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_il2cpp_TypeInfo_var))->get_current_2();
		NullCheck(L_3);
		GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * L_4 = L_3->get_topLevel_0();
		NullCheck(L_4);
		VirtActionInvoker0::Invoke(8 /* System.Void UnityEngine.GUILayoutEntry::CalcWidth() */, L_4);
		LayoutCache_t0D14FE6139444D164ECA5D31E39E625D80077468 * L_5 = ((GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_il2cpp_TypeInfo_var))->get_current_2();
		NullCheck(L_5);
		GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * L_6 = L_5->get_topLevel_0();
		int32_t L_7 = Screen_get_width_m8ECCEF7FF17395D1237BC0193D7A6640A3FEEAD3(/*hidden argument*/NULL);
		float L_8 = GUIUtility_get_pixelsPerPoint_m6B4AB38F60A0AC54034A62043F74E06A613E4D56(/*hidden argument*/NULL);
		LayoutCache_t0D14FE6139444D164ECA5D31E39E625D80077468 * L_9 = ((GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_il2cpp_TypeInfo_var))->get_current_2();
		NullCheck(L_9);
		GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * L_10 = L_9->get_topLevel_0();
		NullCheck(L_10);
		float L_11 = ((GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 *)L_10)->get_maxWidth_1();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_12 = Mathf_Min_mCF9BE0E9CAC9F18D207692BB2DAC7F3E1D4E1CB7(((float)((float)(((float)((float)L_7)))/(float)L_8)), L_11, /*hidden argument*/NULL);
		NullCheck(L_6);
		VirtActionInvoker2< float, float >::Invoke(10 /* System.Void UnityEngine.GUILayoutEntry::SetHorizontal(System.Single,System.Single) */, L_6, (0.0f), L_12);
		LayoutCache_t0D14FE6139444D164ECA5D31E39E625D80077468 * L_13 = ((GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_il2cpp_TypeInfo_var))->get_current_2();
		NullCheck(L_13);
		GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * L_14 = L_13->get_topLevel_0();
		NullCheck(L_14);
		VirtActionInvoker0::Invoke(9 /* System.Void UnityEngine.GUILayoutEntry::CalcHeight() */, L_14);
		LayoutCache_t0D14FE6139444D164ECA5D31E39E625D80077468 * L_15 = ((GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_il2cpp_TypeInfo_var))->get_current_2();
		NullCheck(L_15);
		GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * L_16 = L_15->get_topLevel_0();
		int32_t L_17 = Screen_get_height_mF5B64EBC4CDE0EAAA5713C1452ED2CE475F25150(/*hidden argument*/NULL);
		float L_18 = GUIUtility_get_pixelsPerPoint_m6B4AB38F60A0AC54034A62043F74E06A613E4D56(/*hidden argument*/NULL);
		LayoutCache_t0D14FE6139444D164ECA5D31E39E625D80077468 * L_19 = ((GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_il2cpp_TypeInfo_var))->get_current_2();
		NullCheck(L_19);
		GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * L_20 = L_19->get_topLevel_0();
		NullCheck(L_20);
		float L_21 = ((GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 *)L_20)->get_maxHeight_3();
		float L_22 = Mathf_Min_mCF9BE0E9CAC9F18D207692BB2DAC7F3E1D4E1CB7(((float)((float)(((float)((float)L_17)))/(float)L_18)), L_21, /*hidden argument*/NULL);
		NullCheck(L_16);
		VirtActionInvoker2< float, float >::Invoke(11 /* System.Void UnityEngine.GUILayoutEntry::SetVertical(System.Single,System.Single) */, L_16, (0.0f), L_22);
		LayoutCache_t0D14FE6139444D164ECA5D31E39E625D80077468 * L_23 = ((GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_il2cpp_TypeInfo_var))->get_current_2();
		NullCheck(L_23);
		GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * L_24 = L_23->get_windows_2();
		GUILayoutUtility_LayoutFreeGroup_m890E6BD9614C48B151D61F197251E3DBAC637967(L_24, /*hidden argument*/NULL);
		goto IL_00d2;
	}

IL_00b2:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_il2cpp_TypeInfo_var);
		LayoutCache_t0D14FE6139444D164ECA5D31E39E625D80077468 * L_25 = ((GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_il2cpp_TypeInfo_var))->get_current_2();
		NullCheck(L_25);
		GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * L_26 = L_25->get_topLevel_0();
		GUILayoutUtility_LayoutSingleGroup_m0BE91E195E4E2FC8B5B491783AFACBD1310F15A1(L_26, /*hidden argument*/NULL);
		LayoutCache_t0D14FE6139444D164ECA5D31E39E625D80077468 * L_27 = ((GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_il2cpp_TypeInfo_var))->get_current_2();
		NullCheck(L_27);
		GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * L_28 = L_27->get_windows_2();
		GUILayoutUtility_LayoutFreeGroup_m890E6BD9614C48B151D61F197251E3DBAC637967(L_28, /*hidden argument*/NULL);
	}

IL_00d2:
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutUtility::LayoutFromEditorWindow()
extern "C" IL2CPP_METHOD_ATTR void GUILayoutUtility_LayoutFromEditorWindow_mBE82BE965B54F68E7090952684C86BFF0538AB52 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUILayoutUtility_LayoutFromEditorWindow_mBE82BE965B54F68E7090952684C86BFF0538AB52_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_il2cpp_TypeInfo_var);
		LayoutCache_t0D14FE6139444D164ECA5D31E39E625D80077468 * L_0 = ((GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_il2cpp_TypeInfo_var))->get_current_2();
		NullCheck(L_0);
		GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * L_1 = L_0->get_topLevel_0();
		if (!L_1)
		{
			goto IL_0084;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_il2cpp_TypeInfo_var);
		LayoutCache_t0D14FE6139444D164ECA5D31E39E625D80077468 * L_2 = ((GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_il2cpp_TypeInfo_var))->get_current_2();
		NullCheck(L_2);
		GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * L_3 = L_2->get_topLevel_0();
		NullCheck(L_3);
		VirtActionInvoker0::Invoke(8 /* System.Void UnityEngine.GUILayoutEntry::CalcWidth() */, L_3);
		LayoutCache_t0D14FE6139444D164ECA5D31E39E625D80077468 * L_4 = ((GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_il2cpp_TypeInfo_var))->get_current_2();
		NullCheck(L_4);
		GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * L_5 = L_4->get_topLevel_0();
		int32_t L_6 = Screen_get_width_m8ECCEF7FF17395D1237BC0193D7A6640A3FEEAD3(/*hidden argument*/NULL);
		float L_7 = GUIUtility_get_pixelsPerPoint_m6B4AB38F60A0AC54034A62043F74E06A613E4D56(/*hidden argument*/NULL);
		NullCheck(L_5);
		VirtActionInvoker2< float, float >::Invoke(10 /* System.Void UnityEngine.GUILayoutEntry::SetHorizontal(System.Single,System.Single) */, L_5, (0.0f), ((float)((float)(((float)((float)L_6)))/(float)L_7)));
		LayoutCache_t0D14FE6139444D164ECA5D31E39E625D80077468 * L_8 = ((GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_il2cpp_TypeInfo_var))->get_current_2();
		NullCheck(L_8);
		GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * L_9 = L_8->get_topLevel_0();
		NullCheck(L_9);
		VirtActionInvoker0::Invoke(9 /* System.Void UnityEngine.GUILayoutEntry::CalcHeight() */, L_9);
		LayoutCache_t0D14FE6139444D164ECA5D31E39E625D80077468 * L_10 = ((GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_il2cpp_TypeInfo_var))->get_current_2();
		NullCheck(L_10);
		GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * L_11 = L_10->get_topLevel_0();
		int32_t L_12 = Screen_get_height_mF5B64EBC4CDE0EAAA5713C1452ED2CE475F25150(/*hidden argument*/NULL);
		float L_13 = GUIUtility_get_pixelsPerPoint_m6B4AB38F60A0AC54034A62043F74E06A613E4D56(/*hidden argument*/NULL);
		NullCheck(L_11);
		VirtActionInvoker2< float, float >::Invoke(11 /* System.Void UnityEngine.GUILayoutEntry::SetVertical(System.Single,System.Single) */, L_11, (0.0f), ((float)((float)(((float)((float)L_12)))/(float)L_13)));
		LayoutCache_t0D14FE6139444D164ECA5D31E39E625D80077468 * L_14 = ((GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_il2cpp_TypeInfo_var))->get_current_2();
		NullCheck(L_14);
		GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * L_15 = L_14->get_windows_2();
		GUILayoutUtility_LayoutFreeGroup_m890E6BD9614C48B151D61F197251E3DBAC637967(L_15, /*hidden argument*/NULL);
		goto IL_0090;
	}

IL_0084:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteral8CE379368AB8E774A4F51BE28DD637628F20DA93, /*hidden argument*/NULL);
	}

IL_0090:
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutUtility::LayoutFreeGroup(UnityEngine.GUILayoutGroup)
extern "C" IL2CPP_METHOD_ATTR void GUILayoutUtility_LayoutFreeGroup_m890E6BD9614C48B151D61F197251E3DBAC637967 (GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * ___toplevel0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUILayoutUtility_LayoutFreeGroup_m890E6BD9614C48B151D61F197251E3DBAC637967_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * V_0 = NULL;
	Enumerator_t4D01DB2C4CF53D79BD58A10640F59CBCF1354587  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * L_0 = ___toplevel0;
		NullCheck(L_0);
		List_1_t046427F3923444CF746C550FD96A3D0E4189D273 * L_1 = L_0->get_entries_11();
		NullCheck(L_1);
		Enumerator_t4D01DB2C4CF53D79BD58A10640F59CBCF1354587  L_2 = List_1_GetEnumerator_mA457B3CB61E2B7BAFB0F7D0ADEFD25237B4429DF(L_1, /*hidden argument*/List_1_GetEnumerator_mA457B3CB61E2B7BAFB0F7D0ADEFD25237B4429DF_RuntimeMethod_var);
		V_1 = L_2;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0028;
		}

IL_0013:
		{
			GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 * L_3 = Enumerator_get_Current_m9422C22943D0E9900CDB7DF407D9EBE215B2A6B6((Enumerator_t4D01DB2C4CF53D79BD58A10640F59CBCF1354587 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m9422C22943D0E9900CDB7DF407D9EBE215B2A6B6_RuntimeMethod_var);
			V_0 = ((GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 *)CastclassClass((RuntimeObject*)L_3, GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601_il2cpp_TypeInfo_var));
			GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * L_4 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_il2cpp_TypeInfo_var);
			GUILayoutUtility_LayoutSingleGroup_m0BE91E195E4E2FC8B5B491783AFACBD1310F15A1(L_4, /*hidden argument*/NULL);
		}

IL_0028:
		{
			bool L_5 = Enumerator_MoveNext_m3A0A0A98E9378A32A74EC51C4CAB6C564001CAC7((Enumerator_t4D01DB2C4CF53D79BD58A10640F59CBCF1354587 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m3A0A0A98E9378A32A74EC51C4CAB6C564001CAC7_RuntimeMethod_var);
			if (L_5)
			{
				goto IL_0013;
			}
		}

IL_0034:
		{
			IL2CPP_LEAVE(0x47, FINALLY_0039);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0039;
	}

FINALLY_0039:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mC263356C16A1948C299607F9A77AAFAEB7C55A38((Enumerator_t4D01DB2C4CF53D79BD58A10640F59CBCF1354587 *)(&V_1), /*hidden argument*/Enumerator_Dispose_mC263356C16A1948C299607F9A77AAFAEB7C55A38_RuntimeMethod_var);
		IL2CPP_END_FINALLY(57)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(57)
	{
		IL2CPP_JUMP_TBL(0x47, IL_0047)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0047:
	{
		GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * L_6 = ___toplevel0;
		NullCheck(L_6);
		GUILayoutGroup_ResetCursor_mD159DD9E101F6F348249D27D95709E1DC5C0A13F(L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUILayoutUtility::LayoutSingleGroup(UnityEngine.GUILayoutGroup)
extern "C" IL2CPP_METHOD_ATTR void GUILayoutUtility_LayoutSingleGroup_m0BE91E195E4E2FC8B5B491783AFACBD1310F15A1 (GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUILayoutUtility_LayoutSingleGroup_m0BE91E195E4E2FC8B5B491783AFACBD1310F15A1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Rect_t35B976DE901B5423C11705E156938EA27AB402CE  V_4;
	memset(&V_4, 0, sizeof(V_4));
	{
		GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * L_0 = ___i0;
		NullCheck(L_0);
		bool L_1 = L_0->get_isWindow_16();
		if (L_1)
		{
			goto IL_0077;
		}
	}
	{
		GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * L_2 = ___i0;
		NullCheck(L_2);
		float L_3 = ((GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 *)L_2)->get_minWidth_0();
		V_0 = L_3;
		GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * L_4 = ___i0;
		NullCheck(L_4);
		float L_5 = ((GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 *)L_4)->get_maxWidth_1();
		V_1 = L_5;
		GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * L_6 = ___i0;
		NullCheck(L_6);
		VirtActionInvoker0::Invoke(8 /* System.Void UnityEngine.GUILayoutEntry::CalcWidth() */, L_6);
		GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * L_7 = ___i0;
		GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * L_8 = ___i0;
		NullCheck(L_8);
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE * L_9 = ((GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 *)L_8)->get_address_of_rect_4();
		float L_10 = Rect_get_x_mC51A461F546D14832EB96B11A7198DADDE2597B7((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)L_9, /*hidden argument*/NULL);
		GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * L_11 = ___i0;
		NullCheck(L_11);
		float L_12 = ((GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 *)L_11)->get_maxWidth_1();
		float L_13 = V_0;
		float L_14 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_15 = Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507(L_12, L_13, L_14, /*hidden argument*/NULL);
		NullCheck(L_7);
		VirtActionInvoker2< float, float >::Invoke(10 /* System.Void UnityEngine.GUILayoutEntry::SetHorizontal(System.Single,System.Single) */, L_7, L_10, L_15);
		GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * L_16 = ___i0;
		NullCheck(L_16);
		float L_17 = ((GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 *)L_16)->get_minHeight_2();
		V_2 = L_17;
		GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * L_18 = ___i0;
		NullCheck(L_18);
		float L_19 = ((GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 *)L_18)->get_maxHeight_3();
		V_3 = L_19;
		GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * L_20 = ___i0;
		NullCheck(L_20);
		VirtActionInvoker0::Invoke(9 /* System.Void UnityEngine.GUILayoutEntry::CalcHeight() */, L_20);
		GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * L_21 = ___i0;
		GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * L_22 = ___i0;
		NullCheck(L_22);
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE * L_23 = ((GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 *)L_22)->get_address_of_rect_4();
		float L_24 = Rect_get_y_m53E3E4F62D9840FBEA751A66293038F1F5D1D45C((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)L_23, /*hidden argument*/NULL);
		GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * L_25 = ___i0;
		NullCheck(L_25);
		float L_26 = ((GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 *)L_25)->get_maxHeight_3();
		float L_27 = V_2;
		float L_28 = V_3;
		float L_29 = Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507(L_26, L_27, L_28, /*hidden argument*/NULL);
		NullCheck(L_21);
		VirtActionInvoker2< float, float >::Invoke(11 /* System.Void UnityEngine.GUILayoutEntry::SetVertical(System.Single,System.Single) */, L_21, L_24, L_29);
		goto IL_00ed;
	}

IL_0077:
	{
		GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * L_30 = ___i0;
		NullCheck(L_30);
		VirtActionInvoker0::Invoke(8 /* System.Void UnityEngine.GUILayoutEntry::CalcWidth() */, L_30);
		GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * L_31 = ___i0;
		NullCheck(L_31);
		int32_t L_32 = L_31->get_windowID_17();
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_il2cpp_TypeInfo_var);
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_33 = GUILayoutUtility_Internal_GetWindowRect_mE35BED0433EE8BD928CD52681620519E647A1DA9(L_32, /*hidden argument*/NULL);
		V_4 = L_33;
		GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * L_34 = ___i0;
		float L_35 = Rect_get_x_mC51A461F546D14832EB96B11A7198DADDE2597B7((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_4), /*hidden argument*/NULL);
		float L_36 = Rect_get_width_m54FF69FC2C086E2DC349ED091FD0D6576BFB1484((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_4), /*hidden argument*/NULL);
		GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * L_37 = ___i0;
		NullCheck(L_37);
		float L_38 = ((GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 *)L_37)->get_minWidth_0();
		GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * L_39 = ___i0;
		NullCheck(L_39);
		float L_40 = ((GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 *)L_39)->get_maxWidth_1();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_41 = Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507(L_36, L_38, L_40, /*hidden argument*/NULL);
		NullCheck(L_34);
		VirtActionInvoker2< float, float >::Invoke(10 /* System.Void UnityEngine.GUILayoutEntry::SetHorizontal(System.Single,System.Single) */, L_34, L_35, L_41);
		GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * L_42 = ___i0;
		NullCheck(L_42);
		VirtActionInvoker0::Invoke(9 /* System.Void UnityEngine.GUILayoutEntry::CalcHeight() */, L_42);
		GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * L_43 = ___i0;
		float L_44 = Rect_get_y_m53E3E4F62D9840FBEA751A66293038F1F5D1D45C((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_4), /*hidden argument*/NULL);
		float L_45 = Rect_get_height_m088C36990E0A255C5D7DCE36575DCE23ABB364B5((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_4), /*hidden argument*/NULL);
		GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * L_46 = ___i0;
		NullCheck(L_46);
		float L_47 = ((GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 *)L_46)->get_minHeight_2();
		GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * L_48 = ___i0;
		NullCheck(L_48);
		float L_49 = ((GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 *)L_48)->get_maxHeight_3();
		float L_50 = Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507(L_45, L_47, L_49, /*hidden argument*/NULL);
		NullCheck(L_43);
		VirtActionInvoker2< float, float >::Invoke(11 /* System.Void UnityEngine.GUILayoutEntry::SetVertical(System.Single,System.Single) */, L_43, L_44, L_50);
		GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * L_51 = ___i0;
		NullCheck(L_51);
		int32_t L_52 = L_51->get_windowID_17();
		GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * L_53 = ___i0;
		NullCheck(L_53);
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_54 = ((GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 *)L_53)->get_rect_4();
		GUILayoutUtility_Internal_MoveWindow_mFCB2DFE399B833D263138CF0A57626AFF52CB037(L_52, L_54, /*hidden argument*/NULL);
	}

IL_00ed:
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutUtility::.cctor()
extern "C" IL2CPP_METHOD_ATTR void GUILayoutUtility__cctor_m6C436C771D62B8982AE0E47DD5D41C607988395F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUILayoutUtility__cctor_m6C436C771D62B8982AE0E47DD5D41C607988395F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t0F1A21E14D53E05B0F1D474060AC4B36995FBCA1 * L_0 = (Dictionary_2_t0F1A21E14D53E05B0F1D474060AC4B36995FBCA1 *)il2cpp_codegen_object_new(Dictionary_2_t0F1A21E14D53E05B0F1D474060AC4B36995FBCA1_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mD9286F4A0EF1BEC0B6BC4BD72D8D6A246B994EBF(L_0, /*hidden argument*/Dictionary_2__ctor_mD9286F4A0EF1BEC0B6BC4BD72D8D6A246B994EBF_RuntimeMethod_var);
		((GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_il2cpp_TypeInfo_var))->set_s_StoredLayouts_0(L_0);
		Dictionary_2_t0F1A21E14D53E05B0F1D474060AC4B36995FBCA1 * L_1 = (Dictionary_2_t0F1A21E14D53E05B0F1D474060AC4B36995FBCA1 *)il2cpp_codegen_object_new(Dictionary_2_t0F1A21E14D53E05B0F1D474060AC4B36995FBCA1_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mD9286F4A0EF1BEC0B6BC4BD72D8D6A246B994EBF(L_1, /*hidden argument*/Dictionary_2__ctor_mD9286F4A0EF1BEC0B6BC4BD72D8D6A246B994EBF_RuntimeMethod_var);
		((GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_il2cpp_TypeInfo_var))->set_s_StoredWindows_1(L_1);
		LayoutCache_t0D14FE6139444D164ECA5D31E39E625D80077468 * L_2 = (LayoutCache_t0D14FE6139444D164ECA5D31E39E625D80077468 *)il2cpp_codegen_object_new(LayoutCache_t0D14FE6139444D164ECA5D31E39E625D80077468_il2cpp_TypeInfo_var);
		LayoutCache__ctor_mF66D53540321BFD98CA89285D2E8FFDA5014A9CE(L_2, /*hidden argument*/NULL);
		((GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_il2cpp_TypeInfo_var))->set_current_2(L_2);
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_3;
		memset(&L_3, 0, sizeof(L_3));
		Rect__ctor_m50B92C75005C9C5A0D05E6E0EBB43AFAF7C66280((&L_3), (0.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		((GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_il2cpp_TypeInfo_var))->set_kDummyRect_3(L_3);
		return;
	}
}
// System.Void UnityEngine.GUILayoutUtility::Internal_GetWindowRect_Injected(System.Int32,UnityEngine.RectU26)
extern "C" IL2CPP_METHOD_ATTR void GUILayoutUtility_Internal_GetWindowRect_Injected_mE78DA4F8B25471CEFFCB6F43E37C7966FE436EEE (int32_t ___windowID0, Rect_t35B976DE901B5423C11705E156938EA27AB402CE * ___ret1, const RuntimeMethod* method)
{
	typedef void (*GUILayoutUtility_Internal_GetWindowRect_Injected_mE78DA4F8B25471CEFFCB6F43E37C7966FE436EEE_ftn) (int32_t, Rect_t35B976DE901B5423C11705E156938EA27AB402CE *);
	static GUILayoutUtility_Internal_GetWindowRect_Injected_mE78DA4F8B25471CEFFCB6F43E37C7966FE436EEE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUILayoutUtility_Internal_GetWindowRect_Injected_mE78DA4F8B25471CEFFCB6F43E37C7966FE436EEE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUILayoutUtility::Internal_GetWindowRect_Injected(System.Int32,UnityEngine.Rect&)");
	_il2cpp_icall_func(___windowID0, ___ret1);
}
// System.Void UnityEngine.GUILayoutUtility::Internal_MoveWindow_Injected(System.Int32,UnityEngine.RectU26)
extern "C" IL2CPP_METHOD_ATTR void GUILayoutUtility_Internal_MoveWindow_Injected_mD80D56182A5684AC3BDA2B50AC8191974A064ABE (int32_t ___windowID0, Rect_t35B976DE901B5423C11705E156938EA27AB402CE * ___r1, const RuntimeMethod* method)
{
	typedef void (*GUILayoutUtility_Internal_MoveWindow_Injected_mD80D56182A5684AC3BDA2B50AC8191974A064ABE_ftn) (int32_t, Rect_t35B976DE901B5423C11705E156938EA27AB402CE *);
	static GUILayoutUtility_Internal_MoveWindow_Injected_mD80D56182A5684AC3BDA2B50AC8191974A064ABE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUILayoutUtility_Internal_MoveWindow_Injected_mD80D56182A5684AC3BDA2B50AC8191974A064ABE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUILayoutUtility::Internal_MoveWindow_Injected(System.Int32,UnityEngine.Rect&)");
	_il2cpp_icall_func(___windowID0, ___r1);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.GUILayoutUtility_LayoutCache::.ctor()
extern "C" IL2CPP_METHOD_ATTR void LayoutCache__ctor_mF66D53540321BFD98CA89285D2E8FFDA5014A9CE (LayoutCache_t0D14FE6139444D164ECA5D31E39E625D80077468 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LayoutCache__ctor_mF66D53540321BFD98CA89285D2E8FFDA5014A9CE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * L_0 = (GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 *)il2cpp_codegen_object_new(GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601_il2cpp_TypeInfo_var);
		GUILayoutGroup__ctor_m14D8B35B4A89F6688D354A534ED871860905BA3B(L_0, /*hidden argument*/NULL);
		__this->set_topLevel_0(L_0);
		GenericStack_tC59D21E8DBC50F3C608479C942200AC44CA2D5BC * L_1 = (GenericStack_tC59D21E8DBC50F3C608479C942200AC44CA2D5BC *)il2cpp_codegen_object_new(GenericStack_tC59D21E8DBC50F3C608479C942200AC44CA2D5BC_il2cpp_TypeInfo_var);
		GenericStack__ctor_m0659B84DB6B093AF1F01F566686C510DDEEAE848(L_1, /*hidden argument*/NULL);
		__this->set_layoutGroups_1(L_1);
		GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * L_2 = (GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 *)il2cpp_codegen_object_new(GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601_il2cpp_TypeInfo_var);
		GUILayoutGroup__ctor_m14D8B35B4A89F6688D354A534ED871860905BA3B(L_2, /*hidden argument*/NULL);
		__this->set_windows_2(L_2);
		Object__ctor_m8BA07445967EE2CC15961AD3C16F25DB74506EA0(__this, /*hidden argument*/NULL);
		GenericStack_tC59D21E8DBC50F3C608479C942200AC44CA2D5BC * L_3 = __this->get_layoutGroups_1();
		GUILayoutGroup_tCC791055AD03074C1257B699304E4B45C97DE601 * L_4 = __this->get_topLevel_0();
		NullCheck(L_3);
		VirtActionInvoker1< RuntimeObject * >::Invoke(19 /* System.Void System.Collections.Stack::Push(System.Object) */, L_3, L_4);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.GUIScrollGroup::.ctor()
extern "C" IL2CPP_METHOD_ATTR void GUIScrollGroup__ctor_m02640E287AFD4B19EA03F7867247ED9D0836F41D (GUIScrollGroup_tF7FE45226FB28968F68A8D2428FE9EA7DC5B18EE * __this, const RuntimeMethod* method)
{
	{
		__this->set_allowHorizontalScroll_37((bool)1);
		__this->set_allowVerticalScroll_38((bool)1);
		GUILayoutGroup__ctor_m14D8B35B4A89F6688D354A534ED871860905BA3B(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUIScrollGroup::CalcWidth()
extern "C" IL2CPP_METHOD_ATTR void GUIScrollGroup_CalcWidth_mA061AA4FA5BDE43DF862D57E7BF7C2A13147AA86 (GUIScrollGroup_tF7FE45226FB28968F68A8D2428FE9EA7DC5B18EE * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		float L_0 = ((GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 *)__this)->get_minWidth_0();
		V_0 = L_0;
		float L_1 = ((GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 *)__this)->get_maxWidth_1();
		V_1 = L_1;
		bool L_2 = __this->get_allowHorizontalScroll_37();
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		((GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 *)__this)->set_minWidth_0((0.0f));
		((GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 *)__this)->set_maxWidth_1((0.0f));
	}

IL_0032:
	{
		GUILayoutGroup_CalcWidth_m0D2819C659392B14175C2B163DD889AD35794A9B(__this, /*hidden argument*/NULL);
		float L_3 = ((GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 *)__this)->get_minWidth_0();
		__this->set_calcMinWidth_31(L_3);
		float L_4 = ((GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 *)__this)->get_maxWidth_1();
		__this->set_calcMaxWidth_32(L_4);
		bool L_5 = __this->get_allowHorizontalScroll_37();
		if (!L_5)
		{
			goto IL_00a5;
		}
	}
	{
		float L_6 = ((GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 *)__this)->get_minWidth_0();
		if ((!(((float)L_6) > ((float)(32.0f)))))
		{
			goto IL_0077;
		}
	}
	{
		((GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 *)__this)->set_minWidth_0((32.0f));
	}

IL_0077:
	{
		float L_7 = V_0;
		if ((((float)L_7) == ((float)(0.0f))))
		{
			goto IL_0089;
		}
	}
	{
		float L_8 = V_0;
		((GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 *)__this)->set_minWidth_0(L_8);
	}

IL_0089:
	{
		float L_9 = V_1;
		if ((((float)L_9) == ((float)(0.0f))))
		{
			goto IL_00a4;
		}
	}
	{
		float L_10 = V_1;
		((GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 *)__this)->set_maxWidth_1(L_10);
		((GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 *)__this)->set_stretchWidth_5(0);
	}

IL_00a4:
	{
	}

IL_00a5:
	{
		return;
	}
}
// System.Void UnityEngine.GUIScrollGroup::SetHorizontal(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void GUIScrollGroup_SetHorizontal_m89C0FEDC0F240656C2E692503321EFFF6E6107DA (GUIScrollGroup_tF7FE45226FB28968F68A8D2428FE9EA7DC5B18EE * __this, float ___x0, float ___width1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		bool L_0 = __this->get_needsVerticalScrollbar_40();
		if (!L_0)
		{
			goto IL_0030;
		}
	}
	{
		float L_1 = ___width1;
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_2 = __this->get_verticalScrollbar_42();
		NullCheck(L_2);
		float L_3 = GUIStyle_get_fixedWidth_mEACB70758F83DCD64CE363143849CC40E49B8D8D(L_2, /*hidden argument*/NULL);
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_4 = __this->get_verticalScrollbar_42();
		NullCheck(L_4);
		RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * L_5 = GUIStyle_get_margin_mFC3EA0FA030A6334AC03BDDFA4AC80419C9E5BAA(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		int32_t L_6 = RectOffset_get_left_mA86EC00866C1940134873E3A1565A1F700DE67AD(L_5, /*hidden argument*/NULL);
		G_B3_0 = ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), (float)(((float)((float)L_6)))));
		goto IL_0031;
	}

IL_0030:
	{
		float L_7 = ___width1;
		G_B3_0 = L_7;
	}

IL_0031:
	{
		V_0 = G_B3_0;
		bool L_8 = __this->get_allowHorizontalScroll_37();
		if (!L_8)
		{
			goto IL_0094;
		}
	}
	{
		float L_9 = V_0;
		float L_10 = __this->get_calcMinWidth_31();
		if ((!(((float)L_9) < ((float)L_10))))
		{
			goto IL_0094;
		}
	}
	{
		__this->set_needsHorizontalScrollbar_39((bool)1);
		float L_11 = __this->get_calcMinWidth_31();
		((GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 *)__this)->set_minWidth_0(L_11);
		float L_12 = __this->get_calcMaxWidth_32();
		((GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 *)__this)->set_maxWidth_1(L_12);
		float L_13 = ___x0;
		float L_14 = __this->get_calcMinWidth_31();
		GUILayoutGroup_SetHorizontal_m0AFB617E7BB6B32431BA65873B27660E6E5C9E51(__this, L_13, L_14, /*hidden argument*/NULL);
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE * L_15 = ((GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 *)__this)->get_address_of_rect_4();
		float L_16 = ___width1;
		Rect_set_width_mC81EF602AC91E0C615C12FCE060254A461A152B8((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)L_15, L_16, /*hidden argument*/NULL);
		float L_17 = __this->get_calcMinWidth_31();
		__this->set_clientWidth_35(L_17);
		goto IL_00dd;
	}

IL_0094:
	{
		__this->set_needsHorizontalScrollbar_39((bool)0);
		bool L_18 = __this->get_allowHorizontalScroll_37();
		if (!L_18)
		{
			goto IL_00c1;
		}
	}
	{
		float L_19 = __this->get_calcMinWidth_31();
		((GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 *)__this)->set_minWidth_0(L_19);
		float L_20 = __this->get_calcMaxWidth_32();
		((GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 *)__this)->set_maxWidth_1(L_20);
	}

IL_00c1:
	{
		float L_21 = ___x0;
		float L_22 = V_0;
		GUILayoutGroup_SetHorizontal_m0AFB617E7BB6B32431BA65873B27660E6E5C9E51(__this, L_21, L_22, /*hidden argument*/NULL);
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE * L_23 = ((GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 *)__this)->get_address_of_rect_4();
		float L_24 = ___width1;
		Rect_set_width_mC81EF602AC91E0C615C12FCE060254A461A152B8((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)L_23, L_24, /*hidden argument*/NULL);
		float L_25 = V_0;
		__this->set_clientWidth_35(L_25);
	}

IL_00dd:
	{
		return;
	}
}
// System.Void UnityEngine.GUIScrollGroup::CalcHeight()
extern "C" IL2CPP_METHOD_ATTR void GUIScrollGroup_CalcHeight_mD3A3C0B44A1E4DC567D1E8C20A68E1DD786EC196 (GUIScrollGroup_tF7FE45226FB28968F68A8D2428FE9EA7DC5B18EE * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		float L_0 = ((GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 *)__this)->get_minHeight_2();
		V_0 = L_0;
		float L_1 = ((GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 *)__this)->get_maxHeight_3();
		V_1 = L_1;
		bool L_2 = __this->get_allowVerticalScroll_38();
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		((GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 *)__this)->set_minHeight_2((0.0f));
		((GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 *)__this)->set_maxHeight_3((0.0f));
	}

IL_0032:
	{
		GUILayoutGroup_CalcHeight_m0511BD2172BC13D54ABC8DB5887A91C17E9F21BB(__this, /*hidden argument*/NULL);
		float L_3 = ((GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 *)__this)->get_minHeight_2();
		__this->set_calcMinHeight_33(L_3);
		float L_4 = ((GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 *)__this)->get_maxHeight_3();
		__this->set_calcMaxHeight_34(L_4);
		bool L_5 = __this->get_needsHorizontalScrollbar_39();
		if (!L_5)
		{
			goto IL_0097;
		}
	}
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_6 = __this->get_horizontalScrollbar_41();
		NullCheck(L_6);
		float L_7 = GUIStyle_get_fixedHeight_m9B5589C95B27C5590219413E8D7E9E1E95EB7708(L_6, /*hidden argument*/NULL);
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_8 = __this->get_horizontalScrollbar_41();
		NullCheck(L_8);
		RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * L_9 = GUIStyle_get_margin_mFC3EA0FA030A6334AC03BDDFA4AC80419C9E5BAA(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		int32_t L_10 = RectOffset_get_top_mBA813D4147BFBC079933054018437F411B6B41E1(L_9, /*hidden argument*/NULL);
		V_2 = ((float)il2cpp_codegen_add((float)L_7, (float)(((float)((float)L_10)))));
		float L_11 = ((GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 *)__this)->get_minHeight_2();
		float L_12 = V_2;
		((GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 *)__this)->set_minHeight_2(((float)il2cpp_codegen_add((float)L_11, (float)L_12)));
		float L_13 = ((GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 *)__this)->get_maxHeight_3();
		float L_14 = V_2;
		((GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 *)__this)->set_maxHeight_3(((float)il2cpp_codegen_add((float)L_13, (float)L_14)));
	}

IL_0097:
	{
		bool L_15 = __this->get_allowVerticalScroll_38();
		if (!L_15)
		{
			goto IL_00ec;
		}
	}
	{
		float L_16 = ((GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 *)__this)->get_minHeight_2();
		if ((!(((float)L_16) > ((float)(32.0f)))))
		{
			goto IL_00be;
		}
	}
	{
		((GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 *)__this)->set_minHeight_2((32.0f));
	}

IL_00be:
	{
		float L_17 = V_0;
		if ((((float)L_17) == ((float)(0.0f))))
		{
			goto IL_00d0;
		}
	}
	{
		float L_18 = V_0;
		((GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 *)__this)->set_minHeight_2(L_18);
	}

IL_00d0:
	{
		float L_19 = V_1;
		if ((((float)L_19) == ((float)(0.0f))))
		{
			goto IL_00eb;
		}
	}
	{
		float L_20 = V_1;
		((GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 *)__this)->set_maxHeight_3(L_20);
		((GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 *)__this)->set_stretchHeight_6(0);
	}

IL_00eb:
	{
	}

IL_00ec:
	{
		return;
	}
}
// System.Void UnityEngine.GUIScrollGroup::SetVertical(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void GUIScrollGroup_SetVertical_m4EF0255426047DF9A3E4C63C1ACBF3FE0690A7AB (GUIScrollGroup_tF7FE45226FB28968F68A8D2428FE9EA7DC5B18EE * __this, float ___y0, float ___height1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		float L_0 = ___height1;
		V_0 = L_0;
		bool L_1 = __this->get_needsHorizontalScrollbar_39();
		if (!L_1)
		{
			goto IL_002e;
		}
	}
	{
		float L_2 = V_0;
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_3 = __this->get_horizontalScrollbar_41();
		NullCheck(L_3);
		float L_4 = GUIStyle_get_fixedHeight_m9B5589C95B27C5590219413E8D7E9E1E95EB7708(L_3, /*hidden argument*/NULL);
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_5 = __this->get_horizontalScrollbar_41();
		NullCheck(L_5);
		RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * L_6 = GUIStyle_get_margin_mFC3EA0FA030A6334AC03BDDFA4AC80419C9E5BAA(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		int32_t L_7 = RectOffset_get_top_mBA813D4147BFBC079933054018437F411B6B41E1(L_6, /*hidden argument*/NULL);
		V_0 = ((float)il2cpp_codegen_subtract((float)L_2, (float)((float)il2cpp_codegen_add((float)L_4, (float)(((float)((float)L_7)))))));
	}

IL_002e:
	{
		bool L_8 = __this->get_allowVerticalScroll_38();
		if (!L_8)
		{
			goto IL_013e;
		}
	}
	{
		float L_9 = V_0;
		float L_10 = __this->get_calcMinHeight_33();
		if ((!(((float)L_9) < ((float)L_10))))
		{
			goto IL_013e;
		}
	}
	{
		bool L_11 = __this->get_needsHorizontalScrollbar_39();
		if (L_11)
		{
			goto IL_00df;
		}
	}
	{
		bool L_12 = __this->get_needsVerticalScrollbar_40();
		if (L_12)
		{
			goto IL_00df;
		}
	}
	{
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE * L_13 = ((GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 *)__this)->get_address_of_rect_4();
		float L_14 = Rect_get_width_m54FF69FC2C086E2DC349ED091FD0D6576BFB1484((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)L_13, /*hidden argument*/NULL);
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_15 = __this->get_verticalScrollbar_42();
		NullCheck(L_15);
		float L_16 = GUIStyle_get_fixedWidth_mEACB70758F83DCD64CE363143849CC40E49B8D8D(L_15, /*hidden argument*/NULL);
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_17 = __this->get_verticalScrollbar_42();
		NullCheck(L_17);
		RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * L_18 = GUIStyle_get_margin_mFC3EA0FA030A6334AC03BDDFA4AC80419C9E5BAA(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		int32_t L_19 = RectOffset_get_left_mA86EC00866C1940134873E3A1565A1F700DE67AD(L_18, /*hidden argument*/NULL);
		__this->set_clientWidth_35(((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_subtract((float)L_14, (float)L_16)), (float)(((float)((float)L_19))))));
		float L_20 = __this->get_clientWidth_35();
		float L_21 = __this->get_calcMinWidth_31();
		if ((!(((float)L_20) < ((float)L_21))))
		{
			goto IL_00a9;
		}
	}
	{
		float L_22 = __this->get_calcMinWidth_31();
		__this->set_clientWidth_35(L_22);
	}

IL_00a9:
	{
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE * L_23 = ((GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 *)__this)->get_address_of_rect_4();
		float L_24 = Rect_get_width_m54FF69FC2C086E2DC349ED091FD0D6576BFB1484((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)L_23, /*hidden argument*/NULL);
		V_1 = L_24;
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE * L_25 = ((GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 *)__this)->get_address_of_rect_4();
		float L_26 = Rect_get_x_mC51A461F546D14832EB96B11A7198DADDE2597B7((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)L_25, /*hidden argument*/NULL);
		float L_27 = __this->get_clientWidth_35();
		VirtActionInvoker2< float, float >::Invoke(10 /* System.Void UnityEngine.GUILayoutEntry::SetHorizontal(System.Single,System.Single) */, __this, L_26, L_27);
		VirtActionInvoker0::Invoke(9 /* System.Void UnityEngine.GUILayoutEntry::CalcHeight() */, __this);
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE * L_28 = ((GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 *)__this)->get_address_of_rect_4();
		float L_29 = V_1;
		Rect_set_width_mC81EF602AC91E0C615C12FCE060254A461A152B8((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)L_28, L_29, /*hidden argument*/NULL);
	}

IL_00df:
	{
		float L_30 = ((GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 *)__this)->get_minHeight_2();
		V_2 = L_30;
		float L_31 = ((GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 *)__this)->get_maxHeight_3();
		V_3 = L_31;
		float L_32 = __this->get_calcMinHeight_33();
		((GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 *)__this)->set_minHeight_2(L_32);
		float L_33 = __this->get_calcMaxHeight_34();
		((GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 *)__this)->set_maxHeight_3(L_33);
		float L_34 = ___y0;
		float L_35 = __this->get_calcMinHeight_33();
		GUILayoutGroup_SetVertical_m29D8744D2D1464EF4E6E4008CD21F5E44D6CB146(__this, L_34, L_35, /*hidden argument*/NULL);
		float L_36 = V_2;
		((GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 *)__this)->set_minHeight_2(L_36);
		float L_37 = V_3;
		((GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 *)__this)->set_maxHeight_3(L_37);
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE * L_38 = ((GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 *)__this)->get_address_of_rect_4();
		float L_39 = ___height1;
		Rect_set_height_mF4CB5A97D4706696F1C9EA31A5D8C466E48050D6((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)L_38, L_39, /*hidden argument*/NULL);
		float L_40 = __this->get_calcMinHeight_33();
		__this->set_clientHeight_36(L_40);
		goto IL_0180;
	}

IL_013e:
	{
		bool L_41 = __this->get_allowVerticalScroll_38();
		if (!L_41)
		{
			goto IL_0164;
		}
	}
	{
		float L_42 = __this->get_calcMinHeight_33();
		((GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 *)__this)->set_minHeight_2(L_42);
		float L_43 = __this->get_calcMaxHeight_34();
		((GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 *)__this)->set_maxHeight_3(L_43);
	}

IL_0164:
	{
		float L_44 = ___y0;
		float L_45 = V_0;
		GUILayoutGroup_SetVertical_m29D8744D2D1464EF4E6E4008CD21F5E44D6CB146(__this, L_44, L_45, /*hidden argument*/NULL);
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE * L_46 = ((GUILayoutEntry_t84827D72E8F6B673B1DB9F9FD91C9991007C9845 *)__this)->get_address_of_rect_4();
		float L_47 = ___height1;
		Rect_set_height_mF4CB5A97D4706696F1C9EA31A5D8C466E48050D6((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)L_46, L_47, /*hidden argument*/NULL);
		float L_48 = V_0;
		__this->set_clientHeight_36(L_48);
	}

IL_0180:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.GUISettings::.ctor()
extern "C" IL2CPP_METHOD_ATTR void GUISettings__ctor_m6D2D6608CE04A741235BF0C8E134195B196F116D (GUISettings_tA863524720A3C984BAE56598D922F2C04DC80EF4 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_DoubleClickSelectsWord_0((bool)1);
		__this->set_m_TripleClickSelectsLine_1((bool)1);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_0 = Color_get_white_mE7F3AC4FF0D6F35E48049C73116A222CBE96D905(/*hidden argument*/NULL);
		__this->set_m_CursorColor_2(L_0);
		__this->set_m_CursorFlashSpeed_3((-1.0f));
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_1;
		memset(&L_1, 0, sizeof(L_1));
		Color__ctor_mC9AEEB3931D5B8C37483A884DD8EB40DC8946369((&L_1), (0.5f), (0.5f), (1.0f), /*hidden argument*/NULL);
		__this->set_m_SelectionColor_4(L_1);
		Object__ctor_m8BA07445967EE2CC15961AD3C16F25DB74506EA0(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.GUISkin::.ctor()
extern "C" IL2CPP_METHOD_ATTR void GUISkin__ctor_mD75B370774F1DA0C871C8C642299E8DB4B0FABFF (GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUISkin__ctor_mD75B370774F1DA0C871C8C642299E8DB4B0FABFF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GUISettings_tA863524720A3C984BAE56598D922F2C04DC80EF4 * L_0 = (GUISettings_tA863524720A3C984BAE56598D922F2C04DC80EF4 *)il2cpp_codegen_object_new(GUISettings_tA863524720A3C984BAE56598D922F2C04DC80EF4_il2cpp_TypeInfo_var);
		GUISettings__ctor_m6D2D6608CE04A741235BF0C8E134195B196F116D(L_0, /*hidden argument*/NULL);
		__this->set_m_Settings_26(L_0);
		__this->set_m_Styles_28((Dictionary_2_tF2F04E1BE233EE6C4A6E90261E463B2A67A3FB6A *)NULL);
		ScriptableObject__ctor_m6E2B3821A4A361556FC12E9B1C71E1D5DC002C5B(__this, /*hidden argument*/NULL);
		GUIStyleU5BU5D_t2F343713D6ADFF41BBCF1D17BAE79F51BD745DBB* L_1 = (GUIStyleU5BU5D_t2F343713D6ADFF41BBCF1D17BAE79F51BD745DBB*)SZArrayNew(GUIStyleU5BU5D_t2F343713D6ADFF41BBCF1D17BAE79F51BD745DBB_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->set_m_CustomStyles_25(L_1);
		return;
	}
}
// System.Void UnityEngine.GUISkin::OnEnable()
extern "C" IL2CPP_METHOD_ATTR void GUISkin_OnEnable_mD8DE1BF0D0D0DA01EF240CE80C8B890DC03D30D0 (GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7 * __this, const RuntimeMethod* method)
{
	{
		GUISkin_Apply_mA93B0EEE3C2DE1F8D867A472130CDA98814C8A49(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUISkin::CleanupRoots()
extern "C" IL2CPP_METHOD_ATTR void GUISkin_CleanupRoots_m00D215E556265ACF704EA1C31399298DB092BA02 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUISkin_CleanupRoots_m00D215E556265ACF704EA1C31399298DB092BA02_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7_StaticFields*)il2cpp_codegen_static_fields_for(GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7_il2cpp_TypeInfo_var))->set_current_30((GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7 *)NULL);
		((GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7_StaticFields*)il2cpp_codegen_static_fields_for(GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7_il2cpp_TypeInfo_var))->set_ms_Error_27((GUIStyle_t671F175A201A19166385EE3392292A5F50070572 *)NULL);
		return;
	}
}
// UnityEngine.Font UnityEngine.GUISkin::get_font()
extern "C" IL2CPP_METHOD_ATTR Font_t1EDE54AF557272BE314EB4B40EFA50CEB353CA26 * GUISkin_get_font_m54200DFAF834B835CE6598E1BA5B41382BC33AD5 (GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7 * __this, const RuntimeMethod* method)
{
	Font_t1EDE54AF557272BE314EB4B40EFA50CEB353CA26 * V_0 = NULL;
	{
		Font_t1EDE54AF557272BE314EB4B40EFA50CEB353CA26 * L_0 = __this->get_m_Font_4();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		Font_t1EDE54AF557272BE314EB4B40EFA50CEB353CA26 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUISkin::set_font(UnityEngine.Font)
extern "C" IL2CPP_METHOD_ATTR void GUISkin_set_font_m2602A62DF6F035C7DA9BF4411C5F117022B5C07F (GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7 * __this, Font_t1EDE54AF557272BE314EB4B40EFA50CEB353CA26 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUISkin_set_font_m2602A62DF6F035C7DA9BF4411C5F117022B5C07F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Font_t1EDE54AF557272BE314EB4B40EFA50CEB353CA26 * L_0 = ___value0;
		__this->set_m_Font_4(L_0);
		GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7 * L_1 = ((GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7_StaticFields*)il2cpp_codegen_static_fields_for(GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7_il2cpp_TypeInfo_var))->get_current_30();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_1, __this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		Font_t1EDE54AF557272BE314EB4B40EFA50CEB353CA26 * L_3 = __this->get_m_Font_4();
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t671F175A201A19166385EE3392292A5F50070572_il2cpp_TypeInfo_var);
		GUIStyle_SetDefaultFont_m09D149F682E885D7058E3C48EB42C9E62363E381(L_3, /*hidden argument*/NULL);
	}

IL_0023:
	{
		GUISkin_Apply_mA93B0EEE3C2DE1F8D867A472130CDA98814C8A49(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_box()
extern "C" IL2CPP_METHOD_ATTR GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * GUISkin_get_box_m7305FA20CDC5A31518AE753AEF7B9075F6242B11 (GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7 * __this, const RuntimeMethod* method)
{
	GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * V_0 = NULL;
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_0 = __this->get_m_box_5();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUISkin::set_box(UnityEngine.GUIStyle)
extern "C" IL2CPP_METHOD_ATTR void GUISkin_set_box_m6D6D19E122461C6B2945349AA6ECD53E355702B0 (GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7 * __this, GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___value0, const RuntimeMethod* method)
{
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_0 = ___value0;
		__this->set_m_box_5(L_0);
		GUISkin_Apply_mA93B0EEE3C2DE1F8D867A472130CDA98814C8A49(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_label()
extern "C" IL2CPP_METHOD_ATTR GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * GUISkin_get_label_mC5C9D4CD377D7F5BB970B01E665EE077565AFF72 (GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7 * __this, const RuntimeMethod* method)
{
	GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * V_0 = NULL;
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_0 = __this->get_m_label_8();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUISkin::set_label(UnityEngine.GUIStyle)
extern "C" IL2CPP_METHOD_ATTR void GUISkin_set_label_m7EC231FDB8DEC9A5CD794578D70BB76A1978F508 (GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7 * __this, GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___value0, const RuntimeMethod* method)
{
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_0 = ___value0;
		__this->set_m_label_8(L_0);
		GUISkin_Apply_mA93B0EEE3C2DE1F8D867A472130CDA98814C8A49(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_textField()
extern "C" IL2CPP_METHOD_ATTR GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * GUISkin_get_textField_m7C206D0A044A8D5DD00E63BCD7958089E77419E9 (GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7 * __this, const RuntimeMethod* method)
{
	GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * V_0 = NULL;
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_0 = __this->get_m_textField_9();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUISkin::set_textField(UnityEngine.GUIStyle)
extern "C" IL2CPP_METHOD_ATTR void GUISkin_set_textField_m641D44C99CFC17A18BC0F094D4C810742222D0D2 (GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7 * __this, GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___value0, const RuntimeMethod* method)
{
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_0 = ___value0;
		__this->set_m_textField_9(L_0);
		GUISkin_Apply_mA93B0EEE3C2DE1F8D867A472130CDA98814C8A49(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_textArea()
extern "C" IL2CPP_METHOD_ATTR GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * GUISkin_get_textArea_m865E5C1D39519731718B66C9C993DFDEE0299C92 (GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7 * __this, const RuntimeMethod* method)
{
	GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * V_0 = NULL;
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_0 = __this->get_m_textArea_10();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUISkin::set_textArea(UnityEngine.GUIStyle)
extern "C" IL2CPP_METHOD_ATTR void GUISkin_set_textArea_m3C0C4795FC031AA0E8815FA9E0CAD304E1266157 (GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7 * __this, GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___value0, const RuntimeMethod* method)
{
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_0 = ___value0;
		__this->set_m_textArea_10(L_0);
		GUISkin_Apply_mA93B0EEE3C2DE1F8D867A472130CDA98814C8A49(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_button()
extern "C" IL2CPP_METHOD_ATTR GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * GUISkin_get_button_m015FA6A0418D94F03B5F12131DED65CCFDCA8F7A (GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7 * __this, const RuntimeMethod* method)
{
	GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * V_0 = NULL;
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_0 = __this->get_m_button_6();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUISkin::set_button(UnityEngine.GUIStyle)
extern "C" IL2CPP_METHOD_ATTR void GUISkin_set_button_m6DE2099849A8911FA77BE275B2552E48A356A67E (GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7 * __this, GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___value0, const RuntimeMethod* method)
{
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_0 = ___value0;
		__this->set_m_button_6(L_0);
		GUISkin_Apply_mA93B0EEE3C2DE1F8D867A472130CDA98814C8A49(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_toggle()
extern "C" IL2CPP_METHOD_ATTR GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * GUISkin_get_toggle_mB5459058B1C84826D47FA9BFE9CC9D05BB074030 (GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7 * __this, const RuntimeMethod* method)
{
	GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * V_0 = NULL;
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_0 = __this->get_m_toggle_7();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUISkin::set_toggle(UnityEngine.GUIStyle)
extern "C" IL2CPP_METHOD_ATTR void GUISkin_set_toggle_mD80DC18C72883EE616583CB75FA6C83F5C4C29F8 (GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7 * __this, GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___value0, const RuntimeMethod* method)
{
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_0 = ___value0;
		__this->set_m_toggle_7(L_0);
		GUISkin_Apply_mA93B0EEE3C2DE1F8D867A472130CDA98814C8A49(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_window()
extern "C" IL2CPP_METHOD_ATTR GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * GUISkin_get_window_mD0E9B84DBBDF7CA3FB566849E4507B5E4C6490B9 (GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7 * __this, const RuntimeMethod* method)
{
	GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * V_0 = NULL;
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_0 = __this->get_m_window_11();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUISkin::set_window(UnityEngine.GUIStyle)
extern "C" IL2CPP_METHOD_ATTR void GUISkin_set_window_m2284011FEDEADF15D6AA2ACD636244B74C5A6F3A (GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7 * __this, GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___value0, const RuntimeMethod* method)
{
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_0 = ___value0;
		__this->set_m_window_11(L_0);
		GUISkin_Apply_mA93B0EEE3C2DE1F8D867A472130CDA98814C8A49(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalSlider()
extern "C" IL2CPP_METHOD_ATTR GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * GUISkin_get_horizontalSlider_mDC40C8921B044801488863EC52002C84C68E570B (GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7 * __this, const RuntimeMethod* method)
{
	GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * V_0 = NULL;
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_0 = __this->get_m_horizontalSlider_12();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUISkin::set_horizontalSlider(UnityEngine.GUIStyle)
extern "C" IL2CPP_METHOD_ATTR void GUISkin_set_horizontalSlider_m761A767684EB3014E2D50D377C2B381B46FCF931 (GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7 * __this, GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___value0, const RuntimeMethod* method)
{
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_0 = ___value0;
		__this->set_m_horizontalSlider_12(L_0);
		GUISkin_Apply_mA93B0EEE3C2DE1F8D867A472130CDA98814C8A49(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalSliderThumb()
extern "C" IL2CPP_METHOD_ATTR GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * GUISkin_get_horizontalSliderThumb_m0906181E7D7A364A784031556658BC2AB14A49DD (GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7 * __this, const RuntimeMethod* method)
{
	GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * V_0 = NULL;
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_0 = __this->get_m_horizontalSliderThumb_13();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUISkin::set_horizontalSliderThumb(UnityEngine.GUIStyle)
extern "C" IL2CPP_METHOD_ATTR void GUISkin_set_horizontalSliderThumb_mEA4D61F20729CCBC6E3CBCC7E0AD5A48E37DF056 (GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7 * __this, GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___value0, const RuntimeMethod* method)
{
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_0 = ___value0;
		__this->set_m_horizontalSliderThumb_13(L_0);
		GUISkin_Apply_mA93B0EEE3C2DE1F8D867A472130CDA98814C8A49(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalSlider()
extern "C" IL2CPP_METHOD_ATTR GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * GUISkin_get_verticalSlider_m42A66BFEEF219C34908FA492CD9604252FC270D9 (GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7 * __this, const RuntimeMethod* method)
{
	GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * V_0 = NULL;
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_0 = __this->get_m_verticalSlider_14();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUISkin::set_verticalSlider(UnityEngine.GUIStyle)
extern "C" IL2CPP_METHOD_ATTR void GUISkin_set_verticalSlider_m66ED35A0709DDE6CD08065C6951AD32582B0A784 (GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7 * __this, GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___value0, const RuntimeMethod* method)
{
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_0 = ___value0;
		__this->set_m_verticalSlider_14(L_0);
		GUISkin_Apply_mA93B0EEE3C2DE1F8D867A472130CDA98814C8A49(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalSliderThumb()
extern "C" IL2CPP_METHOD_ATTR GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * GUISkin_get_verticalSliderThumb_m0E0CCACBEE8D9ECF5AF19D310A14F156B1F85D18 (GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7 * __this, const RuntimeMethod* method)
{
	GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * V_0 = NULL;
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_0 = __this->get_m_verticalSliderThumb_15();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUISkin::set_verticalSliderThumb(UnityEngine.GUIStyle)
extern "C" IL2CPP_METHOD_ATTR void GUISkin_set_verticalSliderThumb_m0920AB66A75D6CE103EBA218BB8FEEEF9306DC1D (GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7 * __this, GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___value0, const RuntimeMethod* method)
{
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_0 = ___value0;
		__this->set_m_verticalSliderThumb_15(L_0);
		GUISkin_Apply_mA93B0EEE3C2DE1F8D867A472130CDA98814C8A49(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalScrollbar()
extern "C" IL2CPP_METHOD_ATTR GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * GUISkin_get_horizontalScrollbar_m6C3C35BE443E12CA9AA4B7915C4FF704315D6D0F (GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7 * __this, const RuntimeMethod* method)
{
	GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * V_0 = NULL;
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_0 = __this->get_m_horizontalScrollbar_16();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUISkin::set_horizontalScrollbar(UnityEngine.GUIStyle)
extern "C" IL2CPP_METHOD_ATTR void GUISkin_set_horizontalScrollbar_m4F2E03DEC3A2004F2912F53610D8F84EE62ACFF0 (GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7 * __this, GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___value0, const RuntimeMethod* method)
{
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_0 = ___value0;
		__this->set_m_horizontalScrollbar_16(L_0);
		GUISkin_Apply_mA93B0EEE3C2DE1F8D867A472130CDA98814C8A49(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalScrollbarThumb()
extern "C" IL2CPP_METHOD_ATTR GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * GUISkin_get_horizontalScrollbarThumb_mDBF72BAF3A76876F1913BC77DFD913198606415F (GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7 * __this, const RuntimeMethod* method)
{
	GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * V_0 = NULL;
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_0 = __this->get_m_horizontalScrollbarThumb_17();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUISkin::set_horizontalScrollbarThumb(UnityEngine.GUIStyle)
extern "C" IL2CPP_METHOD_ATTR void GUISkin_set_horizontalScrollbarThumb_mEF470A49847D208F6B190FDBDF7704FFDFD23359 (GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7 * __this, GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___value0, const RuntimeMethod* method)
{
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_0 = ___value0;
		__this->set_m_horizontalScrollbarThumb_17(L_0);
		GUISkin_Apply_mA93B0EEE3C2DE1F8D867A472130CDA98814C8A49(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalScrollbarLeftButton()
extern "C" IL2CPP_METHOD_ATTR GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * GUISkin_get_horizontalScrollbarLeftButton_mFB71A2ABCB046937048320741EED4C0F0573A126 (GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7 * __this, const RuntimeMethod* method)
{
	GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * V_0 = NULL;
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_0 = __this->get_m_horizontalScrollbarLeftButton_18();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUISkin::set_horizontalScrollbarLeftButton(UnityEngine.GUIStyle)
extern "C" IL2CPP_METHOD_ATTR void GUISkin_set_horizontalScrollbarLeftButton_mBB8EE6C404FD9BF0C9BD9B4B6FD036086C044BA3 (GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7 * __this, GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___value0, const RuntimeMethod* method)
{
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_0 = ___value0;
		__this->set_m_horizontalScrollbarLeftButton_18(L_0);
		GUISkin_Apply_mA93B0EEE3C2DE1F8D867A472130CDA98814C8A49(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalScrollbarRightButton()
extern "C" IL2CPP_METHOD_ATTR GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * GUISkin_get_horizontalScrollbarRightButton_m375017416DFEBFB9D964BC377990D8A71F04EB39 (GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7 * __this, const RuntimeMethod* method)
{
	GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * V_0 = NULL;
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_0 = __this->get_m_horizontalScrollbarRightButton_19();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUISkin::set_horizontalScrollbarRightButton(UnityEngine.GUIStyle)
extern "C" IL2CPP_METHOD_ATTR void GUISkin_set_horizontalScrollbarRightButton_mA7B3670FAB6323B7E3F7F2A15640263BB0F3685A (GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7 * __this, GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___value0, const RuntimeMethod* method)
{
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_0 = ___value0;
		__this->set_m_horizontalScrollbarRightButton_19(L_0);
		GUISkin_Apply_mA93B0EEE3C2DE1F8D867A472130CDA98814C8A49(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalScrollbar()
extern "C" IL2CPP_METHOD_ATTR GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * GUISkin_get_verticalScrollbar_mCA438980059FF28128B638E6BF442E104BACE20B (GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7 * __this, const RuntimeMethod* method)
{
	GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * V_0 = NULL;
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_0 = __this->get_m_verticalScrollbar_20();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUISkin::set_verticalScrollbar(UnityEngine.GUIStyle)
extern "C" IL2CPP_METHOD_ATTR void GUISkin_set_verticalScrollbar_mE5B8C6F35870AA16403FB8202B36D56F2314F9B7 (GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7 * __this, GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___value0, const RuntimeMethod* method)
{
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_0 = ___value0;
		__this->set_m_verticalScrollbar_20(L_0);
		GUISkin_Apply_mA93B0EEE3C2DE1F8D867A472130CDA98814C8A49(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalScrollbarThumb()
extern "C" IL2CPP_METHOD_ATTR GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * GUISkin_get_verticalScrollbarThumb_m4D613B4477826F86001B59CB3AD41466AF8C06EF (GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7 * __this, const RuntimeMethod* method)
{
	GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * V_0 = NULL;
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_0 = __this->get_m_verticalScrollbarThumb_21();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUISkin::set_verticalScrollbarThumb(UnityEngine.GUIStyle)
extern "C" IL2CPP_METHOD_ATTR void GUISkin_set_verticalScrollbarThumb_mF1A3CE45DA1A0FE4022BF95B9F8FD6B9733B48AA (GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7 * __this, GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___value0, const RuntimeMethod* method)
{
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_0 = ___value0;
		__this->set_m_verticalScrollbarThumb_21(L_0);
		GUISkin_Apply_mA93B0EEE3C2DE1F8D867A472130CDA98814C8A49(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalScrollbarUpButton()
extern "C" IL2CPP_METHOD_ATTR GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * GUISkin_get_verticalScrollbarUpButton_m46DD4FA65B21D3C9FFFD1A1B1A6852B020C94AB5 (GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7 * __this, const RuntimeMethod* method)
{
	GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * V_0 = NULL;
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_0 = __this->get_m_verticalScrollbarUpButton_22();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUISkin::set_verticalScrollbarUpButton(UnityEngine.GUIStyle)
extern "C" IL2CPP_METHOD_ATTR void GUISkin_set_verticalScrollbarUpButton_m6407C9BFD7172E7E3A8583C34451EE331705AA6A (GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7 * __this, GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___value0, const RuntimeMethod* method)
{
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_0 = ___value0;
		__this->set_m_verticalScrollbarUpButton_22(L_0);
		GUISkin_Apply_mA93B0EEE3C2DE1F8D867A472130CDA98814C8A49(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalScrollbarDownButton()
extern "C" IL2CPP_METHOD_ATTR GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * GUISkin_get_verticalScrollbarDownButton_m6204382C228748A2535AA0E6640407A062F14004 (GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7 * __this, const RuntimeMethod* method)
{
	GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * V_0 = NULL;
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_0 = __this->get_m_verticalScrollbarDownButton_23();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUISkin::set_verticalScrollbarDownButton(UnityEngine.GUIStyle)
extern "C" IL2CPP_METHOD_ATTR void GUISkin_set_verticalScrollbarDownButton_m7B0275CBF0BCE8F95B8FF3436466A6490E0B7D62 (GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7 * __this, GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___value0, const RuntimeMethod* method)
{
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_0 = ___value0;
		__this->set_m_verticalScrollbarDownButton_23(L_0);
		GUISkin_Apply_mA93B0EEE3C2DE1F8D867A472130CDA98814C8A49(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_scrollView()
extern "C" IL2CPP_METHOD_ATTR GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * GUISkin_get_scrollView_m65256AD31599E1AEE8B9424EE9BA5385CEF9144F (GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7 * __this, const RuntimeMethod* method)
{
	GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * V_0 = NULL;
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_0 = __this->get_m_ScrollView_24();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUISkin::set_scrollView(UnityEngine.GUIStyle)
extern "C" IL2CPP_METHOD_ATTR void GUISkin_set_scrollView_m6B28717B83555F80AB3EA1798FDE15C2A2645C72 (GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7 * __this, GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___value0, const RuntimeMethod* method)
{
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_0 = ___value0;
		__this->set_m_ScrollView_24(L_0);
		GUISkin_Apply_mA93B0EEE3C2DE1F8D867A472130CDA98814C8A49(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle[] UnityEngine.GUISkin::get_customStyles()
extern "C" IL2CPP_METHOD_ATTR GUIStyleU5BU5D_t2F343713D6ADFF41BBCF1D17BAE79F51BD745DBB* GUISkin_get_customStyles_mC004E300635814033B6074ADCCCCCCC2B8F56D3C (GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7 * __this, const RuntimeMethod* method)
{
	GUIStyleU5BU5D_t2F343713D6ADFF41BBCF1D17BAE79F51BD745DBB* V_0 = NULL;
	{
		GUIStyleU5BU5D_t2F343713D6ADFF41BBCF1D17BAE79F51BD745DBB* L_0 = __this->get_m_CustomStyles_25();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		GUIStyleU5BU5D_t2F343713D6ADFF41BBCF1D17BAE79F51BD745DBB* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUISkin::set_customStyles(UnityEngine.GUIStyle[])
extern "C" IL2CPP_METHOD_ATTR void GUISkin_set_customStyles_m4F3203A3237CDA3799A0A4C440EF8A54B059EEC5 (GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7 * __this, GUIStyleU5BU5D_t2F343713D6ADFF41BBCF1D17BAE79F51BD745DBB* ___value0, const RuntimeMethod* method)
{
	{
		GUIStyleU5BU5D_t2F343713D6ADFF41BBCF1D17BAE79F51BD745DBB* L_0 = ___value0;
		__this->set_m_CustomStyles_25(L_0);
		GUISkin_Apply_mA93B0EEE3C2DE1F8D867A472130CDA98814C8A49(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUISettings UnityEngine.GUISkin::get_settings()
extern "C" IL2CPP_METHOD_ATTR GUISettings_tA863524720A3C984BAE56598D922F2C04DC80EF4 * GUISkin_get_settings_m32E805AA73BD4CD9EC4E731A68D0F72377C859DA (GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7 * __this, const RuntimeMethod* method)
{
	GUISettings_tA863524720A3C984BAE56598D922F2C04DC80EF4 * V_0 = NULL;
	{
		GUISettings_tA863524720A3C984BAE56598D922F2C04DC80EF4 * L_0 = __this->get_m_Settings_26();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		GUISettings_tA863524720A3C984BAE56598D922F2C04DC80EF4 * L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_error()
extern "C" IL2CPP_METHOD_ATTR GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * GUISkin_get_error_m40FBD0C57353CBFD8EE75B796E3EADBF9033C47F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUISkin_get_error_m40FBD0C57353CBFD8EE75B796E3EADBF9033C47F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * V_0 = NULL;
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_0 = ((GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7_StaticFields*)il2cpp_codegen_static_fields_for(GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7_il2cpp_TypeInfo_var))->get_ms_Error_27();
		if (L_0)
		{
			goto IL_0026;
		}
	}
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_1 = (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 *)il2cpp_codegen_object_new(GUIStyle_t671F175A201A19166385EE3392292A5F50070572_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m8AA3D5AA506A252687923D0DA80741862AA83805(L_1, /*hidden argument*/NULL);
		((GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7_StaticFields*)il2cpp_codegen_static_fields_for(GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7_il2cpp_TypeInfo_var))->set_ms_Error_27(L_1);
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_2 = ((GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7_StaticFields*)il2cpp_codegen_static_fields_for(GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7_il2cpp_TypeInfo_var))->get_ms_Error_27();
		NullCheck(L_2);
		GUIStyle_set_name_m3D232D5A8EAD7B29F1F2DA3ADD01B99EFF83F1D7(L_2, _stringLiteralA93D2B140984CB1ED70E8B2F25565EF16927EE77, /*hidden argument*/NULL);
	}

IL_0026:
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_3 = ((GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7_StaticFields*)il2cpp_codegen_static_fields_for(GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7_il2cpp_TypeInfo_var))->get_ms_Error_27();
		V_0 = L_3;
		goto IL_0031;
	}

IL_0031:
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_4 = V_0;
		return L_4;
	}
}
// System.Void UnityEngine.GUISkin::Apply()
extern "C" IL2CPP_METHOD_ATTR void GUISkin_Apply_mA93B0EEE3C2DE1F8D867A472130CDA98814C8A49 (GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUISkin_Apply_mA93B0EEE3C2DE1F8D867A472130CDA98814C8A49_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GUIStyleU5BU5D_t2F343713D6ADFF41BBCF1D17BAE79F51BD745DBB* L_0 = __this->get_m_CustomStyles_25();
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteral0D421A870FA2CD6E6DCF150A4ACE67EC7405AF75, /*hidden argument*/NULL);
	}

IL_0016:
	{
		GUISkin_BuildStyleCache_m2C68BB5521EAF11FC98C86D7E60008901D61866A(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUISkin::BuildStyleCache()
extern "C" IL2CPP_METHOD_ATTR void GUISkin_BuildStyleCache_m2C68BB5521EAF11FC98C86D7E60008901D61866A (GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUISkin_BuildStyleCache_m2C68BB5521EAF11FC98C86D7E60008901D61866A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_0 = __this->get_m_box_5();
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_1 = (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 *)il2cpp_codegen_object_new(GUIStyle_t671F175A201A19166385EE3392292A5F50070572_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m8AA3D5AA506A252687923D0DA80741862AA83805(L_1, /*hidden argument*/NULL);
		__this->set_m_box_5(L_1);
	}

IL_0017:
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_2 = __this->get_m_button_6();
		if (L_2)
		{
			goto IL_002d;
		}
	}
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_3 = (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 *)il2cpp_codegen_object_new(GUIStyle_t671F175A201A19166385EE3392292A5F50070572_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m8AA3D5AA506A252687923D0DA80741862AA83805(L_3, /*hidden argument*/NULL);
		__this->set_m_button_6(L_3);
	}

IL_002d:
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_4 = __this->get_m_toggle_7();
		if (L_4)
		{
			goto IL_0043;
		}
	}
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_5 = (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 *)il2cpp_codegen_object_new(GUIStyle_t671F175A201A19166385EE3392292A5F50070572_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m8AA3D5AA506A252687923D0DA80741862AA83805(L_5, /*hidden argument*/NULL);
		__this->set_m_toggle_7(L_5);
	}

IL_0043:
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_6 = __this->get_m_label_8();
		if (L_6)
		{
			goto IL_0059;
		}
	}
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_7 = (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 *)il2cpp_codegen_object_new(GUIStyle_t671F175A201A19166385EE3392292A5F50070572_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m8AA3D5AA506A252687923D0DA80741862AA83805(L_7, /*hidden argument*/NULL);
		__this->set_m_label_8(L_7);
	}

IL_0059:
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_8 = __this->get_m_window_11();
		if (L_8)
		{
			goto IL_006f;
		}
	}
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_9 = (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 *)il2cpp_codegen_object_new(GUIStyle_t671F175A201A19166385EE3392292A5F50070572_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m8AA3D5AA506A252687923D0DA80741862AA83805(L_9, /*hidden argument*/NULL);
		__this->set_m_window_11(L_9);
	}

IL_006f:
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_10 = __this->get_m_textField_9();
		if (L_10)
		{
			goto IL_0085;
		}
	}
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_11 = (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 *)il2cpp_codegen_object_new(GUIStyle_t671F175A201A19166385EE3392292A5F50070572_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m8AA3D5AA506A252687923D0DA80741862AA83805(L_11, /*hidden argument*/NULL);
		__this->set_m_textField_9(L_11);
	}

IL_0085:
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_12 = __this->get_m_textArea_10();
		if (L_12)
		{
			goto IL_009b;
		}
	}
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_13 = (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 *)il2cpp_codegen_object_new(GUIStyle_t671F175A201A19166385EE3392292A5F50070572_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m8AA3D5AA506A252687923D0DA80741862AA83805(L_13, /*hidden argument*/NULL);
		__this->set_m_textArea_10(L_13);
	}

IL_009b:
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_14 = __this->get_m_horizontalSlider_12();
		if (L_14)
		{
			goto IL_00b1;
		}
	}
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_15 = (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 *)il2cpp_codegen_object_new(GUIStyle_t671F175A201A19166385EE3392292A5F50070572_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m8AA3D5AA506A252687923D0DA80741862AA83805(L_15, /*hidden argument*/NULL);
		__this->set_m_horizontalSlider_12(L_15);
	}

IL_00b1:
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_16 = __this->get_m_horizontalSliderThumb_13();
		if (L_16)
		{
			goto IL_00c7;
		}
	}
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_17 = (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 *)il2cpp_codegen_object_new(GUIStyle_t671F175A201A19166385EE3392292A5F50070572_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m8AA3D5AA506A252687923D0DA80741862AA83805(L_17, /*hidden argument*/NULL);
		__this->set_m_horizontalSliderThumb_13(L_17);
	}

IL_00c7:
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_18 = __this->get_m_verticalSlider_14();
		if (L_18)
		{
			goto IL_00dd;
		}
	}
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_19 = (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 *)il2cpp_codegen_object_new(GUIStyle_t671F175A201A19166385EE3392292A5F50070572_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m8AA3D5AA506A252687923D0DA80741862AA83805(L_19, /*hidden argument*/NULL);
		__this->set_m_verticalSlider_14(L_19);
	}

IL_00dd:
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_20 = __this->get_m_verticalSliderThumb_15();
		if (L_20)
		{
			goto IL_00f3;
		}
	}
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_21 = (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 *)il2cpp_codegen_object_new(GUIStyle_t671F175A201A19166385EE3392292A5F50070572_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m8AA3D5AA506A252687923D0DA80741862AA83805(L_21, /*hidden argument*/NULL);
		__this->set_m_verticalSliderThumb_15(L_21);
	}

IL_00f3:
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_22 = __this->get_m_horizontalScrollbar_16();
		if (L_22)
		{
			goto IL_0109;
		}
	}
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_23 = (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 *)il2cpp_codegen_object_new(GUIStyle_t671F175A201A19166385EE3392292A5F50070572_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m8AA3D5AA506A252687923D0DA80741862AA83805(L_23, /*hidden argument*/NULL);
		__this->set_m_horizontalScrollbar_16(L_23);
	}

IL_0109:
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_24 = __this->get_m_horizontalScrollbarThumb_17();
		if (L_24)
		{
			goto IL_011f;
		}
	}
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_25 = (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 *)il2cpp_codegen_object_new(GUIStyle_t671F175A201A19166385EE3392292A5F50070572_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m8AA3D5AA506A252687923D0DA80741862AA83805(L_25, /*hidden argument*/NULL);
		__this->set_m_horizontalScrollbarThumb_17(L_25);
	}

IL_011f:
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_26 = __this->get_m_horizontalScrollbarLeftButton_18();
		if (L_26)
		{
			goto IL_0135;
		}
	}
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_27 = (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 *)il2cpp_codegen_object_new(GUIStyle_t671F175A201A19166385EE3392292A5F50070572_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m8AA3D5AA506A252687923D0DA80741862AA83805(L_27, /*hidden argument*/NULL);
		__this->set_m_horizontalScrollbarLeftButton_18(L_27);
	}

IL_0135:
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_28 = __this->get_m_horizontalScrollbarRightButton_19();
		if (L_28)
		{
			goto IL_014b;
		}
	}
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_29 = (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 *)il2cpp_codegen_object_new(GUIStyle_t671F175A201A19166385EE3392292A5F50070572_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m8AA3D5AA506A252687923D0DA80741862AA83805(L_29, /*hidden argument*/NULL);
		__this->set_m_horizontalScrollbarRightButton_19(L_29);
	}

IL_014b:
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_30 = __this->get_m_verticalScrollbar_20();
		if (L_30)
		{
			goto IL_0161;
		}
	}
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_31 = (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 *)il2cpp_codegen_object_new(GUIStyle_t671F175A201A19166385EE3392292A5F50070572_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m8AA3D5AA506A252687923D0DA80741862AA83805(L_31, /*hidden argument*/NULL);
		__this->set_m_verticalScrollbar_20(L_31);
	}

IL_0161:
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_32 = __this->get_m_verticalScrollbarThumb_21();
		if (L_32)
		{
			goto IL_0177;
		}
	}
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_33 = (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 *)il2cpp_codegen_object_new(GUIStyle_t671F175A201A19166385EE3392292A5F50070572_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m8AA3D5AA506A252687923D0DA80741862AA83805(L_33, /*hidden argument*/NULL);
		__this->set_m_verticalScrollbarThumb_21(L_33);
	}

IL_0177:
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_34 = __this->get_m_verticalScrollbarUpButton_22();
		if (L_34)
		{
			goto IL_018d;
		}
	}
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_35 = (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 *)il2cpp_codegen_object_new(GUIStyle_t671F175A201A19166385EE3392292A5F50070572_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m8AA3D5AA506A252687923D0DA80741862AA83805(L_35, /*hidden argument*/NULL);
		__this->set_m_verticalScrollbarUpButton_22(L_35);
	}

IL_018d:
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_36 = __this->get_m_verticalScrollbarDownButton_23();
		if (L_36)
		{
			goto IL_01a3;
		}
	}
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_37 = (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 *)il2cpp_codegen_object_new(GUIStyle_t671F175A201A19166385EE3392292A5F50070572_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m8AA3D5AA506A252687923D0DA80741862AA83805(L_37, /*hidden argument*/NULL);
		__this->set_m_verticalScrollbarDownButton_23(L_37);
	}

IL_01a3:
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_38 = __this->get_m_ScrollView_24();
		if (L_38)
		{
			goto IL_01b9;
		}
	}
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_39 = (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 *)il2cpp_codegen_object_new(GUIStyle_t671F175A201A19166385EE3392292A5F50070572_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m8AA3D5AA506A252687923D0DA80741862AA83805(L_39, /*hidden argument*/NULL);
		__this->set_m_ScrollView_24(L_39);
	}

IL_01b9:
	{
		IL2CPP_RUNTIME_CLASS_INIT(StringComparer_t2BD4D768665C1290582CAD7439D03599B59ACCCF_il2cpp_TypeInfo_var);
		StringComparer_t2BD4D768665C1290582CAD7439D03599B59ACCCF * L_40 = StringComparer_get_OrdinalIgnoreCase_m677FEC81BD905EFF476133F3472B883C8EC5714D(/*hidden argument*/NULL);
		Dictionary_2_tF2F04E1BE233EE6C4A6E90261E463B2A67A3FB6A * L_41 = (Dictionary_2_tF2F04E1BE233EE6C4A6E90261E463B2A67A3FB6A *)il2cpp_codegen_object_new(Dictionary_2_tF2F04E1BE233EE6C4A6E90261E463B2A67A3FB6A_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mE7D4915AD1A64B140D2C412B197D4D43B016074E(L_41, L_40, /*hidden argument*/Dictionary_2__ctor_mE7D4915AD1A64B140D2C412B197D4D43B016074E_RuntimeMethod_var);
		__this->set_m_Styles_28(L_41);
		Dictionary_2_tF2F04E1BE233EE6C4A6E90261E463B2A67A3FB6A * L_42 = __this->get_m_Styles_28();
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_43 = __this->get_m_box_5();
		NullCheck(L_42);
		Dictionary_2_set_Item_m24E725BAB2853FE434C3D507858296BA81733DC5(L_42, _stringLiteralC7D8A6D722A1EC9A16FAE165177C418D4FD63175, L_43, /*hidden argument*/Dictionary_2_set_Item_m24E725BAB2853FE434C3D507858296BA81733DC5_RuntimeMethod_var);
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_44 = __this->get_m_box_5();
		NullCheck(L_44);
		GUIStyle_set_name_m3D232D5A8EAD7B29F1F2DA3ADD01B99EFF83F1D7(L_44, _stringLiteralC7D8A6D722A1EC9A16FAE165177C418D4FD63175, /*hidden argument*/NULL);
		Dictionary_2_tF2F04E1BE233EE6C4A6E90261E463B2A67A3FB6A * L_45 = __this->get_m_Styles_28();
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_46 = __this->get_m_button_6();
		NullCheck(L_45);
		Dictionary_2_set_Item_m24E725BAB2853FE434C3D507858296BA81733DC5(L_45, _stringLiteral7B7FCC78D6CD1507925B769B1386CED3683F99C7, L_46, /*hidden argument*/Dictionary_2_set_Item_m24E725BAB2853FE434C3D507858296BA81733DC5_RuntimeMethod_var);
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_47 = __this->get_m_button_6();
		NullCheck(L_47);
		GUIStyle_set_name_m3D232D5A8EAD7B29F1F2DA3ADD01B99EFF83F1D7(L_47, _stringLiteral7B7FCC78D6CD1507925B769B1386CED3683F99C7, /*hidden argument*/NULL);
		Dictionary_2_tF2F04E1BE233EE6C4A6E90261E463B2A67A3FB6A * L_48 = __this->get_m_Styles_28();
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_49 = __this->get_m_toggle_7();
		NullCheck(L_48);
		Dictionary_2_set_Item_m24E725BAB2853FE434C3D507858296BA81733DC5(L_48, _stringLiteralF9C5942B1F55CB12B8F2B5FAE21A9F1706F9D367, L_49, /*hidden argument*/Dictionary_2_set_Item_m24E725BAB2853FE434C3D507858296BA81733DC5_RuntimeMethod_var);
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_50 = __this->get_m_toggle_7();
		NullCheck(L_50);
		GUIStyle_set_name_m3D232D5A8EAD7B29F1F2DA3ADD01B99EFF83F1D7(L_50, _stringLiteralF9C5942B1F55CB12B8F2B5FAE21A9F1706F9D367, /*hidden argument*/NULL);
		Dictionary_2_tF2F04E1BE233EE6C4A6E90261E463B2A67A3FB6A * L_51 = __this->get_m_Styles_28();
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_52 = __this->get_m_label_8();
		NullCheck(L_51);
		Dictionary_2_set_Item_m24E725BAB2853FE434C3D507858296BA81733DC5(L_51, _stringLiteral64C65374DBAB6FE3762748196D9D3A9610E2E5A9, L_52, /*hidden argument*/Dictionary_2_set_Item_m24E725BAB2853FE434C3D507858296BA81733DC5_RuntimeMethod_var);
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_53 = __this->get_m_label_8();
		NullCheck(L_53);
		GUIStyle_set_name_m3D232D5A8EAD7B29F1F2DA3ADD01B99EFF83F1D7(L_53, _stringLiteral64C65374DBAB6FE3762748196D9D3A9610E2E5A9, /*hidden argument*/NULL);
		Dictionary_2_tF2F04E1BE233EE6C4A6E90261E463B2A67A3FB6A * L_54 = __this->get_m_Styles_28();
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_55 = __this->get_m_window_11();
		NullCheck(L_54);
		Dictionary_2_set_Item_m24E725BAB2853FE434C3D507858296BA81733DC5(L_54, _stringLiteral320AD267D8D969F285EDA5C184F5455BD29C8C95, L_55, /*hidden argument*/Dictionary_2_set_Item_m24E725BAB2853FE434C3D507858296BA81733DC5_RuntimeMethod_var);
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_56 = __this->get_m_window_11();
		NullCheck(L_56);
		GUIStyle_set_name_m3D232D5A8EAD7B29F1F2DA3ADD01B99EFF83F1D7(L_56, _stringLiteral320AD267D8D969F285EDA5C184F5455BD29C8C95, /*hidden argument*/NULL);
		Dictionary_2_tF2F04E1BE233EE6C4A6E90261E463B2A67A3FB6A * L_57 = __this->get_m_Styles_28();
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_58 = __this->get_m_textField_9();
		NullCheck(L_57);
		Dictionary_2_set_Item_m24E725BAB2853FE434C3D507858296BA81733DC5(L_57, _stringLiteral2C72A73D3153ECA8FBF9E58315C5EE073BE0D5AB, L_58, /*hidden argument*/Dictionary_2_set_Item_m24E725BAB2853FE434C3D507858296BA81733DC5_RuntimeMethod_var);
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_59 = __this->get_m_textField_9();
		NullCheck(L_59);
		GUIStyle_set_name_m3D232D5A8EAD7B29F1F2DA3ADD01B99EFF83F1D7(L_59, _stringLiteral2C72A73D3153ECA8FBF9E58315C5EE073BE0D5AB, /*hidden argument*/NULL);
		Dictionary_2_tF2F04E1BE233EE6C4A6E90261E463B2A67A3FB6A * L_60 = __this->get_m_Styles_28();
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_61 = __this->get_m_textArea_10();
		NullCheck(L_60);
		Dictionary_2_set_Item_m24E725BAB2853FE434C3D507858296BA81733DC5(L_60, _stringLiteralFC8656334C97C18022AE87133F261DBA949A4CDD, L_61, /*hidden argument*/Dictionary_2_set_Item_m24E725BAB2853FE434C3D507858296BA81733DC5_RuntimeMethod_var);
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_62 = __this->get_m_textArea_10();
		NullCheck(L_62);
		GUIStyle_set_name_m3D232D5A8EAD7B29F1F2DA3ADD01B99EFF83F1D7(L_62, _stringLiteralFC8656334C97C18022AE87133F261DBA949A4CDD, /*hidden argument*/NULL);
		Dictionary_2_tF2F04E1BE233EE6C4A6E90261E463B2A67A3FB6A * L_63 = __this->get_m_Styles_28();
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_64 = __this->get_m_horizontalSlider_12();
		NullCheck(L_63);
		Dictionary_2_set_Item_m24E725BAB2853FE434C3D507858296BA81733DC5(L_63, _stringLiteral5EB8003910C4D9CB2B9CAF1A8610A9FB39ACD4BD, L_64, /*hidden argument*/Dictionary_2_set_Item_m24E725BAB2853FE434C3D507858296BA81733DC5_RuntimeMethod_var);
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_65 = __this->get_m_horizontalSlider_12();
		NullCheck(L_65);
		GUIStyle_set_name_m3D232D5A8EAD7B29F1F2DA3ADD01B99EFF83F1D7(L_65, _stringLiteral5EB8003910C4D9CB2B9CAF1A8610A9FB39ACD4BD, /*hidden argument*/NULL);
		Dictionary_2_tF2F04E1BE233EE6C4A6E90261E463B2A67A3FB6A * L_66 = __this->get_m_Styles_28();
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_67 = __this->get_m_horizontalSliderThumb_13();
		NullCheck(L_66);
		Dictionary_2_set_Item_m24E725BAB2853FE434C3D507858296BA81733DC5(L_66, _stringLiteral8E436B06A17CFAF87BEB781E30D07B6FF58B2B71, L_67, /*hidden argument*/Dictionary_2_set_Item_m24E725BAB2853FE434C3D507858296BA81733DC5_RuntimeMethod_var);
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_68 = __this->get_m_horizontalSliderThumb_13();
		NullCheck(L_68);
		GUIStyle_set_name_m3D232D5A8EAD7B29F1F2DA3ADD01B99EFF83F1D7(L_68, _stringLiteral8E436B06A17CFAF87BEB781E30D07B6FF58B2B71, /*hidden argument*/NULL);
		Dictionary_2_tF2F04E1BE233EE6C4A6E90261E463B2A67A3FB6A * L_69 = __this->get_m_Styles_28();
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_70 = __this->get_m_verticalSlider_14();
		NullCheck(L_69);
		Dictionary_2_set_Item_m24E725BAB2853FE434C3D507858296BA81733DC5(L_69, _stringLiteral52424150CE94D4AA9600469221595A075963D010, L_70, /*hidden argument*/Dictionary_2_set_Item_m24E725BAB2853FE434C3D507858296BA81733DC5_RuntimeMethod_var);
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_71 = __this->get_m_verticalSlider_14();
		NullCheck(L_71);
		GUIStyle_set_name_m3D232D5A8EAD7B29F1F2DA3ADD01B99EFF83F1D7(L_71, _stringLiteral52424150CE94D4AA9600469221595A075963D010, /*hidden argument*/NULL);
		Dictionary_2_tF2F04E1BE233EE6C4A6E90261E463B2A67A3FB6A * L_72 = __this->get_m_Styles_28();
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_73 = __this->get_m_verticalSliderThumb_15();
		NullCheck(L_72);
		Dictionary_2_set_Item_m24E725BAB2853FE434C3D507858296BA81733DC5(L_72, _stringLiteral5370ABC43B604B9438E05FD111325616F5BA93EB, L_73, /*hidden argument*/Dictionary_2_set_Item_m24E725BAB2853FE434C3D507858296BA81733DC5_RuntimeMethod_var);
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_74 = __this->get_m_verticalSliderThumb_15();
		NullCheck(L_74);
		GUIStyle_set_name_m3D232D5A8EAD7B29F1F2DA3ADD01B99EFF83F1D7(L_74, _stringLiteral5370ABC43B604B9438E05FD111325616F5BA93EB, /*hidden argument*/NULL);
		Dictionary_2_tF2F04E1BE233EE6C4A6E90261E463B2A67A3FB6A * L_75 = __this->get_m_Styles_28();
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_76 = __this->get_m_horizontalScrollbar_16();
		NullCheck(L_75);
		Dictionary_2_set_Item_m24E725BAB2853FE434C3D507858296BA81733DC5(L_75, _stringLiteral225F12AD8179D36194EBC648F0064B7E925473EC, L_76, /*hidden argument*/Dictionary_2_set_Item_m24E725BAB2853FE434C3D507858296BA81733DC5_RuntimeMethod_var);
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_77 = __this->get_m_horizontalScrollbar_16();
		NullCheck(L_77);
		GUIStyle_set_name_m3D232D5A8EAD7B29F1F2DA3ADD01B99EFF83F1D7(L_77, _stringLiteral225F12AD8179D36194EBC648F0064B7E925473EC, /*hidden argument*/NULL);
		Dictionary_2_tF2F04E1BE233EE6C4A6E90261E463B2A67A3FB6A * L_78 = __this->get_m_Styles_28();
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_79 = __this->get_m_horizontalScrollbarThumb_17();
		NullCheck(L_78);
		Dictionary_2_set_Item_m24E725BAB2853FE434C3D507858296BA81733DC5(L_78, _stringLiteralB72EF1950CD4E44A073B202D2C0D05D8A97FD42F, L_79, /*hidden argument*/Dictionary_2_set_Item_m24E725BAB2853FE434C3D507858296BA81733DC5_RuntimeMethod_var);
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_80 = __this->get_m_horizontalScrollbarThumb_17();
		NullCheck(L_80);
		GUIStyle_set_name_m3D232D5A8EAD7B29F1F2DA3ADD01B99EFF83F1D7(L_80, _stringLiteralB72EF1950CD4E44A073B202D2C0D05D8A97FD42F, /*hidden argument*/NULL);
		Dictionary_2_tF2F04E1BE233EE6C4A6E90261E463B2A67A3FB6A * L_81 = __this->get_m_Styles_28();
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_82 = __this->get_m_horizontalScrollbarLeftButton_18();
		NullCheck(L_81);
		Dictionary_2_set_Item_m24E725BAB2853FE434C3D507858296BA81733DC5(L_81, _stringLiteral09820128951D618D4CFE7DC0105A1B6B113C921F, L_82, /*hidden argument*/Dictionary_2_set_Item_m24E725BAB2853FE434C3D507858296BA81733DC5_RuntimeMethod_var);
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_83 = __this->get_m_horizontalScrollbarLeftButton_18();
		NullCheck(L_83);
		GUIStyle_set_name_m3D232D5A8EAD7B29F1F2DA3ADD01B99EFF83F1D7(L_83, _stringLiteral09820128951D618D4CFE7DC0105A1B6B113C921F, /*hidden argument*/NULL);
		Dictionary_2_tF2F04E1BE233EE6C4A6E90261E463B2A67A3FB6A * L_84 = __this->get_m_Styles_28();
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_85 = __this->get_m_horizontalScrollbarRightButton_19();
		NullCheck(L_84);
		Dictionary_2_set_Item_m24E725BAB2853FE434C3D507858296BA81733DC5(L_84, _stringLiteralC1736E388224676A122F6D36DB2BFE2D5B5815D1, L_85, /*hidden argument*/Dictionary_2_set_Item_m24E725BAB2853FE434C3D507858296BA81733DC5_RuntimeMethod_var);
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_86 = __this->get_m_horizontalScrollbarRightButton_19();
		NullCheck(L_86);
		GUIStyle_set_name_m3D232D5A8EAD7B29F1F2DA3ADD01B99EFF83F1D7(L_86, _stringLiteralC1736E388224676A122F6D36DB2BFE2D5B5815D1, /*hidden argument*/NULL);
		Dictionary_2_tF2F04E1BE233EE6C4A6E90261E463B2A67A3FB6A * L_87 = __this->get_m_Styles_28();
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_88 = __this->get_m_verticalScrollbar_20();
		NullCheck(L_87);
		Dictionary_2_set_Item_m24E725BAB2853FE434C3D507858296BA81733DC5(L_87, _stringLiteralE794E3C8A26A199BEB58080D834D082D83C3C1B2, L_88, /*hidden argument*/Dictionary_2_set_Item_m24E725BAB2853FE434C3D507858296BA81733DC5_RuntimeMethod_var);
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_89 = __this->get_m_verticalScrollbar_20();
		NullCheck(L_89);
		GUIStyle_set_name_m3D232D5A8EAD7B29F1F2DA3ADD01B99EFF83F1D7(L_89, _stringLiteralE794E3C8A26A199BEB58080D834D082D83C3C1B2, /*hidden argument*/NULL);
		Dictionary_2_tF2F04E1BE233EE6C4A6E90261E463B2A67A3FB6A * L_90 = __this->get_m_Styles_28();
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_91 = __this->get_m_verticalScrollbarThumb_21();
		NullCheck(L_90);
		Dictionary_2_set_Item_m24E725BAB2853FE434C3D507858296BA81733DC5(L_90, _stringLiteral487A38C9550C3B08588319E52F112CE6A539A561, L_91, /*hidden argument*/Dictionary_2_set_Item_m24E725BAB2853FE434C3D507858296BA81733DC5_RuntimeMethod_var);
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_92 = __this->get_m_verticalScrollbarThumb_21();
		NullCheck(L_92);
		GUIStyle_set_name_m3D232D5A8EAD7B29F1F2DA3ADD01B99EFF83F1D7(L_92, _stringLiteral487A38C9550C3B08588319E52F112CE6A539A561, /*hidden argument*/NULL);
		Dictionary_2_tF2F04E1BE233EE6C4A6E90261E463B2A67A3FB6A * L_93 = __this->get_m_Styles_28();
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_94 = __this->get_m_verticalScrollbarUpButton_22();
		NullCheck(L_93);
		Dictionary_2_set_Item_m24E725BAB2853FE434C3D507858296BA81733DC5(L_93, _stringLiteral047A7EA97FB24BA0C74949892C1880E97AC0FB35, L_94, /*hidden argument*/Dictionary_2_set_Item_m24E725BAB2853FE434C3D507858296BA81733DC5_RuntimeMethod_var);
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_95 = __this->get_m_verticalScrollbarUpButton_22();
		NullCheck(L_95);
		GUIStyle_set_name_m3D232D5A8EAD7B29F1F2DA3ADD01B99EFF83F1D7(L_95, _stringLiteral047A7EA97FB24BA0C74949892C1880E97AC0FB35, /*hidden argument*/NULL);
		Dictionary_2_tF2F04E1BE233EE6C4A6E90261E463B2A67A3FB6A * L_96 = __this->get_m_Styles_28();
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_97 = __this->get_m_verticalScrollbarDownButton_23();
		NullCheck(L_96);
		Dictionary_2_set_Item_m24E725BAB2853FE434C3D507858296BA81733DC5(L_96, _stringLiteralACAB6798BE3F8F69AA0198A7C9B83ADA0F075932, L_97, /*hidden argument*/Dictionary_2_set_Item_m24E725BAB2853FE434C3D507858296BA81733DC5_RuntimeMethod_var);
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_98 = __this->get_m_verticalScrollbarDownButton_23();
		NullCheck(L_98);
		GUIStyle_set_name_m3D232D5A8EAD7B29F1F2DA3ADD01B99EFF83F1D7(L_98, _stringLiteralACAB6798BE3F8F69AA0198A7C9B83ADA0F075932, /*hidden argument*/NULL);
		Dictionary_2_tF2F04E1BE233EE6C4A6E90261E463B2A67A3FB6A * L_99 = __this->get_m_Styles_28();
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_100 = __this->get_m_ScrollView_24();
		NullCheck(L_99);
		Dictionary_2_set_Item_m24E725BAB2853FE434C3D507858296BA81733DC5(L_99, _stringLiteral9B611144024AB5EC850C1A1C7668509DA40C92DB, L_100, /*hidden argument*/Dictionary_2_set_Item_m24E725BAB2853FE434C3D507858296BA81733DC5_RuntimeMethod_var);
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_101 = __this->get_m_ScrollView_24();
		NullCheck(L_101);
		GUIStyle_set_name_m3D232D5A8EAD7B29F1F2DA3ADD01B99EFF83F1D7(L_101, _stringLiteral9B611144024AB5EC850C1A1C7668509DA40C92DB, /*hidden argument*/NULL);
		GUIStyleU5BU5D_t2F343713D6ADFF41BBCF1D17BAE79F51BD745DBB* L_102 = __this->get_m_CustomStyles_25();
		if (!L_102)
		{
			goto IL_051b;
		}
	}
	{
		V_0 = 0;
		goto IL_050c;
	}

IL_04d4:
	{
		GUIStyleU5BU5D_t2F343713D6ADFF41BBCF1D17BAE79F51BD745DBB* L_103 = __this->get_m_CustomStyles_25();
		int32_t L_104 = V_0;
		NullCheck(L_103);
		int32_t L_105 = L_104;
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_106 = (L_103)->GetAt(static_cast<il2cpp_array_size_t>(L_105));
		if (L_106)
		{
			goto IL_04e7;
		}
	}
	{
		goto IL_0508;
	}

IL_04e7:
	{
		Dictionary_2_tF2F04E1BE233EE6C4A6E90261E463B2A67A3FB6A * L_107 = __this->get_m_Styles_28();
		GUIStyleU5BU5D_t2F343713D6ADFF41BBCF1D17BAE79F51BD745DBB* L_108 = __this->get_m_CustomStyles_25();
		int32_t L_109 = V_0;
		NullCheck(L_108);
		int32_t L_110 = L_109;
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_111 = (L_108)->GetAt(static_cast<il2cpp_array_size_t>(L_110));
		NullCheck(L_111);
		String_t* L_112 = GUIStyle_get_name_m111D8AB0173E1EBA46A9664EBABBC82AFE3ED71E(L_111, /*hidden argument*/NULL);
		GUIStyleU5BU5D_t2F343713D6ADFF41BBCF1D17BAE79F51BD745DBB* L_113 = __this->get_m_CustomStyles_25();
		int32_t L_114 = V_0;
		NullCheck(L_113);
		int32_t L_115 = L_114;
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_116 = (L_113)->GetAt(static_cast<il2cpp_array_size_t>(L_115));
		NullCheck(L_107);
		Dictionary_2_set_Item_m24E725BAB2853FE434C3D507858296BA81733DC5(L_107, L_112, L_116, /*hidden argument*/Dictionary_2_set_Item_m24E725BAB2853FE434C3D507858296BA81733DC5_RuntimeMethod_var);
	}

IL_0508:
	{
		int32_t L_117 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_117, (int32_t)1));
	}

IL_050c:
	{
		int32_t L_118 = V_0;
		GUIStyleU5BU5D_t2F343713D6ADFF41BBCF1D17BAE79F51BD745DBB* L_119 = __this->get_m_CustomStyles_25();
		NullCheck(L_119);
		if ((((int32_t)L_118) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_119)->max_length)))))))
		{
			goto IL_04d4;
		}
	}
	{
	}

IL_051b:
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_120 = GUISkin_get_error_m40FBD0C57353CBFD8EE75B796E3EADBF9033C47F(/*hidden argument*/NULL);
		NullCheck(L_120);
		GUIStyle_set_stretchHeight_mE11B46969A8498FB3B7443B4C54254F0C9A71A6E(L_120, (bool)1, /*hidden argument*/NULL);
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_121 = GUISkin_get_error_m40FBD0C57353CBFD8EE75B796E3EADBF9033C47F(/*hidden argument*/NULL);
		NullCheck(L_121);
		GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * L_122 = GUIStyle_get_normal_mC5CB22EED8113DEC86C54FB42F757B635D09DD2F(L_121, /*hidden argument*/NULL);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_123 = Color_get_red_m5562DD438931CF0D1FBBBB29BF7F8B752AF38957(/*hidden argument*/NULL);
		NullCheck(L_122);
		GUIStyleState_set_textColor_m2B235845A292C22ABEDEFBB2FD798DEB4E104983(L_122, L_123, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::GetStyle(System.String)
extern "C" IL2CPP_METHOD_ATTR GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * GUISkin_GetStyle_mD292E6470E961CA986674875B78746A1859D5FEC (GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7 * __this, String_t* ___styleName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUISkin_GetStyle_mD292E6470E961CA986674875B78746A1859D5FEC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * V_0 = NULL;
	GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * V_1 = NULL;
	int32_t V_2 = 0;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* G_B4_1 = NULL;
	StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* G_B4_2 = NULL;
	int32_t G_B3_0 = 0;
	StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* G_B3_1 = NULL;
	StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* G_B3_2 = NULL;
	String_t* G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* G_B5_2 = NULL;
	StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* G_B5_3 = NULL;
	{
		String_t* L_0 = ___styleName0;
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_1 = GUISkin_FindStyle_m977BAAD9DE35AC43C9FA2DB52C6C0BDF83EE4706(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_3 = V_0;
		V_1 = L_3;
		goto IL_0085;
	}

IL_0016:
	{
		StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* L_4 = (StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B*)SZArrayNew(StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral2BBC38111940698AFB713196AC3CDC77F8520F36);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral2BBC38111940698AFB713196AC3CDC77F8520F36);
		StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* L_6 = L_5;
		String_t* L_7 = ___styleName0;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_7);
		StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* L_8 = L_6;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral32ECC4719669918929E577728ABBC5556B1258D9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral32ECC4719669918929E577728ABBC5556B1258D9);
		StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* L_9 = L_8;
		String_t* L_10 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_10);
		StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* L_11 = L_9;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral4EBF4799F637E32D34B9DBF78887989DD6C458D1);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral4EBF4799F637E32D34B9DBF78887989DD6C458D1);
		StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* L_12 = L_11;
		Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_13 = Event_get_current_m072CEE599D11B8A9A916697E57C0F561188CDB2B(/*hidden argument*/NULL);
		G_B3_0 = 5;
		G_B3_1 = L_12;
		G_B3_2 = L_12;
		if (!L_13)
		{
			G_B4_0 = 5;
			G_B4_1 = L_12;
			G_B4_2 = L_12;
			goto IL_006a;
		}
	}
	{
		Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_14 = Event_get_current_m072CEE599D11B8A9A916697E57C0F561188CDB2B(/*hidden argument*/NULL);
		NullCheck(L_14);
		int32_t L_15 = Event_get_type_mAABE4A35E5658E0079A1518D318AF2592F51D6FA(L_14, /*hidden argument*/NULL);
		V_2 = L_15;
		RuntimeObject * L_16 = Box(EventType_t3D3937E705A4506226002DAB22071B7B181DA57B_il2cpp_TypeInfo_var, (&V_2));
		NullCheck(L_16);
		String_t* L_17 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_16);
		V_2 = *(int32_t*)UnBox(L_16);
		G_B5_0 = L_17;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		G_B5_3 = G_B3_2;
		goto IL_006f;
	}

IL_006a:
	{
		G_B5_0 = _stringLiteralB71AA0202634484C09B931E01A9CF812565B054B;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
		G_B5_3 = G_B4_2;
	}

IL_006f:
	{
		NullCheck(G_B5_2);
		ArrayElementTypeCheck (G_B5_2, G_B5_0);
		(G_B5_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B5_1), (String_t*)G_B5_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_18 = String_Concat_m05C8664677D30AF8CD22529864D444E87E1CC148(G_B5_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(L_18, /*hidden argument*/NULL);
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_19 = GUISkin_get_error_m40FBD0C57353CBFD8EE75B796E3EADBF9033C47F(/*hidden argument*/NULL);
		V_1 = L_19;
		goto IL_0085;
	}

IL_0085:
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_20 = V_1;
		return L_20;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::FindStyle(System.String)
extern "C" IL2CPP_METHOD_ATTR GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * GUISkin_FindStyle_m977BAAD9DE35AC43C9FA2DB52C6C0BDF83EE4706 (GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7 * __this, String_t* ___styleName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUISkin_FindStyle_m977BAAD9DE35AC43C9FA2DB52C6C0BDF83EE4706_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * V_0 = NULL;
	GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_0 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(__this, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteralC14E8131835767D3CB183BB760D5C40B86612DDE, /*hidden argument*/NULL);
		V_0 = (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 *)NULL;
		goto IL_0051;
	}

IL_001f:
	{
		Dictionary_2_tF2F04E1BE233EE6C4A6E90261E463B2A67A3FB6A * L_1 = __this->get_m_Styles_28();
		if (L_1)
		{
			goto IL_0030;
		}
	}
	{
		GUISkin_BuildStyleCache_m2C68BB5521EAF11FC98C86D7E60008901D61866A(__this, /*hidden argument*/NULL);
	}

IL_0030:
	{
		Dictionary_2_tF2F04E1BE233EE6C4A6E90261E463B2A67A3FB6A * L_2 = __this->get_m_Styles_28();
		String_t* L_3 = ___styleName0;
		NullCheck(L_2);
		bool L_4 = Dictionary_2_TryGetValue_m72452D4223AA3313BF658BFBDFC1B417CA40EC18(L_2, L_3, (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 **)(&V_1), /*hidden argument*/Dictionary_2_TryGetValue_m72452D4223AA3313BF658BFBDFC1B417CA40EC18_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_004a;
		}
	}
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_5 = V_1;
		V_0 = L_5;
		goto IL_0051;
	}

IL_004a:
	{
		V_0 = (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 *)NULL;
		goto IL_0051;
	}

IL_0051:
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_6 = V_0;
		return L_6;
	}
}
// System.Void UnityEngine.GUISkin::MakeCurrent()
extern "C" IL2CPP_METHOD_ATTR void GUISkin_MakeCurrent_m42FAF8090F6B57648678704D86A6451DB917CF2D (GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUISkin_MakeCurrent_m42FAF8090F6B57648678704D86A6451DB917CF2D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7_StaticFields*)il2cpp_codegen_static_fields_for(GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7_il2cpp_TypeInfo_var))->set_current_30(__this);
		Font_t1EDE54AF557272BE314EB4B40EFA50CEB353CA26 * L_0 = GUISkin_get_font_m54200DFAF834B835CE6598E1BA5B41382BC33AD5(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t671F175A201A19166385EE3392292A5F50070572_il2cpp_TypeInfo_var);
		GUIStyle_SetDefaultFont_m09D149F682E885D7058E3C48EB42C9E62363E381(L_0, /*hidden argument*/NULL);
		SkinChangedDelegate_tAB4CEEA8C8A0BDCFD51C9624AE173C46A40135D8 * L_1 = ((GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7_StaticFields*)il2cpp_codegen_static_fields_for(GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7_il2cpp_TypeInfo_var))->get_m_SkinChanged_29();
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		SkinChangedDelegate_tAB4CEEA8C8A0BDCFD51C9624AE173C46A40135D8 * L_2 = ((GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7_StaticFields*)il2cpp_codegen_static_fields_for(GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7_il2cpp_TypeInfo_var))->get_m_SkinChanged_29();
		NullCheck(L_2);
		SkinChangedDelegate_Invoke_mE18CA4219F24151D8FC8A8A8B261F3FD860B007F(L_2, /*hidden argument*/NULL);
	}

IL_0026:
	{
		return;
	}
}
// System.Collections.IEnumerator UnityEngine.GUISkin::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* GUISkin_GetEnumerator_m3F6D91C1C038E5DC24C38F6D23C95DEE03173987 (GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUISkin_GetEnumerator_m3F6D91C1C038E5DC24C38F6D23C95DEE03173987_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		Dictionary_2_tF2F04E1BE233EE6C4A6E90261E463B2A67A3FB6A * L_0 = __this->get_m_Styles_28();
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		GUISkin_BuildStyleCache_m2C68BB5521EAF11FC98C86D7E60008901D61866A(__this, /*hidden argument*/NULL);
	}

IL_0012:
	{
		Dictionary_2_tF2F04E1BE233EE6C4A6E90261E463B2A67A3FB6A * L_1 = __this->get_m_Styles_28();
		NullCheck(L_1);
		ValueCollection_t0C6A26D50A89F916DF2650A7C132FFB1992070B9 * L_2 = Dictionary_2_get_Values_mBCCD4E4C93C5E4DF2E0A07934040870B3662866F(L_1, /*hidden argument*/Dictionary_2_get_Values_mBCCD4E4C93C5E4DF2E0A07934040870B3662866F_RuntimeMethod_var);
		NullCheck(L_2);
		Enumerator_t7CFB6C06FEABB756D0C0A1BA202A13F5091958A6  L_3 = ValueCollection_GetEnumerator_m56252F012AAECD0BFFC3729A87D60BF2945499C2(L_2, /*hidden argument*/ValueCollection_GetEnumerator_m56252F012AAECD0BFFC3729A87D60BF2945499C2_RuntimeMethod_var);
		Enumerator_t7CFB6C06FEABB756D0C0A1BA202A13F5091958A6  L_4 = L_3;
		RuntimeObject * L_5 = Box(Enumerator_t7CFB6C06FEABB756D0C0A1BA202A13F5091958A6_il2cpp_TypeInfo_var, &L_4);
		V_0 = (RuntimeObject*)L_5;
		goto IL_002d;
	}

IL_002d:
	{
		RuntimeObject* L_6 = V_0;
		return L_6;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_SkinChangedDelegate_tAB4CEEA8C8A0BDCFD51C9624AE173C46A40135D8 (SkinChangedDelegate_tAB4CEEA8C8A0BDCFD51C9624AE173C46A40135D8 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void UnityEngine.GUISkin_SkinChangedDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void SkinChangedDelegate__ctor_m106EBB63DA6B078DD50D230BAC7535923307F2FA (SkinChangedDelegate_tAB4CEEA8C8A0BDCFD51C9624AE173C46A40135D8 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.GUISkin_SkinChangedDelegate::Invoke()
extern "C" IL2CPP_METHOD_ATTR void SkinChangedDelegate_Invoke_mE18CA4219F24151D8FC8A8A8B261F3FD860B007F (SkinChangedDelegate_tAB4CEEA8C8A0BDCFD51C9624AE173C46A40135D8 * __this, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		SkinChangedDelegate_Invoke_mE18CA4219F24151D8FC8A8A8B261F3FD860B007F((SkinChangedDelegate_tAB4CEEA8C8A0BDCFD51C9624AE173C46A40135D8 *)__this->get_prev_9(), method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	if (!il2cpp_codegen_method_is_virtual(targetMethod))
	{
		il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	}
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
	if (___methodIsStatic)
	{
		if (___parameterCount == 0)
		{
			// open
			typedef void (*FunctionPointerType) (const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(targetMethod);
		}
		else
		{
			// closed
			typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
		}
	}
	else
	{
		// closed
		if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
		{
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
		}
		else
		{
			typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
		}
	}
}
// System.IAsyncResult UnityEngine.GUISkin_SkinChangedDelegate::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* SkinChangedDelegate_BeginInvoke_mB7F9F676B52F8A8108956D2DA04E8C0ECD5C3824 (SkinChangedDelegate_tAB4CEEA8C8A0BDCFD51C9624AE173C46A40135D8 * __this, AsyncCallback_t74ABD1277F711E7FBDCB00E169A63DEFD39E86A2 * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void UnityEngine.GUISkin_SkinChangedDelegate::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void SkinChangedDelegate_EndInvoke_mFB33D8790DB1DAA2CC1B927ADAE992FF3C89B149 (SkinChangedDelegate_tAB4CEEA8C8A0BDCFD51C9624AE173C46A40135D8 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
























// Conversion methods for marshalling of: UnityEngine.GUIStyle
extern "C" void GUIStyle_t671F175A201A19166385EE3392292A5F50070572_marshal_pinvoke(const GUIStyle_t671F175A201A19166385EE3392292A5F50070572& unmarshaled, GUIStyle_t671F175A201A19166385EE3392292A5F50070572_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Normal_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Normal' of type 'GUIStyle': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Normal_1Exception, NULL, NULL);
}
extern "C" void GUIStyle_t671F175A201A19166385EE3392292A5F50070572_marshal_pinvoke_back(const GUIStyle_t671F175A201A19166385EE3392292A5F50070572_marshaled_pinvoke& marshaled, GUIStyle_t671F175A201A19166385EE3392292A5F50070572& unmarshaled)
{
	Exception_t* ___m_Normal_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Normal' of type 'GUIStyle': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Normal_1Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.GUIStyle
extern "C" void GUIStyle_t671F175A201A19166385EE3392292A5F50070572_marshal_pinvoke_cleanup(GUIStyle_t671F175A201A19166385EE3392292A5F50070572_marshaled_pinvoke& marshaled)
{
}
























// Conversion methods for marshalling of: UnityEngine.GUIStyle
extern "C" void GUIStyle_t671F175A201A19166385EE3392292A5F50070572_marshal_com(const GUIStyle_t671F175A201A19166385EE3392292A5F50070572& unmarshaled, GUIStyle_t671F175A201A19166385EE3392292A5F50070572_marshaled_com& marshaled)
{
	Exception_t* ___m_Normal_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Normal' of type 'GUIStyle': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Normal_1Exception, NULL, NULL);
}
extern "C" void GUIStyle_t671F175A201A19166385EE3392292A5F50070572_marshal_com_back(const GUIStyle_t671F175A201A19166385EE3392292A5F50070572_marshaled_com& marshaled, GUIStyle_t671F175A201A19166385EE3392292A5F50070572& unmarshaled)
{
	Exception_t* ___m_Normal_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Normal' of type 'GUIStyle': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Normal_1Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.GUIStyle
extern "C" void GUIStyle_t671F175A201A19166385EE3392292A5F50070572_marshal_com_cleanup(GUIStyle_t671F175A201A19166385EE3392292A5F50070572_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.GUIStyle::.ctor()
extern "C" IL2CPP_METHOD_ATTR void GUIStyle__ctor_m8AA3D5AA506A252687923D0DA80741862AA83805 (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUIStyle__ctor_m8AA3D5AA506A252687923D0DA80741862AA83805_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m8BA07445967EE2CC15961AD3C16F25DB74506EA0(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t671F175A201A19166385EE3392292A5F50070572_il2cpp_TypeInfo_var);
		intptr_t L_0 = GUIStyle_Internal_Create_m9641BC84B2A6E34A801EED919EF412E4A1C444C8(__this, /*hidden argument*/NULL);
		__this->set_m_Ptr_0((intptr_t)L_0);
		return;
	}
}
// System.Void UnityEngine.GUIStyle::.ctor(UnityEngine.GUIStyle)
extern "C" IL2CPP_METHOD_ATTR void GUIStyle__ctor_m64098019A1065381E9909C513D3B8CA4617EF168 (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * __this, GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUIStyle__ctor_m64098019A1065381E9909C513D3B8CA4617EF168_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m8BA07445967EE2CC15961AD3C16F25DB74506EA0(__this, /*hidden argument*/NULL);
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0020;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteral8F13B25223E12B732676D159774DCB00806DA4CB, /*hidden argument*/NULL);
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_1 = GUISkin_get_error_m40FBD0C57353CBFD8EE75B796E3EADBF9033C47F(/*hidden argument*/NULL);
		___other0 = L_1;
	}

IL_0020:
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_2 = ___other0;
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t671F175A201A19166385EE3392292A5F50070572_il2cpp_TypeInfo_var);
		intptr_t L_3 = GUIStyle_Internal_Copy_m9F0B548973DA4B7992A7B74734736DDBAD3E8325(__this, L_2, /*hidden argument*/NULL);
		__this->set_m_Ptr_0((intptr_t)L_3);
		return;
	}
}
// System.String UnityEngine.GUIStyle::get_name()
extern "C" IL2CPP_METHOD_ATTR String_t* GUIStyle_get_name_m111D8AB0173E1EBA46A9664EBABBC82AFE3ED71E (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * __this, const RuntimeMethod* method)
{
	typedef String_t* (*GUIStyle_get_name_m111D8AB0173E1EBA46A9664EBABBC82AFE3ED71E_ftn) (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 *);
	static GUIStyle_get_name_m111D8AB0173E1EBA46A9664EBABBC82AFE3ED71E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_get_name_m111D8AB0173E1EBA46A9664EBABBC82AFE3ED71E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::get_name()");
	String_t* retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.GUIStyle::set_name(System.String)
extern "C" IL2CPP_METHOD_ATTR void GUIStyle_set_name_m3D232D5A8EAD7B29F1F2DA3ADD01B99EFF83F1D7 (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	typedef void (*GUIStyle_set_name_m3D232D5A8EAD7B29F1F2DA3ADD01B99EFF83F1D7_ftn) (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 *, String_t*);
	static GUIStyle_set_name_m3D232D5A8EAD7B29F1F2DA3ADD01B99EFF83F1D7_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_set_name_m3D232D5A8EAD7B29F1F2DA3ADD01B99EFF83F1D7_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::set_name(System.String)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Single UnityEngine.GUIStyle::get_fixedWidth()
extern "C" IL2CPP_METHOD_ATTR float GUIStyle_get_fixedWidth_mEACB70758F83DCD64CE363143849CC40E49B8D8D (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * __this, const RuntimeMethod* method)
{
	typedef float (*GUIStyle_get_fixedWidth_mEACB70758F83DCD64CE363143849CC40E49B8D8D_ftn) (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 *);
	static GUIStyle_get_fixedWidth_mEACB70758F83DCD64CE363143849CC40E49B8D8D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_get_fixedWidth_mEACB70758F83DCD64CE363143849CC40E49B8D8D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::get_fixedWidth()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Single UnityEngine.GUIStyle::get_fixedHeight()
extern "C" IL2CPP_METHOD_ATTR float GUIStyle_get_fixedHeight_m9B5589C95B27C5590219413E8D7E9E1E95EB7708 (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * __this, const RuntimeMethod* method)
{
	typedef float (*GUIStyle_get_fixedHeight_m9B5589C95B27C5590219413E8D7E9E1E95EB7708_ftn) (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 *);
	static GUIStyle_get_fixedHeight_m9B5589C95B27C5590219413E8D7E9E1E95EB7708_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_get_fixedHeight_m9B5589C95B27C5590219413E8D7E9E1E95EB7708_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::get_fixedHeight()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Boolean UnityEngine.GUIStyle::get_stretchWidth()
extern "C" IL2CPP_METHOD_ATTR bool GUIStyle_get_stretchWidth_m4513B313AABE48E1D10424844DC186405BC8A677 (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * __this, const RuntimeMethod* method)
{
	typedef bool (*GUIStyle_get_stretchWidth_m4513B313AABE48E1D10424844DC186405BC8A677_ftn) (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 *);
	static GUIStyle_get_stretchWidth_m4513B313AABE48E1D10424844DC186405BC8A677_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_get_stretchWidth_m4513B313AABE48E1D10424844DC186405BC8A677_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::get_stretchWidth()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Boolean UnityEngine.GUIStyle::get_stretchHeight()
extern "C" IL2CPP_METHOD_ATTR bool GUIStyle_get_stretchHeight_m264308B18FA5F0A8400CF49945BAE1B9EFDC934F (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * __this, const RuntimeMethod* method)
{
	typedef bool (*GUIStyle_get_stretchHeight_m264308B18FA5F0A8400CF49945BAE1B9EFDC934F_ftn) (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 *);
	static GUIStyle_get_stretchHeight_m264308B18FA5F0A8400CF49945BAE1B9EFDC934F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_get_stretchHeight_m264308B18FA5F0A8400CF49945BAE1B9EFDC934F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::get_stretchHeight()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.GUIStyle::set_stretchHeight(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void GUIStyle_set_stretchHeight_mE11B46969A8498FB3B7443B4C54254F0C9A71A6E (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * __this, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*GUIStyle_set_stretchHeight_mE11B46969A8498FB3B7443B4C54254F0C9A71A6E_ftn) (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 *, bool);
	static GUIStyle_set_stretchHeight_mE11B46969A8498FB3B7443B4C54254F0C9A71A6E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_set_stretchHeight_mE11B46969A8498FB3B7443B4C54254F0C9A71A6E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::set_stretchHeight(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.GUIStyle::set_fontSize(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void GUIStyle_set_fontSize_mA9F9F916A9BC3B81CFEE7460966FFD1E6B67F45F (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*GUIStyle_set_fontSize_mA9F9F916A9BC3B81CFEE7460966FFD1E6B67F45F_ftn) (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 *, int32_t);
	static GUIStyle_set_fontSize_mA9F9F916A9BC3B81CFEE7460966FFD1E6B67F45F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_set_fontSize_mA9F9F916A9BC3B81CFEE7460966FFD1E6B67F45F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::set_fontSize(System.Int32)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.IntPtr UnityEngine.GUIStyle::Internal_Create(UnityEngine.GUIStyle)
extern "C" IL2CPP_METHOD_ATTR intptr_t GUIStyle_Internal_Create_m9641BC84B2A6E34A801EED919EF412E4A1C444C8 (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___self0, const RuntimeMethod* method)
{
	typedef intptr_t (*GUIStyle_Internal_Create_m9641BC84B2A6E34A801EED919EF412E4A1C444C8_ftn) (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 *);
	static GUIStyle_Internal_Create_m9641BC84B2A6E34A801EED919EF412E4A1C444C8_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_Internal_Create_m9641BC84B2A6E34A801EED919EF412E4A1C444C8_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::Internal_Create(UnityEngine.GUIStyle)");
	intptr_t retVal = _il2cpp_icall_func(___self0);
	return retVal;
}
// System.IntPtr UnityEngine.GUIStyle::Internal_Copy(UnityEngine.GUIStyle,UnityEngine.GUIStyle)
extern "C" IL2CPP_METHOD_ATTR intptr_t GUIStyle_Internal_Copy_m9F0B548973DA4B7992A7B74734736DDBAD3E8325 (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___self0, GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___other1, const RuntimeMethod* method)
{
	typedef intptr_t (*GUIStyle_Internal_Copy_m9F0B548973DA4B7992A7B74734736DDBAD3E8325_ftn) (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 *, GUIStyle_t671F175A201A19166385EE3392292A5F50070572 *);
	static GUIStyle_Internal_Copy_m9F0B548973DA4B7992A7B74734736DDBAD3E8325_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_Internal_Copy_m9F0B548973DA4B7992A7B74734736DDBAD3E8325_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::Internal_Copy(UnityEngine.GUIStyle,UnityEngine.GUIStyle)");
	intptr_t retVal = _il2cpp_icall_func(___self0, ___other1);
	return retVal;
}
// System.Void UnityEngine.GUIStyle::Internal_Destroy(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void GUIStyle_Internal_Destroy_mFA13F1C8E929FB9429825F2F176D4E3DE9C131E2 (intptr_t ___self0, const RuntimeMethod* method)
{
	typedef void (*GUIStyle_Internal_Destroy_mFA13F1C8E929FB9429825F2F176D4E3DE9C131E2_ftn) (intptr_t);
	static GUIStyle_Internal_Destroy_mFA13F1C8E929FB9429825F2F176D4E3DE9C131E2_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_Internal_Destroy_mFA13F1C8E929FB9429825F2F176D4E3DE9C131E2_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::Internal_Destroy(System.IntPtr)");
	_il2cpp_icall_func(___self0);
}
// System.IntPtr UnityEngine.GUIStyle::GetStyleStatePtr(System.Int32)
extern "C" IL2CPP_METHOD_ATTR intptr_t GUIStyle_GetStyleStatePtr_m9EB2842B5EDEC03D6F7A0050A4E9DBB7103EA5C5 (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * __this, int32_t ___idx0, const RuntimeMethod* method)
{
	typedef intptr_t (*GUIStyle_GetStyleStatePtr_m9EB2842B5EDEC03D6F7A0050A4E9DBB7103EA5C5_ftn) (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 *, int32_t);
	static GUIStyle_GetStyleStatePtr_m9EB2842B5EDEC03D6F7A0050A4E9DBB7103EA5C5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_GetStyleStatePtr_m9EB2842B5EDEC03D6F7A0050A4E9DBB7103EA5C5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::GetStyleStatePtr(System.Int32)");
	intptr_t retVal = _il2cpp_icall_func(__this, ___idx0);
	return retVal;
}
// System.IntPtr UnityEngine.GUIStyle::GetRectOffsetPtr(System.Int32)
extern "C" IL2CPP_METHOD_ATTR intptr_t GUIStyle_GetRectOffsetPtr_m780608811770308EFDE095993756D8AA0BD37BF8 (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * __this, int32_t ___idx0, const RuntimeMethod* method)
{
	typedef intptr_t (*GUIStyle_GetRectOffsetPtr_m780608811770308EFDE095993756D8AA0BD37BF8_ftn) (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 *, int32_t);
	static GUIStyle_GetRectOffsetPtr_m780608811770308EFDE095993756D8AA0BD37BF8_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_GetRectOffsetPtr_m780608811770308EFDE095993756D8AA0BD37BF8_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::GetRectOffsetPtr(System.Int32)");
	intptr_t retVal = _il2cpp_icall_func(__this, ___idx0);
	return retVal;
}
// System.Void UnityEngine.GUIStyle::Internal_Draw(UnityEngine.Rect,UnityEngine.GUIContent,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void GUIStyle_Internal_Draw_m8DAE8DEA36131D287E8E8DF5D1EF5E9788A672A9 (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * __this, Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___screenRect0, GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * ___content1, bool ___isHover2, bool ___isActive3, bool ___on4, bool ___hasKeyboardFocus5, const RuntimeMethod* method)
{
	{
		GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * L_0 = ___content1;
		bool L_1 = ___isHover2;
		bool L_2 = ___isActive3;
		bool L_3 = ___on4;
		bool L_4 = ___hasKeyboardFocus5;
		GUIStyle_Internal_Draw_Injected_m96268CFD8003682366C5416A373F06C862B2785C(__this, (Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&___screenRect0), L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUIStyle::Internal_Draw2(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void GUIStyle_Internal_Draw2_m0F79CA39E2A55437E2E918BE915E594BC303D13D (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * __this, Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___position0, GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * ___content1, int32_t ___controlID2, bool ___on3, const RuntimeMethod* method)
{
	{
		GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * L_0 = ___content1;
		int32_t L_1 = ___controlID2;
		bool L_2 = ___on3;
		GUIStyle_Internal_Draw2_Injected_m76127AEB314B7227EED6CD90639B918394686872(__this, (Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&___position0), L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUIStyle::SetDefaultFont(UnityEngine.Font)
extern "C" IL2CPP_METHOD_ATTR void GUIStyle_SetDefaultFont_m09D149F682E885D7058E3C48EB42C9E62363E381 (Font_t1EDE54AF557272BE314EB4B40EFA50CEB353CA26 * ___font0, const RuntimeMethod* method)
{
	typedef void (*GUIStyle_SetDefaultFont_m09D149F682E885D7058E3C48EB42C9E62363E381_ftn) (Font_t1EDE54AF557272BE314EB4B40EFA50CEB353CA26 *);
	static GUIStyle_SetDefaultFont_m09D149F682E885D7058E3C48EB42C9E62363E381_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_SetDefaultFont_m09D149F682E885D7058E3C48EB42C9E62363E381_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::SetDefaultFont(UnityEngine.Font)");
	_il2cpp_icall_func(___font0);
}
// System.Void UnityEngine.GUIStyle::Finalize()
extern "C" IL2CPP_METHOD_ATTR void GUIStyle_Finalize_m06DC9D0C766664ACF0D2C8D6BE214756E6361BA4 (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUIStyle_Finalize_m06DC9D0C766664ACF0D2C8D6BE214756E6361BA4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		{
			intptr_t L_0 = __this->get_m_Ptr_0();
			bool L_1 = IntPtr_op_Inequality_mDA2D3B8121240D007DB220F422397AEBB37CEE91((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
			if (!L_1)
			{
				goto IL_002e;
			}
		}

IL_0016:
		{
			intptr_t L_2 = __this->get_m_Ptr_0();
			IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t671F175A201A19166385EE3392292A5F50070572_il2cpp_TypeInfo_var);
			GUIStyle_Internal_Destroy_mFA13F1C8E929FB9429825F2F176D4E3DE9C131E2((intptr_t)L_2, /*hidden argument*/NULL);
			__this->set_m_Ptr_0((intptr_t)(0));
		}

IL_002e:
		{
			IL2CPP_LEAVE(0x3A, FINALLY_0033);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0033;
	}

FINALLY_0033:
	{ // begin finally (depth: 1)
		Object_Finalize_mF771ED4CD6EB17CF862AA2B705F0E2CC0B4ADBED(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(51)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(51)
	{
		IL2CPP_JUMP_TBL(0x3A, IL_003a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_003a:
	{
		return;
	}
}
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_normal()
extern "C" IL2CPP_METHOD_ATTR GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * GUIStyle_get_normal_mC5CB22EED8113DEC86C54FB42F757B635D09DD2F (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * __this, const RuntimeMethod* method)
{
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * V_0 = NULL;
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * V_1 = NULL;
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * G_B2_0 = NULL;
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * G_B1_0 = NULL;
	{
		GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * L_0 = __this->get_m_Normal_1();
		GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0024;
		}
	}
	{
		intptr_t L_2 = GUIStyle_GetStyleStatePtr_m9EB2842B5EDEC03D6F7A0050A4E9DBB7103EA5C5(__this, 0, /*hidden argument*/NULL);
		GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * L_3 = GUIStyleState_GetGUIStyleState_m207443170D2CA9E48BAB05FF74B30C76C6D63F68(__this, (intptr_t)L_2, /*hidden argument*/NULL);
		GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * L_4 = L_3;
		V_0 = L_4;
		__this->set_m_Normal_1(L_4);
		GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * L_5 = V_0;
		G_B2_0 = L_5;
	}

IL_0024:
	{
		V_1 = G_B2_0;
		goto IL_002a;
	}

IL_002a:
	{
		GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * L_6 = V_1;
		return L_6;
	}
}
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_hover()
extern "C" IL2CPP_METHOD_ATTR GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * GUIStyle_get_hover_mD07EDDC6D323F443CA4167912F55B99F50B4B455 (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * __this, const RuntimeMethod* method)
{
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * V_0 = NULL;
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * V_1 = NULL;
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * G_B2_0 = NULL;
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * G_B1_0 = NULL;
	{
		GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * L_0 = __this->get_m_Hover_2();
		GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0024;
		}
	}
	{
		intptr_t L_2 = GUIStyle_GetStyleStatePtr_m9EB2842B5EDEC03D6F7A0050A4E9DBB7103EA5C5(__this, 1, /*hidden argument*/NULL);
		GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * L_3 = GUIStyleState_GetGUIStyleState_m207443170D2CA9E48BAB05FF74B30C76C6D63F68(__this, (intptr_t)L_2, /*hidden argument*/NULL);
		GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * L_4 = L_3;
		V_0 = L_4;
		__this->set_m_Hover_2(L_4);
		GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * L_5 = V_0;
		G_B2_0 = L_5;
	}

IL_0024:
	{
		V_1 = G_B2_0;
		goto IL_002a;
	}

IL_002a:
	{
		GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * L_6 = V_1;
		return L_6;
	}
}
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_active()
extern "C" IL2CPP_METHOD_ATTR GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * GUIStyle_get_active_m823A42F4DCEA480DF4253717757EC1CF3FD84A73 (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * __this, const RuntimeMethod* method)
{
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * V_0 = NULL;
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * V_1 = NULL;
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * G_B2_0 = NULL;
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * G_B1_0 = NULL;
	{
		GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * L_0 = __this->get_m_Active_3();
		GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0024;
		}
	}
	{
		intptr_t L_2 = GUIStyle_GetStyleStatePtr_m9EB2842B5EDEC03D6F7A0050A4E9DBB7103EA5C5(__this, 2, /*hidden argument*/NULL);
		GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * L_3 = GUIStyleState_GetGUIStyleState_m207443170D2CA9E48BAB05FF74B30C76C6D63F68(__this, (intptr_t)L_2, /*hidden argument*/NULL);
		GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * L_4 = L_3;
		V_0 = L_4;
		__this->set_m_Active_3(L_4);
		GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * L_5 = V_0;
		G_B2_0 = L_5;
	}

IL_0024:
	{
		V_1 = G_B2_0;
		goto IL_002a;
	}

IL_002a:
	{
		GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * L_6 = V_1;
		return L_6;
	}
}
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_focused()
extern "C" IL2CPP_METHOD_ATTR GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * GUIStyle_get_focused_mA9B04CE5AF2E54388B0DFF1F729C5DF7F11052FB (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * __this, const RuntimeMethod* method)
{
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * V_0 = NULL;
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * V_1 = NULL;
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * G_B2_0 = NULL;
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * G_B1_0 = NULL;
	{
		GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * L_0 = __this->get_m_Focused_4();
		GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0024;
		}
	}
	{
		intptr_t L_2 = GUIStyle_GetStyleStatePtr_m9EB2842B5EDEC03D6F7A0050A4E9DBB7103EA5C5(__this, 3, /*hidden argument*/NULL);
		GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * L_3 = GUIStyleState_GetGUIStyleState_m207443170D2CA9E48BAB05FF74B30C76C6D63F68(__this, (intptr_t)L_2, /*hidden argument*/NULL);
		GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * L_4 = L_3;
		V_0 = L_4;
		__this->set_m_Focused_4(L_4);
		GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * L_5 = V_0;
		G_B2_0 = L_5;
	}

IL_0024:
	{
		V_1 = G_B2_0;
		goto IL_002a;
	}

IL_002a:
	{
		GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * L_6 = V_1;
		return L_6;
	}
}
// UnityEngine.RectOffset UnityEngine.GUIStyle::get_margin()
extern "C" IL2CPP_METHOD_ATTR RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * GUIStyle_get_margin_mFC3EA0FA030A6334AC03BDDFA4AC80419C9E5BAA (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUIStyle_get_margin_mFC3EA0FA030A6334AC03BDDFA4AC80419C9E5BAA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * V_0 = NULL;
	RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * V_1 = NULL;
	RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * G_B2_0 = NULL;
	RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * G_B1_0 = NULL;
	{
		RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * L_0 = __this->get_m_Margin_11();
		RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0024;
		}
	}
	{
		intptr_t L_2 = GUIStyle_GetRectOffsetPtr_m780608811770308EFDE095993756D8AA0BD37BF8(__this, 1, /*hidden argument*/NULL);
		RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * L_3 = (RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A *)il2cpp_codegen_object_new(RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A_il2cpp_TypeInfo_var);
		RectOffset__ctor_m23620FE61AAF476219462230C6839B86736B80BA(L_3, __this, (intptr_t)L_2, /*hidden argument*/NULL);
		RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * L_4 = L_3;
		V_0 = L_4;
		__this->set_m_Margin_11(L_4);
		RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * L_5 = V_0;
		G_B2_0 = L_5;
	}

IL_0024:
	{
		V_1 = G_B2_0;
		goto IL_002a;
	}

IL_002a:
	{
		RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * L_6 = V_1;
		return L_6;
	}
}
// UnityEngine.RectOffset UnityEngine.GUIStyle::get_padding()
extern "C" IL2CPP_METHOD_ATTR RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * GUIStyle_get_padding_m5DF76AA03A313366D0DD8D577731DAC4FB83053A (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUIStyle_get_padding_m5DF76AA03A313366D0DD8D577731DAC4FB83053A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * V_0 = NULL;
	RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * V_1 = NULL;
	RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * G_B2_0 = NULL;
	RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * G_B1_0 = NULL;
	{
		RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * L_0 = __this->get_m_Padding_10();
		RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0024;
		}
	}
	{
		intptr_t L_2 = GUIStyle_GetRectOffsetPtr_m780608811770308EFDE095993756D8AA0BD37BF8(__this, 2, /*hidden argument*/NULL);
		RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * L_3 = (RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A *)il2cpp_codegen_object_new(RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A_il2cpp_TypeInfo_var);
		RectOffset__ctor_m23620FE61AAF476219462230C6839B86736B80BA(L_3, __this, (intptr_t)L_2, /*hidden argument*/NULL);
		RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * L_4 = L_3;
		V_0 = L_4;
		__this->set_m_Padding_10(L_4);
		RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * L_5 = V_0;
		G_B2_0 = L_5;
	}

IL_0024:
	{
		V_1 = G_B2_0;
		goto IL_002a;
	}

IL_002a:
	{
		RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * L_6 = V_1;
		return L_6;
	}
}
// System.Void UnityEngine.GUIStyle::Draw(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void GUIStyle_Draw_m7979DC59FA2B5B6200764FC208F8104FE4F886E3 (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * __this, Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___position0, GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * ___content1, int32_t ___controlID2, bool ___on3, const RuntimeMethod* method)
{
	{
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_0 = ___position0;
		GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * L_1 = ___content1;
		int32_t L_2 = ___controlID2;
		bool L_3 = ___on3;
		GUIStyle_Draw_mAC1BB37A9DA0C304A5A70A9CFDB097C8D9C90FFF(__this, L_0, L_1, L_2, (bool)0, (bool)0, L_3, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUIStyle::Draw(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void GUIStyle_Draw_mAC1BB37A9DA0C304A5A70A9CFDB097C8D9C90FFF (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * __this, Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___position0, GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * ___content1, int32_t ___controlId2, bool ___isHover3, bool ___isActive4, bool ___on5, bool ___hasKeyboardFocus6, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___controlId2;
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_001d;
		}
	}
	{
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_1 = ___position0;
		GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * L_2 = ___content1;
		bool L_3 = ___isHover3;
		bool L_4 = ___isActive4;
		bool L_5 = ___on5;
		bool L_6 = ___hasKeyboardFocus6;
		GUIStyle_Internal_Draw_m8DAE8DEA36131D287E8E8DF5D1EF5E9788A672A9(__this, L_1, L_2, L_3, L_4, L_5, L_6, /*hidden argument*/NULL);
		goto IL_0028;
	}

IL_001d:
	{
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_7 = ___position0;
		GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * L_8 = ___content1;
		int32_t L_9 = ___controlId2;
		bool L_10 = ___on5;
		GUIStyle_Internal_Draw2_m0F79CA39E2A55437E2E918BE915E594BC303D13D(__this, L_7, L_8, L_9, L_10, /*hidden argument*/NULL);
	}

IL_0028:
	{
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUIStyle::get_none()
extern "C" IL2CPP_METHOD_ATTR GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * GUIStyle_get_none_m2B48FA4E2FA2B9BB7A458DF25B1391F9C7BB8B7B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUIStyle_get_none_m2B48FA4E2FA2B9BB7A458DF25B1391F9C7BB8B7B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * V_0 = NULL;
	GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * G_B2_0 = NULL;
	GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * G_B1_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t671F175A201A19166385EE3392292A5F50070572_il2cpp_TypeInfo_var);
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_0 = ((GUIStyle_t671F175A201A19166385EE3392292A5F50070572_StaticFields*)il2cpp_codegen_static_fields_for(GUIStyle_t671F175A201A19166385EE3392292A5F50070572_il2cpp_TypeInfo_var))->get_s_None_14();
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0017;
		}
	}
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_2 = (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 *)il2cpp_codegen_object_new(GUIStyle_t671F175A201A19166385EE3392292A5F50070572_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m8AA3D5AA506A252687923D0DA80741862AA83805(L_2, /*hidden argument*/NULL);
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_3 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t671F175A201A19166385EE3392292A5F50070572_il2cpp_TypeInfo_var);
		((GUIStyle_t671F175A201A19166385EE3392292A5F50070572_StaticFields*)il2cpp_codegen_static_fields_for(GUIStyle_t671F175A201A19166385EE3392292A5F50070572_il2cpp_TypeInfo_var))->set_s_None_14(L_3);
		G_B2_0 = L_3;
	}

IL_0017:
	{
		V_0 = G_B2_0;
		goto IL_001d;
	}

IL_001d:
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_4 = V_0;
		return L_4;
	}
}
// System.String UnityEngine.GUIStyle::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* GUIStyle_ToString_mE73FFC6A93F4F7BC2560EADEB074F0E81F77CB07 (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUIStyle_ToString_mE73FFC6A93F4F7BC2560EADEB074F0E81F77CB07_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* L_0 = (ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D*)SZArrayNew(ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* L_1 = L_0;
		String_t* L_2 = GUIStyle_get_name_m111D8AB0173E1EBA46A9664EBABBC82AFE3ED71E(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		String_t* L_3 = UnityString_Format_m415056ECF8DA7B3EC6A8456E299D0C2002177387(_stringLiteralF92769A88C9334E4CDB8DF06F40EC92B7B4086D0, L_1, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0020;
	}

IL_0020:
	{
		String_t* L_4 = V_0;
		return L_4;
	}
}
// System.Void UnityEngine.GUIStyle::.cctor()
extern "C" IL2CPP_METHOD_ATTR void GUIStyle__cctor_mA7579A59C320A9202F6E83B39DADC06C10231D6F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUIStyle__cctor_mA7579A59C320A9202F6E83B39DADC06C10231D6F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((GUIStyle_t671F175A201A19166385EE3392292A5F50070572_StaticFields*)il2cpp_codegen_static_fields_for(GUIStyle_t671F175A201A19166385EE3392292A5F50070572_il2cpp_TypeInfo_var))->set_showKeyboardFocus_13((bool)1);
		return;
	}
}
// System.Void UnityEngine.GUIStyle::Internal_Draw_Injected(UnityEngine.RectU26,UnityEngine.GUIContent,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void GUIStyle_Internal_Draw_Injected_m96268CFD8003682366C5416A373F06C862B2785C (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * __this, Rect_t35B976DE901B5423C11705E156938EA27AB402CE * ___screenRect0, GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * ___content1, bool ___isHover2, bool ___isActive3, bool ___on4, bool ___hasKeyboardFocus5, const RuntimeMethod* method)
{
	typedef void (*GUIStyle_Internal_Draw_Injected_m96268CFD8003682366C5416A373F06C862B2785C_ftn) (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 *, Rect_t35B976DE901B5423C11705E156938EA27AB402CE *, GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 *, bool, bool, bool, bool);
	static GUIStyle_Internal_Draw_Injected_m96268CFD8003682366C5416A373F06C862B2785C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_Internal_Draw_Injected_m96268CFD8003682366C5416A373F06C862B2785C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::Internal_Draw_Injected(UnityEngine.Rect&,UnityEngine.GUIContent,System.Boolean,System.Boolean,System.Boolean,System.Boolean)");
	_il2cpp_icall_func(__this, ___screenRect0, ___content1, ___isHover2, ___isActive3, ___on4, ___hasKeyboardFocus5);
}
// System.Void UnityEngine.GUIStyle::Internal_Draw2_Injected(UnityEngine.RectU26,UnityEngine.GUIContent,System.Int32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void GUIStyle_Internal_Draw2_Injected_m76127AEB314B7227EED6CD90639B918394686872 (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * __this, Rect_t35B976DE901B5423C11705E156938EA27AB402CE * ___position0, GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * ___content1, int32_t ___controlID2, bool ___on3, const RuntimeMethod* method)
{
	typedef void (*GUIStyle_Internal_Draw2_Injected_m76127AEB314B7227EED6CD90639B918394686872_ftn) (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 *, Rect_t35B976DE901B5423C11705E156938EA27AB402CE *, GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 *, int32_t, bool);
	static GUIStyle_Internal_Draw2_Injected_m76127AEB314B7227EED6CD90639B918394686872_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_Internal_Draw2_Injected_m76127AEB314B7227EED6CD90639B918394686872_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::Internal_Draw2_Injected(UnityEngine.Rect&,UnityEngine.GUIContent,System.Int32,System.Boolean)");
	_il2cpp_icall_func(__this, ___position0, ___content1, ___controlID2, ___on3);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: UnityEngine.GUIStyleState
extern "C" void GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshal_pinvoke(const GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5& unmarshaled, GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_SourceStyle_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_SourceStyle' of type 'GUIStyleState': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_SourceStyle_1Exception, NULL, NULL);
}
extern "C" void GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshal_pinvoke_back(const GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshaled_pinvoke& marshaled, GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5& unmarshaled)
{
	Exception_t* ___m_SourceStyle_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_SourceStyle' of type 'GUIStyleState': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_SourceStyle_1Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.GUIStyleState
extern "C" void GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshal_pinvoke_cleanup(GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: UnityEngine.GUIStyleState
extern "C" void GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshal_com(const GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5& unmarshaled, GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshaled_com& marshaled)
{
	Exception_t* ___m_SourceStyle_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_SourceStyle' of type 'GUIStyleState': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_SourceStyle_1Exception, NULL, NULL);
}
extern "C" void GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshal_com_back(const GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshaled_com& marshaled, GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5& unmarshaled)
{
	Exception_t* ___m_SourceStyle_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_SourceStyle' of type 'GUIStyleState': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_SourceStyle_1Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.GUIStyleState
extern "C" void GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshal_com_cleanup(GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.GUIStyleState::.ctor()
extern "C" IL2CPP_METHOD_ATTR void GUIStyleState__ctor_mD260F6A32800A135DB0AA6441D990A8FEC752AFD (GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m8BA07445967EE2CC15961AD3C16F25DB74506EA0(__this, /*hidden argument*/NULL);
		intptr_t L_0 = GUIStyleState_Init_m24D7A3BD60709BA6C36D21F86E8FBCA3AD7756D9(/*hidden argument*/NULL);
		__this->set_m_Ptr_0((intptr_t)L_0);
		return;
	}
}
// System.Void UnityEngine.GUIStyleState::.ctor(UnityEngine.GUIStyle,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void GUIStyleState__ctor_m88DEBFEA9F9D54F4E6732A6ACE729079A79833B8 (GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * __this, GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___sourceStyle0, intptr_t ___source1, const RuntimeMethod* method)
{
	{
		Object__ctor_m8BA07445967EE2CC15961AD3C16F25DB74506EA0(__this, /*hidden argument*/NULL);
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_0 = ___sourceStyle0;
		__this->set_m_SourceStyle_1(L_0);
		intptr_t L_1 = ___source1;
		__this->set_m_Ptr_0((intptr_t)L_1);
		return;
	}
}
// System.Void UnityEngine.GUIStyleState::set_background(UnityEngine.Texture2D)
extern "C" IL2CPP_METHOD_ATTR void GUIStyleState_set_background_m1BB0CD97092DE9CB40908A8061068D83FB2655AF (GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * __this, Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___value0, const RuntimeMethod* method)
{
	typedef void (*GUIStyleState_set_background_m1BB0CD97092DE9CB40908A8061068D83FB2655AF_ftn) (GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 *, Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C *);
	static GUIStyleState_set_background_m1BB0CD97092DE9CB40908A8061068D83FB2655AF_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyleState_set_background_m1BB0CD97092DE9CB40908A8061068D83FB2655AF_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyleState::set_background(UnityEngine.Texture2D)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.GUIStyleState::set_textColor(UnityEngine.Color)
extern "C" IL2CPP_METHOD_ATTR void GUIStyleState_set_textColor_m2B235845A292C22ABEDEFBB2FD798DEB4E104983 (GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * __this, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___value0, const RuntimeMethod* method)
{
	{
		GUIStyleState_set_textColor_Injected_m09DA402A33A2E28F9B8BB37AEF6EA05B58F7C475(__this, (Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 *)(&___value0), /*hidden argument*/NULL);
		return;
	}
}
// System.IntPtr UnityEngine.GUIStyleState::Init()
extern "C" IL2CPP_METHOD_ATTR intptr_t GUIStyleState_Init_m24D7A3BD60709BA6C36D21F86E8FBCA3AD7756D9 (const RuntimeMethod* method)
{
	typedef intptr_t (*GUIStyleState_Init_m24D7A3BD60709BA6C36D21F86E8FBCA3AD7756D9_ftn) ();
	static GUIStyleState_Init_m24D7A3BD60709BA6C36D21F86E8FBCA3AD7756D9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyleState_Init_m24D7A3BD60709BA6C36D21F86E8FBCA3AD7756D9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyleState::Init()");
	intptr_t retVal = _il2cpp_icall_func();
	return retVal;
}
// System.Void UnityEngine.GUIStyleState::Cleanup()
extern "C" IL2CPP_METHOD_ATTR void GUIStyleState_Cleanup_mB92C1A0564E1D841A37DD43D6B6E1AD27BAD5A49 (GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * __this, const RuntimeMethod* method)
{
	typedef void (*GUIStyleState_Cleanup_mB92C1A0564E1D841A37DD43D6B6E1AD27BAD5A49_ftn) (GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 *);
	static GUIStyleState_Cleanup_mB92C1A0564E1D841A37DD43D6B6E1AD27BAD5A49_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyleState_Cleanup_mB92C1A0564E1D841A37DD43D6B6E1AD27BAD5A49_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyleState::Cleanup()");
	_il2cpp_icall_func(__this);
}
// UnityEngine.GUIStyleState UnityEngine.GUIStyleState::GetGUIStyleState(UnityEngine.GUIStyle,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * GUIStyleState_GetGUIStyleState_m207443170D2CA9E48BAB05FF74B30C76C6D63F68 (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___sourceStyle0, intptr_t ___source1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUIStyleState_GetGUIStyleState_m207443170D2CA9E48BAB05FF74B30C76C6D63F68_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * V_0 = NULL;
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * V_1 = NULL;
	{
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_0 = ___sourceStyle0;
		intptr_t L_1 = ___source1;
		GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * L_2 = (GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 *)il2cpp_codegen_object_new(GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_il2cpp_TypeInfo_var);
		GUIStyleState__ctor_m88DEBFEA9F9D54F4E6732A6ACE729079A79833B8(L_2, L_0, (intptr_t)L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * L_3 = V_0;
		V_1 = L_3;
		goto IL_0010;
	}

IL_0010:
	{
		GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * L_4 = V_1;
		return L_4;
	}
}
// System.Void UnityEngine.GUIStyleState::Finalize()
extern "C" IL2CPP_METHOD_ATTR void GUIStyleState_Finalize_m68F554CD5B53E9BFC8B952E371D1E18D96D4C626 (GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUIStyleState_Finalize_m68F554CD5B53E9BFC8B952E371D1E18D96D4C626_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		{
			GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_0 = __this->get_m_SourceStyle_1();
			if (L_0)
			{
				goto IL_001f;
			}
		}

IL_000c:
		{
			GUIStyleState_Cleanup_mB92C1A0564E1D841A37DD43D6B6E1AD27BAD5A49(__this, /*hidden argument*/NULL);
			__this->set_m_Ptr_0((intptr_t)(0));
		}

IL_001f:
		{
			IL2CPP_LEAVE(0x2B, FINALLY_0024);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0024;
	}

FINALLY_0024:
	{ // begin finally (depth: 1)
		Object_Finalize_mF771ED4CD6EB17CF862AA2B705F0E2CC0B4ADBED(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(36)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(36)
	{
		IL2CPP_JUMP_TBL(0x2B, IL_002b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_002b:
	{
		return;
	}
}
// System.Void UnityEngine.GUIStyleState::set_textColor_Injected(UnityEngine.ColorU26)
extern "C" IL2CPP_METHOD_ATTR void GUIStyleState_set_textColor_Injected_m09DA402A33A2E28F9B8BB37AEF6EA05B58F7C475 (GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * __this, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * ___value0, const RuntimeMethod* method)
{
	typedef void (*GUIStyleState_set_textColor_Injected_m09DA402A33A2E28F9B8BB37AEF6EA05B58F7C475_ftn) (GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 *, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 *);
	static GUIStyleState_set_textColor_Injected_m09DA402A33A2E28F9B8BB37AEF6EA05B58F7C475_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyleState_set_textColor_Injected_m09DA402A33A2E28F9B8BB37AEF6EA05B58F7C475_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyleState::set_textColor_Injected(UnityEngine.Color&)");
	_il2cpp_icall_func(__this, ___value0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 UnityEngine.GUITargetAttribute::GetGUITargetAttrValue(System.Type,System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t GUITargetAttribute_GetGUITargetAttrValue_mED49CA9A9696B0D52CD6C6D7BA7344EA1F019590 (Type_t * ___klass0, String_t* ___methodName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUITargetAttribute_GetGUITargetAttrValue_mED49CA9A9696B0D52CD6C6D7BA7344EA1F019590_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* V_1 = NULL;
	int32_t V_2 = 0;
	GUITargetAttribute_tA23DD43B1D91AF11499A0320EBAAC900A35FC4B8 * V_3 = NULL;
	int32_t V_4 = 0;
	{
		Type_t * L_0 = ___klass0;
		String_t* L_1 = ___methodName1;
		NullCheck(L_0);
		MethodInfo_t * L_2 = Type_GetMethod_m1E54485E8A7411A2C3F9A864C2EB064D20C593B1(L_0, L_1, ((int32_t)52), /*hidden argument*/NULL);
		V_0 = L_2;
		MethodInfo_t * L_3 = V_0;
		if (!L_3)
		{
			goto IL_006a;
		}
	}
	{
		MethodInfo_t * L_4 = V_0;
		NullCheck(L_4);
		ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* L_5 = VirtFuncInvoker1< ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D*, bool >::Invoke(12 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Boolean) */, L_4, (bool)1);
		V_1 = L_5;
		ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0069;
		}
	}
	{
		V_2 = 0;
		goto IL_005f;
	}

IL_0028:
	{
		ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* L_7 = V_1;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_10);
		Type_t * L_11 = Object_GetType_m993E65F4E4457CE1761C49B188A6CF858597BDDE(L_10, /*hidden argument*/NULL);
		RuntimeTypeHandle_t58BB862EF56F46A9518F8ACA413EF7D70238F1AD  L_12 = { reinterpret_cast<intptr_t> (GUITargetAttribute_tA23DD43B1D91AF11499A0320EBAAC900A35FC4B8_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_13 = Type_GetTypeFromHandle_m8326E3405B647C99882C2E411C459944B0598D73(L_12, /*hidden argument*/NULL);
		if ((((RuntimeObject*)(Type_t *)L_11) == ((RuntimeObject*)(Type_t *)L_13)))
		{
			goto IL_0045;
		}
	}
	{
		goto IL_005b;
	}

IL_0045:
	{
		ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		RuntimeObject * L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_3 = ((GUITargetAttribute_tA23DD43B1D91AF11499A0320EBAAC900A35FC4B8 *)IsInstClass((RuntimeObject*)L_17, GUITargetAttribute_tA23DD43B1D91AF11499A0320EBAAC900A35FC4B8_il2cpp_TypeInfo_var));
		GUITargetAttribute_tA23DD43B1D91AF11499A0320EBAAC900A35FC4B8 * L_18 = V_3;
		NullCheck(L_18);
		int32_t L_19 = L_18->get_displayMask_0();
		V_4 = L_19;
		goto IL_0072;
	}

IL_005b:
	{
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_005f:
	{
		int32_t L_21 = V_2;
		ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* L_22 = V_1;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_22)->max_length)))))))
		{
			goto IL_0028;
		}
	}
	{
	}

IL_0069:
	{
	}

IL_006a:
	{
		V_4 = (-1);
		goto IL_0072;
	}

IL_0072:
	{
		int32_t L_23 = V_4;
		return L_23;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single UnityEngine.GUIUtility::get_pixelsPerPoint()
extern "C" IL2CPP_METHOD_ATTR float GUIUtility_get_pixelsPerPoint_m6B4AB38F60A0AC54034A62043F74E06A613E4D56 (const RuntimeMethod* method)
{
	typedef float (*GUIUtility_get_pixelsPerPoint_m6B4AB38F60A0AC54034A62043F74E06A613E4D56_ftn) ();
	static GUIUtility_get_pixelsPerPoint_m6B4AB38F60A0AC54034A62043F74E06A613E4D56_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIUtility_get_pixelsPerPoint_m6B4AB38F60A0AC54034A62043F74E06A613E4D56_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIUtility::get_pixelsPerPoint()");
	float retVal = _il2cpp_icall_func();
	return retVal;
}
// System.Int32 UnityEngine.GUIUtility::get_guiDepth()
extern "C" IL2CPP_METHOD_ATTR int32_t GUIUtility_get_guiDepth_m927893DDBCD8D8F88CA9F70A7D1A7BDB59B4F395 (const RuntimeMethod* method)
{
	typedef int32_t (*GUIUtility_get_guiDepth_m927893DDBCD8D8F88CA9F70A7D1A7BDB59B4F395_ftn) ();
	static GUIUtility_get_guiDepth_m927893DDBCD8D8F88CA9F70A7D1A7BDB59B4F395_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIUtility_get_guiDepth_m927893DDBCD8D8F88CA9F70A7D1A7BDB59B4F395_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIUtility::get_guiDepth()");
	int32_t retVal = _il2cpp_icall_func();
	return retVal;
}
// System.String UnityEngine.GUIUtility::get_systemCopyBuffer()
extern "C" IL2CPP_METHOD_ATTR String_t* GUIUtility_get_systemCopyBuffer_m5C4EE0A0FDE696D4A1337480B20AF300E6A5624E (const RuntimeMethod* method)
{
	typedef String_t* (*GUIUtility_get_systemCopyBuffer_m5C4EE0A0FDE696D4A1337480B20AF300E6A5624E_ftn) ();
	static GUIUtility_get_systemCopyBuffer_m5C4EE0A0FDE696D4A1337480B20AF300E6A5624E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIUtility_get_systemCopyBuffer_m5C4EE0A0FDE696D4A1337480B20AF300E6A5624E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIUtility::get_systemCopyBuffer()");
	String_t* retVal = _il2cpp_icall_func();
	return retVal;
}
// System.Void UnityEngine.GUIUtility::set_systemCopyBuffer(System.String)
extern "C" IL2CPP_METHOD_ATTR void GUIUtility_set_systemCopyBuffer_m8C87AFD05D32AB0C30A2203005A64A86DFE18BE6 (String_t* ___value0, const RuntimeMethod* method)
{
	typedef void (*GUIUtility_set_systemCopyBuffer_m8C87AFD05D32AB0C30A2203005A64A86DFE18BE6_ftn) (String_t*);
	static GUIUtility_set_systemCopyBuffer_m8C87AFD05D32AB0C30A2203005A64A86DFE18BE6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIUtility_set_systemCopyBuffer_m8C87AFD05D32AB0C30A2203005A64A86DFE18BE6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIUtility::set_systemCopyBuffer(System.String)");
	_il2cpp_icall_func(___value0);
}
// System.Int32 UnityEngine.GUIUtility::GetControlID(System.Int32,UnityEngine.FocusType,UnityEngine.Rect)
extern "C" IL2CPP_METHOD_ATTR int32_t GUIUtility_GetControlID_mBD1C39E03666F072AFB3022603E2FD37D87EB13F (int32_t ___hint0, int32_t ___focusType1, Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___rect2, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___hint0;
		int32_t L_1 = ___focusType1;
		int32_t L_2 = GUIUtility_GetControlID_Injected_m0B621090C90D8A821A2D334199EDB3CB2ED42DA1(L_0, L_1, (Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&___rect2), /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 UnityEngine.GUIUtility::Internal_GetKeyboardControl()
extern "C" IL2CPP_METHOD_ATTR int32_t GUIUtility_Internal_GetKeyboardControl_m198D8D057F49AEC00E1FEC40A116E61E9A48CAED (const RuntimeMethod* method)
{
	typedef int32_t (*GUIUtility_Internal_GetKeyboardControl_m198D8D057F49AEC00E1FEC40A116E61E9A48CAED_ftn) ();
	static GUIUtility_Internal_GetKeyboardControl_m198D8D057F49AEC00E1FEC40A116E61E9A48CAED_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIUtility_Internal_GetKeyboardControl_m198D8D057F49AEC00E1FEC40A116E61E9A48CAED_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIUtility::Internal_GetKeyboardControl()");
	int32_t retVal = _il2cpp_icall_func();
	return retVal;
}
// System.Object UnityEngine.GUIUtility::Internal_GetDefaultSkin(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GUIUtility_Internal_GetDefaultSkin_m1D4A53896309F1A4A54AF15D7E5F4DC61451276E (int32_t ___skinMode0, const RuntimeMethod* method)
{
	typedef RuntimeObject * (*GUIUtility_Internal_GetDefaultSkin_m1D4A53896309F1A4A54AF15D7E5F4DC61451276E_ftn) (int32_t);
	static GUIUtility_Internal_GetDefaultSkin_m1D4A53896309F1A4A54AF15D7E5F4DC61451276E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIUtility_Internal_GetDefaultSkin_m1D4A53896309F1A4A54AF15D7E5F4DC61451276E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIUtility::Internal_GetDefaultSkin(System.Int32)");
	RuntimeObject * retVal = _il2cpp_icall_func(___skinMode0);
	return retVal;
}
// System.Void UnityEngine.GUIUtility::Internal_ExitGUI()
extern "C" IL2CPP_METHOD_ATTR void GUIUtility_Internal_ExitGUI_mC6B22D4CC318E08171B3565919458F337351ACCC (const RuntimeMethod* method)
{
	typedef void (*GUIUtility_Internal_ExitGUI_mC6B22D4CC318E08171B3565919458F337351ACCC_ftn) ();
	static GUIUtility_Internal_ExitGUI_mC6B22D4CC318E08171B3565919458F337351ACCC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIUtility_Internal_ExitGUI_mC6B22D4CC318E08171B3565919458F337351ACCC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIUtility::Internal_ExitGUI()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.GUIUtility::MarkGUIChanged()
extern "C" IL2CPP_METHOD_ATTR void GUIUtility_MarkGUIChanged_m624187E89EC5D08B052B8F74B8BFD803EEE53956 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUIUtility_MarkGUIChanged_m624187E89EC5D08B052B8F74B8BFD803EEE53956_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_tC9F24EBA5075EA0322C6E0DC6BE2C7BDF962FB21 * L_0 = ((GUIUtility_t943494CC50E876A4A08ECD471C06E23D52E5E5BA_StaticFields*)il2cpp_codegen_static_fields_for(GUIUtility_t943494CC50E876A4A08ECD471C06E23D52E5E5BA_il2cpp_TypeInfo_var))->get_enabledStateChanged_6();
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		goto IL_0017;
	}

IL_000d:
	{
		Action_tC9F24EBA5075EA0322C6E0DC6BE2C7BDF962FB21 * L_1 = ((GUIUtility_t943494CC50E876A4A08ECD471C06E23D52E5E5BA_StaticFields*)il2cpp_codegen_static_fields_for(GUIUtility_t943494CC50E876A4A08ECD471C06E23D52E5E5BA_il2cpp_TypeInfo_var))->get_enabledStateChanged_6();
		NullCheck(L_1);
		Action_Invoke_m2DA0C32440A1530B77ABC5C8DDAC1805A652C953(L_1, /*hidden argument*/NULL);
	}

IL_0017:
	{
		return;
	}
}
// System.Void UnityEngine.GUIUtility::set_guiIsExiting(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void GUIUtility_set_guiIsExiting_m16D5DFFB64483BC588CA6BEA0FAA618E4A227960 (bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUIUtility_set_guiIsExiting_m16D5DFFB64483BC588CA6BEA0FAA618E4A227960_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___value0;
		((GUIUtility_t943494CC50E876A4A08ECD471C06E23D52E5E5BA_StaticFields*)il2cpp_codegen_static_fields_for(GUIUtility_t943494CC50E876A4A08ECD471C06E23D52E5E5BA_il2cpp_TypeInfo_var))->set_U3CguiIsExitingU3Ek__BackingField_7(L_0);
		return;
	}
}
// System.Void UnityEngine.GUIUtility::TakeCapture()
extern "C" IL2CPP_METHOD_ATTR void GUIUtility_TakeCapture_mE32A66FEEF1DFA8A3DDF3CE310D1C93397B31221 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUIUtility_TakeCapture_mE32A66FEEF1DFA8A3DDF3CE310D1C93397B31221_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_tC9F24EBA5075EA0322C6E0DC6BE2C7BDF962FB21 * L_0 = ((GUIUtility_t943494CC50E876A4A08ECD471C06E23D52E5E5BA_StaticFields*)il2cpp_codegen_static_fields_for(GUIUtility_t943494CC50E876A4A08ECD471C06E23D52E5E5BA_il2cpp_TypeInfo_var))->get_takeCapture_2();
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		goto IL_0017;
	}

IL_000d:
	{
		Action_tC9F24EBA5075EA0322C6E0DC6BE2C7BDF962FB21 * L_1 = ((GUIUtility_t943494CC50E876A4A08ECD471C06E23D52E5E5BA_StaticFields*)il2cpp_codegen_static_fields_for(GUIUtility_t943494CC50E876A4A08ECD471C06E23D52E5E5BA_il2cpp_TypeInfo_var))->get_takeCapture_2();
		NullCheck(L_1);
		Action_Invoke_m2DA0C32440A1530B77ABC5C8DDAC1805A652C953(L_1, /*hidden argument*/NULL);
	}

IL_0017:
	{
		return;
	}
}
// System.Void UnityEngine.GUIUtility::RemoveCapture()
extern "C" IL2CPP_METHOD_ATTR void GUIUtility_RemoveCapture_m37B735649012E93EBEA50DB8708FB6D39DFA4FE9 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUIUtility_RemoveCapture_m37B735649012E93EBEA50DB8708FB6D39DFA4FE9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_tC9F24EBA5075EA0322C6E0DC6BE2C7BDF962FB21 * L_0 = ((GUIUtility_t943494CC50E876A4A08ECD471C06E23D52E5E5BA_StaticFields*)il2cpp_codegen_static_fields_for(GUIUtility_t943494CC50E876A4A08ECD471C06E23D52E5E5BA_il2cpp_TypeInfo_var))->get_releaseCapture_3();
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		goto IL_0017;
	}

IL_000d:
	{
		Action_tC9F24EBA5075EA0322C6E0DC6BE2C7BDF962FB21 * L_1 = ((GUIUtility_t943494CC50E876A4A08ECD471C06E23D52E5E5BA_StaticFields*)il2cpp_codegen_static_fields_for(GUIUtility_t943494CC50E876A4A08ECD471C06E23D52E5E5BA_il2cpp_TypeInfo_var))->get_releaseCapture_3();
		NullCheck(L_1);
		Action_Invoke_m2DA0C32440A1530B77ABC5C8DDAC1805A652C953(L_1, /*hidden argument*/NULL);
	}

IL_0017:
	{
		return;
	}
}
// System.Int32 UnityEngine.GUIUtility::get_keyboardControl()
extern "C" IL2CPP_METHOD_ATTR int32_t GUIUtility_get_keyboardControl_mB580042A41CB6E9D3AB2E2CF0CEC00F64B2FC55F (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = GUIUtility_Internal_GetKeyboardControl_m198D8D057F49AEC00E1FEC40A116E61E9A48CAED(/*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.GUISkin UnityEngine.GUIUtility::GetDefaultSkin()
extern "C" IL2CPP_METHOD_ATTR GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7 * GUIUtility_GetDefaultSkin_m2F1B580445522074FF41CF9906531DBEAB034365 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUIUtility_GetDefaultSkin_m2F1B580445522074FF41CF9906531DBEAB034365_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7 * V_0 = NULL;
	{
		int32_t L_0 = ((GUIUtility_t943494CC50E876A4A08ECD471C06E23D52E5E5BA_StaticFields*)il2cpp_codegen_static_fields_for(GUIUtility_t943494CC50E876A4A08ECD471C06E23D52E5E5BA_il2cpp_TypeInfo_var))->get_s_SkinMode_0();
		RuntimeObject * L_1 = GUIUtility_Internal_GetDefaultSkin_m1D4A53896309F1A4A54AF15D7E5F4DC61451276E(L_0, /*hidden argument*/NULL);
		V_0 = ((GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7 *)IsInstSealed((RuntimeObject*)L_1, GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7_il2cpp_TypeInfo_var));
		goto IL_0016;
	}

IL_0016:
	{
		GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7 * L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UnityEngine.GUIUtility::ProcessEvent(System.Int32,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR bool GUIUtility_ProcessEvent_mA250CB35828235FE2F8BA5EA7B6592234DA2D312 (int32_t ___instanceID0, intptr_t ___nativeEventPtr1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUIUtility_ProcessEvent_mA250CB35828235FE2F8BA5EA7B6592234DA2D312_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Func_3_tBD99633D8A18C43CC528ECE3F77E2F69900048A7 * L_0 = ((GUIUtility_t943494CC50E876A4A08ECD471C06E23D52E5E5BA_StaticFields*)il2cpp_codegen_static_fields_for(GUIUtility_t943494CC50E876A4A08ECD471C06E23D52E5E5BA_il2cpp_TypeInfo_var))->get_processEvent_4();
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		Func_3_tBD99633D8A18C43CC528ECE3F77E2F69900048A7 * L_1 = ((GUIUtility_t943494CC50E876A4A08ECD471C06E23D52E5E5BA_StaticFields*)il2cpp_codegen_static_fields_for(GUIUtility_t943494CC50E876A4A08ECD471C06E23D52E5E5BA_il2cpp_TypeInfo_var))->get_processEvent_4();
		int32_t L_2 = ___instanceID0;
		intptr_t L_3 = ___nativeEventPtr1;
		NullCheck(L_1);
		bool L_4 = Func_3_Invoke_mCD6DEEC09B4F1B42DD0FD4A8F58632B08EC66737(L_1, L_2, (intptr_t)L_3, /*hidden argument*/Func_3_Invoke_mCD6DEEC09B4F1B42DD0FD4A8F58632B08EC66737_RuntimeMethod_var);
		V_0 = L_4;
		goto IL_0024;
	}

IL_001d:
	{
		V_0 = (bool)0;
		goto IL_0024;
	}

IL_0024:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
// System.Void UnityEngine.GUIUtility::BeginGUI(System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void GUIUtility_BeginGUI_m9981BDF2828246EBE4EDA43447EF6DAA74B54C91 (int32_t ___skinMode0, int32_t ___instanceID1, int32_t ___useGUILayout2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUIUtility_BeginGUI_m9981BDF2828246EBE4EDA43447EF6DAA74B54C91_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___skinMode0;
		((GUIUtility_t943494CC50E876A4A08ECD471C06E23D52E5E5BA_StaticFields*)il2cpp_codegen_static_fields_for(GUIUtility_t943494CC50E876A4A08ECD471C06E23D52E5E5BA_il2cpp_TypeInfo_var))->set_s_SkinMode_0(L_0);
		int32_t L_1 = ___instanceID1;
		((GUIUtility_t943494CC50E876A4A08ECD471C06E23D52E5E5BA_StaticFields*)il2cpp_codegen_static_fields_for(GUIUtility_t943494CC50E876A4A08ECD471C06E23D52E5E5BA_il2cpp_TypeInfo_var))->set_s_OriginalID_1(L_1);
		GUIUtility_ResetGlobalState_m192C9FAE2A4B87F34CB051C4967B8A919A902A5C(/*hidden argument*/NULL);
		int32_t L_2 = ___useGUILayout2;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_3 = ___instanceID1;
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_il2cpp_TypeInfo_var);
		GUILayoutUtility_Begin_m6876A33199599688408A4AD364069090E833B237(L_3, /*hidden argument*/NULL);
	}

IL_0020:
	{
		return;
	}
}
// System.Void UnityEngine.GUIUtility::EndGUI(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void GUIUtility_EndGUI_mE93B54A19231BCC9DFC68DF54CE7C29DE41A3414 (int32_t ___layoutType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUIUtility_EndGUI_mE93B54A19231BCC9DFC68DF54CE7C29DE41A3414_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 4);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		{
			Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_0 = Event_get_current_m072CEE599D11B8A9A916697E57C0F561188CDB2B(/*hidden argument*/NULL);
			NullCheck(L_0);
			int32_t L_1 = Event_get_type_mAABE4A35E5658E0079A1518D318AF2592F51D6FA(L_0, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_1) == ((uint32_t)8))))
			{
				goto IL_0046;
			}
		}

IL_0012:
		{
			int32_t L_2 = ___layoutType0;
			if (!L_2)
			{
				goto IL_002c;
			}
		}

IL_0019:
		{
			int32_t L_3 = ___layoutType0;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_0031;
			}
		}

IL_0020:
		{
			int32_t L_4 = ___layoutType0;
			if ((((int32_t)L_4) == ((int32_t)2)))
			{
				goto IL_003b;
			}
		}

IL_0027:
		{
			goto IL_0045;
		}

IL_002c:
		{
			goto IL_0045;
		}

IL_0031:
		{
			IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_il2cpp_TypeInfo_var);
			GUILayoutUtility_Layout_mB01F00635FD538214B47A545C53E4F8C682491B5(/*hidden argument*/NULL);
			goto IL_0045;
		}

IL_003b:
		{
			IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_il2cpp_TypeInfo_var);
			GUILayoutUtility_LayoutFromEditorWindow_mBE82BE965B54F68E7090952684C86BFF0538AB52(/*hidden argument*/NULL);
			goto IL_0045;
		}

IL_0045:
		{
		}

IL_0046:
		{
			int32_t L_5 = ((GUIUtility_t943494CC50E876A4A08ECD471C06E23D52E5E5BA_StaticFields*)il2cpp_codegen_static_fields_for(GUIUtility_t943494CC50E876A4A08ECD471C06E23D52E5E5BA_il2cpp_TypeInfo_var))->get_s_OriginalID_1();
			IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_tFBB1F6AB7CF109D40F923B9AB1F5D7CDF8EEB62E_il2cpp_TypeInfo_var);
			GUILayoutUtility_SelectIDList_m230ED9206897C92C5B090B3BBFC9B408603E56FD(L_5, (bool)0, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0_il2cpp_TypeInfo_var);
			GUIContent_ClearStaticCache_m567DA736612F9E6E66262CC630952AB2E22BC933(/*hidden argument*/NULL);
			IL2CPP_LEAVE(0x65, FINALLY_005d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005d;
	}

FINALLY_005d:
	{ // begin finally (depth: 1)
		GUIUtility_Internal_ExitGUI_mC6B22D4CC318E08171B3565919458F337351ACCC(/*hidden argument*/NULL);
		IL2CPP_END_FINALLY(93)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(93)
	{
		IL2CPP_JUMP_TBL(0x65, IL_0065)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0065:
	{
		return;
	}
}
// System.Boolean UnityEngine.GUIUtility::EndGUIFromException(System.Exception)
extern "C" IL2CPP_METHOD_ATTR bool GUIUtility_EndGUIFromException_m40542B74697654BEDD0BAA656EC370D00097223E (Exception_t * ___exception0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		GUIUtility_Internal_ExitGUI_mC6B22D4CC318E08171B3565919458F337351ACCC(/*hidden argument*/NULL);
		Exception_t * L_0 = ___exception0;
		bool L_1 = GUIUtility_ShouldRethrowException_mCF3B04493727D6A40ED50AC2414D5617455339B6(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0012;
	}

IL_0012:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UnityEngine.GUIUtility::EndContainerGUIFromException(System.Exception)
extern "C" IL2CPP_METHOD_ATTR bool GUIUtility_EndContainerGUIFromException_m66F073A94FF85A8B7C6D8A4614B43365F0A68042 (Exception_t * ___exception0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUIUtility_EndContainerGUIFromException_m66F073A94FF85A8B7C6D8A4614B43365F0A68042_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Func_2_tC816C5FDED4A7372C449E7660CAB9F94E2AC12F8 * L_0 = ((GUIUtility_t943494CC50E876A4A08ECD471C06E23D52E5E5BA_StaticFields*)il2cpp_codegen_static_fields_for(GUIUtility_t943494CC50E876A4A08ECD471C06E23D52E5E5BA_il2cpp_TypeInfo_var))->get_endContainerGUIFromException_5();
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		Func_2_tC816C5FDED4A7372C449E7660CAB9F94E2AC12F8 * L_1 = ((GUIUtility_t943494CC50E876A4A08ECD471C06E23D52E5E5BA_StaticFields*)il2cpp_codegen_static_fields_for(GUIUtility_t943494CC50E876A4A08ECD471C06E23D52E5E5BA_il2cpp_TypeInfo_var))->get_endContainerGUIFromException_5();
		Exception_t * L_2 = ___exception0;
		NullCheck(L_1);
		bool L_3 = Func_2_Invoke_m9621506610C10C9E735B305E826ACEFF914422CD(L_1, L_2, /*hidden argument*/Func_2_Invoke_m9621506610C10C9E735B305E826ACEFF914422CD_RuntimeMethod_var);
		V_0 = L_3;
		goto IL_0023;
	}

IL_001c:
	{
		V_0 = (bool)0;
		goto IL_0023;
	}

IL_0023:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Void UnityEngine.GUIUtility::ResetGlobalState()
extern "C" IL2CPP_METHOD_ATTR void GUIUtility_ResetGlobalState_m192C9FAE2A4B87F34CB051C4967B8A919A902A5C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUIUtility_ResetGlobalState_m192C9FAE2A4B87F34CB051C4967B8A919A902A5C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t3E5CBC6B113E392EBBE1453DEF2B7CD020F345AA_il2cpp_TypeInfo_var);
		GUI_set_skin_mFC9EC2E88A46A7F42664C6C41D8CCD9B9BA4DBA0((GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7 *)NULL, /*hidden argument*/NULL);
		GUIUtility_set_guiIsExiting_m16D5DFFB64483BC588CA6BEA0FAA618E4A227960((bool)0, /*hidden argument*/NULL);
		GUI_set_changed_m8BDF5085BBFDF8E61C12926C8E51C67B22B629AE((bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.GUIUtility::IsExitGUIException(System.Exception)
extern "C" IL2CPP_METHOD_ATTR bool GUIUtility_IsExitGUIException_mBCCE6118666769B8B767D74496E44D2ECC7AFDD2 (Exception_t * ___exception0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUIUtility_IsExitGUIException_mBCCE6118666769B8B767D74496E44D2ECC7AFDD2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		goto IL_000e;
	}

IL_0006:
	{
		Exception_t * L_0 = ___exception0;
		NullCheck(L_0);
		Exception_t * L_1 = Exception_get_InnerException_mE12CB95A830CA7AE2655B32D3BAD6F9B8E22DF79(L_0, /*hidden argument*/NULL);
		___exception0 = L_1;
	}

IL_000e:
	{
		Exception_t * L_2 = ___exception0;
		if (!((TargetInvocationException_t23A3E9F5590EAF5E9831C51F9E3A5EF4CE868077 *)IsInstSealed((RuntimeObject*)L_2, TargetInvocationException_t23A3E9F5590EAF5E9831C51F9E3A5EF4CE868077_il2cpp_TypeInfo_var)))
		{
			goto IL_0024;
		}
	}
	{
		Exception_t * L_3 = ___exception0;
		NullCheck(L_3);
		Exception_t * L_4 = Exception_get_InnerException_mE12CB95A830CA7AE2655B32D3BAD6F9B8E22DF79(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0006;
		}
	}

IL_0024:
	{
		Exception_t * L_5 = ___exception0;
		V_0 = (bool)((!(((RuntimeObject*)(ExitGUIException_t6AD1987AE1D23E0E774F9BEA41F30AE4CE378F07 *)((ExitGUIException_t6AD1987AE1D23E0E774F9BEA41F30AE4CE378F07 *)IsInstSealed((RuntimeObject*)L_5, ExitGUIException_t6AD1987AE1D23E0E774F9BEA41F30AE4CE378F07_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		goto IL_0033;
	}

IL_0033:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
// System.Boolean UnityEngine.GUIUtility::ShouldRethrowException(System.Exception)
extern "C" IL2CPP_METHOD_ATTR bool GUIUtility_ShouldRethrowException_mCF3B04493727D6A40ED50AC2414D5617455339B6 (Exception_t * ___exception0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		Exception_t * L_0 = ___exception0;
		bool L_1 = GUIUtility_IsExitGUIException_mBCCE6118666769B8B767D74496E44D2ECC7AFDD2(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000d;
	}

IL_000d:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.GUIUtility::CheckOnGUI()
extern "C" IL2CPP_METHOD_ATTR void GUIUtility_CheckOnGUI_mBFC764B475683BC50E40BD249248CE43DA754873 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUIUtility_CheckOnGUI_mBFC764B475683BC50E40BD249248CE43DA754873_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = GUIUtility_get_guiDepth_m927893DDBCD8D8F88CA9F70A7D1A7BDB59B4F395(/*hidden argument*/NULL);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60 * L_1 = (ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60 *)il2cpp_codegen_object_new(ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m8917650A5D8F2F36C6B623A720DF2D2A630D3533(L_1, _stringLiteral44749C3F0A84037EA50385BCA7D2CFEFD6C0BDB2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, GUIUtility_CheckOnGUI_mBFC764B475683BC50E40BD249248CE43DA754873_RuntimeMethod_var);
	}

IL_0017:
	{
		return;
	}
}
// System.Int32 UnityEngine.GUIUtility::GetControlID_Injected(System.Int32,UnityEngine.FocusType,UnityEngine.RectU26)
extern "C" IL2CPP_METHOD_ATTR int32_t GUIUtility_GetControlID_Injected_m0B621090C90D8A821A2D334199EDB3CB2ED42DA1 (int32_t ___hint0, int32_t ___focusType1, Rect_t35B976DE901B5423C11705E156938EA27AB402CE * ___rect2, const RuntimeMethod* method)
{
	typedef int32_t (*GUIUtility_GetControlID_Injected_m0B621090C90D8A821A2D334199EDB3CB2ED42DA1_ftn) (int32_t, int32_t, Rect_t35B976DE901B5423C11705E156938EA27AB402CE *);
	static GUIUtility_GetControlID_Injected_m0B621090C90D8A821A2D334199EDB3CB2ED42DA1_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIUtility_GetControlID_Injected_m0B621090C90D8A821A2D334199EDB3CB2ED42DA1_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIUtility::GetControlID_Injected(System.Int32,UnityEngine.FocusType,UnityEngine.Rect&)");
	int32_t retVal = _il2cpp_icall_func(___hint0, ___focusType1, ___rect2);
	return retVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.ScrollViewState::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ScrollViewState__ctor_mBD3229B13A482BEE165EE9CACA85F716122F3BD4 (ScrollViewState_t738AAD89973B4E764B6F977945263C24A881428E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m8BA07445967EE2CC15961AD3C16F25DB74506EA0(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.SliderState::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SliderState__ctor_m8CBFEE8D20C2D8EB0B68B1B171D9396DE84B605E (SliderState_t6081D6F2CF6D0F1A13B2A2D255671B4053EC52CB * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m8BA07445967EE2CC15961AD3C16F25DB74506EA0(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.TextEditor::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TextEditor__ctor_m279158A237B393882E3CC2834C1F7CA7679F79CC (TextEditor_t72CB6095A5C38226E08CD8073D5B6AD98579D440 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextEditor__ctor_m279158A237B393882E3CC2834C1F7CA7679F79CC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_keyboardOnScreen_0((TouchScreenKeyboard_t2A69F85698E9780470181532D3F2BC903623FD90 *)NULL);
		__this->set_controlID_1(0);
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t671F175A201A19166385EE3392292A5F50070572_il2cpp_TypeInfo_var);
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_0 = GUIStyle_get_none_m2B48FA4E2FA2B9BB7A458DF25B1391F9C7BB8B7B(/*hidden argument*/NULL);
		__this->set_style_2(L_0);
		__this->set_multiline_3((bool)0);
		__this->set_hasHorizontalCursorPos_4((bool)0);
		__this->set_isPasswordField_5((bool)0);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_1 = Vector2_get_zero_mFE0C3213BB698130D6C5247AB4B887A59074D0A8(/*hidden argument*/NULL);
		__this->set_scrollOffset_6(L_1);
		GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * L_2 = (GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 *)il2cpp_codegen_object_new(GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0_il2cpp_TypeInfo_var);
		GUIContent__ctor_m939CDEFF44061020E997A0F0640ADDF2740B0C38(L_2, /*hidden argument*/NULL);
		__this->set_m_Content_7(L_2);
		__this->set_m_CursorIndex_8(0);
		__this->set_m_SelectIndex_9(0);
		__this->set_m_RevealCursor_10((bool)0);
		__this->set_m_MouseDragSelectsWholeWords_11((bool)0);
		__this->set_m_DblClickInitPos_12(0);
		__this->set_m_DblClickSnap_13(0);
		__this->set_m_bJustSelected_14((bool)0);
		__this->set_m_iAltCursorPos_15((-1));
		Object__ctor_m8BA07445967EE2CC15961AD3C16F25DB74506EA0(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
