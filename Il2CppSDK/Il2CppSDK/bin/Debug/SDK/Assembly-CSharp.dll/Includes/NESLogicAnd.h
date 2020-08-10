#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NESLogicAnd
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = Il2CppList<void*>*> T& m_Properties() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& m_Controller() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(NESLogicAnd*))(Il2CppBase() + 0x411CDC))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(NESLogicAnd*))(Il2CppBase() + 0x411D88))(this);
	}
	template <typename T = void> T OnDrawGizmos() {
		return ((T (*)(NESLogicAnd*))(Il2CppBase() + 0x412090))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(NESLogicAnd*))(Il2CppBase() + 0x412204))(this);
	}
	template <typename T = void> T SetValue(Il2CppString* inName) {
		return ((T (*)(NESLogicAnd*, Il2CppString*))(Il2CppBase() + 0x412208))(this, inName);
	}
	template <typename T = void> T ClearValue(Il2CppString* inName) {
		return ((T (*)(NESLogicAnd*, Il2CppString*))(Il2CppBase() + 0x412368))(this, inName);
	}
	template <typename T = Il2CppArray<void*>*> T GetAvailibleNames() {
		return ((T (*)(NESLogicAnd*))(Il2CppBase() + 0x412370))(this);
	}
	template <typename T = void> T ChangeValue(Il2CppString* inName, bool inValue) {
		return ((T (*)(NESLogicAnd*, Il2CppString*, bool))(Il2CppBase() + 0x412210))(this, inName, inValue);
	}
	template <typename T = void> T CheckCondition() {
		return ((T (*)(NESLogicAnd*))(Il2CppBase() + 0x41270C))(this);
	}
	template <typename T = void> T ResetProperties() {
		return ((T (*)(NESLogicAnd*))(Il2CppBase() + 0x411E64))(this);
	}
};
