#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Memory
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD7876C);
	}
	// Fields
	template <typename T = Il2CppArray<void*>*> T& m_Facts() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	// Methods
	template <typename T = void> T _ctor(void* owner) {
		return ((T (*)(Memory*, void*))(Il2CppBase() + 0x3E7000))(this, owner);
	}
	template <typename T = void> T AddFact(void* f) {
		return ((T (*)(Memory*, void*))(Il2CppBase() + 0x3E7160))(this, f);
	}
	template <typename T = void> T RemoveFact(void* type) {
		return ((T (*)(Memory*, void*))(Il2CppBase() + 0x3E72D4))(this, type);
	}
	template <typename T = void*> T GetValidFact(void* type) {
		return ((T (*)(Memory*, void*))(Il2CppBase() + 0x3E7354))(this, type);
	}
	template <typename T = void*> T GetFact(void* type) {
		return ((T (*)(Memory*, void*))(Il2CppBase() + 0x3E73B8))(this, type);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(Memory*))(Il2CppBase() + 0x3E73FC))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(Memory*))(Il2CppBase() + 0x3E7484))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(Memory*))(Il2CppBase() + 0x3E7538))(this);
	}
	template <typename T = void> static T DeleteFact(void* f) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x3E721C))(0, f);
	}
};
