#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AgentsCache2
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD787D4);
	}
	// Fields
	template <typename T = Il2CppString*> T& m_PlayerResName() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<void*>*> T& m_Prefabs() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppDictionary<void*, Il2CppArray<void*>*>*> T& m_CacheDict() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& m_HashTable() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> static T& UsesRagdolls() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(AgentsCache2*))(Il2CppBase() + 0x1A80A4))(this);
	}
	template <typename T = bool> static T get_UsesRagdolls() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A81B8))(0);
	}
	template <typename T = void> static T set_UsesRagdolls(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x1A8238))(0, value);
	}
	template <typename T = void> T InitPlayer() {
		return ((T (*)(AgentsCache2*))(Il2CppBase() + 0x1A82BC))(this);
	}
	template <typename T = void> T InitEnemies(int32_t MaxEnemiesNum, Il2CppList<void*>* Data) {
		return ((T (*)(AgentsCache2*, int32_t, Il2CppList<void*>*))(Il2CppBase() + 0x1A841C))(this, MaxEnemiesNum, Data);
	}
	template <typename T = void> T InitGpuResources() {
		return ((T (*)(AgentsCache2*))(Il2CppBase() + 0x1A9700))(this);
	}
	template <typename T = void*> T SpitOut(void* Type) {
		return ((T (*)(AgentsCache2*, void*))(Il2CppBase() + 0x1A9B54))(this, Type);
	}
	template <typename T = void> T Swallow(void* Obj) {
		return ((T (*)(AgentsCache2*, void*))(Il2CppBase() + 0x1A9CEC))(this, Obj);
	}
	template <typename T = void*> T FindPrefab(Il2CppString* ResName) {
		return ((T (*)(AgentsCache2*, Il2CppString*))(Il2CppBase() + 0x1A945C))(this, ResName);
	}
	template <typename T = void> T AddPrefab(Il2CppString* ResName, int32_t Count) {
		return ((T (*)(AgentsCache2*, Il2CppString*, int32_t))(Il2CppBase() + 0x1A9354))(this, ResName, Count);
	}
};
