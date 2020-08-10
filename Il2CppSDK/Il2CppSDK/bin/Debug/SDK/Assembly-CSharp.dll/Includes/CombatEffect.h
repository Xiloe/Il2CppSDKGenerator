#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CombatEffect
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& Cache() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<void*>*> T& InUse() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& Prefab() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppQuaternion> T& Temp() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(CombatEffect*))(Il2CppBase() + 0x2D657C))(this);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(CombatEffect*))(Il2CppBase() + 0x2D7438))(this);
	}
	template <typename T = void> T Init(int32_t count) {
		return ((T (*)(CombatEffect*, int32_t))(Il2CppBase() + 0x2D6A0C))(this, count);
	}
	template <typename T = void> T Update() {
		return ((T (*)(CombatEffect*))(Il2CppBase() + 0x2D6CD4))(this);
	}
	template <typename T = void*> T Get() {
		return ((T (*)(CombatEffect*))(Il2CppBase() + 0x2D7560))(this);
	}
	template <typename T = void> T Return(void* c) {
		return ((T (*)(CombatEffect*, void*))(Il2CppBase() + 0x2D7638))(this, c);
	}
	template <typename T = void> T Play(Il2CppVector3 pos, Il2CppVector3 dir) {
		return ((T (*)(CombatEffect*, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x2D722C))(this, pos, dir);
	}
};
