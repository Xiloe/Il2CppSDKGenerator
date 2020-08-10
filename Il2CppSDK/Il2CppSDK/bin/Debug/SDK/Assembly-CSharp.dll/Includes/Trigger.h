#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Trigger
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD798A4);
	}
	// Fields
	template <typename T = Il2CppColor> static T& Col() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<void*>*> static T& DefaultInstigators() {
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
		return ((T (*)(Trigger*))(Il2CppBase() + 0x271B08))(this);
	}
	template <typename T = void> static T _cctor() {
		return ((T (*)(void *))(Il2CppBase() + 0x271E00))(0);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(Trigger*))(Il2CppBase() + 0x271F84))(this);
	}
	template <typename T = void> T Destroy() {
		return ((T (*)(Trigger*))(Il2CppBase() + 0x27212C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(Trigger*))(Il2CppBase() + 0x272138))(this);
	}
	template <typename T = void> T OnTriggerEnter(void* Other) {
		return ((T (*)(Trigger*, void*))(Il2CppBase() + 0x2721B4))(this, Other);
	}
	template <typename T = void> T OnTriggerExit(void* Other) {
		return ((T (*)(Trigger*, void*))(Il2CppBase() + 0x2723AC))(this, Other);
	}
	template <typename T = void> T TriggerEvent(void* E) {
		return ((T (*)(Trigger*, void*))(Il2CppBase() + 0x272304))(this, E);
	}
	template <typename T = bool> T IsValidInstigator(void* Obj) {
		return ((T (*)(Trigger*, void*))(Il2CppBase() + 0x272210))(this, Obj);
	}
	template <typename T = void> T Enable() {
		return ((T (*)(Trigger*))(Il2CppBase() + 0x27241C))(this);
	}
	template <typename T = void> T Disable() {
		return ((T (*)(Trigger*))(Il2CppBase() + 0x2724D8))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(Trigger*))(Il2CppBase() + 0x272594))(this);
	}
	template <typename T = bool> T IsActivatedWithGameZone() {
		return ((T (*)(Trigger*))(Il2CppBase() + 0x272598))(this);
	}
	template <typename T = void> T OnDrawGizmos() {
		return ((T (*)(Trigger*))(Il2CppBase() + 0x2725A0))(this);
	}
};
