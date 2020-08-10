#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TriggerTwoSided
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD798BC);
	}
	// Fields
	template <typename T = Il2CppColor> static T& PosSideCol() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppColor> static T& NegSideCol() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = void*> T& m_NESController() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& m_XForm() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& m_Box() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& m_InsideCounter() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& m_InstigatorTags() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<void*>*> T& m_Data() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(TriggerTwoSided*))(Il2CppBase() + 0x2752F4))(this);
	}
	template <typename T = void> static T _cctor() {
		return ((T (*)(void *))(Il2CppBase() + 0x2756BC))(0);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(TriggerTwoSided*))(Il2CppBase() + 0x2757C0))(this);
	}
	template <typename T = void> T Destroy() {
		return ((T (*)(TriggerTwoSided*))(Il2CppBase() + 0x275968))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(TriggerTwoSided*))(Il2CppBase() + 0x275974))(this);
	}
	template <typename T = void> T OnTriggerEnter(void* Other) {
		return ((T (*)(TriggerTwoSided*, void*))(Il2CppBase() + 0x2759F0))(this, Other);
	}
	template <typename T = void> T OnTriggerExit(void* Other) {
		return ((T (*)(TriggerTwoSided*, void*))(Il2CppBase() + 0x275CE8))(this, Other);
	}
	template <typename T = void> T TriggerEvent(void* E) {
		return ((T (*)(TriggerTwoSided*, void*))(Il2CppBase() + 0x275C40))(this, E);
	}
	template <typename T = bool> T IsValidInstigator(void* Obj) {
		return ((T (*)(TriggerTwoSided*, void*))(Il2CppBase() + 0x275A6C))(this, Obj);
	}
	template <typename T = void*> T GetSide(void* Obj) {
		return ((T (*)(TriggerTwoSided*, void*))(Il2CppBase() + 0x275B60))(this, Obj);
	}
	template <typename T = void> T Enable() {
		return ((T (*)(TriggerTwoSided*))(Il2CppBase() + 0x275D78))(this);
	}
	template <typename T = void> T Disable() {
		return ((T (*)(TriggerTwoSided*))(Il2CppBase() + 0x275E34))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(TriggerTwoSided*))(Il2CppBase() + 0x275EF0))(this);
	}
	template <typename T = bool> T IsActivatedWithGameZone() {
		return ((T (*)(TriggerTwoSided*))(Il2CppBase() + 0x275EF4))(this);
	}
	template <typename T = void> T OnDrawGizmos() {
		return ((T (*)(TriggerTwoSided*))(Il2CppBase() + 0x275EFC))(this);
	}
};
